
#ifndef	_HTC_H_
#warning Header file pic174x.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip :
 *	PIC 17C42 Chip
 *	PIC 17CR42 chip
 *	PIC 17C42A chip
 *	PIC 17C43 chip
 *	PIC 17CR43 chip
 *	PIC 17C44 chip
 *	High-end Microcontroller
 */

volatile unsigned char INDF0	@ 0x00;
		unsigned char FSR0	@ 0x01;
volatile unsigned char PCL	@ 0x02;
		unsigned char PCLATH	@ 0x03;
volatile unsigned char ALUSTA	@ 0x04;
volatile unsigned char T0STA	@ 0x05;
volatile unsigned char CPUSTA	@ 0x06;
volatile unsigned char INTSTA	@ 0x07;
volatile unsigned char INDF1	@ 0x08;
		unsigned char FSR1	@ 0x09;
volatile unsigned char WREG	@ 0x0A;
volatile unsigned char TMR0L	@ 0x0B;
volatile unsigned char TMR0H	@ 0x0C;
volatile unsigned short TMR0	@ 0x0B;
         unsigned char TBLPTRL	@ 0x0D;
         unsigned char TBLPTRH	@ 0x0E;
         unsigned char BSR	@ 0x0F;
#ifndef _17C42
volatile unsigned char PRODL	@ 0x18;
volatile unsigned char PRODH	@ 0x19;
#endif

	/*  Bank 0  */
volatile unsigned char PORTA	@ 0x10;
volatile unsigned char DDRB	@ 0x11;
volatile unsigned char PORTB	@ 0x12;
volatile unsigned char RCSTA	@ 0x13;
volatile unsigned char RCREG	@ 0x14;
volatile unsigned char TXSTA	@ 0x15;
volatile unsigned char TXREG	@ 0x16;
         unsigned char SPBRG	@ 0x17;

	/*  Bank 1  */
volatile unsigned char DDRC	@ 0x110;
volatile unsigned char PORTC	@ 0x111;
volatile unsigned char DDRD	@ 0x112;
volatile unsigned char PORTD	@ 0x113;
volatile unsigned char DDRE	@ 0x114;
volatile unsigned char PORTE	@ 0x115;
volatile unsigned char PIR	@ 0x116;
         unsigned char PIE	@ 0x117;

	/*  Bank 2  */
volatile unsigned char TMR1	@ 0x210;
volatile unsigned char TMR2	@ 0x211;
volatile unsigned char TMR3L	@ 0x212;
volatile unsigned char TMR3H	@ 0x213;
         unsigned char PR1	@ 0x214;
         unsigned char PR2	@ 0x215;
         unsigned char PR3L	@ 0x216;
         unsigned char PR3H	@ 0x217;

	/*  Bank 3  */
         unsigned char PW1DCL	@ 0x310;
         unsigned char PW2DCL	@ 0x311;
         unsigned char PW1DCH	@ 0x312;
         unsigned char PW2DCH	@ 0x313;
volatile unsigned char CA2L	@ 0x314;
volatile unsigned char CA2H	@ 0x315;
         unsigned char TCON1	@ 0x316;
         unsigned char TCON2	@ 0x317;

/*	ALUSTA bits	*/
bit	FS3	@ (unsigned)&ALUSTA*8+7;
bit	FS2	@ (unsigned)&ALUSTA*8+6;
bit	FS1	@ (unsigned)&ALUSTA*8+5;
bit	FS0	@ (unsigned)&ALUSTA*8+4;
bit	OV	@ (unsigned)&ALUSTA*8+3;
bit	ZERO	@ (unsigned)&ALUSTA*8+2;
bit	DC	@ (unsigned)&ALUSTA*8+1;
volatile bit	CARRY	@ (unsigned)&ALUSTA*8+0;

/*	T0STA bits	*/
bit	INTEDG	@ (unsigned)&T0STA*8+7;
bit	T0SE	@ (unsigned)&T0STA*8+6;
bit	T0CS	@ (unsigned)&T0STA*8+5;
bit	PS3	@ (unsigned)&T0STA*8+4;
bit	PS2	@ (unsigned)&T0STA*8+3;
bit	PS1	@ (unsigned)&T0STA*8+2;
bit	PS0	@ (unsigned)&T0STA*8+1;

/*	CPUSTA bits	*/
volatile bit	STKAV	@ (unsigned)&CPUSTA*8+5;
volatile bit	GLINTD	@ (unsigned)&CPUSTA*8+4;
volatile bit	TO	@ (unsigned)&CPUSTA*8+3;
volatile bit	PD	@ (unsigned)&CPUSTA*8+2;

/*	INTSTA bits	*/
volatile bit	PEIF	@ (unsigned)&INTSTA*8+7;
volatile bit	T0CKIF	@ (unsigned)&INTSTA*8+6;
volatile bit	T0IF	@ (unsigned)&INTSTA*8+5;
volatile bit	INTF	@ (unsigned)&INTSTA*8+4;
         bit	PEIE	@ (unsigned)&INTSTA*8+3;
         bit	T0CKIE	@ (unsigned)&INTSTA*8+2;
         bit	T0IE	@ (unsigned)&INTSTA*8+1;
         bit	INTE	@ (unsigned)&INTSTA*8+0;

/*	PORTA bits	*/
volatile bit	RBPU	@ (unsigned)&PORTA*8+7;
volatile bit	RA5	@ (unsigned)&PORTA*8+5;
volatile bit	RA4	@ (unsigned)&PORTA*8+4;
volatile bit	RA3	@ (unsigned)&PORTA*8+3;
volatile bit	RA2	@ (unsigned)&PORTA*8+2;
volatile bit	RA1	@ (unsigned)&PORTA*8+1;
volatile bit	TOCKI	@ (unsigned)&PORTA*8+1;
volatile bit	RA0	@ (unsigned)&PORTA*8+0;
volatile bit	INT	@ (unsigned)&PORTA*8+0;

/*      PORTB bits      */
volatile bit	RB7	@ (unsigned)&PORTB*8+7;
volatile bit	RB6	@ (unsigned)&PORTB*8+6;
volatile bit	RB5	@ (unsigned)&PORTB*8+5;
volatile bit	RB4	@ (unsigned)&PORTB*8+4;
volatile bit	RB3	@ (unsigned)&PORTB*8+3;
volatile bit	RB2	@ (unsigned)&PORTB*8+2;
volatile bit	RB1	@ (unsigned)&PORTB*8+1;
volatile bit	RB0	@ (unsigned)&PORTB*8+0;

/*	RCSTA bits	*/
		bit	SPEN	@ (unsigned)&RCSTA*8+7;
volatile bit	RX9	@ (unsigned)&RCSTA*8+6;
		bit	SREN	@ (unsigned)&RCSTA*8+5;
		bit	CREN	@ (unsigned)&RCSTA*8+4;
volatile bit	FERR	@ (unsigned)&RCSTA*8+2;
volatile bit	OERR	@ (unsigned)&RCSTA*8+1;
		bit	RX9D	@ (unsigned)&RCSTA*8+0;

/*	TXSTA bits	*/
bit	CSRC	@ (unsigned)&TXSTA*8+7;
bit	TX9	@ (unsigned)&TXSTA*8+6;
bit	TXEN	@ (unsigned)&TXSTA*8+5;
bit	SYNC	@ (unsigned)&TXSTA*8+4;
bit	TRMT	@ (unsigned)&TXSTA*8+1;
bit	TX9D	@ (unsigned)&TXSTA*8+0;

/*      PORTC bits      */
volatile bit	RC7	@ (unsigned)&PORTC*8+7;
volatile bit	RC6	@ (unsigned)&PORTC*8+6;
volatile bit	RC5	@ (unsigned)&PORTC*8+5;
volatile bit	RC4	@ (unsigned)&PORTC*8+4;
volatile bit	RC3	@ (unsigned)&PORTC*8+3;
volatile bit	RC2	@ (unsigned)&PORTC*8+2;
volatile bit	RC1	@ (unsigned)&PORTC*8+1;
volatile bit	RC0	@ (unsigned)&PORTC*8+0;

/*      PORTD bits      */
volatile bit	RD7	@ (unsigned)&PORTD*8+7;
volatile bit	RD6	@ (unsigned)&PORTD*8+6;
volatile bit	RD5	@ (unsigned)&PORTD*8+5;
volatile bit	RD4	@ (unsigned)&PORTD*8+4;
volatile bit	RD3	@ (unsigned)&PORTD*8+3;
volatile bit	RD2	@ (unsigned)&PORTD*8+2;
volatile bit	RD1	@ (unsigned)&PORTD*8+1;
volatile bit	RD0	@ (unsigned)&PORTD*8+0;

/*	PORTE bits	*/
volatile bit	RE2	@ (unsigned)&PORTE*8+2;
volatile bit	RE1	@ (unsigned)&PORTE*8+1;
volatile bit	RE0	@ (unsigned)&PORTE*8+0;

/*	PIR bits	*/
volatile bit	RBIF	@ (unsigned)&PIR*8+7;
volatile bit	TMR3IF	@ (unsigned)&PIR*8+6;
volatile bit	TMR2IF	@ (unsigned)&PIR*8+5;
volatile bit	TMR1IF	@ (unsigned)&PIR*8+4;
volatile bit	CA2IF	@ (unsigned)&PIR*8+3;
volatile bit	CA1IF	@ (unsigned)&PIR*8+2;
volatile bit	TXIF	@ (unsigned)&PIR*8+1;
volatile bit	RCIF	@ (unsigned)&PIR*8+0;

/*	PIE bits	*/
bit	RBIE	@ (unsigned)&PIE*8+7;
bit	TMR3IE	@ (unsigned)&PIE*8+6;
bit	TMR2IE	@ (unsigned)&PIE*8+5;
bit	TMR1IE	@ (unsigned)&PIE*8+4;
bit	CA2IE	@ (unsigned)&PIE*8+3;
bit	CA1IE	@ (unsigned)&PIE*8+2;
bit	TXIE	@ (unsigned)&PIE*8+1;
bit	RCIE	@ (unsigned)&PIE*8+0;

/*	PW1DCL bits	*/
bit	DC1PW1	@ (unsigned)&PW1DCL*8+7;
bit	DC0PW1	@ (unsigned)&PW1DCL*8+6;

/*	PW2DCL	bits	*/
bit	DC1PW2	@ (unsigned)&PW2DCL*8+7;
bit	DC0PW2	@ (unsigned)&PW2DCL*8+6;
bit	TM2PW2	@ (unsigned)&PW2DCL*8+5;

/*	PW1DCH bits	*/
bit	DC9PW1	@ (unsigned)&PW1DCH*8+7;
bit	DC8PW1	@ (unsigned)&PW1DCH*8+6;
bit	DC7PW1	@ (unsigned)&PW1DCH*8+5;
bit	DC6PW1	@ (unsigned)&PW1DCH*8+4;
bit	DC5PW1	@ (unsigned)&PW1DCH*8+3;
bit	DC4PW1	@ (unsigned)&PW1DCH*8+2;
bit	DC3PW1	@ (unsigned)&PW1DCH*8+1;
bit	DC2PW1	@ (unsigned)&PW1DCH*8+0;

/*	PW2DCH bits	*/
bit	DC9PW2	@ (unsigned)&PW2DCH*8+7;
bit	DC8PW2	@ (unsigned)&PW2DCH*8+6;
bit	DC7PW2	@ (unsigned)&PW2DCH*8+5;
bit	DC6PW2	@ (unsigned)&PW2DCH*8+4;
bit	DC5PW2	@ (unsigned)&PW2DCH*8+3;
bit	DC4PW2	@ (unsigned)&PW2DCH*8+2;
bit	DC3PW2	@ (unsigned)&PW2DCH*8+1;
bit	DC2PW2	@ (unsigned)&PW2DCH*8+0;

/*	TCON1 bits	*/
volatile bit	CA2ED1	@ (unsigned)&TCON1*8+7;
volatile bit	CA2ED0	@ (unsigned)&TCON1*8+6;
volatile bit	CA1ED1	@ (unsigned)&TCON1*8+5;
volatile bit	CA1ED0	@ (unsigned)&TCON1*8+4;
         bit	T16	@ (unsigned)&TCON1*8+3;
         bit	TMR3CS	@ (unsigned)&TCON1*8+2;
         bit	TMR2CS	@ (unsigned)&TCON1*8+1;
         bit	TMR1CS	@ (unsigned)&TCON1*8+0;

/*	TCON2 bits	*/
volatile       bit	CA2OVF	@ (unsigned)&TCON2*8+7;
volatile       bit	CA1OVF	@ (unsigned)&TCON2*8+6;
volatile       bit	PWM2ON	@ (unsigned)&TCON2*8+5;
volatile       bit	PWM1ON	@ (unsigned)&TCON2*8+4;
		      bit	CA1	@ (unsigned)&TCON2*8+3;
		      bit	PR3	@ (unsigned)&TCON2*8+3;
	      bit	TMR3ON	@ (unsigned)&TCON2*8+2;
		      bit	TMR2ON	@ (unsigned)&TCON2*8+1;
		      bit	TMR1ON	@ (unsigned)&TCON2*8+0;

#define CONFIG_ADDR 0xFE00

/*watchdog postscaler select*/
#define WDTPS1		0xFFFF
#define WDTPS256	0xFFFB
#define WDTPS64		0xFFF7
#define WDTDIS		0xFFF3

/* Processor mode select */
#ifdef _17C42
#define PROTECT         0xFF5F     		/* code protected microcontroller mode */
#else
#define PROTECT         0x7F5F     		/* code protected microcontroller mode */
#endif
#define MICROPROCESSOR  0xFFFF			/* microprocessor mode */
#define MICROCONTROLLER 0xFFEF			/* microcontroller mode */
#define EXT_MICROCTRL   0xFFBF			/* extended microcontroller mode */

/*osc configurations*/
#define EC		0xFFFF
#define XT		0xFFFE
#define RC		0xFFFD
#define LF		0xFFFC
