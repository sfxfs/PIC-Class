#include <htc.h>
__CONFIG(HS&WDTDIS&LVPDIS);

#include "nixie_light.h"

#define TRIG_PIN RC3
#define TRIG_TRIS TRISC3
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
	// for(;;);
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

void interrupt fxf()
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
	nixie_Interrupt();
}

void main()
{
	nixie_Init();
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

    CCP1CON = 0b101;

    while (1)
    {
        trig_one();
        for (unsigned int i = 0; i < 10000; i++)
            asm("nop");
        distance = (0.017f * distime.raw) + 0.5f;
        if (distance)
            nixie_Show((unsigned int)distance);
    }
}