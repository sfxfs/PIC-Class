#include <pic.h>
char adh, adl;
int x, a, b, c, d, e, f;
int y;
unsigned long x1, buf;
static volatile char table[16] = {0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46};
union
{
    unsigned int count;
    char data[2];
} ad_data;
void DELAY()
{
    unsigned int i;
    for (i = 999; i > 0; i--)
        ;
}
void ENABLE()
{
    RE2 = 0;
    RE1 = 0;
    RE0 = 0;
    DELAY();
    RE0 = 1;
}
void ENABLE1()
{
    RE2 = 1;
    RE1 = 0;
    RE0 = 0;
    DELAY();
    RE0 = 1;
}
void div()
{
    a = buf / 100000;
    x1 = buf - a * 100000;
    b = x1 / 10000;
    y = x1 - b * 10000;
    c = y / 1000;
    x1 = y - c * 1000;
    d = x1 / 100;
    y = x1 - d * 100;
    e = y / 10;
    f = y - e * 10;
}
void interrupt tmr2_serve()
{
    TMR2IF = 0;
    GODONE = 1;
wait:
    if (ADIF == 0)
        goto wait;
    ad_data.data[1] = ADRESH;
    ad_data.data[0] = ADRESL;
    adh = ad_data.data[1];
    adl = ad_data.data[0];
    ADIF = 0;
}
main()
{
    TRISA = 0x0C;
    TRISD = 0;
    TRISE = 0;
    DELAY();
    PORTD = 1;
    ENABLE();
    PORTD = 0x38;
    ENABLE();
    PORTD = 0x0C;
    ENABLE();
    PORTD = 0x06;
    ENABLE();
    GIE = 1;
    PEIE = 1;
    TMR2IE = 1;
    TMR2IF = 0;
    ADIF = 0;
    ADCON0 = 0B01010001;
    ADCON1 = 0B10000011;
    T2CON = 0B01111110;
    PR2 = 255;
    while (1)
    {
        buf = 500000 * ad_data.count / 0x3FF;
        div();
        PORTD = 0x80;
        ENABLE();
        PORTD = table[a];
        ENABLE1();
        PORTD = '.';
        ENABLE1();
        PORTD = table[b];
        ENABLE1();
        PORTD = table[c];
        ENABLE1();
        PORTD = table[d];
        ENABLE1();
        PORTD = table[e];
        ENABLE1();
        PORTD = table[f];
        ENABLE1();
        PORTD = 'v';
        ENABLE1();
        PORTD = 0xC0;
        ENABLE();
        PORTD = table[adh];
        ENABLE1();
        PORTD = table[adl >> 4];
        ENABLE1();
        PORTD = table[adl & 0x0F];
        ENABLE1();
        PORTD = 'H';
        ENABLE1();
    }
}
