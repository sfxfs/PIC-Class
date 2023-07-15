#include <htc.h>
__CONFIG(HS&WDTDIS&LVPDIS);

#include "key.h"
#include "lcd1602.h"

#define PWM_TRISxx TRISC2
#define PWM_PIN       RC2
#define US2RAW(x) (0xffff-(x/16)) //period_us < 1048560

volatile union short_div_t
{
    unsigned short raw;
    unsigned char div[2];
} period;

void interrupt INT (void)
{
    key_interrupt();
	if (TMR1IE && TMR1IF)
    {
        PWM_PIN = !PWM_PIN;
        TMR1H = period.div[1];
        TMR1L = period.div[0];
        TMR1IF = 0;
    }
}

void main(void)
{//-------------------------------------------------------------
    LCD_Init();
    key_Init();
	PWM_TRISxx = 0; //RC2 output

    T1CKPS0 = 1;
    T1CKPS1 = 1; // 8x div osc
    TMR1ON = 0;

    GIE = 1;
    PEIE = 1;
    TMR1IE = 1; //enable timer1 interrupt
    TMR1IF = 0; //clear interrupt flag

    
//--------------------------------------------------------------
    while (1)
    {
        if (key_get_value(0) == KEY_TRG)
        {
            TMR1ON = 0;
            LCD_ShowStr("1HZ    ", 0, 0);
            period.raw = US2RAW(1000000);
            TMR1ON = 1;
        }

        if (key_get_value(1) == KEY_TRG)
        {
            TMR1ON = 0;
            LCD_ShowStr("40HZ  ", 0, 0);
            period.raw = US2RAW(25000);
            TMR1ON = 1;
        }

        if (key_get_value(2) == KEY_TRG)
        {
            TMR1ON = 0;
            LCD_ShowStr("3000HZ   ", 0, 0);
            period.raw = US2RAW(334);
            TMR1ON = 1;
        }

        if (key_get_value(3) == KEY_TRG)
        {
            TMR1ON = 0;
            LCD_ShowStr("1000HZ", 0, 0);
            period.raw = US2RAW(1000);
            TMR1ON = 1;
        }
    }
}