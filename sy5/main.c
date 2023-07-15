#include<pic.h>
__CONFIG(0xFF29);
#define rs RA5
#define rw RA4
#define e  RA3
char x,y,z,Z;
bit a;
static volatile char TABLE[16]={0x30,0x31,0x32,0x33,0x34,0x35,
0x36,0x37,0x38,0x39,0x41,0x42,0x43,0x44,0x45,0x46};
void  DELAY()    //延时子程序
{unsigned int i;for(i=999;i>0;i--);}
void ENABLE()    //写入控制命令的子程序
{ rs=0; rw=0;e=0;   DELAY();  e=1;}
void ENABLE1()    //写入字的子程序
{ rs=1; rw=0;e=0;   DELAY();  e=1;}
void lcd()
{	TRISD=0;TRISA=0;PORTD=0;
	DELAY();
	PORTD=1;ENABLE();
	PORTD=0x38;ENABLE();
	PORTD=0x0C;ENABLE();
	PORTD=0x06;ENABLE();
}
void interrupt ccp1()
{	if(CCP1IF==1)
	{a=!a;
	if(a==1){TMR1L=0;TMR1H=0;TMR1ON=1;z=0;CCP1IF=0;}
	else{y=CCPR1L+31;x=CCPR1H+CARRY;Z=z;TMR1ON=0;CCP1IF=0;};}
	else if(TMR1IF==1)z++;
	TMR1IF=0;
}
void main()
{	lcd();
	TRISC2=1;
	a=0;
	GIE=1;PEIE=1;CCP1IE=1;CCP1IF=0;
	TMR1IE=1;TMR1IF=0;
	T1CON=0B00000000;
	CCP1CON=5;
	while(1)
	{
		PORTD=0x80;ENABLE();
		PORTD=TABLE[Z>>4];ENABLE1();
		PORTD=TABLE[Z&0x0F];ENABLE1();
		PORTD=TABLE[x>>4];ENABLE1();
		PORTD=TABLE[x&0x0F];ENABLE1();
		PORTD=TABLE[y>>4];ENABLE1();
		PORTD=TABLE[y&0x0F];ENABLE1();
		PORTD='H';ENABLE1();
		PORTD='A';ENABLE1();
		PORTD='X';ENABLE1();
	}
}
