#include <htc.h>
__CONFIG(0xFF29);

char x, y;

void Delay_us(unsigned int t)
{
    unsigned int i;
    for (i = 0; i < t; i++)
    {
        asm("nop");
    }
}

void Sound(unsigned int t) // 发声子程序
{
    unsigned int i;
    for (i = 600; i > 0; i--)
    {
        RE0 = !RE0;
        Delay_us(t);
    };
}

void interrupt int_rb()
{
    if (INTF == 1)
    {
        x = 0;
        PORTD = 0X80;
        Sound(5);
        INTF = 0;
    }    // 优先判断外部中断标志位
    else // 如果不是INTF=1，一定是RBIF=1，因此此处不用判断
    {
        if (x == 0) // 如果抢答成功，判断是哪个队伍
        {
            x = 1;
            y = y ^ PORTB;
            switch (y)
            {
            case 0x80:
                PORTD = 0X08;
                Sound(2);
                break;

            case 0x40:
                PORTD = 0X04;
                Sound(3);
                break;

            case 0x20:
                PORTD = 0X02;
                Sound(4);
                break;

            case 0x10:
                PORTD = 0X01;
                Sound(6);
                break;

            default:
                break;
            }
        };
        y = PORTB;
        RBIF = 0; // 如果x=1，已经抢答过，直接出中断
    }
}
void main(void)
{
    TRISD = 0; // output
    PORTD = 0;
    ADCON1 = 7;

    TRISB = 0XFF; // input
    OPTION = ~(1 << 7);
    INTEDG = 1;

    TRISE = 0; // output
    RE0 = 1;
    x = 1;
    GIE = 1;
    INTE = 1;
    RBIE = 1;

    INTF = 0; // clear interupt flag
    y = PORTB;
    RBIF = 0; // 读RB端口电平，只要有输入动作，既是读端口
    while (1)
    {
    }
}