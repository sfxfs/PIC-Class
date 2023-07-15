#include<pic.h>
__CONFIG(0xFF29);
char adh ,adl,Z;
static volatile char table[16]={0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x41,0x42,0x43,0x44,0x45,0x46};
void DELAY()
{unsigned int i;for(i=999;i>0;i--);}
void ENABLE()
{RA5=0;RA4=0;RA3=0;DELAY();RA3=1;}
void ENABLE1()
{RA5=1;RA4=0;RA3=0;DELAY();RA3=1;}
void interrupt tmr2_serve()
{
TMR2IF=0;
GODONE=1;
wait:if(ADIF==0)goto wait;
adh=ADRESH;adl=ADRESL;
ADIF=0;
}
main()
{
 TRISC=0XC0;
 SPBRG=38;
 TXSTA=0;SYNC=0;TX9=1;
 RCSTA=0;SPEN=1;
 GIE=1;PEIE=1;
 TXEN=1;
    CREN=1;//开启接收,可以参考课本212页全双工
//****************** 
 TRISA=1;TRISD=0;//TRISE=0xff;TRISA=0xff;
DELAY();
PORTD=1;ENABLE();
PORTD=0x38;ENABLE();
PORTD=0x0C;ENABLE();
PORTD=0x06;ENABLE();
GIE=1;PEIE=1;TMR2IE=1;TMR2IF=0;ADIF=0;
ADCON0=0B01000001;//ADCON1=0B10001110;
ADCON1=0B10000000;//课本184页
T2CON=0B01111110;PR2=255;
//*****************
LOOP:
Z=RCREG;
CHS0=Z&0X01;
CHS1=(Z&0X02)>>1;
CHS2=(Z&0X04)>>2;
wait1:if(TRMT==0){
PORTD=0x80;ENABLE();
PORTD=table[adh];ENABLE1();
PORTD=table[adl>>4];ENABLE1();
PORTD=table[adl&0x0F];ENABLE1();
goto wait1;
}
{TX9D=1;TXREG=adh;};
wait2:if(TRMT==0){
PORTD=0x80;ENABLE();
PORTD=table[adh];ENABLE1();
PORTD=table[adl>>4];ENABLE1();
PORTD=table[adl&0x0F];ENABLE1();
goto wait2;
}
{TX9D=0;TXREG=adl;};
goto LOOP;
}