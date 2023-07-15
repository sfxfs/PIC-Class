#include <htc.h>
__CONFIG(HS&WDTDIS&LVPDIS);

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
	PWM_TRISxx = 0; //RC2 output

    T1CKPS0 = 1;
    T1CKPS1 = 1; // 8x div osc
    TMR1ON = 0;

    GIE = 1;
    PEIE = 1;
    TMR1IE = 1; //enable timer1 interrupt
    TMR1IF = 0; //clear interrupt flag
//--------------------------------------------------------------
    period.raw = US2RAW(1000000);

    TMR1ON = 1;
//--------------------------------------------------------------
	while(1){}
}