#include <htc.h>

#include "delay.h"

void Delay_us(unsigned int t)
{
    unsigned int i;
    for (i = 0; i < t; i++)
    {
        asm("nop");
    }
}

void Delay_ms(unsigned int t)
{
    unsigned int i;
    for (i = 0; i < t; i++)
    {
        Delay_us(1000);
    }
}
