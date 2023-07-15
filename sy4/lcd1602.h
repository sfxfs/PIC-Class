#ifndef _LCD1602_H
#define _LCD1602_H

void LCD_Init(void);
void LCD_ShowChar(char chr, unsigned char x, unsigned char y);
void LCD_ShowStr(char *str, unsigned char x, unsigned char y);
void LCD_ShowNum(int num, unsigned char x, unsigned char y);

#endif
