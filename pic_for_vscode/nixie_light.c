#include <htc.h>

#include "nixie_light.h"

#define DIG_NUM 6

static const volatile unsigned char NUM2NIXIE[] =
{                          
    0xc0,0xf9,0xa4,0xb0,//0~3
    0x99,0x92,0x82,0xf8,//4~7
    0x80,0x90,0x88,0x83,//8~b
    0xc6,0xa1,0x86,0x8e //c~f
};

static volatile const unsigned char DIS_CS[DIG_NUM] =
{
    0b11111110, //ge wei
    0b11111101, //shi wei
    0b11111011, //bai wei
    0b11110111, //qian wei
    0b11101111, //wan wei
    0b11011111  //shi wan wei
};

static volatile unsigned char _count = 0;
static volatile unsigned char DISPLAY[DIG_NUM] = {0};

unsigned int _nixie_Pow(unsigned int X, unsigned int Y)
{
	unsigned int Result = 1;
	while (Y--)
	{
		Result *= X;
	}
	return Result;
}

void nixie_Init()
{
    TRISD = 0;
    PORTD = 0;

    TRISA = 0;
    PORTA = 0;

    GIE = 1;
    PEIE = 1;

    T2CON = 0;
    TMR2 = 0;
    PR2 = 249;
    TMR2IF = 0;
    TMR2IE = 1;

    TMR2ON = 1;
}

void nixie_Show(const unsigned int num)
{
    for (unsigned char i = 0; i < DIG_NUM; i++)
    {
        DISPLAY[i] = NUM2NIXIE[num / _nixie_Pow(10, DIG_NUM - i - 1) % 10];
    }
}

void nixie_Interrupt()
{
    if (TMR2IE && TMR2IF)
    {
        if (_count == DIG_NUM)
            _count = 0;
		PORTA = DIS_CS[_count];
        PORTD = DISPLAY[_count];
        _count++;
		TMR2IF = 0;
    }
}
