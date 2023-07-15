#include<pic.h>
__CONFIG(0XFF29);
char X,Y,result,preres;
int c,d,e,f,x1,x2,x3,x4,Z;
long adc,m,buf,lcd,a,b;
static volatile char table[16]={0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x41,0x42,0x43,0x44,0x45,0x46};
static volatile char TABLE[16]={0x30,0x31,0x32,0x33,0x34,0x35,

0x36,0x37,0x38,0x39,0x41,0x42,0x43,0x44,0x45,0x46};

void DELAY()
{unsigned int i;for(i=999;i>0;i--);}
void ENABLE()
{RA5=0;RA4=0;RA3=0;DELAY();RA3=1;}
void ENABLE1()
{RA5=1;RA4=0;RA3=0;DELAY();RA3=1;}
void interrupt usart_seve()
{

if(RX9D==0){X=RCREG;}
else Y=RCREG;

}
main()
{	TRISA=1;TRISD=0;ADCON1=7;
TRISC=0XC0;
SPBRG=38;
TXSTA=0;SYNC=0;RCSTA=0;SPEN=1;
RCSTA=0;SPEN=1;RX9=1;
GIE=1;PEIE=1;RCIE=1;
CREN=1;
TXEN=1;//开启发送,可以参考课本212页全双工
DELAY();
PORTD=1;ENABLE();
PORTD=0x38;ENABLE();
PORTD=0x0C;ENABLE();
PORTD=0x06;ENABLE();
//_____-
TRISD=0;RE2=1;ADCON1=7;TRISA=0;RA5=0;
	TRISB=0X0F;RBPU=0;result=0x00;preres=0x00; e=1;
LOOP:
//车辆里程表 课本95页
m=X<<8;
adc=m+Y;
lcd=(adc*50000);
buf=lcd/0x3ff;
a=buf/10000;
x4=buf-a*10000;
b=x4/1000;
x1=x4-b*1000;
c=x1/100;
x2=x1-c*100;
d=x2/10;
x3=x2-d*10;
e=x3/1;
PORTD=0x80;ENABLE();//光标指向第一行第一个字符位置

//-----以下程序是4X4键盘扫描--------

    PORTB = 0X7f;                 //RB7输出低电平，其他三位输出高电平

asm("nop");                 //插入一定延时，确保电平稳定

result = PORTB;               //读回B口低4位结果

result = result & 0x0f;         //清除高4位

if (result != 0x0f)            //判断低4位是否为全1（全1代表没按键按下）？

{

result = result | 0x70;     //否，加上高4位0x70，做为按键扫描的结果

}

else                        //是，改变低4位输出，重新判断是否有按键按下

{

PORTB = 0Xbf;               //RB6输出低电平，其他三位输出高电平

asm("nop");               //插入一定延时，确保电平稳定

result = PORTB;             //读回B口高低4位结果

result = result & 0x0f;       //清除高4位

if (result != 0xf)           //判断低4位是否为全1（全1代表没按键按下）

{

result = result | 0xb0;     //否，加上高4位0xb0，做为按键扫描的结果

}

else                      //是，改变低4位输出，重新扫描

{

PORTB = 0Xdf;           //RB5输出低电平，其他三位输出高电平

asm("nop");           //插入一定延时，确保电平稳定

result = PORTB;         //读回B口低4位结果

result = result & 0x0f;   //清除高4位

if (result != 0x0f)      //判断低4位是否为全1（全1代表没按键按下）

{

result = result | 0xd0;  //否，加上高4位0xd0，做为按键扫描的结果

}

else                  //是，改变高4位的输出，重新扫描

{

PORTB = 0Xef;        //B4输出低电平，其他三位输出高电平

asm("nop");        //插入一定延时，确保电平稳定

result = PORTB;      //读回B口低4位结果

result = result & 0x0f; //清除高4位

if (result != 0x0f)   //判断低四位是否为全1（全1代表没有按键按下）

{

result = result | 0xe0; //否，加上高4位0x0e，做为按键扫描的结果

}

else               //是，全部按键扫描结束，没有按键按下，置无按键按下标志位

{

result = 0xff;    //扫描结果为0xff，做为没有按键按下的标志

}

          }

          }

          }

if(result==0xff)//无键按下显示‘X’

result=preres;

else

preres=result;

//-----以下程序是4X4键盘扫描结果送LCD显示部分--------

    switch (result)

{

case 0xe7:

PORTD = TABLE[3];TXREG=3;break;   //K3

case 0xeb:

PORTD = TABLE[2];TXREG=2;break;   //K2

case 0xed:

PORTD = TABLE[1];TXREG=1;break;   //K1

case 0xee:

PORTD = TABLE[0];TXREG=0;break;   //K0

case 0xd7:

PORTD = TABLE[7];TXREG=7;break;   //K7

case 0xdb:

PORTD = TABLE[6];TXREG=6;break;   //K6

case 0xdd:

PORTD = TABLE[5];TXREG=5;break;   //K5

case 0xde:

PORTD = TABLE[4];TXREG=4;break;   //K4

case 0xb7:

PORTD = TABLE[11];TXREG=11;break;   //KB

case 0xbb:

PORTD = TABLE[10];TXREG=10;break;   //KA

case 0xbd:

PORTD = TABLE[9];TXREG=9;break;   //K9

case 0xbe:

PORTD = TABLE[8];TXREG=8;break;   //K8

case 0x77:

PORTD = TABLE[15];TXREG=15;break;   //KF

case 0x7b:

PORTD = TABLE[14];TXREG=14;break;   //KE

case 0x7d:

PORTD = TABLE[13];TXREG=13;break;   //KD

case 0x7e:

PORTD = TABLE[12];TXREG=12;break;   //KC

case 0x00:

PORTD ='X';     

 }  ENABLE1();

PORTD=0xc0;ENABLE();
PORTD=table[a];ENABLE1();
PORTD='.';ENABLE1();
PORTD=table[b];ENABLE1();
PORTD=table[c];ENABLE1();
PORTD=table[d];ENABLE1();
PORTD=table[e];ENABLE1();
PORTD='V';ENABLE1();
goto LOOP;
}