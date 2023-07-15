
#ifndef	_HTC_H_
#warning Header file pic12f6x.h included directly. Use #include <htc.h> instead.
#endif

/*	Header file for the Microchip
 *	PIC12F629 chip
 *	PIC12F675 chip
 *	Microcontrollers */ 

volatile       unsigned char 	INDF	@ 0x00;
volatile       unsigned char 	TMR0	@ 0x01;
volatile       unsigned char 	PCL	@ 0x02;
volatile       unsigned char 	STATUS	@ 0x03;
volatile       unsigned char 	FSR	@ 0x04;
volatile       unsigned char 	GPIO	@ 0x05;
volatile       unsigned char 	PCLATH	@ 0x0A;
volatile       unsigned char 	INTCON	@ 0x0B;
volatile       unsigned char 	PIR1	@ 0x0C;
volatile       unsigned char 	TMR1L	@ 0x0E;
volatile       unsigned char 	TMR1H	@ 0x0F;
volatile	      unsigned char 	T1CON	@ 0x10;
volatile       unsigned char 	CMCON	@ 0x19;
#if defined(_12F675)
volatile       unsigned char 	ADRESH	@ 0x1E;
volatile       unsigned char 	ADCON0	@ 0x1F;
#endif
	      unsigned char 	OPTION	@ 0x81;
	      unsigned char 	TRISIO	@ 0x85;
	      unsigned char 	PIE1	@ 0x8C;
volatile       unsigned char 	PCON	@ 0x8E;
	      unsigned char 	OSCCAL	@ 0x90;
	      unsigned char 	WPU	@ 0x95;
	      unsigned char 	IOCB	@ 0x96;
volatile       unsigned char 	VRCON	@ 0x99;
volatile       unsigned char 	EEDATA	@ 0x9A;
volatile       unsigned char 	EEADR	@ 0x9B;
volatile       unsigned char 	EECON1	@ 0x9C;
volatile       unsigned char 	EECON2	@ 0x9D;
#if defined(_12F675)
volatile       unsigned char 	ADRESL	@ 0x9E;
	      unsigned char 	ANSEL	@ 0x9F;
#endif

/* STATUS Bits */
volatile bit	CARRY	@ (unsigned)&STATUS*8+0;
volatile bit	DC	@ (unsigned)&STATUS*8+1;
volatile bit	ZERO	@ (unsigned)&STATUS*8+2;
volatile bit	PD	@ (unsigned)&STATUS*8+3;
volatile bit	TO	@ (unsigned)&STATUS*8+4;
	bit	RP0	@ (unsigned)&STATUS*8+5;

/* GPIO Bits */
volatile bit	GPIO0	@ (unsigned)&GPIO*8+0;
volatile bit	GPIO1	@ (unsigned)&GPIO*8+1;
volatile bit	GPIO2	@ (unsigned)&GPIO*8+2;
volatile bit	GPIO3	@ (unsigned)&GPIO*8+3;
volatile bit	GPIO4	@ (unsigned)&GPIO*8+4;
volatile bit	GPIO5	@ (unsigned)&GPIO*8+5;

/* INTCON Bits */
volatile bit	GPIF	@ (unsigned)&INTCON*8+0;
volatile bit	INTF	@ (unsigned)&INTCON*8+1;
volatile bit	T0IF	@ (unsigned)&INTCON*8+2;
	bit	GPIE	@ (unsigned)&INTCON*8+3;
	bit	INTE	@ (unsigned)&INTCON*8+4;
	bit	T0IE	@ (unsigned)&INTCON*8+5;
	bit	PEIE	@ (unsigned)&INTCON*8+6;
volatile bit	GIE	@ (unsigned)&INTCON*8+7;

/* PIR1 Bits */
volatile bit	TMR1IF	@ (unsigned)&PIR1*8+0;
volatile bit	CMIF	@ (unsigned)&PIR1*8+3;
volatile bit	ADIF	@ (unsigned)&PIR1*8+6;
volatile bit	EEIF	@ (unsigned)&PIR1*8+7;

/* T1CON Bits */
	bit	TMR1ON	@ (unsigned)&T1CON*8+0;
	bit	TMR1CS	@ (unsigned)&T1CON*8+1;
	bit	T1SYNC	@ (unsigned)&T1CON*8+2;
	bit	T1OSCEN	@ (unsigned)&T1CON*8+3;
	bit	T1CKPS0	@ (unsigned)&T1CON*8+4;
	bit	T1CKPS1	@ (unsigned)&T1CON*8+5;
	bit	TMR1GE	@ (unsigned)&T1CON*8+6;

/* CMCON Bits */
	bit	CM0	@ (unsigned)&CMCON*8+0;
	bit	CM1	@ (unsigned)&CMCON*8+1;
	bit	CM2	@ (unsigned)&CMCON*8+2;
	bit	CIS	@ (unsigned)&CMCON*8+3;
	bit	CINV	@ (unsigned)&CMCON*8+4;
volatile bit	COUT	@ (unsigned)&CMCON*8+6;

#if defined(_12F675)
/* ADCON0 Bits */
volatile bit	ADON	@ (unsigned)&ADCON0*8+0;
volatile bit	GODONE	@ (unsigned)&ADCON0*8+1;
	bit	CHS0	@ (unsigned)&ADCON0*8+2;
	bit	CHS1	@ (unsigned)&ADCON0*8+3;
	bit	VCFG	@ (unsigned)&ADCON0*8+6;
	bit	ADFM	@ (unsigned)&ADCON0*8+7;
#endif

/* OPTION Bits */
	      bit	PS0	@ (unsigned)&OPTION*8+0;
	      bit	PS1	@ (unsigned)&OPTION*8+1;
	      bit	PS2	@ (unsigned)&OPTION*8+2;
	      bit	PSA	@ (unsigned)&OPTION*8+3;
	      bit	T0SE	@ (unsigned)&OPTION*8+4;
	      bit	T0CS	@ (unsigned)&OPTION*8+5;
	      bit	INTEDG	@ (unsigned)&OPTION*8+6;
	      bit	GPPU	@ (unsigned)&OPTION*8+7;

/* TRISIO Bits */
	      bit	TRIS0	@ (unsigned)&TRISIO*8+0;
	      bit	TRIS1	@ (unsigned)&TRISIO*8+1;
	      bit	TRIS2	@ (unsigned)&TRISIO*8+2;
	      bit	TRIS3	@ (unsigned)&TRISIO*8+3;
	      bit	TRIS4	@ (unsigned)&TRISIO*8+4;
	      bit	TRIS5	@ (unsigned)&TRISIO*8+5;
                 
/* PIE1 Bits */  
	      bit	TMR1IE	@ (unsigned)&PIE1*8+0;
	      bit	CMIE	@ (unsigned)&PIE1*8+3;
	      bit	ADIE	@ (unsigned)&PIE1*8+6;
	      bit	EEIE	@ (unsigned)&PIE1*8+7;

/* PCON Bits */
volatile       bit	BOD	@ (unsigned)&PCON*8+0;
volatile       bit	POR	@ (unsigned)&PCON*8+1;

/* OSCCAL Bits */
	      bit	CAL0	@ (unsigned)&OSCCAL*8+2;
	      bit	CAL1	@ (unsigned)&OSCCAL*8+3;
	      bit	CAL2	@ (unsigned)&OSCCAL*8+4;
	      bit	CAL3	@ (unsigned)&OSCCAL*8+5;
	      bit	CAL4	@ (unsigned)&OSCCAL*8+6;
	      bit	CAL5	@ (unsigned)&OSCCAL*8+7;

/* WPU Bits */
	      bit	WPU0	@ (unsigned)&WPU*8+0;
	      bit	WPU1	@ (unsigned)&WPU*8+1;
	      bit	WPU2	@ (unsigned)&WPU*8+2;
	      bit	WPU4	@ (unsigned)&WPU*8+4;
	      bit	WPU5	@ (unsigned)&WPU*8+5;

/* IOCB Bits */
	      bit	IOCB0	@ (unsigned)&IOCB*8+0;
	      bit	IOCB1	@ (unsigned)&IOCB*8+1;
	      bit	IOCB2	@ (unsigned)&IOCB*8+2;
	      bit	IOCB3	@ (unsigned)&IOCB*8+3;
	      bit	IOCB4	@ (unsigned)&IOCB*8+4;
	      bit	IOCB5	@ (unsigned)&IOCB*8+5;
                 
/* VRCON Bits */ 
	      bit	VR0	@ (unsigned)&VRCON*8+0;
	      bit	VR1	@ (unsigned)&VRCON*8+1;
	      bit	VR2	@ (unsigned)&VRCON*8+2;
	      bit	VR3	@ (unsigned)&VRCON*8+3;
	      bit	VRR	@ (unsigned)&VRCON*8+5;
	      bit	VREN	@ (unsigned)&VRCON*8+7;
                 
/* EECON1 Bits */
volatile       bit	RD	@ (unsigned)&EECON1*8+0;
volatile       bit	WR	@ (unsigned)&EECON1*8+1;
volatile       bit	WREN	@ (unsigned)&EECON1*8+2;
volatile       bit	WRERR	@ (unsigned)&EECON1*8+3;

#if defined(_12F675)
/* ANSEL Bits */
	      bit	ANS0	@ (unsigned)&ANSEL*8+0;
	      bit	ANS1	@ (unsigned)&ANSEL*8+1;
	      bit	ANS2	@ (unsigned)&ANSEL*8+2;
	      bit	ANS3	@ (unsigned)&ANSEL*8+3;
	      bit	ADCS0	@ (unsigned)&ANSEL*8+4;
	      bit	ADCS1	@ (unsigned)&ANSEL*8+5;
	      bit	ADCS2	@ (unsigned)&ANSEL*8+6;
#endif

extern unsigned char __osccal_val(void);
#define	_READ_OSCCAL_DATA()	__osccal_val()


/* Configuration bit definitions */
#define CONFIG_ADDR	0x2007 

/* Protection of data block */
#define CPD	0x3EFF		/* data protect on */ 
#define UNPROTECT	0x3FFF 	/* data protect off */

/* Protection of program code */
#define PROTECT	0x3F7F 		/* code protection on */
#define UNPROTECT	0x3FFF 	/* code protection off */

/* Brown out detection enable */
#define BOREN	0x3FFF 		/* brown out reset enabled */
#define BORDIS	0x3FBF 		/* brown out reset disabled */

/* Master clear reset */
#define MCLREN	0x3FFF 		/* master clear reset function enabled */
#define MCLRDIS	0x3FDF 		/* master clear reset function disabled */

/* Power up timer enable */
#define PWRTDIS	0x3FFF 		/* power up timer disabled */
#define PWRTEN	0x3FEF 		/* power up timer enabled */

/* Watchdog timer enable */
#define WDTEN	0x3FFF 		/* watchdog timer enabled */
#define WDTDIS	0x3FF7 		/* watchdog timer disabled */

/* Oscillator configurations */
#define RCCLK	0x3FFF 		/* GP4 = clock out signal/GP5 = RC osc */
#define RCIO	0x3FFE 		/* GP4 = IO/GP5 = RC osc */
#define INTCLK	0x3FFD 		/* internal osc/GP4 = clock out signal/GP5 = IO */
#define INTIO	0x3FFC 		/* internal osc/GP4 = IO//GP5 = IO */
#define EC	0x3FFB 		/* external clock */
#define HS	0x3FFA 		/* high speed crystal/resonator */
#define XT	0x3FF9 		/* crystal/resonator */
#define LP	0x3FF8 		/* low power crystal/resonator */
