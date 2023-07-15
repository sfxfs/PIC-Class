#include <htc.h>

#include "sensor.h"

/*
X1 -> RB6
X2 -> RB7
X3 -> RB5
X4 -> RB4
*/

static volatile unsigned char value = 0;

void sensor_Init(void)
{
    TRISB |= 0b11110000;
    RBPU = 0;

	value = PORTB;

    GIE = 1;
    RBIF = 0;
    RBIE = 1;
}

void sensor_Interrupt(void)
{
    if (RBIE && RBIF)
    {
        value = PORTB & 0xF0;
        RBIF = 0;
    }
}

unsigned char sensor_GetValue(void)
{
    return value;
}
