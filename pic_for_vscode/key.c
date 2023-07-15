#include <htc.h>

#include "key.h"

//RB0~3

volatile unsigned char key[4] = {KEY_NONE, KEY_NONE, KEY_NONE, KEY_NONE};

void key_Init(void)
{
    TRISB |= 0X0F;
    OPTION &= ~(1 << 7);    //RB port pull up

    INTEDG = 1;//RB0 int
    GIE = 1;
    INTE = 1;
    INTF = 0;
}

unsigned char key_get_value(unsigned char keyx)
{
    unsigned char temp = key[keyx];
    key[keyx] = KEY_NONE;
    return temp;
}

void key_interrupt(void)
{
    if (INTE && INTF)
    {
        key[0] = KEY_TRG;
        INTF = 0;
    }
    else
    {
        if (RB1 == KEY_TRG)
        {
            key[1] = KEY_TRG;
        }

        if (RB2 == KEY_TRG)
        {
            key[2] = KEY_TRG;
        }

        if (RB3 == KEY_TRG)
        {
            key[3] = KEY_TRG;
        }
    }
}
