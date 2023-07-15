#include <htc.h>

#include "hcsr04.h"

#define TRIG_PIN RC3
#define TRIG_TRIS TRISC3
#define ECHO_PIN RC2
#define ECHO_TRIS TRISC2

void _hscr_delay(unsigned int i)
{
    while (i--){}
}

void hcsr04_Init(void)
{
    PEIE = 1;
    GIE = 1;
    TMR1IE = 1;
    TMR1IF = 0;

    TRIG_TRIS = 0;
    ECHO_TRIS = 1;

    TMR1H = 0X00;
    TMR1L = 0X00;
    T1CON = 0X00;
}

int hcsr04_GetDis(void)
{
    int timeout = 0;
    int distance = 0, timing = 0;
    TRIG_PIN = 1;
    _hscr_delay(20);
    TRIG_PIN = 0;
    timeout = 400;
    while (!ECHO_PIN && timeout){timeout--;}
    TMR1ON = 1;
    timeout = 400;
    while (ECHO_PIN && timeout){timeout--;}
    TMR1ON = 0;
    timing = 256 * TMR1H + TMR1L;
    TMR1H = 0X00;
    TMR1L = 0X00;
    distance = (int)((float)timing * 0.017);
    return distance;
}
