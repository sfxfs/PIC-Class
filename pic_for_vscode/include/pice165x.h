/*
 *	Header file for the Microchip :
 *	Enhanced ..
 *	PIC 16c52 chip
 *	PIC 16c54A chip
 *	PIC 16c58A chip
 *	PIC 16cr58A chip
 *	Baseline Microcontrollers
 */

volatile unsigned char	INDF	@ 0x00;
volatile unsigned char	TMR0	@ 0x01;
volatile unsigned char	RTCC	@ 0x01;
volatile unsigned char	PCL	@ 0x02;
volatile unsigned char	STATUS	@ 0x03;
         unsigned char	FSR	@ 0x04;
volatile unsigned char	PORTA	@ 0x05;
volatile unsigned char	PORTB	@ 0x06;

         unsigned char control	OPTION	@ 0x00;
volatile	unsigned char control	TRISA	@ 0x05;
volatile	unsigned char control	TRISB	@ 0x06;

/*	STATUS bits	*/
bit	PA1	@ (unsigned)&STATUS*8+6;
bit	PA0	@ (unsigned)&STATUS*8+5;
bit	TO	@ (unsigned)&STATUS*8+4;
bit	PD	@ (unsigned)&STATUS*8+3;
bit	ZERO	@ (unsigned)&STATUS*8+2;
bit	DC	@ (unsigned)&STATUS*8+1;
volatile bit	CARRY	@ (unsigned)&STATUS*8+0;

/*	OPTION bits	*/
#define		T0CS	(1<<5)
#define		T0SE	(1<<4)
#define		PSA	(1<<3)
#define		PS2	(1<<2)
#define		PS1	(1<<1)
#define		PS0	(1<<0)

/*	PORTA bits	*/
bit	RA3	@ (unsigned)&PORTA*8+3;
bit	RA2	@ (unsigned)&PORTA*8+2;
bit	RA1	@ (unsigned)&PORTA*8+1;
bit	RA0	@ (unsigned)&PORTA*8+0;

/*	PORTB bits	*/
bit 	RB7	@ (unsigned)&PORTB*8+7;
bit 	RB6	@ (unsigned)&PORTB*8+6;
bit 	RB5	@ (unsigned)&PORTB*8+5;
bit 	RB4	@ (unsigned)&PORTB*8+4;
bit 	RB3	@ (unsigned)&PORTB*8+3;
bit 	RB2	@ (unsigned)&PORTB*8+2;
bit 	RB1	@ (unsigned)&PORTB*8+1;
bit 	RB0	@ (unsigned)&PORTB*8+0;

#define CONFIG_ADDR	0xFFF
#define FOSC0		0x01
#define FOSC1		0x02
#define WDTE		0x04

#if defined (_16CR58A)
#define	CP		0x0FF8
#else
#define CP		0x08
#endif
