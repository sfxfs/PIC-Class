
#ifndef	_HTC_H_
#warning Header file pic16715.h included directly. Use #include <htc.h> instead.
#endif

/* 
 *	Header file for the Microchip :
 *      PIC 16C712 chip
 *	PIC 16C715 chip
 *      PIC 16C716 chip
 *	Midrange Microcontroller
 */

volatile unsigned char INDF	@ 0x00;
volatile unsigned char TMR0	@ 0x01;
volatile unsigned char PCL	@ 0x02;
volatile unsigned char STATUS	@ 0x03;
         unsigned char FSR	@ 0x04;
volatile unsigned char PORTA	@ 0x05;
volatile unsigned char PORTB	@ 0x06;

#ifndef _16C715
volatile unsigned char DATACCP   @ 0x07;
#endif

         unsigned char PCLATH	@ 0x0A;
volatile unsigned char INTCON	@ 0x0B;
volatile unsigned char PIR1	@ 0x0C;

#ifndef _16C715
volatile unsigned char TMR1L     @ 0x0E;
volatile unsigned char TMR1H     @ 0x0F;
volatile unsigned char T1CON     @ 0x10;
volatile unsigned char TMR2      @ 0x11;
volatile unsigned char T2CON     @ 0x12;
volatile unsigned char CCPR1L    @ 0x15;
volatile unsigned char CCPR1H    @ 0x16;
volatile unsigned char CCP1CON   @ 0x17;
#endif

volatile unsigned char ADRES	@ 0x1E;
volatile unsigned char ADCON0	@ 0x1F;

         unsigned char      	OPTION	@ 0x81;
volatile	unsigned char      	TRISA	@ 0x85;
volatile	unsigned char      	TRISB	@ 0x86;
#ifndef _16C715
volatile unsigned char           TRISCCP @ 0x87;
#endif
volatile unsigned char      	PIE1	@ 0x8C;
volatile unsigned char      	PCON	@ 0x8E;
#ifndef _16C715
volatile unsigned char           PR2     @ 0x92;
#endif
volatile unsigned char      	ADCON1	@ 0x9F;

/*	STATUS bits	*/
volatile bit      RP0     @ (unsigned)&STATUS*8+5;
volatile bit	TO	@ (unsigned)&STATUS*8+4;
volatile bit	PD	@ (unsigned)&STATUS*8+3;
volatile bit      ZERO    @ (unsigned)&STATUS*8+2;
volatile bit      DC      @ (unsigned)&STATUS*8+1;
volatile bit      CARRY   @ (unsigned)&STATUS*8+0;

/*      PORTA bits      */
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

/*      DATACCP bits    */
#ifndef _16C715
volatile bit      DCCP    @ (unsigned)&DATACCP*8+2;
volatile bit      DT1CK   @ (unsigned)&DATACCP*8+0;
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
volatile bit	ADIF	@ (unsigned)&PIR1*8+6;
#if defined(_16C712) || defined(_16C716)
volatile bit	CCP1IF	@ (unsigned)&PIR1*8+2;
volatile bit	TMR2IF	@ (unsigned)&PIR1*8+1;
volatile bit	TMR1IF	@ (unsigned)&PIR1*8+0;
#endif

/*      T1CON bits      */
#ifndef _16C715
volatile bit      T1CKPS1 @ (unsigned)&T1CON*8+5;
volatile bit      T1CKPS0 @ (unsigned)&T1CON*8+4;
volatile bit      T1OSCEN @ (unsigned)&T1CON*8+3;
volatile bit      T1SYNC  @ (unsigned)&T1CON*8+2;
volatile bit      TMR1CS  @ (unsigned)&T1CON*8+1;
volatile bit      TMR1ON  @ (unsigned)&T1CON*8+0;

/*      T2CON bits      */
volatile bit      TOUTPS3 @ (unsigned)&T2CON*8+6;
volatile bit      TOUTPS2 @ (unsigned)&T2CON*8+5;
volatile bit      TOUTPS1 @ (unsigned)&T2CON*8+4;
volatile bit      TOUTPS0 @ (unsigned)&T2CON*8+3;
volatile bit      TMR2ON  @ (unsigned)&T2CON*8+2;
volatile bit      T2CKPS1 @ (unsigned)&T2CON*8+1;
volatile bit      T2CKPS0 @ (unsigned)&T2CON*8+0;

/*      CCP1CON         */
volatile bit      DC1B1   @ (unsigned)&CCP1CON*8+5;
volatile bit      DC1B0   @ (unsigned)&CCP1CON*8+4;
volatile bit      CCP1M3  @ (unsigned)&CCP1CON*8+3;
volatile bit      CCP1M2  @ (unsigned)&CCP1CON*8+2;
volatile bit      CCP1M1  @ (unsigned)&CCP1CON*8+1;
volatile bit      CCP1M0  @ (unsigned)&CCP1CON*8+0;
#endif

/*	ADCON0 bits	*/
volatile bit	ADCS1	@ (unsigned)&ADCON0*8+7;
volatile bit	ADCS0	@ (unsigned)&ADCON0*8+6;
volatile bit	CHS2	@ (unsigned)&ADCON0*8+5;
volatile bit	CHS1	@ (unsigned)&ADCON0*8+4;
volatile bit	CHS0	@ (unsigned)&ADCON0*8+3;
volatile bit	ADGO	@ (unsigned)&ADCON0*8+2;
// Alternate definition for compatibility with other devices
volatile bit	GODONE	@ (unsigned)&ADCON0*8+2;
volatile bit	ADON	@ (unsigned)&ADCON0*8+0;

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

/*      TRISCCP bits    */
#ifndef _16C715
volatile       bit        TCCP    @ (unsigned)&TRISCCP*8+2;
volatile       bit        TT1CK   @ (unsigned)&TRISCCP*8+0;
#endif

/*	PIE1 bits	*/
volatile       bit	ADIE	@ (unsigned)&PIE1*8+6;
#if defined(_16C712) || defined(_16C716)
volatile       bit	CCP1IE	@ (unsigned)&PIE1*8+2;
volatile       bit	TMR2IE	@ (unsigned)&PIE1*8+1;
volatile       bit	TMR1IE	@ (unsigned)&PIE1*8+0;
#endif

/*	PCON bits	*/
#ifdef _16C715
volatile       bit	MPECS	@ (unsigned)&PCON*8+7;	/* MPEEN */
volatile       bit	PER	@ (unsigned)&PCON*8+2;
#endif
volatile       bit	POR	@ (unsigned)&PCON*8+1;
volatile       bit	BOR	@ (unsigned)&PCON*8+0;

/*	ADCON1 bits	*/
volatile       bit	PCFG1	@ (unsigned)&ADCON1*8+1;
volatile       bit	PCFG0	@ (unsigned)&ADCON1*8+0;

#define CONFIG_ADDR	0x2007

/*power reset timer*/
#define PWRTEN		0x3FF7	// power up timer enable
#define PWRTDIS		0x3FFF	// power up timer disable

/*watchdog*/
#define WDTEN		0x3FFF	// watchdog timer enable
#define WDTDIS		0x3FFB	// watchdog timer disable

/*Brown out reset*/
#define BOREN		0x3FFF	// brown out reset enable
#define BORDIS		0x3FBF	// brown out reset disable

/*memory parity error enable*/
#ifdef _16C715
#define MPEEN		0x3FFF	// memory parity error enable
#define MPEDIS		0x3F7F	// memory parity error disable
#endif

/*osc configurations*/
#define RC              0x3FFF	// resistor/capacitor
#define HS              0x3FFE	// high speed crystal/resonator
#define XT              0x3FFD	// crystal/resonator
#define LP              0x3FFC	// low power crystal/resonator

/* code protection */
#define UNPROTECT	0x3FFF		/* unprotected */
#define PROTECT50	0x2AEF		/* upper half program memory code protected */
#define PROTECT75	0x15DF		/* upper 3/4 program memory code protected */
#define PROTECT		0x00CF		/* all memory code is protected */
