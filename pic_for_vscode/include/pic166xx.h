
#ifndef	_HTC_H_
#warning Header file pic166xx.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip :
 *	PIC 16C641 chip
 *	PIC 16C642 chip
 *	PIC 16C661 chip
 *	PIC 16C662 chip
 *	Midrange Microcontrollers
 */

volatile unsigned char INDF	@ 0x00;
volatile unsigned char TMR0	@ 0x01;
volatile unsigned char RTCC	@ 0x01;
volatile unsigned char PCL	@ 0x02;
volatile unsigned char STATUS	@ 0x03;
         unsigned char FSR	@ 0x04;
volatile unsigned char PORTA	@ 0x05;
volatile unsigned char PORTB	@ 0x06;
volatile unsigned char PORTC	@ 0x07;
         unsigned char PCLATH	@ 0x0A;
volatile unsigned char INTCON	@ 0x0B;
volatile unsigned char PIR1	@ 0x0C;
volatile unsigned char CMCON	@ 0x1F;

         unsigned char      	OPTION	@ 0x81;
volatile	unsigned char      	TRISA	@ 0x85;
volatile	unsigned char      	TRISB	@ 0x86;
volatile	unsigned char      	TRISC	@ 0x87;
volatile unsigned char      	PIE1	@ 0x8C;
volatile unsigned char      	PCON	@ 0x8E;
volatile unsigned char      	VRCON	@ 0x9F;

#if defined(_16C661) || defined(_16C662)
	volatile unsigned char PORTD	@ 0x08;
	volatile unsigned char PORTE	@ 0x09;
        volatile unsigned char            TRISD   @ 0x88;
        volatile unsigned char            TRISE   @ 0x89;
	
	/*	PORTD bits	*/
	volatile bit	RD7	@ (unsigned)&PORTD*8+7;
	volatile bit	RD6	@ (unsigned)&PORTD*8+6;
	volatile bit	RD5	@ (unsigned)&PORTD*8+5;
	volatile bit	RD4	@ (unsigned)&PORTD*8+4;
	volatile bit	RD3	@ (unsigned)&PORTD*8+3;
	volatile bit	RD2	@ (unsigned)&PORTD*8+2;
	volatile bit	RD1	@ (unsigned)&PORTD*8+1;
	volatile bit	RD0	@ (unsigned)&PORTD*8+0;

	/*      PORTE bits      */
	volatile bit      RE2     @ (unsigned)&PORTE*8+2;
	volatile bit      RE1     @ (unsigned)&PORTE*8+1;
	volatile bit      RE0     @ (unsigned)&PORTE*8+0;

        /*      TRISD bits      */
        volatile       bit        TRISD7  @ (unsigned)&TRISD*8+7;
        volatile       bit        TRISD6  @ (unsigned)&TRISD*8+6;
        volatile       bit        TRISD5  @ (unsigned)&TRISD*8+5;
        volatile       bit        TRISD4  @ (unsigned)&TRISD*8+4;
        volatile       bit        TRISD3  @ (unsigned)&TRISD*8+3;
        volatile       bit        TRISD2  @ (unsigned)&TRISD*8+2;
        volatile       bit        TRISD1  @ (unsigned)&TRISD*8+1;
        volatile       bit        TRISD0  @ (unsigned)&TRISD*8+0;

        /*      TRISE bits      */
        volatile       bit        IBF     @ (unsigned)&TRISE*8+7;
        volatile       bit        OBIF    @ (unsigned)&TRISE*8+6;
        volatile       bit        IBOV    @ (unsigned)&TRISE*8+5;
        volatile       bit        PSPMODE @ (unsigned)&TRISE*8+4;
        volatile       bit        TRISE2  @ (unsigned)&TRISE*8+2;
        volatile       bit        TRISE1  @ (unsigned)&TRISE*8+1;
        volatile       bit        TRISE0  @ (unsigned)&TRISE*8+0;

#endif  

/*	STATUS bits	*/
volatile bit     RP0     @ (unsigned)&STATUS*8+5;
volatile bit	TO	@ (unsigned)&STATUS*8+4;
volatile bit	PD	@ (unsigned)&STATUS*8+3;
volatile bit     ZERO    @ (unsigned)&STATUS*8+2;
volatile bit     DC      @ (unsigned)&STATUS*8+1;
volatile bit     CARRY   @ (unsigned)&STATUS*8+0;

/*	PORTA bits	*/
volatile bit	RA5	@ (unsigned)&PORTA*8+5;
volatile bit	RA4	@ (unsigned)&PORTA*8+4;
volatile bit	RA3	@ (unsigned)&PORTA*8+3;
volatile bit	RA2	@ (unsigned)&PORTA*8+2;
volatile bit	RA1	@ (unsigned)&PORTA*8+1;
volatile bit	RA0	@ (unsigned)&PORTA*8+0;

/*	PORTB bits	*/
volatile bit	RB7	@ (unsigned)&PORTB*8+7;
volatile bit	RB6	@ (unsigned)&PORTB*8+6;
volatile bit	RB5	@ (unsigned)&PORTB*8+5;
volatile bit	RB4	@ (unsigned)&PORTB*8+4;
volatile bit	RB3	@ (unsigned)&PORTB*8+3;
volatile bit	RB2	@ (unsigned)&PORTB*8+2;
volatile bit	RB1	@ (unsigned)&PORTB*8+1;
volatile bit	RB0	@ (unsigned)&PORTB*8+0;

/*	PORTC bits	*/
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
#if defined(_16C661) || defined(_16C662)
volatile bit	PSPIF	@ (unsigned)&PIR1*8+7;
#endif  
volatile bit	CMIF	@ (unsigned)&PIR1*8+6;

/*	CMCON bits	*/
volatile bit 	C2OUT	@ (unsigned)&CMCON*8+7;
volatile bit 	C1OUT	@ (unsigned)&CMCON*8+6;
volatile bit 	CIS  	@ (unsigned)&CMCON*8+3;
volatile bit 	CM2  	@ (unsigned)&CMCON*8+2;
volatile bit 	CM1  	@ (unsigned)&CMCON*8+1;
volatile bit 	CM0  	@ (unsigned)&CMCON*8+0;

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
volatile       bit        TRISA5  @ (unsigned)&TRISA*8+5;
volatile       bit        TRISA4  @ (unsigned)&TRISA*8+4;
volatile       bit        TRISA3  @ (unsigned)&TRISA*8+3;
volatile       bit        TRISA2  @ (unsigned)&TRISA*8+2;
volatile       bit        TRISA1  @ (unsigned)&TRISA*8+1;
volatile       bit        TRISA0  @ (unsigned)&TRISA*8+0;

/*      TRISB bits      */
volatile       bit        TRISB7  @ (unsigned)&TRISB*8+7;
volatile       bit        TRISB6  @ (unsigned)&TRISB*8+6;
volatile       bit        TRISB5  @ (unsigned)&TRISB*8+5;
volatile       bit        TRISB4  @ (unsigned)&TRISB*8+4;
volatile       bit        TRISB3  @ (unsigned)&TRISB*8+3;
volatile       bit        TRISB2  @ (unsigned)&TRISB*8+2;
volatile       bit        TRISB1  @ (unsigned)&TRISB*8+1;
volatile       bit        TRISB0  @ (unsigned)&TRISB*8+0;

/*      TRISC bits      */
volatile       bit        TRISC7  @ (unsigned)&TRISC*8+7;
volatile       bit        TRISC6  @ (unsigned)&TRISC*8+6;
volatile       bit        TRISC5  @ (unsigned)&TRISC*8+5;
volatile       bit        TRISC4  @ (unsigned)&TRISC*8+4;
volatile       bit        TRISC3  @ (unsigned)&TRISC*8+3;
volatile       bit        TRISC2  @ (unsigned)&TRISC*8+2;
volatile       bit        TRISC1  @ (unsigned)&TRISC*8+1;
volatile       bit        TRISC0  @ (unsigned)&TRISC*8+0;

/*	PIE1 bits	*/
#if defined(_16C661) || defined(_16C662)
volatile       bit	PSPIE	@ (unsigned)&PIE1*8+7;
#endif  
volatile       bit	CMIE	@ (unsigned)&PIE1*8+6;

/*	PCON bits	*/
volatile       bit	MPECS	@ (unsigned)&PCON*8+7;	/* MPEEN */
volatile       bit	PER	@ (unsigned)&PCON*8+2;
volatile       bit	POR	@ (unsigned)&PCON*8+1;	
volatile       bit	BOR	@ (unsigned)&PCON*8+0;

/*	VRCON bits	*/
volatile       bit	VREN	@ (unsigned)&VRCON*8+7;
volatile       bit	VROE	@ (unsigned)&VRCON*8+6;
volatile       bit	VRR	@ (unsigned)&VRCON*8+5;
volatile       bit	VR3	@ (unsigned)&VRCON*8+3;
volatile       bit	VR2	@ (unsigned)&VRCON*8+2;
volatile       bit	VR1	@ (unsigned)&VRCON*8+1;
volatile       bit	VR0	@ (unsigned)&VRCON*8+0;

#define CONFIG_ADDR	0x2007

/*osc configurations*/
#define RC              0x3FFF	// resistor/capacitor
#define HS              0x3FFE	// high speed crystal/resonator
#define XT              0x3FFD	// crystal/resonator
#define LP              0x3FFC	// low power crystal/resonator

/*code protection*/
#define UNPROTECT	0x3FFF	// do not protect the code
#define PROTECT50	0x2AEF	// code protection 50%
#define PROTECT75	0x15DF	// code protection 75%
#define PROTECT		0x00CF	// code protection 100%

/*watchdog*/
#define WDTEN		0x3FFF	// enable watchdog timer
#define WDTDIS		0x3FFB	// disable watchdog timer

/*Power up timer*/
#define PWRTEN		0x3FF7	// enable power up timer
#define PWRTDIS		0x3FFF	// disable power up timer

/*Brown out reset*/
#define BOREN		0x3FFF	// enable brown out reset
#define BORDIS		0x3FBF	// diasble brown out reset

/*Memory Parity Error Enable*/
#define MPEEN		0x3FFF	// enable memory parity error
#define MPEDIS		0x3F7F	// disable memory parity error
