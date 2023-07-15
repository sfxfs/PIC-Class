
#ifndef	_HTC_H_
#warning Header file pic1674.h included directly. Use #include <htc.h> instead.
#endif

/*
 *    Header file for the Microchip 
 *      PIC 16C73 chip
 *      PIC 16C73A chip
 *      PIC 16C74 chip
 *      PIC 16C74A chip
 *      PIC 16C63 chip
 *      PIC 16CR63 chip
 *      PIC 16C63A chip
 *      PIC 16C65B chip
 *      PIC 16C73B chip
 *      PIC 16C74B chip
 *      PIC 16LC74B-16/PTL16 chip
 *      Midrange Microcontrollers
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
volatile unsigned char PIR2	@ 0x0D;
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
volatile unsigned char RCSTA	@ 0x18;
volatile unsigned char TXREG	@ 0x19;
volatile unsigned char RCREG	@ 0x1A;
volatile unsigned char CCPR2L	@ 0x1B;
volatile unsigned char CCPR2H	@ 0x1C;
volatile unsigned char CCP2CON	@ 0x1D;

#if	defined(_16C73)  || defined(_16C74)  || \
	defined(_16C73A) || defined(_16C74A) || \
	defined(_16C73B) || defined(_16C74B) || \
	defined(_16LC74B)
volatile unsigned char ADRES	@ 0x1E;
volatile unsigned char ADCON0	@ 0x1F;
#endif

		unsigned char       OPTION	@ 0x81;
volatile unsigned char       TRISA	@ 0x85;
volatile unsigned char       TRISB	@ 0x86;
volatile unsigned char       TRISC	@ 0x87;
volatile unsigned char       TRISD	@ 0x88;
volatile unsigned char       TRISE	@ 0x89;
volatile unsigned char       PIE1	@ 0x8C;
volatile unsigned char       PIE2	@ 0x8D;
volatile unsigned char       PCON	@ 0x8E;
volatile unsigned char       PR2		@ 0x92;
volatile unsigned char       SSPADD	@ 0x93;
volatile unsigned char       SSPSTAT	@ 0x94;
volatile unsigned char       TXSTA	@ 0x98;
volatile unsigned char       SPBRG	@ 0x99;
#if	defined(_16C73)  || defined(_16C74)  || \
	defined(_16C73A) || defined(_16C74A) || \
	defined(_16C73B) || defined(_16C74B) || \
	defined(_16LC74B)
volatile unsigned char       ADCON1	@ 0x9F;
#endif

/*      STATUS bits     */
volatile bit	RP0	@ (unsigned) &STATUS * 8 + 5;
volatile bit	TO	@ (unsigned) &STATUS * 8 + 4;
volatile bit	PD	@ (unsigned) &STATUS * 8 + 3;
volatile bit	ZERO	@ (unsigned) &STATUS * 8 + 2;
volatile bit	DC	@ (unsigned) &STATUS * 8 + 1;
volatile bit	CARRY	@ (unsigned) &STATUS * 8 + 0;

/*      PORTA bits      */
volatile bit	RA5	@ (unsigned) &PORTA * 8 + 5;
volatile bit	RA4	@ (unsigned) &PORTA * 8 + 4;
volatile bit	RA3	@ (unsigned) &PORTA * 8 + 3;
volatile bit	RA2	@ (unsigned) &PORTA * 8 + 2;
volatile bit	RA1	@ (unsigned) &PORTA * 8 + 1;
volatile bit	RA0	@ (unsigned) &PORTA * 8 + 0;

/*      PORTB bits      */
volatile bit	RB7	@ (unsigned) &PORTB * 8 + 7;
volatile bit	RB6	@ (unsigned) &PORTB * 8 + 6;
volatile bit	RB5	@ (unsigned) &PORTB * 8 + 5;
volatile bit	RB4	@ (unsigned) &PORTB * 8 + 4;
volatile bit	RB3	@ (unsigned) &PORTB * 8 + 3;
volatile bit	RB2	@ (unsigned) &PORTB * 8 + 2;
volatile bit	RB1	@ (unsigned) &PORTB * 8 + 1;
volatile bit	RB0	@ (unsigned) &PORTB * 8 + 0;

/*      PORTC bits      */
volatile bit	RC7	@ (unsigned) &PORTC * 8 + 7;
volatile bit	RC6	@ (unsigned) &PORTC * 8 + 6;
volatile bit	RC5	@ (unsigned) &PORTC * 8 + 5;
volatile bit	RC4	@ (unsigned) &PORTC * 8 + 4;
volatile bit	RC3	@ (unsigned) &PORTC * 8 + 3;
volatile bit	RC2	@ (unsigned) &PORTC * 8 + 2;
volatile bit	RC1	@ (unsigned) &PORTC * 8 + 1;
volatile bit	RC0	@ (unsigned) &PORTC * 8 + 0;

#if 	defined(_16C74)  || defined(_16C74A) || \
	defined(_16C65B) || defined(_16C74B) || \
	defined(_16LC74B)

volatile unsigned char PORTD	@ 0x08;
volatile unsigned char PORTE	@ 0x09;

/*      PORTD bits      */
volatile bit	RD7	@ (unsigned) &PORTD * 8 + 7;
volatile bit	RD6	@ (unsigned) &PORTD * 8 + 6;
volatile bit	RD5	@ (unsigned) &PORTD * 8 + 5;
volatile bit	RD4	@ (unsigned) &PORTD * 8 + 4;
volatile bit	RD3	@ (unsigned) &PORTD * 8 + 3;
volatile bit	RD2	@ (unsigned) &PORTD * 8 + 2;
volatile bit	RD1	@ (unsigned) &PORTD * 8 + 1;
volatile bit	RD0	@ (unsigned) &PORTD * 8 + 0;

/*      PORTE bits      */
volatile bit	RE2	@ (unsigned) &PORTE * 8 + 2;
volatile bit	RE1	@ (unsigned) &PORTE * 8 + 1;
volatile bit	RE0	@ (unsigned) &PORTE * 8 + 0;

#endif

/*      INTCON bits     */
volatile bit	GIE	@ (unsigned) &INTCON * 8 + 7;
volatile bit	PEIE	@ (unsigned) &INTCON * 8 + 6;
volatile bit	T0IE	@ (unsigned) &INTCON * 8 + 5;
volatile bit	INTE	@ (unsigned) &INTCON * 8 + 4;
volatile bit	RBIE	@ (unsigned) &INTCON * 8 + 3;
volatile bit	T0IF	@ (unsigned) &INTCON * 8 + 2;
volatile bit	INTF	@ (unsigned) &INTCON * 8 + 1;
volatile bit	RBIF	@ (unsigned) &INTCON * 8 + 0;

/*      PIR1 bits       */
#if	defined(_16C74)  || defined(_16C74A) || \
	defined(_16C65B) || defined(_16C74B) || \
	defined(_16LC74B)
volatile bit	PSPIF	@ (unsigned) &PIR1 * 8 + 7;
#endif
#if	defined(_16C73)  || defined(_16C74)  || \
	defined(_16C73A) || defined(_16C74A) || \
	defined(_16C73B) || defined(_16C74B) || \
	defined(_16LC74B)
volatile bit	ADIF	@ (unsigned) &PIR1 * 8 + 6;
#endif
volatile bit	RCIF	@ (unsigned) &PIR1 * 8 + 5;
volatile bit	TXIF	@ (unsigned) &PIR1 * 8 + 4;
volatile bit	SSPIF	@ (unsigned) &PIR1 * 8 + 3;
volatile bit	CCP1IF	@ (unsigned) &PIR1 * 8 + 2;
volatile bit	TMR2IF	@ (unsigned) &PIR1 * 8 + 1;
volatile bit	TMR1IF	@ (unsigned) &PIR1 * 8 + 0;

/*      PIR2 bits       */
volatile bit	CCP2IF	@ (unsigned) &PIR2 * 8 + 0;

/*      T1CON bits      */
volatile bit	T1CKPS1	@ (unsigned) &T1CON * 8 + 5;
volatile bit	T1CKPS0	@ (unsigned) &T1CON * 8 + 4;
volatile bit	T1OSCEN	@ (unsigned) &T1CON * 8 + 3;
volatile bit	T1SYNC	@ (unsigned) &T1CON * 8 + 2;
volatile bit	TMR1CS	@ (unsigned) &T1CON * 8 + 1;
volatile bit	TMR1ON	@ (unsigned) &T1CON * 8 + 0;

/*      T2CON bits      */
volatile bit	TOUTPS3	@ (unsigned) &T2CON * 8 + 6;
volatile bit	TOUTPS2	@ (unsigned) &T2CON * 8 + 5;
volatile bit	TOUTPS1	@ (unsigned) &T2CON * 8 + 4;
volatile bit	TOUTPS0	@ (unsigned) &T2CON * 8 + 3;
volatile bit	TMR2ON	@ (unsigned) &T2CON * 8 + 2;
volatile bit	T2CKPS1	@ (unsigned) &T2CON * 8 + 1;
volatile bit	T2CKPS0	@ (unsigned) &T2CON * 8 + 0;

/*      SSPCON bits     */
volatile bit	WCOL	@ (unsigned) &SSPCON * 8 + 7;
volatile bit	SSPOV	@ (unsigned) &SSPCON * 8 + 6;
volatile bit	SSPEN	@ (unsigned) &SSPCON * 8 + 5;
volatile bit	CKP	@ (unsigned) &SSPCON * 8 + 4;
volatile bit	SSPM3	@ (unsigned) &SSPCON * 8 + 3;
volatile bit	SSPM2	@ (unsigned) &SSPCON * 8 + 2;
volatile bit	SSPM1	@ (unsigned) &SSPCON * 8 + 1;
volatile bit	SSPM0	@ (unsigned) &SSPCON * 8 + 0;

/*      CCP1CON bits    */
volatile bit	CCP1X	@ (unsigned) &CCP1CON * 8 + 5;
volatile bit	CCP1Y	@ (unsigned) &CCP1CON * 8 + 4;
volatile bit	CCP1M3	@ (unsigned) &CCP1CON * 8 + 3;
volatile bit	CCP1M2	@ (unsigned) &CCP1CON * 8 + 2;
volatile bit	CCP1M1	@ (unsigned) &CCP1CON * 8 + 1;
volatile bit	CCP1M0	@ (unsigned) &CCP1CON * 8 + 0;

/*      RCSTA bits      */
volatile bit	SPEN	@ (unsigned) &RCSTA * 8 + 7;
volatile bit	RX9	@ (unsigned) &RCSTA * 8 + 6;
volatile bit	SREN	@ (unsigned) &RCSTA * 8 + 5;
volatile bit	CREN	@ (unsigned) &RCSTA * 8 + 4;
volatile bit	FERR	@ (unsigned) &RCSTA * 8 + 2;
volatile bit	OERR	@ (unsigned) &RCSTA * 8 + 1;
volatile bit	RX9D	@ (unsigned) &RCSTA * 8 + 0;

/*      CCP2CON bits    */
volatile bit	CCP2X	@ (unsigned) &CCP2CON * 8 + 5;
volatile bit	CCP2Y	@ (unsigned) &CCP2CON * 8 + 4;
volatile bit	CCP2M3	@ (unsigned) &CCP2CON * 8 + 3;
volatile bit	CCP2M2	@ (unsigned) &CCP2CON * 8 + 2;
volatile bit	CCP2M1	@ (unsigned) &CCP2CON * 8 + 1;
volatile bit	CCP2M0	@ (unsigned) &CCP2CON * 8 + 0;

#if	defined(_16C73)  || defined(_16C74)  || \
	defined(_16C73A) || defined(_16C74A) || \
	defined(_16C73B) || defined(_16C74B) || \
	defined(_16LC74B)
/*       ADCON0 bits    */
volatile bit	ADCS1	@ (unsigned) &ADCON0 * 8 + 7;
volatile bit	ADCS0	@ (unsigned) &ADCON0 * 8 + 6;
volatile bit	CHS2	@ (unsigned) &ADCON0 * 8 + 5;
volatile bit	CHS1	@ (unsigned) &ADCON0 * 8 + 4;
volatile bit	CHS0	@ (unsigned) &ADCON0 * 8 + 3;
volatile bit	ADGO	@ (unsigned) &ADCON0 * 8 + 2;
// Alternate definition for compatibility with other devices
volatile bit	GODONE	@ (unsigned) &ADCON0 * 8 + 2;
volatile bit	ADON	@ (unsigned) &ADCON0 * 8 + 0;
#endif

/*      OPTION bits     */
      bit	RBPU	@ (unsigned) &OPTION * 8 + 7;
      bit	INTEDG	@ (unsigned) &OPTION * 8 + 6;
      bit	T0CS	@ (unsigned) &OPTION * 8 + 5;
      bit	T0SE	@ (unsigned) &OPTION * 8 + 4;
      bit	PSA	@ (unsigned) &OPTION * 8 + 3;
      bit	PS2	@ (unsigned) &OPTION * 8 + 2;
      bit	PS1	@ (unsigned) &OPTION * 8 + 1;
      bit	PS0	@ (unsigned) &OPTION * 8 + 0;

/*      TRISA bits      */
volatile       bit TRISA5 @ (unsigned) &TRISA * 8 + 5;
volatile       bit TRISA4 @ (unsigned) &TRISA * 8 + 4;
volatile       bit TRISA3 @ (unsigned) &TRISA * 8 + 3;
volatile       bit TRISA2 @ (unsigned) &TRISA * 8 + 2;
volatile       bit TRISA1 @ (unsigned) &TRISA * 8 + 1;
volatile       bit TRISA0 @ (unsigned) &TRISA * 8 + 0;

/*      TRISB bits      */
volatile       bit	TRISB7	@ (unsigned) &TRISB * 8 + 7;
volatile       bit	TRISB6	@ (unsigned) &TRISB * 8 + 6;
volatile       bit	TRISB5	@ (unsigned) &TRISB * 8 + 5;
volatile       bit	TRISB4	@ (unsigned) &TRISB * 8 + 4;
volatile       bit	TRISB3	@ (unsigned) &TRISB * 8 + 3;
volatile       bit	TRISB2	@ (unsigned) &TRISB * 8 + 2;
volatile       bit	TRISB1	@ (unsigned) &TRISB * 8 + 1;
volatile       bit	TRISB0	@ (unsigned) &TRISB * 8 + 0;

/*      TRISC bits      */
volatile       bit	TRISC7	@ (unsigned) &TRISC * 8 + 7;
volatile       bit	TRISC6	@ (unsigned) &TRISC * 8 + 6;
volatile       bit	TRISC5	@ (unsigned) &TRISC * 8 + 5;
volatile       bit	TRISC4	@ (unsigned) &TRISC * 8 + 4;
volatile       bit	TRISC3	@ (unsigned) &TRISC * 8 + 3;
volatile       bit	TRISC2	@ (unsigned) &TRISC * 8 + 2;
volatile       bit	TRISC1	@ (unsigned) &TRISC * 8 + 1;
volatile       bit	TRISC0	@ (unsigned) &TRISC * 8 + 0;

#if	defined(_16C74) || defined(_16C74A) || \
	defined(_16C65B) || defined(_16C74B) || \
	defined(_16LC74B)
/*      TRISD bits      */
volatile       bit	TRISD7	@ (unsigned) &TRISD * 8 + 7;
volatile       bit	TRISD6	@ (unsigned) &TRISD * 8 + 6;
volatile       bit	TRISD5	@ (unsigned) &TRISD * 8 + 5;
volatile       bit	TRISD4	@ (unsigned) &TRISD * 8 + 4;
volatile       bit	TRISD3	@ (unsigned) &TRISD * 8 + 3;
volatile       bit	TRISD2	@ (unsigned) &TRISD * 8 + 2;
volatile       bit	TRISD1	@ (unsigned) &TRISD * 8 + 1;
volatile       bit	TRISD0	@ (unsigned) &TRISD * 8 + 0;

/*      TRISE bits      */
volatile       bit	IBF	@ (unsigned) &TRISE * 8 + 7;
volatile       bit	OBF	@ (unsigned) &TRISE * 8 + 6;
volatile       bit	IBOV	@ (unsigned) &TRISE * 8 + 5;
volatile       bit	PSPMODE	@ (unsigned) &TRISE * 8 + 4;
volatile       bit	TRISE2	@ (unsigned) &TRISE * 8 + 2;
volatile       bit	TRISE1	@ (unsigned) &TRISE * 8 + 1;
volatile       bit	TRISE0	@ (unsigned) &TRISE * 8 + 0;
#endif

/*      PIE1 bits       */
#if	defined(_16C74)  || defined(_16C74A) || \
	defined(_16C65B) || defined(_16C74B) || \
	defined(_16LC74B)
volatile       bit	PSPIE	@ (unsigned) &PIE1 * 8 + 7;
#endif
#if	defined(_16C73)  || defined(_16C74)  || \
	defined(_16C73A) || defined(_16C74A) || \
	defined(_16C73B) || defined(_16C74B) || \
	defined(_16LC74B)
volatile       bit	ADIE	@ (unsigned) &PIE1 * 8 + 6;
#endif
volatile       bit	RCIE	@ (unsigned) &PIE1 * 8 + 5;
volatile       bit	TXIE	@ (unsigned) &PIE1 * 8 + 4;
volatile       bit	SSPIE	@ (unsigned) &PIE1 * 8 + 3;
volatile       bit	CCP1IE	@ (unsigned) &PIE1 * 8 + 2;
volatile       bit	TMR2IE	@ (unsigned) &PIE1 * 8 + 1;
volatile       bit	TMR1IE	@ (unsigned) &PIE1 * 8 + 0;

/*      PIE2 bits       */
volatile       bit	CCP2IE	@ (unsigned) &PIE2 * 8 + 0;

/*      PCON bits       */
volatile       bit	POR	@ (unsigned) &PCON * 8 + 1;
volatile       bit	BOR	@ (unsigned) &PCON * 8 + 0;

/*      SSPSTAT bits    */
#if 	defined(_16C63A) || defined(_16C65B) || \
	defined(_16C73B) || defined(_16C74B) || \
	defined(_16LC74B)
volatile       bit	SMP	@ (unsigned) &SSPSTAT * 8 + 7;
volatile       bit	CKE	@ (unsigned) &SSPSTAT * 8 + 6;
#endif
volatile       bit	DA	@ (unsigned) &SSPSTAT * 8 + 5;
volatile       bit	STOP	@ (unsigned) &SSPSTAT * 8 + 4;
volatile       bit	START	@ (unsigned) &SSPSTAT * 8 + 3;
volatile       bit	RW	@ (unsigned) &SSPSTAT * 8 + 2;
volatile       bit	UA	@ (unsigned) &SSPSTAT * 8 + 1;
volatile       bit	BF	@ (unsigned) &SSPSTAT * 8 + 0;
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

/*      TXSTA bits      */
volatile       bit	CSRC	@ (unsigned) &TXSTA * 8 + 7;
volatile       bit	TX9	@ (unsigned) &TXSTA * 8 + 6;
volatile       bit	TXEN	@ (unsigned) &TXSTA * 8 + 5;
volatile       bit	SYNC	@ (unsigned) &TXSTA * 8 + 4;
volatile       bit	BRGH	@ (unsigned) &TXSTA * 8 + 2;
volatile       bit	TRMT	@ (unsigned) &TXSTA * 8 + 1;
volatile       bit	TX9D	@ (unsigned) &TXSTA * 8 + 0;

#if	defined(_16C73)  || defined(_16C74)  || \
	defined(_16C73A) || defined(_16C74A) || \
	defined(_16C73B) || defined(_16C74B) || \
	defined(_16LC74B)
/*      ADCON1 bits     */
volatile       bit	PCFG2	@ (unsigned) &ADCON1 * 8 + 2;
volatile       bit	PCFG1	@ (unsigned) &ADCON1 * 8 + 1;
volatile       bit	PCFG0	@ (unsigned) &ADCON1 * 8 + 0;
#endif

#define CONFIG_ADDR	0x2007

/*watchdog*/
#define WDTEN		0xFFFF	// enable watchdog timer
#define WDTDIS		0xFFFB	// disable watchdog timer

/*power up timer*/
#if	defined (_16C63) || defined (_16CR63) || defined (_16C63A) || \
	defined (_16C65B) || defined (_16C73B) || defined (_16C74B) || \
	defined (_16C73A) || defined (_16C74A) || defined (_16LC74B)
#define PWRTDIS		0x3FFF	// power-up timer disbable
#define PWRTEN		0x3FF7	// power-up timer enable
#else
#define PWRTEN		0x3FFF	// power-up timer enable
#define PWRTDIS		0x3FF7	// power-up timer disable
#endif

/*osc configurations*/
#define RC              0x3FFF	// resistor/capacitor
#define HS              0x3FFE	// high speed crystal/resonator
#define XT              0x3FFD	// crystal/resonator
#define LP              0x3FFC	// low power crystal/resonator

/* code protection */
#define UNPROTECT	0x3FFF	// do not protect the code
#if defined(_16C74) || defined(_16C73)
#define PROTECT50	0x3FEF	// upper half program memory code protected
#define PROTECT75	0x3FDF	// upper 3/4 program memory code protected
#define PROTECT		0x3FCF	// all memory code is protected
#else
#define BOREN		0x3FFF	// brown out reset enable
#define BORDIS		0x3FBF	// brown out reset disable
#define PROTECT50	0x2AEF	// upper half program memory code protected
#define PROTECT75	0x15DF	// upper 3/4 program memory code protected
#define PROTECT		0x00CF	// all memory code is protected
#endif
