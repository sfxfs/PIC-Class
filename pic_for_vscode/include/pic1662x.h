
#ifndef	_HTC_H_
#warning Header file pic1662x.h included directly. Use #include <htc.h> instead.
#endif

/* 
 *	Header file for the Microchip
 *	PIC 16C620 chip
 *	PIC 16C620A chip
 *	PIC 16CR620A chip
 *	PIC 16C621 chip
 *	PIC 16C621A chip
 *	PIC 16C622 chip
 *	PIC 16C622A chip
 *	PIC 16CE623 chip
 *	PIC 16CE624 chip
 *	PIC 16CE625 chip
 *	Midrange Microcontrollers
 */

volatile unsigned char INDF	@ 0x00;
volatile unsigned char TMR0	@ 0x01;
volatile unsigned char PCL	@ 0x02;
volatile unsigned char STATUS	@ 0x03;
		unsigned char FSR	@ 0x04;
volatile unsigned char PORTA	@ 0x05;
volatile unsigned char PORTB	@ 0x06;
		unsigned char PCLATH	@ 0x0A;
volatile unsigned char INTCON	@ 0x0B;
volatile unsigned char PIR1	@ 0x0C;
volatile unsigned char CMCON	@ 0x1F;

		unsigned char      	OPTION	@ 0x81;
volatile	unsigned char      	TRISA	@ 0x85;
volatile	unsigned char      	TRISB	@ 0x86;
volatile unsigned char      	PIE1	@ 0x8C;
volatile unsigned char      	PCON	@ 0x8E;
volatile unsigned char      	VRCON	@ 0x9F;
#if defined(_16CE623) || defined(_16CE624) || defined(_16CE625)
		unsigned char      	EEINTF	@ 0x90;
#endif

/*	STATUS bits	*/
volatile bit	RP0	@ (unsigned)&STATUS*8+5;
volatile bit	TO	@ (unsigned)&STATUS*8+4;
volatile bit	PD	@ (unsigned)&STATUS*8+3;
volatile bit	ZERO	@ (unsigned)&STATUS*8+2;
volatile bit	DC	@ (unsigned)&STATUS*8+1;
volatile bit	CARRY	@ (unsigned)&STATUS*8+0;

/*	PORTA bits	*/
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
volatile bit	CMIF	@ (unsigned)&PIR1*8+6;

/*	CMCON bits	*/
volatile bit	C2OUT	@ (unsigned)&CMCON*8+7;
volatile bit	C1OUT	@ (unsigned)&CMCON*8+6;
volatile bit	CIS  	@ (unsigned)&CMCON*8+3;
volatile bit	CM2  	@ (unsigned)&CMCON*8+2;
volatile bit	CM1  	@ (unsigned)&CMCON*8+1;
volatile bit	CM0  	@ (unsigned)&CMCON*8+0;

/* 	OPTION bits	*/
      bit	RBPU	@ (unsigned)&OPTION*8+7;
      bit	INTEDG	@ (unsigned)&OPTION*8+6;
      bit	T0CS	@ (unsigned)&OPTION*8+5;
      bit	T0SE	@ (unsigned)&OPTION*8+4;
      bit	PSA	@ (unsigned)&OPTION*8+3;
      bit	PS2	@ (unsigned)&OPTION*8+2;
      bit	PS1	@ (unsigned)&OPTION*8+1;
      bit	PS0	@ (unsigned)&OPTION*8+0;

/*	TRISA bits	*/
volatile       bit	TRISA4	@ (unsigned)&TRISA*8+4;
volatile       bit	TRISA3	@ (unsigned)&TRISA*8+3;
volatile       bit	TRISA2	@ (unsigned)&TRISA*8+2;
volatile       bit	TRISA1	@ (unsigned)&TRISA*8+1;
volatile       bit	TRISA0	@ (unsigned)&TRISA*8+0;

/*	TRISB bits	*/
volatile       bit	TRISB7	@ (unsigned)&TRISB*8+7;
volatile       bit	TRISB6	@ (unsigned)&TRISB*8+6;
volatile       bit	TRISB5	@ (unsigned)&TRISB*8+5;
volatile       bit	TRISB4	@ (unsigned)&TRISB*8+4;
volatile       bit	TRISB3	@ (unsigned)&TRISB*8+3;
volatile       bit	TRISB2	@ (unsigned)&TRISB*8+2;
volatile       bit	TRISB1	@ (unsigned)&TRISB*8+1;
volatile       bit	TRISB0	@ (unsigned)&TRISB*8+0;

/*	PIE1 bits	*/
volatile       bit	CMIE	@ (unsigned)&PIE1*8+6;

/*	PCON bits	*/
volatile       bit	POR	@ (unsigned)&PCON*8+1;	
volatile       bit	BOR	@ (unsigned)&PCON*8+0;

#if defined(_16CE623) || defined(_16CE624) || defined(_16CE625)
/*	EEINTF bits	*/
	      bit	EESCL	@ (unsigned)&EEINTF*8+2;
	      bit	EESDA	@ (unsigned)&EEINTF*8+1;
	      bit	EEVDD	@ (unsigned)&EEINTF*8+0;
#endif

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

/*watchdog*/
#define WDTEN		0x3FFF	// enable watchdog timer
#define WDTDIS		0x3FFB	// disable watchdog timer

/*brown out reset*/
#define BOREN		0x3FFF	// enable brown out reset
#define BORDIS		0x3FBF	// disable brown out reset

/* code protection */
#define UNPROTECT	0x3FFF		/* unprotected */
#define PROTECT50	0x2AEF		/* upper half code memory protected */
#define PROTECT75	0x15DF		/* upper three quarters code memory protected */
#define PROTECT		0x00CF		/* all memory code is protected */

/*Power Up Timer*/
#define PWRTEN		0x3FF7	// power up timer enable
#define PWRTDIS		0x3FFF	// power up timer disable
