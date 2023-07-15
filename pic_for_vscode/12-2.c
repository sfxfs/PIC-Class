#define __PICCLITE__
#define _16F877A
#include "./include/htc.h"
// __CONFIG(HS&WDTDIS&LVPDIS);

#define RX_TRIS TRISC7
#define TX_TRIS TRISC6

static volatile char recv_data = 0;

void usart_Init(void)
{
    RX_TRIS = 1;
    TX_TRIS = 1;

    SPBRG = 25; //9600
    TXSTA = 0;
    SYNC = 0;
    RCSTA = 0;
    SPEN = 1;
    CREN = 1;

    GIE = 1;
    PEIE = 1;
    RCIF = 0;
    RCIE = 1;
}

void usart_Interrupt(void)
{
    if (RCIE && RCIF)
    {
        recv_data = RCREG;
        RCIF = 0;
    }  
}

unsigned char usart_GetData(void)
{
    if (!recv_data)
    {
        return 0;
    }
    
    unsigned char temp = recv_data;
    recv_data = 0;
    return temp;
}
