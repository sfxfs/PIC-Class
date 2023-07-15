#include <pic.h>
__CONFIG(0xFF29);
__EEPROM_DATA(0,0,0,0,0,0,0,0);
static volatile char table[10]={0x30,0x31,0x32,0x33,
0x34,0x35,0x36,0x37,0x38,0x39} ;
#define rs RA5
#define rw RA2
#define e  RA3
//lcd对应的使能引脚,看自己的原理图,有些RA2改成RA4
unsigned int count_temp,n,speed;
unsigned char shuju[6];
unsigned char speed_data[4],m;
unsigned int t_speed; 
union
{ unsigned long count;
  char data[3]; 
     }li_cheng;
//共用体

void delay()//延时函数
{unsigned int i;for(i=999;i>0;i--);}
void lcdml()//写入命令
{rs=0;rw=0;e=0;delay();e=1;}
void lcdx()//写入字
{rs=1;rw=0;e=0;delay();e=1;}
void lcd_Init()//lcd初始化
{
 TRISD=0;TRISA=0;ADCON1=7;
 PORTD=0;
 delay();
 PORTD=1;lcdml();
 PORTD=0x38;lcdml();
 PORTD=0x0c;lcdml();
 PORTD=0x06;lcdml(); 
 
}

void licheng_deal()//里程数的数据处理
{
 shuju[0]=li_cheng.count/100000;
 shuju[1]=li_cheng.count%100000/10000;
 shuju[2]=li_cheng.count%10000/1000;
 shuju[3]=li_cheng.count%1000/100;
 shuju[4]=li_cheng.count%100/10;
 shuju[5]=li_cheng.count%10; 
}
void speed_deal()//速度的数据处理
{
//speed为最后的速度，speed_data为lcd显示做的数据处理
 speed=1000000/t_speed;
 speed_data[0]=speed/1000;
 speed_data[1]=speed%1000/100;
 speed_data[2]=speed%100/10;
 speed_data[3]=speed%10;
}

void interrupt int_serve()//中断服务函数
{
 
 if(TMR1IF==1){n++;TMR1IF=0;}//防止速度部分TMR1模块溢出
 if(INTF==1)
 { 
  count_temp++;;
  if(count_temp==10){li_cheng.count++;count_temp=0;}//当收到100个高电平里程数+1,100个高电平相当于小车走了1m
  
  m++;
  if(m==0)//打开tmr1 清空定时器数据
  {n=0;TMR1IE=0;TMR1L=0;TMR1H=0;TMR1ON=1;TMR1IF=0;}
  
  if(m==1)
  {TMR1ON=0;TMR1IE=0;t_speed=(n*65535)+(TMR1H*256)+TMR1L;TMR1IF=0;}
 
  INTF=0;//清电平中断标志位，不清的话会一直进中断出不去
 }
}
void init()
{
 t_speed=0;
 TRISD=0;TRISA=0;ADCON1=7;
 m=250;n=0;
 TRISB0=1;count_temp=0;
 GIE=1;PEIE=1;
 TMR1IE=1;
 TMR1IF=0;
 INTE=1;INTF=0;
 T1CON=0B00000001; 
}
void main()
{
 init();//中断&端口初始化函数调用
 lcd_Init();//lcd初始化函数调用 
 li_cheng.data[0]=eeprom_read(0x00);
 li_cheng.data[1]=eeprom_read(0x01);
 li_cheng.data[2]=eeprom_read(0x02);
 //从寄存器中调用上次存入的数据
 while(1)
 { speed_deal();
  licheng_deal();
  eeprom_write(0x02,li_cheng.data[2]);
  eeprom_write(0x01,li_cheng.data[1]);
  eeprom_write(0x00,li_cheng.data[0]);
  //将里程放到寄存体中 掉电不会丢失
  PORTD=0x80;lcdml();
  PORTD=table[shuju[0]];lcdx();
  PORTD=table[shuju[1]];lcdx();
  PORTD=table[shuju[2]];lcdx();
  PORTD=table[shuju[3]];lcdx();
  PORTD=table[shuju[4]];lcdx();
  PORTD=table[shuju[5]];lcdx();
  PORTD='d';lcdx();
  PORTD='m';lcdx();
  PORTD=0xc0;lcdml();//========================第二行速度的显示
  PORTD=table[speed_data[2]];lcdx();
  PORTD=table[speed_data[3]];lcdx();
 // PORTD='c';lcdx();
  PORTD='m';lcdx();
  PORTD='m';lcdx();
  PORTD='/';lcdx();
  PORTD='s';lcdx(); 
 }
}