#include <htc.h>

#include "lcd1602.h"


#ifdef NEW_BROAD

#define PIN_RS RA5
#define PIN_RW RA2
#define PIN_E RA3
#define TRISA_VALUE 0xD3

#else

#define PIN_RS RA5
#define PIN_RW RA4
#define PIN_E RA3
#define TRISA_VALUE 0x07

#endif

//占用 PIN_E~5 整个RD

static void __LCD_Delay(void)
{
    for (unsigned char i = 0; i < 20; i++)
    {
        asm("nop");
    }
    
}

static void __LCD_SendCmd(void)
{
    PIN_RS = 0;
    PIN_RW = 0;
    PIN_E = 0;
    __LCD_Delay();
    PIN_E = 1;
}

static void __LCD_SendData(void)
{
    PIN_RS = 1;
    PIN_RW = 0;
    PIN_E = 0;
    __LCD_Delay();
    PIN_E = 1;
}

static void _LCD_WriteCmd(unsigned char cmd)
{
    PORTD = cmd;
    __LCD_SendCmd();
}

static void _LCD_WriteData(unsigned char data)
{
    PORTD = data;
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

unsigned int _LCD_Pow(unsigned int X, unsigned int Y)
{
	unsigned int Result = 1;
	while (Y--)
	{
		Result *= X;
	}
	return Result;
}

void LCD_Init(void)
{
    TRISD = 0;
    TRISA &= TRISA_VALUE;
    ADCON1 = 0x07; // 与ADC冲突，关闭ADC
    PIN_RS = 0;

    PORTD = 0;
    PIN_E = 1;

    __LCD_Delay();

    _LCD_WriteCmd(0x38); // 设置总线位数和显示位数
    _LCD_WriteCmd(0x0C); // 使能显示、关闭光标、闪烁
    _LCD_WriteCmd(0x06); // 光标右移，显示内容不移
    _LCD_WriteCmd(0x01); // 清屏

    for (unsigned char i = 0; i < 7; i++)
    {
        __LCD_Delay();
    }
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

void LCD_ShowNum(unsigned int num, unsigned char len, unsigned char x, unsigned char y)
{
    unsigned char i;
    _LCD_SetCursor(x, y);
    for (i = 0; i < len; i++)
    {
        _LCD_WriteData(num / _LCD_Pow(10, len - i - 1) % 10 + '0');
    }
}
