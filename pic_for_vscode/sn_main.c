#define __PICCLITE__
#define _16F877A
#include "./include/htc.h"
// __CONFIG(HS&WDTDIS&LVPDIS);

#include "lcd1602.h"

#define TRIG_PIN RC1
#define TRIG_TRIS TRISC1
#define ECHO_PIN RC2
#define ECHO_TRIS TRISC2

volatile union short_div_t
{
    unsigned short raw;
    unsigned char div[2];
} distime;

double distance;

void trig_one (void)
{
    TRIG_PIN = 1;

    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");

    TRIG_PIN = 0;
}

void interrupt fxf(void)
{
    if (CCP1IF && CCP1IE)
    {
        if (ECHO_PIN)
        {
            TMR1ON = 1;
            CCP1CON = 0b100;
        }

        if (!ECHO_PIN)
        {
            TMR1ON = 0;
            distime.div[0] = TMR1L;
            distime.div[1] = TMR1H;
			TMR1L = 0;
			TMR1H = 0;
            CCP1CON = 0b101;
        }
        CCP1IF = 0;
    }
}

void main (void)
{
//--------------------------
    LCD_Init();

    TRIG_TRIS = 0;
    TRIG_PIN = 0;
    ECHO_TRIS = 1;

    GIE = 1;
    PEIE = 1;

    TMR1IF = 0;
    T1CON = 0;
    TMR1H = 0;
    TMR1L = 0;
    TMR1IE = 1;

    CCP1IF = 0;
    CCP1CON = 0;
    CCP1IE = 1;

    CCP1CON = 0b101;	//start
//--------------------------
    LCD_ShowStr("Distance =", 0, 0);
    while (1)
    {
        trig_one();
        for (unsigned char i = 0; i < 15; i++)
        {
            asm("nop");
        }
        distance = 0.034f * distime.raw;
        LCD_ShowNum((unsigned int)distance, 4, 0, 1);
    }
}
