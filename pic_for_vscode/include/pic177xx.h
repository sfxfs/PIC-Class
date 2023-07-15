
#ifndef	_HTC_H_
#warning Header file pic177xx.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip :
 *	PIC 17c752 chip
 *	PIC 17c756 chip
 *	PIC 17C756A chip
 *	PIC 17C762 chip
 *	PIC 17C766 chip
 *	High-end Microcontroller
 */

volatile	unsigned char INDF0	@ 0x00;
		unsigned char FSR0	@ 0x01;
volatile	unsigned char PCL	@ 0x02;
volatile	unsigned char PCLATH	@ 0x03;
volatile	unsigned char ALUSTA	@ 0x04;
		unsigned char T0STA	@ 0x05;
volatile	unsigned char CPUSTA	@ 0x06;
volatile	unsigned char INTSTA	@ 0x07;
volatile	unsigned char INDF1	@ 0x08;
		unsigned char FSR1	@ 0x09;
volatile	unsigned char WREG	@ 0x0A;
volatile	unsigned char TMR0L	@ 0x0B;
volatile	unsigned char TMR0H	@ 0x0C;
volatile unsigned int  TMR0	@ 0x0B;
volatile	unsigned char TBLPTRL	@ 0x0D;
volatile	unsigned char TBLPTRH	@ 0x0E;
		unsigned char BSR	@ 0x0F;
volatile	unsigned char PRODL	@ 0x18;
volatile	unsigned char PRODH	@ 0x19;

	/*  Bank 0  */
volatile unsigned char 	PORTA	@ 0x10;
		unsigned char 	DDRB	@ 0x11;
volatile unsigned char 	PORTB	@ 0x12;
volatile	unsigned char 	RCSTA1	@ 0x13;
volatile	unsigned char 	RCREG1	@ 0x14;
volatile	unsigned char 	TXSTA1	@ 0x15;
volatile unsigned char 	TXREG1	@ 0x16;
		unsigned char 	SPBRG1	@ 0x17;

	/*  Bank 1  */
		unsigned char 	DDRC	@ 0x110;
volatile	unsigned char 	PORTC	@ 0x111;
		unsigned char 	DDRD	@ 0x112;
volatile	unsigned char 	PORTD	@ 0x113;
		unsigned char 	DDRE	@ 0x114;
volatile	unsigned char 	PORTE	@ 0x115;
volatile	unsigned char 	PIR1	@ 0x116;
		unsigned char 	PIE1	@ 0x117;

	/*  Bank 2  */
volatile	unsigned char 	TMR1	@ 0x210;
volatile	unsigned char 	TMR2	@ 0x211;
volatile	unsigned char 	TMR3L	@ 0x212;
volatile	unsigned char 	TMR3H	@ 0x213;
	unsigned char 	PR1	@ 0x214;
	unsigned char 	PR2	@ 0x215;
volatile	unsigned char 	PR3L	@ 0x216;
volatile	unsigned char 	PR3H	@ 0x217;

	/*  Bank 3  */
	unsigned char 	PW1DCL	@ 0x310;
	unsigned char 	PW2DCL	@ 0x311;
	unsigned char 	PW1DCH	@ 0x312;
	unsigned char 	PW2DCH	@ 0x313;
volatile	unsigned char 	CA2L	@ 0x314;
volatile	unsigned char 	CA2H	@ 0x315;
	unsigned char 	TCON1	@ 0x316;
volatile	unsigned char 	TCON2	@ 0x317;
	
	/*  Bank 4 */
	unsigned char 	PIR2	@ 0x410;
	unsigned char 	PIE2	@ 0x411;
volatile	unsigned char 	RCSTA2	@ 0x413;
volatile	unsigned char 	RCREG2	@ 0x414;
volatile	unsigned char 	TXSTA2	@ 0x415;
volatile	unsigned char 	TXREG2	@ 0x416;
	unsigned char 	SPBRG2	@ 0x417;

	/*  Bank 5  */
		unsigned char 	DDRF	@ 0x510;
volatile	unsigned char 	PORTF	@ 0x511;
		unsigned char 	DDRG	@ 0x512;
volatile	unsigned char 	PORTG	@ 0x513;
volatile	unsigned char 	ADCON0	@ 0x514;
	unsigned char 	ADCON1	@ 0x515;
volatile	unsigned char 	ADRESL	@ 0x516;
volatile	unsigned char 	ADRESH	@ 0x517;
volatile	unsigned int	ADRES	@ 0x516;	// word version

	/*  Bank 6  */
	unsigned char 	SSPADD	@ 0x610;
volatile	unsigned char 	SSPCON1	@ 0x611;
volatile	unsigned char 	SSPCON2	@ 0x612;
volatile	unsigned char 	SSPSTAT	@ 0x613;
volatile	unsigned char 	SSPBUF	@ 0x614;

	/*  Bank 7  */
	unsigned char 	PW3DCL	@ 0x710;
	unsigned char 	PW3DCH	@ 0x711;
volatile	unsigned char 	CA3L	@ 0x712;
volatile	unsigned char 	CA3H	@ 0x713;
volatile	unsigned char 	CA4L	@ 0x714;
volatile	unsigned char 	CA4H	@ 0x715;
volatile	unsigned char 	TCON3	@ 0x716;

#if defined(_17C762) || defined(_17C766)
	/* Bank 8  */
		unsigned char	DDRH	@0x810;
volatile unsigned char	PORTH	@0x811;
		unsigned char	DDRJ	@0x812;
volatile unsigned char	PORTJ	@0x813;
#endif

	/* Bank 15 */
	unsigned char 	TSTMD1	@ 0xF14;
	unsigned char 	TSTMD2	@ 0xF16;

/*      ALUSTA bits     */
bit      FS3     @ (unsigned)&ALUSTA*8+7;
bit      FS2     @ (unsigned)&ALUSTA*8+6;
bit      FS1     @ (unsigned)&ALUSTA*8+5;
bit      FS0     @ (unsigned)&ALUSTA*8+4;
bit      OV      @ (unsigned)&ALUSTA*8+3;
bit      ZERO    @ (unsigned)&ALUSTA*8+2;
bit      DC      @ (unsigned)&ALUSTA*8+1;
volatile bit      CARRY   @ (unsigned)&ALUSTA*8+0;

/*	T0STA bits	*/
		bit	INTEDG	@ (unsigned)&T0STA*8+7;
		bit	T0SE	@ (unsigned)&T0STA*8+6;
		bit	T0CS	@ (unsigned)&T0STA*8+5;
		bit	PS3	@ (unsigned)&T0STA*8+4;
		bit	PS2	@ (unsigned)&T0STA*8+3;
		bit	PS1	@ (unsigned)&T0STA*8+2;
		bit	PS0	@ (unsigned)&T0STA*8+1;

/*	CPUSTA bits	*/
volatile	bit	STKAV	@ (unsigned)&CPUSTA*8+5;
volatile	bit	GLINTD	@ (unsigned)&CPUSTA*8+4;
volatile	bit	TO	@ (unsigned)&CPUSTA*8+3;
volatile	bit	PD	@ (unsigned)&CPUSTA*8+2;
volatile	bit	POR	@ (unsigned)&CPUSTA*8+1;
volatile	bit	BOR	@ (unsigned)&CPUSTA*8+0;

/*	INTSTA bits	*/
volatile	bit	PEIF	@ (unsigned)&INTSTA*8+7;
volatile	bit	T0CKIF	@ (unsigned)&INTSTA*8+6;
volatile	bit	T0IF	@ (unsigned)&INTSTA*8+5;
volatile	bit	INTF	@ (unsigned)&INTSTA*8+4;
		bit	PEIE	@ (unsigned)&INTSTA*8+3;
		bit	T0CKIE	@ (unsigned)&INTSTA*8+2;
		bit	T0IE	@ (unsigned)&INTSTA*8+1;
		bit	INTE	@ (unsigned)&INTSTA*8+0;

/*      PORTA bits      */
volatile bit	 RBPU	 @ (unsigned)&PORTA*8+7;
volatile bit      RA5     @ (unsigned)&PORTA*8+5;
volatile bit      RA4     @ (unsigned)&PORTA*8+4;
volatile bit      RA3     @ (unsigned)&PORTA*8+3;
volatile bit      RA2     @ (unsigned)&PORTA*8+2;
volatile bit      RA1     @ (unsigned)&PORTA*8+1;
volatile bit      RA0     @ (unsigned)&PORTA*8+0;

/*      PORTB bits      */
volatile bit      RB7     @ (unsigned)&PORTB*8+7;
volatile bit      RB6     @ (unsigned)&PORTB*8+6;
volatile bit      RB5     @ (unsigned)&PORTB*8+5;
volatile bit      RB4     @ (unsigned)&PORTB*8+4;
volatile bit      RB3     @ (unsigned)&PORTB*8+3;
volatile bit      RB2     @ (unsigned)&PORTB*8+2;
volatile bit      RB1     @ (unsigned)&PORTB*8+1;
volatile bit      RB0     @ (unsigned)&PORTB*8+0;

/*	DDRB bits	*/
	bit	   DDRB7   @ (unsigned)&DDRB*8+7;
	bit	   DDRB6   @ (unsigned)&DDRB*8+6;
	bit	   DDRB5   @ (unsigned)&DDRB*8+5;
	bit	   DDRB4   @ (unsigned)&DDRB*8+4;
	bit	   DDRB3   @ (unsigned)&DDRB*8+3;
	bit	   DDRB2   @ (unsigned)&DDRB*8+2;
	bit	   DDRB1   @ (unsigned)&DDRB*8+1;
	bit	   DDRB0   @ (unsigned)&DDRB*8+0;

/*	RCSTA1 bits	*/
		bit	SPEN1	@ (unsigned)&RCSTA1*8+7;
		bit	RX91	@ (unsigned)&RCSTA1*8+6;
		bit	SREN1	@ (unsigned)&RCSTA1*8+5;
		bit	CREN1	@ (unsigned)&RCSTA1*8+4;
volatile	bit	FERR1	@ (unsigned)&RCSTA1*8+2;
volatile	bit	OERR1	@ (unsigned)&RCSTA1*8+1;
volatile	bit	RX9D1	@ (unsigned)&RCSTA1*8+0;

/*	TXSTA1 bits	*/
		bit	CSRC1	@ (unsigned)&TXSTA1*8+7;
		bit	TX91	@ (unsigned)&TXSTA1*8+6;
		bit	TXEN1	@ (unsigned)&TXSTA1*8+5;
		bit	SYNC1	@ (unsigned)&TXSTA1*8+4;
volatile	bit	TRMT1	@ (unsigned)&TXSTA1*8+1;
		bit	TX9D1	@ (unsigned)&TXSTA1*8+0;

/*      PORTC bits      */
volatile bit      RC7     @ (unsigned)&PORTC*8+7;
volatile bit      RC6     @ (unsigned)&PORTC*8+6;
volatile bit      RC5     @ (unsigned)&PORTC*8+5;
volatile bit      RC4     @ (unsigned)&PORTC*8+4;
volatile bit      RC3     @ (unsigned)&PORTC*8+3;
volatile bit      RC2     @ (unsigned)&PORTC*8+2;
volatile bit      RC1     @ (unsigned)&PORTC*8+1;
volatile bit      RC0     @ (unsigned)&PORTC*8+0;

/*	DDRC bits	*/
	bit	   DDRC7   @ (unsigned)&DDRC*8+7;
	bit	   DDRC6   @ (unsigned)&DDRC*8+6;
	bit	   DDRC5   @ (unsigned)&DDRC*8+5;
	bit	   DDRC4   @ (unsigned)&DDRC*8+4;
	bit	   DDRC3   @ (unsigned)&DDRC*8+3;
	bit	   DDRC2   @ (unsigned)&DDRC*8+2;
	bit	   DDRC1   @ (unsigned)&DDRC*8+1;
	bit	   DDRC0   @ (unsigned)&DDRC*8+0;

/*      PORTD bits      */
volatile bit      RD7     @ (unsigned)&PORTD*8+7;
volatile bit      RD6     @ (unsigned)&PORTD*8+6;
volatile bit      RD5     @ (unsigned)&PORTD*8+5;
volatile bit      RD4     @ (unsigned)&PORTD*8+4;
volatile bit      RD3     @ (unsigned)&PORTD*8+3;
volatile bit      RD2     @ (unsigned)&PORTD*8+2;
volatile bit      RD1     @ (unsigned)&PORTD*8+1;
volatile bit      RD0     @ (unsigned)&PORTD*8+0;

/*	DDRD bits	*/
	bit	   DDRD7   @ (unsigned)&DDRD*8+7;
	bit	   DDRD6   @ (unsigned)&DDRD*8+6;
	bit	   DDRD5   @ (unsigned)&DDRD*8+5;
	bit	   DDRD4   @ (unsigned)&DDRD*8+4;
	bit	   DDRD3   @ (unsigned)&DDRD*8+3;
	bit	   DDRD2   @ (unsigned)&DDRD*8+2;
	bit	   DDRD1   @ (unsigned)&DDRD*8+1;
	bit	   DDRD0   @ (unsigned)&DDRD*8+0;

/*      PORTE bits      */
volatile bit        RE3     @ (unsigned)&PORTE*8+3;
volatile bit        RE2     @ (unsigned)&PORTE*8+2;
volatile bit        RE1     @ (unsigned)&PORTE*8+1;
volatile bit        RE0     @ (unsigned)&PORTE*8+0;

/*	DDRE bits	*/
	bit	   DDRE3   @ (unsigned)&DDRE*8+3;
	bit	   DDRE2   @ (unsigned)&DDRE*8+2;
	bit	   DDRE1   @ (unsigned)&DDRE*8+1;
	bit	   DDRE0   @ (unsigned)&DDRE*8+0;

/*	PIR1 bits	*/
volatile	bit	RBIF	@ (unsigned)&PIR1*8+7;
volatile	bit	TMR3IF	@ (unsigned)&PIR1*8+6;
volatile	bit	TMR2IF	@ (unsigned)&PIR1*8+5;
volatile	bit	TMR1IF	@ (unsigned)&PIR1*8+4;
volatile	bit	CA2IF	@ (unsigned)&PIR1*8+3;
volatile	bit	CA1IF	@ (unsigned)&PIR1*8+2;
volatile	bit	TX1IF	@ (unsigned)&PIR1*8+1;
volatile	bit	RC1IF	@ (unsigned)&PIR1*8+0;

/*	PIE1 bits	*/
		bit	RBIE	@ (unsigned)&PIE1*8+7;
		bit	TMR3IE	@ (unsigned)&PIE1*8+6;
		bit	TMR2IE	@ (unsigned)&PIE1*8+5;
		bit	TMR1IE	@ (unsigned)&PIE1*8+4;
		bit	CA2IE	@ (unsigned)&PIE1*8+3;
		bit	CA1IE	@ (unsigned)&PIE1*8+2;
		bit	TX1IE	@ (unsigned)&PIE1*8+1;
		bit	RC1IE	@ (unsigned)&PIE1*8+0;

/*      PW1DCL bits     */
bit        DC1PW1  @ (unsigned)&PW1DCL*8+7;
bit        DC0PW1  @ (unsigned)&PW1DCL*8+6;

/*      PW2DCL  bits    */
bit        DC1PW2  @ (unsigned)&PW2DCL*8+7;
bit        DC0PW2  @ (unsigned)&PW2DCL*8+6;
bit        TM2PW2  @ (unsigned)&PW2DCL*8+5;

/*      PW1DCH bits     */
bit        DC9PW1  @ (unsigned)&PW1DCH*8+7;
bit        DC8PW1  @ (unsigned)&PW1DCH*8+6;
bit        DC7PW1  @ (unsigned)&PW1DCH*8+5;
bit        DC6PW1  @ (unsigned)&PW1DCH*8+4;
bit        DC5PW1  @ (unsigned)&PW1DCH*8+3;
bit        DC4PW1  @ (unsigned)&PW1DCH*8+2;
bit        DC3PW1  @ (unsigned)&PW1DCH*8+1;
bit        DC2PW1  @ (unsigned)&PW1DCH*8+0;

/*      PW2DCH bits     */
bit        DC9PW2  @ (unsigned)&PW2DCH*8+7;
bit        DC8PW2  @ (unsigned)&PW2DCH*8+6;
bit        DC7PW2  @ (unsigned)&PW2DCH*8+5;
bit        DC6PW2  @ (unsigned)&PW2DCH*8+4;
bit        DC5PW2  @ (unsigned)&PW2DCH*8+3;
bit        DC4PW2  @ (unsigned)&PW2DCH*8+2;
bit        DC3PW2  @ (unsigned)&PW2DCH*8+1;
bit        DC2PW2  @ (unsigned)&PW2DCH*8+0;

/*	TCON1 bits	*/
		bit	CA2ED1	@ (unsigned)&TCON1*8+7;
		bit	CA2ED0	@ (unsigned)&TCON1*8+6;
		bit	CA1ED1	@ (unsigned)&TCON1*8+5;
		bit	CA1ED0	@ (unsigned)&TCON1*8+4;
		bit	T16	@ (unsigned)&TCON1*8+3;
		bit	TMR3CS	@ (unsigned)&TCON1*8+2;
		bit	TMR2CS	@ (unsigned)&TCON1*8+1;
		bit	TMR1CS	@ (unsigned)&TCON1*8+0;

/*	TCON2 bits	*/
volatile	bit	CA2OVF	@ (unsigned)&TCON2*8+7;
volatile	bit	CA1OVF	@ (unsigned)&TCON2*8+6;
volatile bit	PWM2ON	@ (unsigned)&TCON2*8+5;
volatile	bit	PWM1ON	@ (unsigned)&TCON2*8+4;
		bit	CA1	@ (unsigned)&TCON2*8+3;
		bit	TMR3ON	@ (unsigned)&TCON2*8+2;
		bit	TMR2ON	@ (unsigned)&TCON2*8+1;
		bit	TMR1ON	@ (unsigned)&TCON2*8+0;

/*	PIR2 bits	*/
volatile	bit	SSPIF	@ (unsigned)&PIR2*8+7;
volatile	bit	BCLIF	@ (unsigned)&PIR2*8+6;
volatile	bit	ADIF	@ (unsigned)&PIR2*8+5;
volatile	bit	CA4IF	@ (unsigned)&PIR2*8+3;
volatile	bit	CA3IF	@ (unsigned)&PIR2*8+2;
volatile	bit	TX2IF	@ (unsigned)&PIR2*8+1;
volatile	bit	RC2IF	@ (unsigned)&PIR2*8+0;

/*	PIE2 bits	*/
		bit	SSPIE	@ (unsigned)&PIE2*8+7;
		bit	BCLIE	@ (unsigned)&PIE2*8+6;
		bit	ADIE	@ (unsigned)&PIE2*8+5;
		bit	CA4IE	@ (unsigned)&PIE2*8+3;
		bit	CA3IE	@ (unsigned)&PIE2*8+2;
		bit	TX2IE	@ (unsigned)&PIE2*8+1;
		bit	RC2IE	@ (unsigned)&PIE2*8+0;

/*	RCSTA2 bits	*/
		bit	SPEN2	@ (unsigned)&RCSTA2*8+7;
		bit	RX92	@ (unsigned)&RCSTA2*8+6;
		bit	SREN2	@ (unsigned)&RCSTA2*8+5;
		bit	CREN2	@ (unsigned)&RCSTA2*8+4;
volatile	bit	FERR2	@ (unsigned)&RCSTA2*8+2;
volatile	bit	OERR2	@ (unsigned)&RCSTA2*8+1;
volatile	bit	RX9D2	@ (unsigned)&RCSTA2*8+0;

/*	TXSTA2 bits	*/
		bit	CSRC2	@ (unsigned)&TXSTA2*8+7;
		bit	TX92	@ (unsigned)&TXSTA2*8+6;
		bit	TXEN2	@ (unsigned)&TXSTA2*8+5;
		bit	SYNC2	@ (unsigned)&TXSTA2*8+4;
volatile	bit	TRMT2	@ (unsigned)&TXSTA2*8+1;
		bit	TX9D2	@ (unsigned)&TXSTA2*8+0;

/*      PORTF bits      */
volatile bit        RF7     @ (unsigned)&PORTF*8+7;
volatile bit        RF6     @ (unsigned)&PORTF*8+6;
volatile bit        RF5     @ (unsigned)&PORTF*8+5;
volatile bit        RF4     @ (unsigned)&PORTF*8+4;
volatile bit        RF3     @ (unsigned)&PORTF*8+3;
volatile bit        RF2     @ (unsigned)&PORTF*8+2;
volatile bit        RF1     @ (unsigned)&PORTF*8+1;
volatile bit        RF0     @ (unsigned)&PORTF*8+0;

/*	DDRF bits	*/
	bit	   DDRF7   @ (unsigned)&DDRF*8+7;
	bit	   DDRF6   @ (unsigned)&DDRF*8+6;
	bit	   DDRF5   @ (unsigned)&DDRF*8+5;
	bit	   DDRF4   @ (unsigned)&DDRF*8+4;
	bit	   DDRF3   @ (unsigned)&DDRF*8+3;
	bit	   DDRF2   @ (unsigned)&DDRF*8+2;
	bit	   DDRF1   @ (unsigned)&DDRF*8+1;
	bit	   DDRF0   @ (unsigned)&DDRF*8+0;

/*      PORTG bits      */
volatile bit        RG7     @ (unsigned)&PORTG*8+7;
volatile bit        RG6     @ (unsigned)&PORTG*8+6;
volatile bit        RG5     @ (unsigned)&PORTG*8+5;
volatile bit        RG4     @ (unsigned)&PORTG*8+4;
volatile bit        RG3     @ (unsigned)&PORTG*8+3;
volatile bit        RG2     @ (unsigned)&PORTG*8+2;
volatile bit        RG1     @ (unsigned)&PORTG*8+1;
volatile bit        RG0     @ (unsigned)&PORTG*8+0;

/*	DDRG bits	*/
	bit	   DDRG7   @ (unsigned)&DDRG*8+7;
	bit	   DDRG6   @ (unsigned)&DDRG*8+6;
	bit	   DDRG5   @ (unsigned)&DDRG*8+5;
	bit	   DDRG4   @ (unsigned)&DDRG*8+4;
	bit	   DDRG3   @ (unsigned)&DDRG*8+3;
	bit	   DDRG2   @ (unsigned)&DDRG*8+2;
	bit	   DDRG1   @ (unsigned)&DDRG*8+1;
	bit	   DDRG0   @ (unsigned)&DDRG*8+0;

/*	ADCON0 bits	*/
		bit	CHS3	@ (unsigned)&ADCON0*8+7;
		bit	CHS2	@ (unsigned)&ADCON0*8+6;
		bit	CHS1	@ (unsigned)&ADCON0*8+5;
		bit	CHS0	@ (unsigned)&ADCON0*8+4;
volatile	bit	GO	@ (unsigned)&ADCON0*8+2;
		bit	ADON	@ (unsigned)&ADCON0*8+0;

/*	ADCON1 bits	*/
		bit	ADCS1	@ (unsigned)&ADCON1*8+7;
		bit	ADCS0	@ (unsigned)&ADCON1*8+6;
		bit	ADFM	@ (unsigned)&ADCON1*8+5;
		bit	PCFG3	@ (unsigned)&ADCON1*8+3;
		bit	PCFG2	@ (unsigned)&ADCON1*8+2;
		bit	PCFG1	@ (unsigned)&ADCON1*8+1;
		bit	PCFG0	@ (unsigned)&ADCON1*8+0;

/*	SSPCON1 bits	*/
volatile	bit	WCOL	@ (unsigned)&SSPCON1*8+7;
volatile	bit	SSPOV	@ (unsigned)&SSPCON1*8+6;
		bit	SSPEN	@ (unsigned)&SSPCON1*8+5;
		bit	CKP	@ (unsigned)&SSPCON1*8+4;
		bit	SSPM3	@ (unsigned)&SSPCON1*8+3;
		bit	SSPM2	@ (unsigned)&SSPCON1*8+2;
		bit	SSPM1	@ (unsigned)&SSPCON1*8+1;
		bit	SSPM0	@ (unsigned)&SSPCON1*8+0;

/*	SSPCON2 bits	*/
		bit	GCEN	@ (unsigned)&SSPCON2*8+7;
volatile	bit	ACKSTAT	@ (unsigned)&SSPCON2*8+6;
		bit	ACKDT	@ (unsigned)&SSPCON2*8+5;
		bit	ACKEN	@ (unsigned)&SSPCON2*8+4;
		bit	RCEN	@ (unsigned)&SSPCON2*8+3;
volatile	bit	PEN	@ (unsigned)&SSPCON2*8+2;
volatile	bit	RSEN	@ (unsigned)&SSPCON2*8+1;
volatile	bit	SEN	@ (unsigned)&SSPCON2*8+0;

/*      SSPSTAT bits    */
	bit	SMP	@ (unsigned)&SSPSTAT*8+7;
	bit	CKE	@ (unsigned)&SSPSTAT*8+6;
	bit	DA	@ (unsigned)&SSPSTAT*8+5;
	bit	STOP	@ (unsigned)&SSPSTAT*8+4;
	bit	START	@ (unsigned)&SSPSTAT*8+3;
	bit	RW	@ (unsigned)&SSPSTAT*8+2;
	bit	UA	@ (unsigned)&SSPSTAT*8+1;
	bit	BF	@ (unsigned)&SSPSTAT*8+0;
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

/*      PW3DCL  bits    */
bit        DC1PW3  @ (unsigned)&PW3DCL*8+7;
bit        DC0PW3  @ (unsigned)&PW3DCL*8+6;
bit        TM2PW3  @ (unsigned)&PW3DCL*8+5;

/*      PW3DCH bits     */
bit        DC9PW3  @ (unsigned)&PW3DCH*8+7;
bit        DC8PW3  @ (unsigned)&PW3DCH*8+6;
bit        DC7PW3  @ (unsigned)&PW3DCH*8+5;
bit        DC6PW3  @ (unsigned)&PW3DCH*8+4;
bit        DC5PW3  @ (unsigned)&PW3DCH*8+3;
bit        DC4PW3  @ (unsigned)&PW3DCH*8+2;
bit        DC3PW3  @ (unsigned)&PW3DCH*8+1;
bit        DC2PW3  @ (unsigned)&PW3DCH*8+0;

/*	TCON3 bits	*/
volatile	bit	CA4OVF	@ (unsigned)&TCON3*8+6;
volatile	bit	CA3OVF	@ (unsigned)&TCON3*8+5;
		bit	CA4ED1	@ (unsigned)&TCON3*8+4;
		bit	CA4ED0	@ (unsigned)&TCON3*8+3;
		bit	CA3ED1	@ (unsigned)&TCON3*8+2;
		bit	CA3ED0	@ (unsigned)&TCON3*8+1;
		bit	PWM3ON	@ (unsigned)&TCON3*8+0;

#if defined(_17C762) || defined(_17C766)
/*      PORTH bits      */
volatile bit        RH7     @ (unsigned)&PORTH*8+7;
volatile bit        RH6     @ (unsigned)&PORTH*8+6;
volatile bit        RH5     @ (unsigned)&PORTH*8+5;
volatile bit        RH4     @ (unsigned)&PORTH*8+4;
volatile bit        RH3     @ (unsigned)&PORTH*8+3;
volatile bit        RH2     @ (unsigned)&PORTH*8+2;
volatile bit        RH1     @ (unsigned)&PORTH*8+1;
volatile bit        RH0     @ (unsigned)&PORTH*8+0;

/*      PORTJ bits      */
volatile bit        RJ7     @ (unsigned)&PORTJ*8+7;
volatile bit        RJ6     @ (unsigned)&PORTJ*8+6;
volatile bit        RJ5     @ (unsigned)&PORTJ*8+5;
volatile bit        RJ4     @ (unsigned)&PORTJ*8+4;
volatile bit        RJ3     @ (unsigned)&PORTJ*8+3;
volatile bit        RJ2     @ (unsigned)&PORTJ*8+2;
volatile bit        RJ1     @ (unsigned)&PORTJ*8+1;
volatile bit        RJ0     @ (unsigned)&PORTJ*8+0;

/*	DDRH bits	*/
	bit	   DDRH7   @ (unsigned)&DDRH*8+7;
	bit	   DDRH6   @ (unsigned)&DDRH*8+6;
	bit	   DDRH5   @ (unsigned)&DDRH*8+5;
	bit	   DDRH4   @ (unsigned)&DDRH*8+4;
	bit	   DDRH3   @ (unsigned)&DDRH*8+3;
	bit	   DDRH2   @ (unsigned)&DDRH*8+2;
	bit	   DDRH1   @ (unsigned)&DDRH*8+1;
	bit	   DDRH0   @ (unsigned)&DDRH*8+0;

/*	DDRJ bits	*/
	bit	   DDRJ7   @ (unsigned)&DDRJ*8+7;
	bit	   DDRJ6   @ (unsigned)&DDRJ*8+6;
	bit	   DDRJ5   @ (unsigned)&DDRJ*8+5;
	bit	   DDRJ4   @ (unsigned)&DDRJ*8+4;
	bit	   DDRJ3   @ (unsigned)&DDRJ*8+3;
	bit	   DDRJ2   @ (unsigned)&DDRJ*8+2;
	bit	   DDRJ1   @ (unsigned)&DDRJ*8+1;
	bit	   DDRJ0   @ (unsigned)&DDRJ*8+0;
#endif

#if	0
/*	TSTMD1 bits	*/
bit	FPMM2	@ (unsigned)&TSTMD1*8+7;
bit	BODEN1	@ (unsigned)&TSTMD1*8+6;
bit	ADTST	@ (unsigned)&TSTMD1*8+0;

/*	TSTMD2 bits	*/
bit	TSTMUX	@ (unsigned)&TSTMD2*8+7;
bit	FPMM1	@ (unsigned)&TSTMD2*8+6;
bit	GLWP	@ (unsigned)&TSTMD2*8+5;
bit	FPMM0	@ (unsigned)&TSTMD2*8+4;
bit	NWDT1	@ (unsigned)&TSTMD2*8+3;
bit	NWDT0	@ (unsigned)&TSTMD2*8+2;
bit	SOSC1	@ (unsigned)&TSTMD2*8+1;
bit	SOSC0	@ (unsigned)&TSTMD2*8+0;
#endif

#define CONFIG_ADDR	0xFE00
/*osc configurations*/
#define EC		0xFFFF	// external clock
#define XT		0xFFFE	// crystal/resonator
#define RC		0xFFFD	// external resistor/capacitor
#define LF		0xFFFC	// low frequency

/*watchdog timer postscaler*/
#define WDTPS1		0xFFFF	// postscaler = 1
#define WDTPS256	0xFFFB	// postscaler = 256
#define WDTPS64		0xFFF7	// postscaler = 64
#define WDTDIS		0xFFF3	// watchdog timer is disabled

/*brown out reset*/
#define BOREN		0xFFFF	// enable brown out reset
#define BORDIS		0xBFFF	// disable brown out reset

/* PM2, PM1, PM0  Processor mode select */
#define PROTECT		0xBFAF			/* code protected microcontroller mode */
#define MICROPROCESSOR	0xFFFF			/* microprocessor mode */
#define MICROCONTROLLER	0xFFEF			/* microcontroller mode */
#define EXT_MICROCTRL	0xFFBF			/* extended microcontroller mode */

