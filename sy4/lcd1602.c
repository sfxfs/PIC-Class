#include <htc.h>
#include <stdio.h>

#include "delay.h"

#define PIN_RS RA5
#define PIN_RW RA4
#define PIN_RD RA3
#define CMD_TRIS TRISA
#define DATA_PORT PORTD
#define PORT_TRIS TRISD

static void __LCD_SendCmd(void)
{
    PIN_RS = 0;
    PIN_RW = 0;
    PIN_RD = 0;
    Delay_ms(5);
    PIN_RD = 1;
}

static void __LCD_SendData(void)
{
    PIN_RS = 1;
    PIN_RW = 0;
    PIN_RD = 0;
    Delay_ms(5);
    PIN_RD = 1;
}

static void _LCD_WriteCmd(unsigned char cmd)
{
    DATA_PORT = cmd;
    __LCD_SendCmd();
}

static void _LCD_WriteData(unsigned char data)
{
    DATA_PORT = data;
    __LCD_SendData();
}

void _LCD_SetCursor(unsigned char x, unsigned char y)
{
    unsigned char addr;
    if (x > 15)
    {
        x = 15;
    }

    if (y == 0)
        addr = 0x00 + x;
    else
        addr = 0x40 + x;
    _LCD_WriteCmd(addr | 0x80);
}

void LCD_Init(void)
{
    PORT_TRIS = 0;
    CMD_TRIS = 0;
    ADCON1 = 0x07; // 与ADC冲突，关闭ADC
    PIN_RS = 0;

    DATA_PORT = 0;
    PIN_RD = 1;

    Delay_ms(5);

    _LCD_WriteCmd(0x38); // 设置总线位数和显示位数
    _LCD_WriteCmd(0x0F); // 使能显示、光标、闪烁
    _LCD_WriteCmd(0x06); // 光标右移，显示内容不移
    _LCD_WriteCmd(0x01); // 清屏
}

void LCD_ShowChar(char chr, unsigned char x, unsigned char y)
{
    _LCD_SetCursor(x, y);
    _LCD_WriteData(chr);
}

void LCD_ShowStr(char *str, unsigned char x, unsigned char y)
{
    _LCD_SetCursor(x, y);
    while (*str != '\0')
    {
        _LCD_WriteData(*str++);
    }
}

void LCD_ShowNum(int num, unsigned char x, unsigned char y)
{
    char * temp_str = (char *)calloc(16, sizeof(char));
    sprintf(temp_str, "%d", num);
    LCD_ShowStr(temp_str, x, y);
    free(temp_str);
}
