
#ifndef	_HTC_H_
#warning Header file pic169xx.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip
 *	PIC 16C923 chip
 *	PIC 16C924 chip
 *	PIC 16C925 chip
 *	PIC 16C926 chip
 *	Midrange Microcontroller
 */

volatile unsigned char INDF	@ 0x00;
volatile unsigned char TMR0	@ 0x01;
volatile unsigned char PCL	@ 0x02;
volatile unsigned char STATUS	@ 0x03;
         unsigned char FSR	@ 0x04;
volatile unsigned char PORTA	@ 0x05;
volatile unsigned char PORTB	@ 0x06;
volatile unsigned char PORTC	@ 0x07;
volatile unsigned char PORTD	@ 0x08;
volatile unsigned char PORTE	@ 0x09;
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

	/*  Bank 1  */
         unsigned char      	OPTION	@ 0x81;
volatile	unsigned char      	TRISA	@ 0x85;
volatile	unsigned char      	TRISB	@ 0x86;
volatile	unsigned char      	TRISC	@ 0x87;
volatile	unsigned char      	TRISD	@ 0x88;
volatile	unsigned char      	TRISE	@ 0x89;
volatile unsigned char      	PIE1	@ 0x8C;
volatile unsigned char      	PCON	@ 0x8E;
volatile unsigned char      	PR2	@ 0x92;
volatile unsigned char      	SSPADD	@ 0x93;
volatile unsigned char      	SSPSTAT	@ 0x94;

	/*  Bank 2  */
volatile unsigned char      	PORTF	@ 0x107;
volatile unsigned char      	PORTG	@ 0x108;
volatile unsigned char      	LCDSE	@ 0x10D;
volatile unsigned char      	LCDPS	@ 0x10E;
volatile unsigned char      	LCDCON	@ 0x10F;
volatile unsigned char      	LCDD00	@ 0x110;
volatile unsigned char      	LCDD01	@ 0x111;
volatile unsigned char      	LCDD02	@ 0x112;
volatile unsigned char      	LCDD03	@ 0x113;
volatile unsigned char      	LCDD04	@ 0x114;
volatile unsigned char      	LCDD05	@ 0x115;
volatile unsigned char      	LCDD06	@ 0x116;
volatile unsigned char      	LCDD07	@ 0x117;
volatile unsigned char      	LCDD08	@ 0x118;
volatile unsigned char      	LCDD09	@ 0x119;
volatile unsigned char      	LCDD10	@ 0x11A;
volatile unsigned char      	LCDD11	@ 0x11B;
volatile unsigned char      	LCDD12	@ 0x11C;
volatile unsigned char      	LCDD13	@ 0x11D;
volatile unsigned char      	LCDD14	@ 0x11E;
volatile unsigned char      	LCDD15	@ 0x11F;

	/*  Bank 3  */
volatile	unsigned char      	TRISF	@ 0x187;
volatile	unsigned char      	TRISG	@ 0x188;

#ifdef _16C924
volatile unsigned char 		ADRES	@ 0x1E;
volatile unsigned char 		ADCON0	@ 0x1F;
volatile unsigned char      	ADCON1	@ 0x9F;
	
/*	ADCON0 bits	*/
volatile bit	ADCS1	@ (unsigned)&ADCON0*8+7;
volatile bit	ADCS0	@ (unsigned)&ADCON0*8+6;
volatile bit	CHS2	@ (unsigned)&ADCON0*8+5;
volatile bit	CHS1	@ (unsigned)&ADCON0*8+4;
volatile bit	CHS0	@ (unsigned)&ADCON0*8+3;
volatile bit	ADGO	@ (unsigned)&ADCON0*8+2;
// Alternate definition for compatability with other devices
volatile bit	GODONE	@ (unsigned)&ADCON0*8+2;
volatile bit	ADON	@ (unsigned)&ADCON0*8+0;

/*	ADCON1 bits	*/
volatile       bit	PCFG2	@ (unsigned)&ADCON1*8+2;
volatile       bit	PCFG1	@ (unsigned)&ADCON1*8+1;
volatile       bit	PCFG0	@ (unsigned)&ADCON1*8+0;
#endif

#if defined(_16C925) || defined(_16C926)
		unsigned char		ADRESH	@ 0x1E;
volatile	unsigned char		ADCON0	@ 0x1F;
		unsigned char      	ADRESL	@ 0x9E;
volatile	unsigned char      	ADCON1	@ 0x9F;
volatile	unsigned char      	PMCON1	@ 0x10C;
		unsigned char      	PMDATA	@ 0x18C;
		unsigned char      	PMDATH	@ 0x18D;
		unsigned char      	PMADR	@ 0x18E;
	unsigned char       	PMADRH	@ 0x18F;

/* 	ADRESH bits	*/
		bit		ADRESH7	@ (unsigned)&ADRESH*8+7;
		bit		ADRESH6	@ (unsigned)&ADRESH*8+6;
		bit		ADRESH5	@ (unsigned)&ADRESH*8+5;
		bit		ADRESH4	@ (unsigned)&ADRESH*8+4;
		bit		ADRESH3	@ (unsigned)&ADRESH*8+4;
		bit		ADRESH2	@ (unsigned)&ADRESH*8+2;
		bit		ADRESH1	@ (unsigned)&ADRESH*8+1;
		bit		ADRESH0	@ (unsigned)&ADRESH*8+0;

/* 	ADCON0 bits	*/
volatile	bit		ADCS1	@ (unsigned)&ADCON0*8+7;
volatile	bit		ADCS0	@ (unsigned)&ADCON0*8+6;
volatile	bit		CHS2	@ (unsigned)&ADCON0*8+5;
volatile	bit		CHS1	@ (unsigned)&ADCON0*8+4;
volatile	bit		CHS0	@ (unsigned)&ADCON0*8+3;
volatile	bit		GODONE	@ (unsigned)&ADCON0*8+2;
// Alternate definition for compatability with other devices
volatile	bit		ADGO	@ (unsigned)&ADCON0*8+2;
volatile	bit		ADON	@ (unsigned)&ADCON0*8+0;

/* 	ADRESL bits	*/
		bit		ADRESL7	@ (unsigned)&ADRESL*8+7;
		bit		ADRESL6	@ (unsigned)&ADRESL*8+6;
		bit		ADRESL5	@ (unsigned)&ADRESL*8+5;
		bit		ADRESL4	@ (unsigned)&ADRESL*8+4;
		bit		ADRESL3	@ (unsigned)&ADRESL*8+4;
		bit		ADRESL2	@ (unsigned)&ADRESL*8+2;
		bit		ADRESL1	@ (unsigned)&ADRESL*8+1;
		bit		ADRESL0	@ (unsigned)&ADRESL*8+0;

/*	ADCON1 bits	*/
volatile	      bit	ADFM	@ (unsigned)&ADCON1*8+7;
volatile	      bit	PCFG3	@ (unsigned)&ADCON0*8+3;
volatile	      bit	PCFG2	@ (unsigned)&ADCON0*8+2;
volatile	      bit	PCFG1	@ (unsigned)&ADCON0*8+1;
volatile	      bit	PCFG0	@ (unsigned)&ADCON0*8+0;

/* 	PMCON1 bits	*/
volatile	      bit	RD	@ (unsigned)&PMCON1*8+0;

/*	PMDATA bits	*/
		      bit	PMDATA7	@ (unsigned)&PMDATA*8+7;
		      bit	PMDATA6	@ (unsigned)&PMDATA*8+6;
		      bit	PMDATA5	@ (unsigned)&PMDATA*8+5;
		      bit	PMDATA4	@ (unsigned)&PMDATA*8+4;
		      bit	PMDATA3	@ (unsigned)&PMDATA*8+3;
		      bit	PMDATA2	@ (unsigned)&PMDATA*8+2;
		      bit	PMDATA1	@ (unsigned)&PMDATA*8+1;
		      bit	PMDATA0	@ (unsigned)&PMDATA*8+0;

/*	PMADR bits	*/
		      bit	PMADR7	@ (unsigned)&PMADR*8+7;
		      bit	PMADR6	@ (unsigned)&PMADR*8+6;
		      bit	PMADR5	@ (unsigned)&PMADR*8+5;
		      bit	PMADR4	@ (unsigned)&PMADR*8+4;
		      bit	PMADR3	@ (unsigned)&PMADR*8+3;
		      bit	PMADR2	@ (unsigned)&PMADR*8+2;
		      bit	PMADR1	@ (unsigned)&PMADR*8+1;
		      bit	PMADR0	@ (unsigned)&PMADR*8+0;

/*	PMATH bits	*/
	      bit	PMDATH5	@ (unsigned)&PMDATH*8+5;
	      bit	PMDATH4	@ (unsigned)&PMDATH*8+4;
	      bit	PMDATH3	@ (unsigned)&PMDATH*8+3;
	      bit	PMDATH2	@ (unsigned)&PMDATH*8+2;
	      bit	PMDATH1	@ (unsigned)&PMDATH*8+1;
	      bit	PMDATH0	@ (unsigned)&PMDATH*8+0;

/*	PMADRH bits	*/
	      bit	PMADRH4	@ (unsigned)&PMADRH*8+4;
	      bit	PMADRH3	@ (unsigned)&PMADRH*8+3;
	      bit	PMADRH2	@ (unsigned)&PMADRH*8+2;
	      bit	PMADRH1	@ (unsigned)&PMADRH*8+1;
	      bit	PMADRH0	@ (unsigned)&PMADRH*8+0;
#endif
	
/*	STATUS bits	*/
volatile bit	IRP	@ (unsigned)&STATUS*8+7;
volatile bit	RP1	@ (unsigned)&STATUS*8+6;
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

/*      PORTE bits      */
volatile bit	RE7	@ (unsigned)&PORTE*8+7;
volatile bit	RE6	@ (unsigned)&PORTE*8+6;
volatile bit	RE5	@ (unsigned)&PORTE*8+5;
volatile bit	RE4	@ (unsigned)&PORTE*8+4;
volatile bit	RE3	@ (unsigned)&PORTE*8+3;
volatile bit	RE2	@ (unsigned)&PORTE*8+2;
volatile bit	RE1	@ (unsigned)&PORTE*8+1;
volatile bit	RE0	@ (unsigned)&PORTE*8+0;

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
volatile bit	LCDIF	@ (unsigned)&PIR1*8+7;
#ifndef _16C923
volatile bit	ADIF	@ (unsigned)&PIR1*8+6;
#endif
volatile bit	SSPIF	@ (unsigned)&PIR1*8+3;
volatile bit	CCP1IF	@ (unsigned)&PIR1*8+2;
volatile bit	TMR2IF	@ (unsigned)&PIR1*8+1;
volatile bit	TMR1IF	@ (unsigned)&PIR1*8+0;

/*	T1CON bits	*/
volatile bit	T1CKPS1	@ (unsigned)&T1CON*8+5;
volatile bit	T1CKPS0	@ (unsigned)&T1CON*8+4;
volatile bit	T1OSCEN	@ (unsigned)&T1CON*8+3;
volatile bit	T1SYNC	@ (unsigned)&T1CON*8+2;
volatile bit	TMR1CS	@ (unsigned)&T1CON*8+1;
volatile bit	TMR1ON	@ (unsigned)&T1CON*8+0;

/*	T2CON bits	*/
volatile bit	TOUTPS3	@ (unsigned)&T2CON*8+6;
volatile bit	TOUTPS2	@ (unsigned)&T2CON*8+5;
volatile bit	TOUTPS1	@ (unsigned)&T2CON*8+4;
volatile bit	TOUTPS0	@ (unsigned)&T2CON*8+3;
volatile bit	TMR2ON	@ (unsigned)&T2CON*8+2;
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
volatile bit	CCPIY	@ (unsigned)&CCP1CON*8+4;
volatile bit	CCP1M3	@ (unsigned)&CCP1CON*8+3;
volatile bit	CCP1M2	@ (unsigned)&CCP1CON*8+2;
volatile bit	CCP1M1	@ (unsigned)&CCP1CON*8+1;
volatile bit	CCP1M0	@ (unsigned)&CCP1CON*8+0;

/*	OPTION bits	*/
      bit	RBPU	@ (unsigned)&OPTION*8+7;
      bit	INTEDG	@ (unsigned)&OPTION*8+6;
      bit	T0CS	@ (unsigned)&OPTION*8+5;
      bit	T0SE	@ (unsigned)&OPTION*8+4;
      bit	PSA	@ (unsigned)&OPTION*8+3;
      bit	PS2	@ (unsigned)&OPTION*8+2;
      bit	PS1	@ (unsigned)&OPTION*8+1;
      bit	PS0	@ (unsigned)&OPTION*8+0;

/*      TRISA bits      */
volatile       bit	TRISA5	@ (unsigned)&TRISA*8+5;
volatile       bit	TRISA4	@ (unsigned)&TRISA*8+4;
volatile       bit	TRISA3	@ (unsigned)&TRISA*8+3;
volatile       bit	TRISA2	@ (unsigned)&TRISA*8+2;
volatile       bit	TRISA1	@ (unsigned)&TRISA*8+1;
volatile       bit	TRISA0	@ (unsigned)&TRISA*8+0;

/*      TRISB bits      */
volatile       bit	TRISB7	@ (unsigned)&TRISB*8+7;
volatile       bit	TRISB6	@ (unsigned)&TRISB*8+6;
volatile       bit	TRISB5	@ (unsigned)&TRISB*8+5;
volatile       bit	TRISB4	@ (unsigned)&TRISB*8+4;
volatile       bit	TRISB3	@ (unsigned)&TRISB*8+3;
volatile       bit	TRISB2	@ (unsigned)&TRISB*8+2;
volatile       bit	TRISB1	@ (unsigned)&TRISB*8+1;
volatile       bit	TRISB0	@ (unsigned)&TRISB*8+0;

/*      TRISC bits      */
volatile       bit	TRISC5	@ (unsigned)&TRISC*8+5;
volatile       bit	TRISC4	@ (unsigned)&TRISC*8+4;
volatile       bit	TRISC3	@ (unsigned)&TRISC*8+3;
volatile       bit	TRISC2	@ (unsigned)&TRISC*8+2;
volatile       bit	TRISC1	@ (unsigned)&TRISC*8+1;
volatile       bit	TRISC0	@ (unsigned)&TRISC*8+0;

/*      TRISD bits      */
volatile       bit	TRISD7	@ (unsigned)&TRISD*8+7;
volatile       bit	TRISD6	@ (unsigned)&TRISD*8+6;
volatile       bit	TRISD5	@ (unsigned)&TRISD*8+5;
volatile       bit	TRISD4	@ (unsigned)&TRISD*8+4;
volatile       bit	TRISD3	@ (unsigned)&TRISD*8+3;
volatile       bit	TRISD2	@ (unsigned)&TRISD*8+2;
volatile       bit	TRISD1	@ (unsigned)&TRISD*8+1;
volatile       bit	TRISD0	@ (unsigned)&TRISD*8+0;

/*      TRISE bits      */
volatile       bit	TRISE7	@ (unsigned)&TRISE*8+7;
volatile       bit	TRISE6	@ (unsigned)&TRISE*8+6;
volatile       bit	TRISE5	@ (unsigned)&TRISE*8+5;
volatile       bit	TRISE4	@ (unsigned)&TRISE*8+4;
volatile       bit	TRISE3	@ (unsigned)&TRISE*8+3;
volatile       bit	TRISE2	@ (unsigned)&TRISE*8+2;
volatile       bit	TRISE1	@ (unsigned)&TRISE*8+1;
volatile       bit	TRISE0	@ (unsigned)&TRISE*8+0;

/*	PIE1 bits	*/
volatile       bit	LCDIE	@ (unsigned)&PIE1*8+7;
#ifndef _16C923
volatile       bit	ADIE	@ (unsigned)&PIE1*8+6;
#endif
volatile       bit	SSPIE	@ (unsigned)&PIE1*8+3;
volatile       bit	CCP1IE	@ (unsigned)&PIE1*8+2;
volatile       bit	TMR2IE	@ (unsigned)&PIE1*8+1;
volatile       bit	TMR1IE	@ (unsigned)&PIE1*8+0;

/*	PCON bit	*/
volatile       bit	POR	@ (unsigned)&PCON*8+1;

/*      SSPSTAT bits    */
volatile       bit	SMP		@ (unsigned)&SSPSTAT*8+7;
volatile       bit	CKE		@ (unsigned)&SSPSTAT*8+6;
volatile       bit	DA		@ (unsigned)&SSPSTAT*8+5;
volatile       bit	STOP		@ (unsigned)&SSPSTAT*8+4;
volatile       bit	START		@ (unsigned)&SSPSTAT*8+3;
volatile       bit	RW		@ (unsigned)&SSPSTAT*8+2;
volatile       bit	UA		@ (unsigned)&SSPSTAT*8+1;
volatile       bit	BF		@ (unsigned)&SSPSTAT*8+0;
#ifdef __STAT_BACKWARD_COMPATIBILITY
#define STAT_SMP	SMP
#define STAT_CKE	CKE
#define STAT_DA	DA
#define STAT_P	STOP
#define STAT_S	START
#define STAT_RW	RW
#define STAT_UA	UA
#define STAT_BF	BF
#endif

/*      PORTF bits      */
volatile       bit	RF7	@ (unsigned)&PORTF*8+7;
volatile       bit	RF6	@ (unsigned)&PORTF*8+6;
volatile       bit	RF5	@ (unsigned)&PORTF*8+5;
volatile       bit	RF4	@ (unsigned)&PORTF*8+4;
volatile       bit	RF3	@ (unsigned)&PORTF*8+3;
volatile       bit	RF2	@ (unsigned)&PORTF*8+2;
volatile       bit	RF1	@ (unsigned)&PORTF*8+1;
volatile       bit	RF0	@ (unsigned)&PORTF*8+0;

/*      PORTG bits      */
volatile       bit	RG7	@ (unsigned)&PORTG*8+7;
volatile       bit	RG6	@ (unsigned)&PORTG*8+6;
volatile       bit	RG5	@ (unsigned)&PORTG*8+5;
volatile       bit	RG4	@ (unsigned)&PORTG*8+4;
volatile       bit	RG3	@ (unsigned)&PORTG*8+3;
volatile       bit	RG2	@ (unsigned)&PORTG*8+2;
volatile       bit	RG1	@ (unsigned)&PORTG*8+1;
volatile       bit	RG0	@ (unsigned)&PORTG*8+0;

/*      LCDSE bits      */
volatile       bit	SE29	@ (unsigned)&LCDSE*8+7;
volatile       bit	SE27	@ (unsigned)&LCDSE*8+6;
volatile       bit	SE20	@ (unsigned)&LCDSE*8+5;
volatile       bit	SE16	@ (unsigned)&LCDSE*8+4;
volatile       bit	SE12	@ (unsigned)&LCDSE*8+3;
volatile       bit	SE9	@ (unsigned)&LCDSE*8+2;
volatile       bit	SE5	@ (unsigned)&LCDSE*8+1;
volatile       bit	SE0	@ (unsigned)&LCDSE*8+0;

/*      LCDPS bits      */
volatile       bit	LP3	@ (unsigned)&LCDPS*8+3;
volatile       bit	LP2	@ (unsigned)&LCDPS*8+2;
volatile       bit	LP1	@ (unsigned)&LCDPS*8+1;
volatile       bit	LP0	@ (unsigned)&LCDPS*8+0;

/*      LCDCON bits     */
volatile       bit	LCDEN	@ (unsigned)&LCDCON*8+7;
volatile       bit	SLPEN	@ (unsigned)&LCDCON*8+6;
volatile       bit	VGEN	@ (unsigned)&LCDCON*8+4;
volatile       bit	CS1	@ (unsigned)&LCDCON*8+3;
volatile       bit	CS0	@ (unsigned)&LCDCON*8+2;
volatile       bit	LMUX1	@ (unsigned)&LCDCON*8+1;
volatile       bit	LMUX0	@ (unsigned)&LCDCON*8+0;

/*      LCDD00 bits     COM0    */
volatile       bit	COM0SEG07	@ (unsigned)&LCDD00*8+7;
volatile       bit	COM0SEG06	@ (unsigned)&LCDD00*8+6;
volatile       bit	COM0SEG05	@ (unsigned)&LCDD00*8+5;
volatile       bit	COM0SEG04	@ (unsigned)&LCDD00*8+4;
volatile       bit	COM0SEG03	@ (unsigned)&LCDD00*8+3;
volatile       bit	COM0SEG02	@ (unsigned)&LCDD00*8+2;
volatile       bit	COM0SEG01	@ (unsigned)&LCDD00*8+1;
volatile       bit	COM0SEG00	@ (unsigned)&LCDD00*8+0;

/*      LCDD01 bits     COM0    */
volatile       bit	COM0SEG15	@ (unsigned)&LCDD01*8+7;
volatile       bit	COM0SEG14	@ (unsigned)&LCDD01*8+6;
volatile       bit	COM0SEG13	@ (unsigned)&LCDD01*8+5;
volatile       bit	COM0SEG12	@ (unsigned)&LCDD01*8+4;
volatile       bit	COM0SEG11	@ (unsigned)&LCDD01*8+3;
volatile       bit	COM0SEG10	@ (unsigned)&LCDD01*8+2;
volatile       bit	COM0SEG09	@ (unsigned)&LCDD01*8+1;
volatile       bit	COM0SEG08	@ (unsigned)&LCDD01*8+0;

/*      LCDD02 bits     COM0    */
volatile       bit	COM0SEG23	@ (unsigned)&LCDD02*8+7;
volatile       bit	COM0SEG22	@ (unsigned)&LCDD02*8+6;
volatile       bit	COM0SEG21	@ (unsigned)&LCDD02*8+5;
volatile       bit	COM0SEG20	@ (unsigned)&LCDD02*8+4;
volatile       bit	COM0SEG19	@ (unsigned)&LCDD02*8+3;
volatile       bit	COM0SEG18	@ (unsigned)&LCDD02*8+2;
volatile       bit	COM0SEG17	@ (unsigned)&LCDD02*8+1;
volatile       bit	COM0SEG16	@ (unsigned)&LCDD02*8+0;

/*      LCDD03 bits     COM0    */
volatile       bit	COM0SEG31	@ (unsigned)&LCDD03*8+7;
volatile       bit	COM0SEG30	@ (unsigned)&LCDD03*8+6;
volatile       bit	COM0SEG29	@ (unsigned)&LCDD03*8+5;
volatile       bit	COM0SEG28	@ (unsigned)&LCDD03*8+4;
volatile       bit	COM0SEG27	@ (unsigned)&LCDD03*8+3;
volatile       bit	COM0SEG26	@ (unsigned)&LCDD03*8+2;
volatile       bit	COM0SEG25	@ (unsigned)&LCDD03*8+1;
volatile       bit	COM0SEG24	@ (unsigned)&LCDD03*8+0;

/*      LCDD04 bits     COM1    */
volatile       bit	COM1SEG07	@ (unsigned)&LCDD04*8+7;
volatile       bit	COM1SEG06	@ (unsigned)&LCDD04*8+6;
volatile       bit	COM1SEG05	@ (unsigned)&LCDD04*8+5;
volatile       bit	COM1SEG04	@ (unsigned)&LCDD04*8+4;
volatile       bit	COM1SEG03	@ (unsigned)&LCDD04*8+3;
volatile       bit	COM1SEG02	@ (unsigned)&LCDD04*8+2;
volatile       bit	COM1SEG01	@ (unsigned)&LCDD04*8+1;
volatile       bit	COM1SEG00	@ (unsigned)&LCDD04*8+0;

/*      LCDD05 bits     COM1    */
volatile       bit	COM1SEG15	@ (unsigned)&LCDD05*8+7;
volatile       bit	COM1SEG14	@ (unsigned)&LCDD05*8+6;
volatile       bit	COM1SEG13	@ (unsigned)&LCDD05*8+5;
volatile       bit	COM1SEG12	@ (unsigned)&LCDD05*8+4;
volatile       bit	COM1SEG11	@ (unsigned)&LCDD05*8+3;
volatile       bit	COM1SEG10	@ (unsigned)&LCDD05*8+2;
volatile       bit	COM1SEG09	@ (unsigned)&LCDD05*8+1;
volatile       bit	COM1SEG08	@ (unsigned)&LCDD05*8+0;

/*      LCDD06 bits     COM1    */
volatile       bit	COM1SEG23	@ (unsigned)&LCDD06*8+7;
volatile       bit	COM1SEG22	@ (unsigned)&LCDD06*8+6;
volatile       bit	COM1SEG21	@ (unsigned)&LCDD06*8+5;
volatile       bit	COM1SEG20	@ (unsigned)&LCDD06*8+4;
volatile       bit	COM1SEG19	@ (unsigned)&LCDD06*8+3;
volatile       bit	COM1SEG18	@ (unsigned)&LCDD06*8+2;
volatile       bit	COM1SEG17	@ (unsigned)&LCDD06*8+1;
volatile       bit	COM1SEG16	@ (unsigned)&LCDD06*8+0;

/*      LCDD07 bits     COM1    */
volatile       bit	COM1SEG31	@ (unsigned)&LCDD07*8+7;
volatile       bit	COM1SEG30	@ (unsigned)&LCDD07*8+6;
volatile       bit	COM1SEG29	@ (unsigned)&LCDD07*8+5;
volatile       bit	COM1SEG28	@ (unsigned)&LCDD07*8+4;
volatile       bit	COM1SEG27	@ (unsigned)&LCDD07*8+3;
volatile       bit	COM1SEG26	@ (unsigned)&LCDD07*8+2;
volatile       bit	COM1SEG25	@ (unsigned)&LCDD07*8+1;
volatile       bit	COM1SEG24	@ (unsigned)&LCDD07*8+0;

/*      LCDD08 bits     COM2    */
volatile       bit	COM2SEG07	@ (unsigned)&LCDD08*8+7;
volatile       bit	COM2SEG06	@ (unsigned)&LCDD08*8+6;
volatile       bit	COM2SEG05	@ (unsigned)&LCDD08*8+5;
volatile       bit	COM2SEG04	@ (unsigned)&LCDD08*8+4;
volatile       bit	COM2SEG03	@ (unsigned)&LCDD08*8+3;
volatile       bit	COM2SEG02	@ (unsigned)&LCDD08*8+2;
volatile       bit	COM2SEG01	@ (unsigned)&LCDD08*8+1;
volatile       bit	COM2SEG00	@ (unsigned)&LCDD08*8+0;

/*      LCDD09 bits     COM2    */
volatile       bit	COM2SEG15	@ (unsigned)&LCDD09*8+7;
volatile       bit	COM2SEG14	@ (unsigned)&LCDD09*8+6;
volatile       bit	COM2SEG13	@ (unsigned)&LCDD09*8+5;
volatile       bit	COM2SEG12	@ (unsigned)&LCDD09*8+4;
volatile       bit	COM2SEG11	@ (unsigned)&LCDD09*8+3;
volatile       bit	COM2SEG10	@ (unsigned)&LCDD09*8+2;
volatile       bit	COM2SEG09	@ (unsigned)&LCDD09*8+1;
volatile       bit	COM2SEG08	@ (unsigned)&LCDD09*8+0;

/*      LCDD10 bits     COM2    */
volatile       bit	COM2SEG23	@ (unsigned)&LCDD10*8+7;
volatile       bit	COM2SEG22	@ (unsigned)&LCDD10*8+6;
volatile       bit	COM2SEG21	@ (unsigned)&LCDD10*8+5;
volatile       bit	COM2SEG20	@ (unsigned)&LCDD10*8+4;
volatile       bit	COM2SEG19	@ (unsigned)&LCDD10*8+3;
volatile       bit	COM2SEG18	@ (unsigned)&LCDD10*8+2;
volatile       bit	COM2SEG17	@ (unsigned)&LCDD10*8+1;
volatile       bit	COM2SEG16	@ (unsigned)&LCDD10*8+0;

/*      LCDD11 bits     COM2    */
volatile       bit	COM2SEG31	@ (unsigned)&LCDD11*8+7;
volatile       bit	COM2SEG30	@ (unsigned)&LCDD11*8+6;
volatile       bit	COM2SEG29	@ (unsigned)&LCDD11*8+5;
volatile       bit	COM2SEG28	@ (unsigned)&LCDD11*8+4;
volatile       bit	COM2SEG27	@ (unsigned)&LCDD11*8+3;
volatile       bit	COM2SEG26	@ (unsigned)&LCDD11*8+2;
volatile       bit	COM2SEG25	@ (unsigned)&LCDD11*8+1;
volatile       bit	COM2SEG24	@ (unsigned)&LCDD11*8+0;

/*      LCDD12 bits     COM3    */
volatile       bit	COM3SEG07	@ (unsigned)&LCDD12*8+7;
volatile       bit	COM3SEG06	@ (unsigned)&LCDD12*8+6;
volatile       bit	COM3SEG05	@ (unsigned)&LCDD12*8+5;
volatile       bit	COM3SEG04	@ (unsigned)&LCDD12*8+4;
volatile       bit	COM3SEG03	@ (unsigned)&LCDD12*8+3;
volatile       bit	COM3SEG02	@ (unsigned)&LCDD12*8+2;
volatile       bit	COM3SEG01	@ (unsigned)&LCDD12*8+1;
volatile       bit	COM3SEG00	@ (unsigned)&LCDD12*8+0;

/*      LCDD13 bits     COM3    */
volatile       bit	COM3SEG15	@ (unsigned)&LCDD13*8+7;
volatile       bit	COM3SEG14	@ (unsigned)&LCDD13*8+6;
volatile       bit	COM3SEG13	@ (unsigned)&LCDD13*8+5;
volatile       bit	COM3SEG12	@ (unsigned)&LCDD13*8+4;
volatile       bit	COM3SEG11	@ (unsigned)&LCDD13*8+3;
volatile       bit	COM3SEG10	@ (unsigned)&LCDD13*8+2;
volatile       bit	COM3SEG09	@ (unsigned)&LCDD13*8+1;
volatile       bit	COM3SEG08	@ (unsigned)&LCDD13*8+0;

/*      LCDD14 bits     COM3    */
volatile       bit	COM3SEG23	@ (unsigned)&LCDD14*8+7;
volatile       bit	COM3SEG22	@ (unsigned)&LCDD14*8+6;
volatile       bit	COM3SEG21	@ (unsigned)&LCDD14*8+5;
volatile       bit	COM3SEG20	@ (unsigned)&LCDD14*8+4;
volatile       bit	COM3SEG19	@ (unsigned)&LCDD14*8+3;
volatile       bit	COM3SEG18	@ (unsigned)&LCDD14*8+2;
volatile       bit	COM3SEG17	@ (unsigned)&LCDD14*8+1;
volatile       bit	COM3SEG16	@ (unsigned)&LCDD14*8+0;

/*      LCDD15 bits     COM3    */
volatile       bit	COM3SEG31	@ (unsigned)&LCDD15*8+7;
volatile       bit	COM3SEG30	@ (unsigned)&LCDD15*8+6;
volatile       bit	COM3SEG29	@ (unsigned)&LCDD15*8+5;
volatile       bit	COM3SEG28	@ (unsigned)&LCDD15*8+4;
volatile       bit	COM3SEG27	@ (unsigned)&LCDD15*8+3;
volatile       bit	COM3SEG26	@ (unsigned)&LCDD15*8+2;
volatile       bit	COM3SEG25	@ (unsigned)&LCDD15*8+1;
volatile       bit	COM3SEG24	@ (unsigned)&LCDD15*8+0;

/*      TRISF bits      */
volatile       bit	TRISF7	@ (unsigned)&TRISF*8+7;
volatile       bit	TRISF6	@ (unsigned)&TRISF*8+6;
volatile       bit	TRISF5	@ (unsigned)&TRISF*8+5;
volatile       bit	TRISF4	@ (unsigned)&TRISF*8+4;
volatile       bit	TRISF3	@ (unsigned)&TRISF*8+3;
volatile       bit	TRISF2	@ (unsigned)&TRISF*8+2;
volatile       bit	TRISF1	@ (unsigned)&TRISF*8+1;
volatile       bit	TRISF0	@ (unsigned)&TRISF*8+0;

/*      TRISG bits      */
volatile       bit	TRISG7	@ (unsigned)&TRISG*8+7;
volatile       bit	TRISG6	@ (unsigned)&TRISG*8+6;
volatile       bit	TRISG5	@ (unsigned)&TRISG*8+5;
volatile       bit	TRISG4	@ (unsigned)&TRISG*8+4;
volatile       bit	TRISG3	@ (unsigned)&TRISG*8+3;
volatile       bit	TRISG2	@ (unsigned)&TRISG*8+2;
volatile       bit	TRISG1	@ (unsigned)&TRISG*8+1;
volatile       bit	TRISG0	@ (unsigned)&TRISG*8+0;

// definitions select memory reading macros in pic.h
#define EECON1	PMCON1
#define EEDATA	PMDATA
#define EEDATH	PMDATH
#define EEADR	PMADR
#define EEADRH	PMADRH

#define CONFIG_ADDR	0x2007

#define FOSC0		0x01
#define FOSC1		0x02
/*osc configurations*/
#define RC		0x3FFF	// resistor/capacitor
#define HS		0x3FFE	// high speed crystal/resonator
#define XT		0x3FFD	// crystal/resonator
#define LP		0x3FFC	// low power crystal/resonator

#define WDTE		0x04
/*watchdog*/
#define WDTEN		0x3FFF	// enable watchdog timer
#define WDTDIS		0x3FFB	// disable watchdog timer

#define PWRTE		0x08
/*power up timer*/
#define PWRTEN		0x3FF7	// power up timer enable
#define PWRTDIS		0x3FFF	// power up timer disable

#ifdef _16C924
#define BODEN		0x40
/*brown out reset*/
#define BOREN		0x3FFF	// brown out reset enable
#define BORDIS		0x3FBF	// brown out reset disable
#endif

#define CP0		0x1510
#define CP1		0x2A20
/* code protection */
#define UNPROTECT	0x3FFF		/* unprotected */
#define PROTECT50	0x3FEF		/* upper half program memory code protected */
#define PROTECT75	0x3FDF		/* upper 3/4 program memory code protected */
#define PROTECT		0x3FCF		/* all memory code is protected */

