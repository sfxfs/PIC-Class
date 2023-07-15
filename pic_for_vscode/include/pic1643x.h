
#ifndef	_HTC_H_
#warning Header file pic1643x.h included directly. Use #include <htc.h> instead.
#endif

/*
 * 	Header file for the Microchip
 * 	PIC 16C432 chip
 * 	PIC 16C433 chip
 * 	Midrange Microcontrollers
 */

volatile	unsigned char	INDF	@ 0x00;
volatile	unsigned char	TMR0	@ 0x01;
volatile	unsigned char 	PCL	@ 0x02;
volatile unsigned char	STATUS	@ 0x03;
		unsigned char	FSR	@ 0x04;
#if	defined(_16C432)
volatile unsigned char	PORTA	@ 0x05;
volatile	unsigned char	PORTB	@ 0x06;
#endif
#if 	defined(_16C433)
volatile	unsigned char	GPIO	@ 0x05;
#endif
		unsigned char	PCLATH	@ 0x0A;
volatile	unsigned char	INTCON	@ 0x0B;
volatile	unsigned char	PIR1	@ 0x0C;
#if	defined(_16C433)
volatile	unsigned char	ADRES	@ 0x1E;
volatile	unsigned char	ADCON0	@ 0x1F;
#endif
#if	defined(_16C432)
volatile	unsigned char	CMCON	@ 0x1F;
#endif

		unsigned char      	OPTION	@ 0x81;
#if 	defined(_16C432)
	unsigned char      	TRISA	@ 0x85;
		unsigned char      	TRISB	@ 0x86;
#endif
#if	defined(_16C433)
	unsigned char      	TRIS	@ 0x85;
#endif
volatile unsigned char      	PIE1	@ 0x8C;
volatile	unsigned char      	PCON	@ 0x8E;
#if	defined(_16C433)
		unsigned char       	OSCCAL	@ 0x8F;
volatile	unsigned char      	ADCON1	@ 0x9F;
#endif
#if	defined(_16C432)
volatile unsigned char      	LININTF	@ 0x90;
volatile unsigned char      	VRCON	@ 0x9F;
#endif


/*	TMR0 bits	*/
		bit	TMR07	@ (unsigned)&TMR0*8+7;
		bit	TMR06	@ (unsigned)&TMR0*8+6;
		bit	TMR05	@ (unsigned)&TMR0*8+5;
		bit	TMR04	@ (unsigned)&TMR0*8+4;
		bit	TMR03	@ (unsigned)&TMR0*8+3;
		bit	TMR02	@ (unsigned)&TMR0*8+2;
		bit	TMR01	@ (unsigned)&TMR0*8+1;
		bit	TMR00	@ (unsigned)&TMR0*8+0;

/* 	PCL bits	*/
		bit	PCL7	@ (unsigned)&PCL*8+7;
		bit	PCL6	@ (unsigned)&PCL*8+6;
		bit	PCL5	@ (unsigned)&PCL*8+5;
		bit	PCL4	@ (unsigned)&PCL*8+4;
		bit	PCL3	@ (unsigned)&PCL*8+3;
		bit	PCL2	@ (unsigned)&PCL*8+2;
		bit	PCL1	@ (unsigned)&PCL*8+1;
		bit	PCL0	@ (unsigned)&PCL*8+0;

/*	STATUS bits	*/
volatile bit	IRP	@ (unsigned)&STATUS*8+7;
volatile bit	RP1	@ (unsigned)&STATUS*8+6;
volatile bit	RP0	@ (unsigned)&STATUS*8+5;
volatile bit	TO	@ (unsigned)&STATUS*8+4;
volatile bit	PD	@ (unsigned)&STATUS*8+3;
volatile bit	ZERO	@ (unsigned)&STATUS*8+2;
volatile bit	DC	@ (unsigned)&STATUS*8+1;
volatile bit	CARRY	@ (unsigned)&STATUS*8+0;

#if	defined(_16C432)
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
#endif

#if	defined(_16C433)
/*	GPIO bits	*/
volatile bit	LINTX	@ (unsigned)&GPIO*8+7;
volatile bit	LINRX	@ (unsigned)&GPIO*8+6;
volatile bit	GP5	@ (unsigned)&GPIO*8+5;
volatile bit	GP4	@ (unsigned)&GPIO*8+4;
volatile bit	GP3	@ (unsigned)&GPIO*8+3;
volatile bit	GP2	@ (unsigned)&GPIO*8+2;
volatile bit	GP1	@ (unsigned)&GPIO*8+1;
volatile bit	GP0	@ (unsigned)&GPIO*8+0;
#endif

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
#if 	defined(_16C432)
volatile bit	CMIF	@ (unsigned)&PIR1*8+6;
#endif
#if	defined(_16C433)
volatile bit	ADIF	@ (unsigned)&PIR1*8+6;
#endif

#if	defined(_16C433)
/*	ADRES bits	*/
volatile bit	ADRES7	@ (unsigned)&ADRES*8+7;
volatile bit	ADRES6	@ (unsigned)&ADRES*8+6;
volatile bit	ADRES5	@ (unsigned)&ADRES*8+5;
volatile bit	ADRES4	@ (unsigned)&ADRES*8+4;
volatile bit	ADRES3	@ (unsigned)&ADRES*8+3;
volatile bit	ADRES2	@ (unsigned)&ADRES*8+2;
volatile bit	ADRES1	@ (unsigned)&ADRES*8+1;
volatile bit	ADRES0	@ (unsigned)&ADRES*8+0;

/*	ADCON0 bits	*/
volatile bit	ADCS1	@ (unsigned)&ADCON0*8+7;
volatile bit	ADCS0	@ (unsigned)&ADCON0*8+6;
volatile bit	CHS1	@ (unsigned)&ADCON0*8+4;
volatile bit	CHS0	@ (unsigned)&ADCON0*8+3;
volatile bit	GO_DONE	@ (unsigned)&ADCON0*8+2;
volatile bit	ADON	@ (unsigned)&ADCON0*8+0;
#endif

/*	CMCON bits	*/
#if	defined(_16C432)
volatile bit	C2OUT	@ (unsigned)&CMCON*8+7;
volatile bit 	C1OUT	@ (unsigned)&CMCON*8+6;
volatile bit	CIS	@ (unsigned)&CMCON*8+3;
volatile bit	CM2	@ (unsigned)&CMCON*8+2;
volatile bit	CM1	@ (unsigned)&CMCON*8+1;
volatile bit	CM0	@ (unsigned)&CMCON*8+0;
#endif

/*	OPTION bits	*/
#if	defined(_16C432)
volatile bit      	RBPU	@ (unsigned)&OPTION*8+7;
#endif
#if	defined(_16C433)
volatile bit      	GPPU	@ (unsigned)&OPTION*8+7;
#endif
volatile bit      	INTEDG	@ (unsigned)&OPTION*8+6;
volatile bit      	T0CS	@ (unsigned)&OPTION*8+5;
volatile bit      	T0SE	@ (unsigned)&OPTION*8+4;
volatile bit      	PSA	@ (unsigned)&OPTION*8+3;
volatile bit      	PS2	@ (unsigned)&OPTION*8+2;
volatile bit      	PS1	@ (unsigned)&OPTION*8+1;
volatile bit      	PS0	@ (unsigned)&OPTION*8+0;

#if	defined(_16C432)
/*	TRISA	bits	*/
volatile bit      	TRISA4	@ (unsigned)&TRISA*8+4;
volatile bit      	TRISA3	@ (unsigned)&TRISA*8+3;
volatile bit      	TRISA2	@ (unsigned)&TRISA*8+2;
volatile bit      	TLINRX	@ (unsigned)&TRISA*8+1;
volatile bit      	TRISA0	@ (unsigned)&TRISA*8+0;

/*	TRISB bits 	*/
volatile bit      	TRISB7	@ (unsigned)&TRISB*8+4;
volatile bit      	TRISB6	@ (unsigned)&TRISB*8+4;
volatile bit      	TRISB5	@ (unsigned)&TRISB*8+4;
volatile bit      	TRISB4	@ (unsigned)&TRISB*8+4;
volatile bit      	TRISB3	@ (unsigned)&TRISB*8+4;
volatile bit      	TRISB2	@ (unsigned)&TRISB*8+4;
volatile bit      	TRISB1	@ (unsigned)&TRISB*8+4;
volatile bit      	TRISB0	@ (unsigned)&TRISB*8+4;
#endif

#if	defined(_16C433)
/*	TRIS bits	*/
volatile	bit      	TRIS5	@ (unsigned)&TRIS*8+5;
volatile	bit      	TRIS4	@ (unsigned)&TRIS*8+4;
volatile	bit      	TRIS3	@ (unsigned)&TRIS*8+3;
volatile	bit      	TRIS2	@ (unsigned)&TRIS*8+2;
volatile	bit      	TRIS1	@ (unsigned)&TRIS*8+1;
volatile	bit      	TRIS0	@ (unsigned)&TRIS*8+0;
#endif

/*	PIE1 bits	*/
#if	defined(_16C432)
volatile bit      	CMIE	@ (unsigned)&PIE1*8+6;
#endif
#if	defined(_16C433)
volatile bit      	ADIE	@ (unsigned)&PIE1*8+6;
#endif
	
/*	PCON bits	*/
volatile bit      	POR	@ (unsigned)&PCON*8+1;
#if	defined(_16C432)
volatile bit      	BOD	@ (unsigned)&PCON*8+0;
#endif

#if	defined(_16C432)
/*	LININTF bits	*/
volatile bit      	LINTX	@ (unsigned)&LININTF*8+1;
volatile bit      	LINV 	@ (unsigned)&LININTF*8+0;

/*	VRCON bits	*/
volatile bit      	VREN	@ (unsigned)&VRCON*8+7;
volatile bit      	VROE	@ (unsigned)&VRCON*8+6;
volatile bit      	VRR	@ (unsigned)&VRCON*8+5;
volatile bit      	VR3	@ (unsigned)&VRCON*8+3;
volatile bit      	VR2	@ (unsigned)&VRCON*8+2;
volatile bit      	VR1	@ (unsigned)&VRCON*8+1;
volatile bit      	VR0	@ (unsigned)&VRCON*8+0;
#endif

#if 	defined(_16C433)
/*	OSCCAL bits	*/
		bit      	CAL3	@ (unsigned)&OSCCAL*8+7;
		bit      	CAL2	@ (unsigned)&OSCCAL*8+6;
		bit      	CAL1	@ (unsigned)&OSCCAL*8+5;
		bit      	CAL0	@ (unsigned)&OSCCAL*8+4;
		bit      	CALFST	@ (unsigned)&OSCCAL*8+3;
		bit      	CALSLW	@ (unsigned)&OSCCAL*8+2;

/*	ADCON1 bits	*/
volatile bit      	PCFG2	@ (unsigned)&ADCON1*8+2;
volatile bit      	PCFG1	@ (unsigned)&ADCON1*8+1;
volatile bit      	PCFG0	@ (unsigned)&ADCON1*8+0;
#endif

#define CONFIG_ADDR	0x2007

#define PWRTDIS		0x3FFF	// disable power up timer

#define WDTEN		0x3FFF	// enable watchdog timer

#if	defined(_16C432)
#define BOREN		0x3FFF	// enable brown out reset
#define BORDIS		0x3FBF	// disable brown out reset
#define	PWRTEN	 	0x3FF7	// enable power up timer
#define WDTDIS		0x3FFB	// disable watchdog timer
#endif

#if 	defined(_16C433)
#define	MCLREN		0x3F7F	// enable master clear
#define	MCLRDIS		0x3FFF	// disable master clear
#define PWRTEN		0x3FEF	// enable power up timer
#define WDTDIS		0x3FF7	// disable watchdog timer
#endif

/*osc configurations*/
#if	defined(_16C433)
#define EXTRC		0x3FFF	// external resistor/capacitor, clock out on OSC2
#define EXTRCIO		0x3FFE	// external resistor/capacitor, OSC2 is I/O
#define INTRC		0x3FFD	// internal 4Mhz oscillator, clock out on OSC2
#define INTRCIO		0x3FFC	// internal 4Mhz oscillator, OSC2 is I/O
#define HS		0x3FFA	// high speed crystal/resonator
#define XT		0x3FF9	// crystal/resonator
#define LP		0x3FF8	// low power crystal/resonator
#endif
#if	defined(_16C432)
#define RC		0x3FFF	// external resistor/capacitor
#define HS		0x3FFE	// high speed crystal/resonator
#define XT		0x3FFD	// crystal/resonator
#define LP		0x3FFC	// low power crystal/resonator
#endif

/*code protection*/
#define UNPROTECT	0x3FFF	/* do not protect the code */
#if	defined(_16C432)
#define PROTECT50	0x2AEF;	// protect 50% of code
#define PROTECT75	0x15DF;	// protect 75% of code
#define	PROTECT		0x00CF;	// protect all code
#endif
#if	defined(_16C433)
#define PROTECT50	0x2ADF;	// protect 50% of code
#define PROTECT75	0x15BF;	// protect 75% of code
#define	PROTECT		0x009F;	// protect all code
#endif


