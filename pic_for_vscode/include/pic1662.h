
#ifndef	_HTC_H_
#warning Header file pic1662.h included directly. Use #include <htc.h> instead.
#endif

/* 
 *	Header file for the Microchip :
 *	PIC 16C62 chip
 *	PIC 16C62A chip
 *	PIC 16C62B chip
 *	PIC 16CR62
 *	Midrange Microcontrollers
 */

volatile unsigned char INDF	@ 0x00;
volatile unsigned char TMR0	@ 0x01;
volatile unsigned char PCL	@ 0x02;
volatile unsigned char STATUS	@ 0x03;
         unsigned char FSR	@ 0x04;
volatile unsigned char PORTA	@ 0x05;
volatile unsigned char PORTB	@ 0x06;
volatile unsigned char PORTC	@ 0x07; 
         unsigned char PCLATH	@ 0x0A;
volatile unsigned char INTCON	@ 0x0B;
volatile unsigned char PIR1	@ 0x0C;
volatile unsigned char TMR1L	@ 0x0E;
volatile unsigned char TMR1H	@ 0x0F;
volatile unsigned char T1CON	@ 0x10;
volatile unsigned char TMR2	@ 0x11;
volatile unsigned char T2CON	@ 0x12;
volatile unsigned char SSPBUF	@ 0x13;
volatile unsigned char SSPCON	@ 0x14;
volatile unsigned char CCPR1L	@ 0x15;
volatile unsigned char CCPR1H	@ 0x16;
volatile unsigned char CCP1CON	@ 0x17;

         unsigned char      	OPTION	@ 0x81;
volatile	unsigned char      	TRISA	@ 0x85;
volatile	unsigned char      	TRISB	@ 0x86;
volatile	unsigned char      	TRISC	@ 0x87;
volatile unsigned char      	PIE1	@ 0x8C;
volatile unsigned char      	PCON	@ 0x8E;
volatile unsigned char      	PR2	@ 0x92;
volatile unsigned char      	SSPADD	@ 0x93;
volatile unsigned char      	SSPSTAT	@ 0x94;

/*	STATUS bits	*/
volatile bit	RP0	@ (unsigned)&STATUS*8+5;
volatile bit	TO	@ (unsigned)&STATUS*8+4;
volatile bit	PD	@ (unsigned)&STATUS*8+3;
volatile bit	ZERO	@ (unsigned)&STATUS*8+2;
volatile bit	DC	@ (unsigned)&STATUS*8+1;
volatile bit	CARRY	@ (unsigned)&STATUS*8+0;

/*      PORTA bits      */
volatile bit	RA5	@ (unsigned)&PORTA*8+5;
volatile bit	RA4	@ (unsigned)&PORTA*8+4;
volatile bit	RA3	@ (unsigned)&PORTA*8+3;
volatile bit	RA2	@ (unsigned)&PORTA*8+2;
volatile bit	RA1	@ (unsigned)&PORTA*8+1;
volatile bit	RA0	@ (unsigned)&PORTA*8+0;
 
/*      PORTB bits      */
volatile bit	RB7	@ (unsigned)&PORTB*8+7;
volatile bit	RB6	@ (unsigned)&PORTB*8+6;
volatile bit	RB5	@ (unsigned)&PORTB*8+5;
volatile bit	RB4	@ (unsigned)&PORTB*8+4;
volatile bit	RB3	@ (unsigned)&PORTB*8+3;
volatile bit	RB2	@ (unsigned)&PORTB*8+2;
volatile bit	RB1	@ (unsigned)&PORTB*8+1;
volatile bit	RB0	@ (unsigned)&PORTB*8+0;

/*      PORTC bits      */
volatile bit	RC7	@ (unsigned)&PORTC*8+7;
volatile bit	RC6	@ (unsigned)&PORTC*8+6;
volatile bit	RC5	@ (unsigned)&PORTC*8+5;
volatile bit	RC4	@ (unsigned)&PORTC*8+4;
volatile bit	RC3	@ (unsigned)&PORTC*8+3;
volatile bit	RC2	@ (unsigned)&PORTC*8+2;
volatile bit	RC1	@ (unsigned)&PORTC*8+1;
volatile bit	RC0	@ (unsigned)&PORTC*8+0;

/*	INTCON bits	*/
volatile bit	GIE	@ (unsigned)&INTCON*8+7;
volatile bit	PEIE	@ (unsigned)&INTCON*8+6;
volatile bit	T0IE	@ (unsigned)&INTCON*8+5;
volatile bit	INTE	@ (unsigned)&INTCON*8+4;
volatile bit	RBIE	@ (unsigned)&INTCON*8+3;
volatile bit	T0IF	@ (unsigned)&INTCON*8+2;
volatile bit	INTF	@ (unsigned)&INTCON*8+1;
volatile bit	RBIF	@ (unsigned)&INTCON*8+0;

/*	PIR1 bits	*/
volatile bit	SSPIF	@ (unsigned)&PIR1*8+3;
volatile bit	CCP1IF	@ (unsigned)&PIR1*8+2;
volatile bit	TMR2IF	@ (unsigned)&PIR1*8+1;
volatile bit	TMR1IF	@ (unsigned)&PIR1*8+0;

/*	T1CON bits	*/
volatile bit	T1CKPS1	@ (unsigned)&T1CON*8+5;
volatile bit	T1CKPS0	@ (unsigned)&T1CON*8+4;
volatile bit	T1OSCEN	@ (unsigned)&T1CON*8+3;
volatile bit	T1SYNC 	@ (unsigned)&T1CON*8+2;
volatile bit	TMR1CS 	@ (unsigned)&T1CON*8+1;
volatile bit	TMR1ON 	@ (unsigned)&T1CON*8+0;

/*	T2CON bits	*/
volatile bit	TOUTPS3	@ (unsigned)&T2CON*8+6;
volatile bit	TOUTPS2	@ (unsigned)&T2CON*8+5;
volatile bit	TOUTPS1	@ (unsigned)&T2CON*8+4;
volatile bit	TOUTPS0	@ (unsigned)&T2CON*8+3;
volatile bit	TMR2ON 	@ (unsigned)&T2CON*8+2;
volatile bit	T2CKPS1	@ (unsigned)&T2CON*8+1;
volatile bit	T2CKPS0	@ (unsigned)&T2CON*8+0;

/*	SSPCON bits	*/
volatile bit	WCOL	@ (unsigned)&SSPCON*8+7;
volatile bit	SSPOV	@ (unsigned)&SSPCON*8+6;
volatile bit	SSPEN	@ (unsigned)&SSPCON*8+5;
volatile bit	CKP	@ (unsigned)&SSPCON*8+4;
volatile bit	SSPM3	@ (unsigned)&SSPCON*8+3;
volatile bit	SSPM2	@ (unsigned)&SSPCON*8+2;
volatile bit	SSPM1	@ (unsigned)&SSPCON*8+1;
volatile bit	SSPM0	@ (unsigned)&SSPCON*8+0;

/*	CCP1CON bits	*/
volatile bit	CCP1X	@ (unsigned)&CCP1CON*8+5;
volatile bit	CCP1Y	@ (unsigned)&CCP1CON*8+4;
volatile bit	CCP1M3	@ (unsigned)&CCP1CON*8+3;
volatile bit	CCP1M2	@ (unsigned)&CCP1CON*8+2;
volatile bit	CCP1M1	@ (unsigned)&CCP1CON*8+1;
volatile bit	CCP1M0	@ (unsigned)&CCP1CON*8+0;

/* 	OPTION bits	*/
      bit	RBPU	@ (unsigned)&OPTION*8+7;
      bit	INTEDG	@ (unsigned)&OPTION*8+6;
      bit	T0CS	@ (unsigned)&OPTION*8+5;
      bit	T0SE	@ (unsigned)&OPTION*8+4;
      bit	PSA	@ (unsigned)&OPTION*8+3;
      bit	PS2	@ (unsigned)&OPTION*8+2;
      bit	PS1	@ (unsigned)&OPTION*8+1;
      bit	PS0	@ (unsigned)&OPTION*8+0;

/*      TRISA bits      */
volatile       bit	TRISA5  @ (unsigned)&TRISA*8+5;
volatile       bit	TRISA4  @ (unsigned)&TRISA*8+4;
volatile       bit	TRISA3  @ (unsigned)&TRISA*8+3;
volatile       bit	TRISA2  @ (unsigned)&TRISA*8+2;
volatile       bit	TRISA1  @ (unsigned)&TRISA*8+1;
volatile       bit	TRISA0  @ (unsigned)&TRISA*8+0;

/*      TRISB bits      */
volatile       bit	TRISB7  @ (unsigned)&TRISB*8+7;
volatile       bit	TRISB6  @ (unsigned)&TRISB*8+6;
volatile       bit	TRISB5  @ (unsigned)&TRISB*8+5;
volatile       bit	TRISB4  @ (unsigned)&TRISB*8+4;
volatile       bit	TRISB3  @ (unsigned)&TRISB*8+3;
volatile       bit	TRISB2  @ (unsigned)&TRISB*8+2;
volatile       bit	TRISB1  @ (unsigned)&TRISB*8+1;
volatile       bit	TRISB0  @ (unsigned)&TRISB*8+0;

/*      TRISC bits      */
volatile       bit	TRISC7  @ (unsigned)&TRISC*8+7;
volatile       bit	TRISC6  @ (unsigned)&TRISC*8+6;
volatile       bit	TRISC5  @ (unsigned)&TRISC*8+5;
volatile       bit	TRISC4  @ (unsigned)&TRISC*8+4;
volatile       bit	TRISC3  @ (unsigned)&TRISC*8+3;
volatile       bit	TRISC2  @ (unsigned)&TRISC*8+2;
volatile       bit	TRISC1  @ (unsigned)&TRISC*8+1;
volatile       bit	TRISC0  @ (unsigned)&TRISC*8+0;

/*	PIE1 bits	*/
volatile       bit	SSPIE	@ (unsigned)&PIE1*8+3;
volatile       bit	CCP1IE	@ (unsigned)&PIE1*8+2;
volatile       bit	TMR2IE	@ (unsigned)&PIE1*8+1;
volatile       bit	TMR1IE	@ (unsigned)&PIE1*8+0;

/*	PCON bits	*/
volatile       bit	POR	@ (unsigned)&PCON*8+1;	
#ifndef _16C62
volatile       bit	BOR	@ (unsigned)&PCON*8+0;
#endif

/*      SSPSTAT bits    */
volatile       bit	DA	@ (unsigned)&SSPSTAT*8+5;
volatile       bit	STOP	@ (unsigned)&SSPSTAT*8+4;
volatile       bit	START 	@ (unsigned)&SSPSTAT*8+3;
volatile       bit	RW	@ (unsigned)&SSPSTAT*8+2;
volatile       bit	UA	@ (unsigned)&SSPSTAT*8+1;
volatile       bit	BF	@ (unsigned)&SSPSTAT*8+0;
#ifdef __STAT_BACKWARD_COMPATIBILITY
#define STAT_DA	DA
#define STAT_P	STOP
#define STAT_S	START
#define STAT_RW	RW
#define STAT_UA	UA
#define STAT_BF	BF
#endif

#define CONFIG_ADDR	0x2007

/*power up timer*/
#if defined(_16C62A) || defined(_16C62B) || defined(_16CR62)
#define PWRTEN		0x3FF7	// enable power up timer
#define PWRTDIS		0x3FFF	// disable power up timer
#else
#define PWRTEN		0x3FFF	// enable power up timer
#define PWRTDIS		0x3FF7	// disable power up timer
#endif

/*osc configurations*/
#define RC              0x3FFF	// resistor/capacitor
#define HS              0x3FFE	// high speed crystal/resonator
#define XT              0x3FFD	// crystal/resonator
#define LP              0x3FFC	// low power crystal/resonator

/*watchdog*/
#define WDTEN		0x3FFF	// enable watchdog timer
#define WDTDIS		0x3FFB	// disable watchdog timer

/* code protection */
#define UNPROTECT	0x3FFF 	// do not protect code 
#if defined(_16C62A) || defined(_16C62B) || defined(_16CR62)
#define BODEN_ON	0x3FFF	// use alternative definition
#define BODEN_OFF	0x3FBF	// use alternative definition
// alternative definitions
#define BOREN		0x3FFF	// Brown out reset enabled
#define BORDIS		0x3FBF	// Brown out reset disabled

#define PROTECT75	0x15DF	//upper 3/4 program memory protected*/
#define PROTECT50	0x2AEF	//upper half of program memory protected*/
#define PROTECT		0x00CF	//all memory protect*/
#else
#define PROTECT75	0x3FDF	//upper 3/4 program memory protected*/
#define PROTECT50	0x3FEF	//upper half of program memory protected */
#define PROTECT		0x3FCF	//all memory protect*/
#endif
