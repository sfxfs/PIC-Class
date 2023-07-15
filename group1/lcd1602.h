#ifndef _LCD1602_H
#define _LCD1602_H

//#define NEW_BROAD

void LCD_Init(void);
void LCD_ShowChar(char chr, unsigned char x, unsigned char y);
void LCD_ShowStr(char *str, unsigned char x, unsigned char y);
void LCD_ShowNum(unsigned int num, unsigned char len, unsigned char x, unsigned char y);

#endif
