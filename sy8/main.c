#include<pic.h>
__CONFIG(0xFF29);
#define rs RA5
#define rw RA4
#define e  RA3
static volatile char table[16]={0x30,0x31,0x32,0x33,0x34,0x35,
0x36,0x37,0x38,0x39,0x41,0x42,0x43,0x44,0x45,0x46};
char X,Y;
static volatile char table1[21]={"my name is pic16f877"};
char adh, adl,a,b,c,d,f,g,x3;
int adc,x,y,x1,x2;
long lcd,x4, buf;
//*************
void DELAY()   //延时子程序
{unsigned int i;for(i=1999;i>0;i--);}
void ENABLE()    //写入控制命令的子程序
{ rs=0; rw=0;e=0;   DELAY();  e=1;}
void ENABLE1()    //写入字的子程序
{ rs=1; rw=0;e=0;   DELAY();  e=1;}
void lcd1()
{
	DELAY();//调用延时，刚上电LCD复位不一定有PIC快
	PORTD=1;      ENABLE();//清屏
	PORTD=0x38;ENABLE();  //8位2行5×7点阵
	PORTD=0x0C;ENABLE();  //显示器开，光标不开，闪烁不开
	PORTD=0x06;ENABLE();  //字不动，光标自动右移
}
//***********************
void div()
{
	x=(int) adh<<8;   //电压结果二－十进制转换
	adc=x+(int) adl;
	 lcd=(adc*50000);//扩大10000倍，保证计算精度
	buf=lcd/0x3FF;
	a=buf/100000;x4=buf-a*100000;       //求余数
	b=x4/10000;x1=x4-b*10000;             //求余数
	c=x1/1000;x2=x1-c*1000;                  //求余数
	d=x2/100;x3=x2-d*100;                     //求余数
	g=x3/10;f=x3-g*10;                          //求余数
}
void interrupt ccp2_int()//中断服务程序
{
	CCP2IF=0;//清CCP2中断
	wait: if(ADIF==0) goto wait;//等待AD转换结束
	adh=ADRESH; adl=ADRESL;
	ADIF=0;   //PIR1.6
}
void main()
{
TRISA=0x01;TRISC=0xFF;TRISD=0;
PORTD=0;

SPBRG=12;     //转载波特率发生器，为19200
TXSTA=0B00100100;   //使能USART发送，波特率发生器为高速方式
RCSTA=0B10010000;   //连续接收
 for(X=0;X<21;X++)
 {
	TXREG=table1[X];
	DELAY();
 }
ADCON1=0B10001110;   //只选ANO引脚为模拟通道，结果右对齐Vdd和Vss为参考电源
lcd1();
PEIE=1;GIE=1;CCP2IE=1;
CCPR2L=0xFF;CCPR2H=0xFF;   //用最大值作周期寄存器
T1CON=0x30;         //预分频器=1∶8，内部时钟源，同步，禁止振荡器；
CCP2CON=0x0B;   //设定CCP2为特殊事件模式
TMR1ON=1;     //开启TMR1，T1CON.0
ADCON0=0B01000001;  //设置RC时钟源，暂不打开ADC，选中ANO
loop:
div();

PORTD=0x80;ENABLE();
PORTD=table[b];ENABLE1();
TXREG=table[b];                       //异步发送，利用LCD显示延时做异步发送时间
PORTD='.';ENABLE1();
TXREG='.';                                //异步发送
PORTD=table[c];ENABLE1();
TXREG=table[c];                      //异步发送
PORTD=table[d];ENABLE1();
TXREG=table[d];                     //异步发送
PORTD=table[g];ENABLE1();
TXREG=table[g];                     //异步发送
PORTD=table[f];ENABLE1();
TXREG=table[f];DELAY();       //异步发送
TXREG='V';DELAY();              //异步发送
TXREG=' ';DELAY();              //异步发送，发送空格
TXREG=' ';DELAY();             //异步发送，发送空格
TXREG=' ';                               //异步发送，发送空格
goto loop;
}
