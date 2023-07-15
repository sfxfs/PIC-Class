
#ifndef	_HTC_H_
#warning Header file pic16f7x7.h included directly. Use #include <htc.h> instead.
#endif


 /* header file for the MICROCHIP PIC microcontrollers
  * PIC16F737
  * PIC16F747
  * PIC16F767
  * PIC16F777
 */

#ifndef	__PIC16F7X7_H
#define	__PIC16F7X7_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x00;
volatile       unsigned char	TMR0		@ 0x01;
volatile       unsigned char	PCL		@ 0x02;
volatile       unsigned char	STATUS		@ 0x03;
               unsigned char	FSR		@ 0x04;
volatile       unsigned char	PORTA		@ 0x05;
volatile       unsigned char	PORTB		@ 0x06;
volatile       unsigned char	PORTC		@ 0x07;
#if defined(_16F747) || defined(_16F777)
volatile       unsigned char	PORTD		@ 0x08;
#endif
volatile       unsigned char	PORTE		@ 0x09;
volatile       unsigned char	PCLATH		@ 0x0A;
volatile       unsigned char	INTCON		@ 0x0B;
volatile       unsigned char	PIR1		@ 0x0C;
volatile       unsigned char	PIR2		@ 0x0D;
volatile       unsigned char	TMR1L		@ 0x0E;
volatile       unsigned char	TMR1H		@ 0x0F;
volatile       unsigned char	T1CON		@ 0x10;
volatile       unsigned char	TMR2		@ 0x11;
volatile       unsigned char	T2CON		@ 0x12;
volatile       unsigned char	SSPBUF		@ 0x13;
volatile       unsigned char	SSPCON		@ 0x14;
volatile       unsigned char	CCPR1L		@ 0x15;
volatile       unsigned char	CCPR1H		@ 0x16;
volatile       unsigned char	CCP1CON		@ 0x17;
volatile       unsigned char	RCSTA		@ 0x18;
volatile       unsigned char	TXREG		@ 0x19;
volatile       unsigned char	RCREG		@ 0x1A;
volatile       unsigned char	CCPR2L		@ 0x1B;
volatile       unsigned char	CCPR2H		@ 0x1C;
volatile       unsigned char	CCP2CON		@ 0x1D;
volatile       unsigned char	ADRESH		@ 0x1E;
volatile       unsigned char	ADCON0		@ 0x1F;
               unsigned char	OPTION		@ 0x81;
volatile       unsigned char	TRISA		@ 0x85;
volatile       unsigned char	TRISB		@ 0x86;
volatile       unsigned char	TRISC		@ 0x87;
#if defined(_16F747) || defined(_16F777)
volatile       unsigned char	TRISD		@ 0x88;
volatile       unsigned char	TRISE		@ 0x89;
#endif
               unsigned char	PIE1		@ 0x8C;
               unsigned char	PIE2		@ 0x8D;
volatile       unsigned char	PCON		@ 0x8E;
volatile       unsigned char	OSCCON		@ 0x8F;
               unsigned char	OSCTUNE		@ 0x90;
volatile       unsigned char	SSPCON2		@ 0x91;
               unsigned char	PR2		@ 0x92;
               unsigned char	SSPADD		@ 0x93;
volatile       unsigned char	SSPSTAT		@ 0x94;
volatile       unsigned char	CCPR3L		@ 0x95;
volatile       unsigned char	CCPR3H		@ 0x96;
volatile       unsigned char	CCP3CON		@ 0x97;
volatile       unsigned char	TXSTA		@ 0x98;
               unsigned char	SPBRG		@ 0x99;
               unsigned char	ADCON2		@ 0x9B;
volatile       unsigned char	CMCON		@ 0x9C;
volatile       unsigned char	CVRCON		@ 0x9D;
volatile       unsigned char	ADRESL		@ 0x9E;
               unsigned char	ADCON1		@ 0x9F;
volatile       unsigned char	WDTCON		@ 0x105;
volatile       unsigned char	LVDCON		@ 0x109;
volatile       unsigned char	EEDATL		@ 0x10C;
/* Alternate definition for backward compatibility */
volatile       unsigned char	EEDATA		@ 0x10C;
volatile       unsigned char	EEADRL		@ 0x10D;
/* Alternate definition for backward compatibility */
volatile       unsigned char	EEADR		@ 0x10D;
volatile       unsigned char	EEDATH		@ 0x10E;
volatile       unsigned char	EEADRH		@ 0x10F;
volatile       unsigned char	EECON1		@ 0x18C;

/* Definitions for memory access */
         unsigned char      	PMDATA		@ 0x10C;
         unsigned char      	PMDATL		@ 0x10C;
         unsigned char      	PMADRL		@ 0x10D;
	        unsigned char      	PMDATH		@ 0x10E;
	        unsigned char      	PMADRH		@ 0x10F;
         unsigned char      	PMCON1  	@ 0x18C;


/* Definitions for STATUS register */
volatile       bit	CARRY		@ ((unsigned)&STATUS*8)+0;
volatile       bit	DC		@ ((unsigned)&STATUS*8)+1;
volatile       bit	ZERO		@ ((unsigned)&STATUS*8)+2;
volatile       bit	PD		@ ((unsigned)&STATUS*8)+3;
volatile       bit	TO		@ ((unsigned)&STATUS*8)+4;
               bit	RP0		@ ((unsigned)&STATUS*8)+5;
               bit	RP1		@ ((unsigned)&STATUS*8)+6;
               bit	IRP		@ ((unsigned)&STATUS*8)+7;

/* Definitions for PORTA register */
volatile       bit	RA0		@ ((unsigned)&PORTA*8)+0;
volatile       bit	RA1		@ ((unsigned)&PORTA*8)+1;
volatile       bit	RA2		@ ((unsigned)&PORTA*8)+2;
volatile       bit	RA3		@ ((unsigned)&PORTA*8)+3;
volatile       bit	RA4		@ ((unsigned)&PORTA*8)+4;
volatile       bit	RA5		@ ((unsigned)&PORTA*8)+5;
volatile       bit	RA6		@ ((unsigned)&PORTA*8)+6;
volatile       bit	RA7		@ ((unsigned)&PORTA*8)+7;

/* Definitions for PORTB register */
volatile       bit	RB0		@ ((unsigned)&PORTB*8)+0;
volatile       bit	RB1		@ ((unsigned)&PORTB*8)+1;
volatile       bit	RB2		@ ((unsigned)&PORTB*8)+2;
volatile       bit	RB3		@ ((unsigned)&PORTB*8)+3;
volatile       bit	RB4		@ ((unsigned)&PORTB*8)+4;
volatile       bit	RB5		@ ((unsigned)&PORTB*8)+5;
volatile       bit	RB6		@ ((unsigned)&PORTB*8)+6;
volatile       bit	RB7		@ ((unsigned)&PORTB*8)+7;

/* Definitions for PORTC register */
volatile       bit	RC0		@ ((unsigned)&PORTC*8)+0;
volatile       bit	RC1		@ ((unsigned)&PORTC*8)+1;
volatile       bit	RC2		@ ((unsigned)&PORTC*8)+2;
volatile       bit	RC3		@ ((unsigned)&PORTC*8)+3;
volatile       bit	RC4		@ ((unsigned)&PORTC*8)+4;
volatile       bit	RC5		@ ((unsigned)&PORTC*8)+5;
volatile       bit	RC6		@ ((unsigned)&PORTC*8)+6;
volatile       bit	RC7		@ ((unsigned)&PORTC*8)+7;

#if defined(_16F747) || defined(_16F777)
/* Definitions for PORTD register */
volatile       bit	RD0		@ ((unsigned)&PORTD*8)+0;
volatile       bit	RD1		@ ((unsigned)&PORTD*8)+1;
volatile       bit	RD2		@ ((unsigned)&PORTD*8)+2;
volatile       bit	RD3		@ ((unsigned)&PORTD*8)+3;
volatile       bit	RD4		@ ((unsigned)&PORTD*8)+4;
volatile       bit	RD5		@ ((unsigned)&PORTD*8)+5;
volatile       bit	RD6		@ ((unsigned)&PORTD*8)+6;
volatile       bit	RD7		@ ((unsigned)&PORTD*8)+7;

/* Definitions for PORTE register */
volatile       bit	RE0		@ ((unsigned)&PORTE*8)+0;
volatile       bit	RE1		@ ((unsigned)&PORTE*8)+1;
volatile       bit	RE2		@ ((unsigned)&PORTE*8)+2;
#endif
volatile       bit	RE3		@ ((unsigned)&PORTE*8)+3;

/* Definitions for INTCON register */
volatile       bit	RBIF		@ ((unsigned)&INTCON*8)+0;
volatile       bit	INT0IF		@ ((unsigned)&INTCON*8)+1;
volatile       bit	TMR0IF		@ ((unsigned)&INTCON*8)+2;
               bit	RBIE		@ ((unsigned)&INTCON*8)+3;
               bit	INT0IE		@ ((unsigned)&INTCON*8)+4;
               bit	TMR0IE		@ ((unsigned)&INTCON*8)+5;
               bit	PEIE		@ ((unsigned)&INTCON*8)+6;
volatile bit	GIE		@ ((unsigned)&INTCON*8)+7;

/* Definitions for PIR1 register */
volatile       bit	TMR1IF		@ ((unsigned)&PIR1*8)+0;
volatile       bit	TMR2IF		@ ((unsigned)&PIR1*8)+1;
volatile       bit	CCP1IF		@ ((unsigned)&PIR1*8)+2;
volatile       bit	SSPIF		@ ((unsigned)&PIR1*8)+3;
volatile       bit	TXIF		@ ((unsigned)&PIR1*8)+4;
volatile       bit	RCIF		@ ((unsigned)&PIR1*8)+5;
volatile       bit	ADIF		@ ((unsigned)&PIR1*8)+6;
#if defined(_16F747) || defined(_16F777)
volatile       bit	PSPIF		@ ((unsigned)&PIR1*8)+7;
#endif

/* Definitions for PIR2 register */
volatile       bit	CCP2IF		@ ((unsigned)&PIR2*8)+0;
volatile       bit	CCP3IF		@ ((unsigned)&PIR2*8)+1;
volatile       bit	BCLIF		@ ((unsigned)&PIR2*8)+3;
volatile       bit	LVDIF		@ ((unsigned)&PIR2*8)+5;
volatile       bit	CMIF		@ ((unsigned)&PIR2*8)+6;
volatile       bit	OSFIF		@ ((unsigned)&PIR2*8)+7;

/* Definitions for T1CON register */
               bit	TMR1ON		@ ((unsigned)&T1CON*8)+0;
               bit	TMR1CS		@ ((unsigned)&T1CON*8)+1;
               bit	T1SYNC		@ ((unsigned)&T1CON*8)+2;
               bit	T1OSCEN		@ ((unsigned)&T1CON*8)+3;
               bit	T1CKPS0		@ ((unsigned)&T1CON*8)+4;
               bit	T1CKPS1		@ ((unsigned)&T1CON*8)+5;
               bit	T1RUN		@ ((unsigned)&T1CON*8)+6;

/* Definitions for T2CON register */
               bit	T2CKPS0		@ ((unsigned)&T2CON*8)+0;
               bit	T2CKPS1		@ ((unsigned)&T2CON*8)+1;
               bit	TMR2ON		@ ((unsigned)&T2CON*8)+2;
               bit	TOUTPS0		@ ((unsigned)&T2CON*8)+3;
               bit	TOUTPS1		@ ((unsigned)&T2CON*8)+4;
               bit	TOUTPS2		@ ((unsigned)&T2CON*8)+5;
               bit	TOUTPS3		@ ((unsigned)&T2CON*8)+6;

/* Definitions for SSPCON register */
               bit	SSPM0		@ ((unsigned)&SSPCON*8)+0;
               bit	SSPM1		@ ((unsigned)&SSPCON*8)+1;
               bit	SSPM2		@ ((unsigned)&SSPCON*8)+2;
               bit	SSPM3		@ ((unsigned)&SSPCON*8)+3;
               bit	CKP		@ ((unsigned)&SSPCON*8)+4;
               bit	SSPEN		@ ((unsigned)&SSPCON*8)+5;
volatile       bit	SSPOV		@ ((unsigned)&SSPCON*8)+6;
volatile       bit	WCOL		@ ((unsigned)&SSPCON*8)+7;

/* Definitions for CCP1CON register */
               bit	CCP1M0		@ ((unsigned)&CCP1CON*8)+0;
               bit	CCP1M1		@ ((unsigned)&CCP1CON*8)+1;
               bit	CCP1M2		@ ((unsigned)&CCP1CON*8)+2;
               bit	CCP1M3		@ ((unsigned)&CCP1CON*8)+3;
volatile       bit	CCP1Y		@ ((unsigned)&CCP1CON*8)+4;
volatile       bit	CCP1X		@ ((unsigned)&CCP1CON*8)+5;

/* Definitions for RCSTA register */
volatile       bit	RX9D		@ ((unsigned)&RCSTA*8)+0;
volatile       bit	OERR		@ ((unsigned)&RCSTA*8)+1;
volatile       bit	FERR		@ ((unsigned)&RCSTA*8)+2;
               bit	ADDEN		@ ((unsigned)&RCSTA*8)+3;
               bit	CREN		@ ((unsigned)&RCSTA*8)+4;
               bit	SREN		@ ((unsigned)&RCSTA*8)+5;
               bit	RX9		@ ((unsigned)&RCSTA*8)+6;
               bit	SPEN		@ ((unsigned)&RCSTA*8)+7;

/* Definitions for CCP2CON register */
               bit	CCP2M0		@ ((unsigned)&CCP2CON*8)+0;
               bit	CCP2M1		@ ((unsigned)&CCP2CON*8)+1;
               bit	CCP2M2		@ ((unsigned)&CCP2CON*8)+2;
               bit	CCP2M3		@ ((unsigned)&CCP2CON*8)+3;
volatile       bit	CCP2Y		@ ((unsigned)&CCP2CON*8)+4;
volatile       bit	CCP2X		@ ((unsigned)&CCP2CON*8)+5;

/* Definitions for ADCON0 register */
               bit	ADON		@ ((unsigned)&ADCON0*8)+0;
               bit	CHS3		@ ((unsigned)&ADCON0*8)+1;
volatile       bit	GODONE		@ ((unsigned)&ADCON0*8)+2;
               bit	CHS0		@ ((unsigned)&ADCON0*8)+3;
               bit	CHS1		@ ((unsigned)&ADCON0*8)+4;
               bit	CHS2		@ ((unsigned)&ADCON0*8)+5;
               bit	ADCS0		@ ((unsigned)&ADCON0*8)+6;
               bit	ADCS1		@ ((unsigned)&ADCON0*8)+7;

/* Definitions for OPTION register */
               bit	PS0		@ ((unsigned)&OPTION*8)+0;
               bit	PS1		@ ((unsigned)&OPTION*8)+1;
               bit	PS2		@ ((unsigned)&OPTION*8)+2;
               bit	PSA		@ ((unsigned)&OPTION*8)+3;
               bit	T0SE		@ ((unsigned)&OPTION*8)+4;
               bit	T0CS		@ ((unsigned)&OPTION*8)+5;
               bit	INTEDG		@ ((unsigned)&OPTION*8)+6;
               bit	RBPU		@ ((unsigned)&OPTION*8)+7;

/* Definitions for TRISA register */
volatile       bit	TRISA0		@ ((unsigned)&TRISA*8)+0;
volatile       bit	TRISA1		@ ((unsigned)&TRISA*8)+1;
volatile       bit	TRISA2		@ ((unsigned)&TRISA*8)+2;
volatile       bit	TRISA3		@ ((unsigned)&TRISA*8)+3;
volatile       bit	TRISA4		@ ((unsigned)&TRISA*8)+4;
volatile       bit	TRISA5		@ ((unsigned)&TRISA*8)+5;
volatile       bit	TRISA6		@ ((unsigned)&TRISA*8)+6;
volatile       bit	TRISA7		@ ((unsigned)&TRISA*8)+7;

/* Definitions for TRISB register */
volatile       bit	TRISB0		@ ((unsigned)&TRISB*8)+0;
volatile       bit	TRISB1		@ ((unsigned)&TRISB*8)+1;
volatile       bit	TRISB2		@ ((unsigned)&TRISB*8)+2;
volatile       bit	TRISB3		@ ((unsigned)&TRISB*8)+3;
volatile       bit	TRISB4		@ ((unsigned)&TRISB*8)+4;
volatile       bit	TRISB5		@ ((unsigned)&TRISB*8)+5;
volatile       bit	TRISB6		@ ((unsigned)&TRISB*8)+6;
volatile       bit	TRISB7		@ ((unsigned)&TRISB*8)+7;

/* Definitions for TRISC register */
volatile       bit	TRISC0		@ ((unsigned)&TRISC*8)+0;
volatile       bit	TRISC1		@ ((unsigned)&TRISC*8)+1;
volatile       bit	TRISC2		@ ((unsigned)&TRISC*8)+2;
volatile       bit	TRISC3		@ ((unsigned)&TRISC*8)+3;
volatile       bit	TRISC4		@ ((unsigned)&TRISC*8)+4;
volatile       bit	TRISC5		@ ((unsigned)&TRISC*8)+5;
volatile       bit	TRISC6		@ ((unsigned)&TRISC*8)+6;
volatile       bit	TRISC7		@ ((unsigned)&TRISC*8)+7;

#if defined(_16F747) || defined(_16F777)
/* Definitions for TRISD register */
volatile       bit	TRISD0		@ ((unsigned)&TRISD*8)+0;
volatile       bit	TRISD1		@ ((unsigned)&TRISD*8)+1;
volatile       bit	TRISD2		@ ((unsigned)&TRISD*8)+2;
volatile       bit	TRISD3		@ ((unsigned)&TRISD*8)+3;
volatile       bit	TRISD4		@ ((unsigned)&TRISD*8)+4;
volatile       bit	TRISD5		@ ((unsigned)&TRISD*8)+5;
volatile       bit	TRISD6		@ ((unsigned)&TRISD*8)+6;
volatile       bit	TRISD7		@ ((unsigned)&TRISD*8)+7;

/* Definitions for TRISE register */
volatile       bit	TRISE0		@ ((unsigned)&TRISE*8)+0;
volatile       bit	TRISE1		@ ((unsigned)&TRISE*8)+1;
volatile       bit	TRISE2		@ ((unsigned)&TRISE*8)+2;
               bit	PSPMODE		@ ((unsigned)&TRISE*8)+4;
volatile       bit	IBOV		@ ((unsigned)&TRISE*8)+5;
volatile       bit	OBF		@ ((unsigned)&TRISE*8)+6;
volatile       bit	IBF		@ ((unsigned)&TRISE*8)+7;
#endif

/* Definitions for PIE1 register */
               bit	TMR1IE		@ ((unsigned)&PIE1*8)+0;
               bit	TMR2IE		@ ((unsigned)&PIE1*8)+1;
               bit	CCP1IE		@ ((unsigned)&PIE1*8)+2;
               bit	SSPIE		@ ((unsigned)&PIE1*8)+3;
               bit	TXIE		@ ((unsigned)&PIE1*8)+4;
               bit	RCIE		@ ((unsigned)&PIE1*8)+5;
               bit	ADIE		@ ((unsigned)&PIE1*8)+6;
#if defined(_16F747) || defined(_16F777)
               bit	PSPIE		@ ((unsigned)&PIE1*8)+7;
#endif

/* Definitions for PIE2 register */
               bit	CCP2IE		@ ((unsigned)&PIE2*8)+0;
               bit	CCP3IE		@ ((unsigned)&PIE2*8)+1;
               bit	BCLIE		@ ((unsigned)&PIE2*8)+3;
               bit	LVDIE		@ ((unsigned)&PIE2*8)+5;
               bit	CMIE		@ ((unsigned)&PIE2*8)+6;
               bit	OSFIE		@ ((unsigned)&PIE2*8)+7;

/* Definitions for PCON register */
volatile       bit	BOR		@ ((unsigned)&PCON*8)+0;
volatile       bit	POR		@ ((unsigned)&PCON*8)+1;
               bit	SBOREN		@ ((unsigned)&PCON*8)+2;

/* Definitions for OSCCON register */
               bit	SCS0		@ ((unsigned)&OSCCON*8)+0;
               bit	SCS1		@ ((unsigned)&OSCCON*8)+1;
volatile       bit	IOFS		@ ((unsigned)&OSCCON*8)+2;
volatile       bit	OSTS		@ ((unsigned)&OSCCON*8)+3;
               bit	IRCF0		@ ((unsigned)&OSCCON*8)+4;
               bit	IRCF1		@ ((unsigned)&OSCCON*8)+5;
               bit	IRCF2		@ ((unsigned)&OSCCON*8)+6;

/* Definitions for OSCTUNE register */
               bit	TUN0		@ ((unsigned)&OSCTUNE*8)+0;
               bit	TUN1		@ ((unsigned)&OSCTUNE*8)+1;
               bit	TUN2		@ ((unsigned)&OSCTUNE*8)+2;
               bit	TUN3		@ ((unsigned)&OSCTUNE*8)+3;
               bit	TUN4		@ ((unsigned)&OSCTUNE*8)+4;
               bit	TUN5		@ ((unsigned)&OSCTUNE*8)+5;

/* Definitions for SSPCON2 register */
               bit	SEN		@ ((unsigned)&SSPCON2*8)+0;
volatile       bit	RSEN		@ ((unsigned)&SSPCON2*8)+1;
volatile       bit	PEN		@ ((unsigned)&SSPCON2*8)+2;
volatile       bit	RCEN		@ ((unsigned)&SSPCON2*8)+3;
volatile       bit	ACKEN		@ ((unsigned)&SSPCON2*8)+4;
volatile       bit	ACKDT		@ ((unsigned)&SSPCON2*8)+5;
volatile       bit	ACKSTAT		@ ((unsigned)&SSPCON2*8)+6;
               bit	GCEN		@ ((unsigned)&SSPCON2*8)+7;

/* Definitions for SSPSTAT register */
volatile       bit	BF		@ ((unsigned)&SSPSTAT*8)+0;
volatile       bit	UA		@ ((unsigned)&SSPSTAT*8)+1;
volatile       bit	RW		@ ((unsigned)&SSPSTAT*8)+2;
volatile       bit	START		@ ((unsigned)&SSPSTAT*8)+3;
volatile       bit	STOP		@ ((unsigned)&SSPSTAT*8)+4;
volatile       bit	DA		@ ((unsigned)&SSPSTAT*8)+5;
               bit	CKE		@ ((unsigned)&SSPSTAT*8)+6;
               bit	SMP		@ ((unsigned)&SSPSTAT*8)+7;

/* Definitions for CCP3CON register */
               bit	CCP3M0		@ ((unsigned)&CCP3CON*8)+0;
               bit	CCP3M1		@ ((unsigned)&CCP3CON*8)+1;
               bit	CCP3M2		@ ((unsigned)&CCP3CON*8)+2;
               bit	CCP3M3		@ ((unsigned)&CCP3CON*8)+3;
volatile       bit	CCP3Y		@ ((unsigned)&CCP3CON*8)+4;
volatile       bit	CCP3X		@ ((unsigned)&CCP3CON*8)+5;

/* Definitions for TXSTA register */
volatile       bit	TX9D		@ ((unsigned)&TXSTA*8)+0;
volatile       bit	TRMT		@ ((unsigned)&TXSTA*8)+1;
               bit	BRGH		@ ((unsigned)&TXSTA*8)+2;
               bit	SYNC		@ ((unsigned)&TXSTA*8)+4;
               bit	TXEN		@ ((unsigned)&TXSTA*8)+5;
               bit	TX9		@ ((unsigned)&TXSTA*8)+6;
               bit	CSRC		@ ((unsigned)&TXSTA*8)+7;

/* Definitions for ADCON2 register */
               bit	ACQT0		@ ((unsigned)&ADCON2*8)+2;
               bit	ACQT1		@ ((unsigned)&ADCON2*8)+3;
               bit	ACQT2		@ ((unsigned)&ADCON2*8)+4;

/* Definitions for CMCON register */
               bit	CM0		@ ((unsigned)&CMCON*8)+0;
               bit	CM1		@ ((unsigned)&CMCON*8)+1;
               bit	CM2		@ ((unsigned)&CMCON*8)+2;
               bit	CIS		@ ((unsigned)&CMCON*8)+3;
               bit	C1INV		@ ((unsigned)&CMCON*8)+4;
               bit	C2INV		@ ((unsigned)&CMCON*8)+5;
volatile       bit	C1OUT		@ ((unsigned)&CMCON*8)+6;
volatile       bit	C2OUT		@ ((unsigned)&CMCON*8)+7;

/* Definitions for CVRCON register */
               bit	CVR0		@ ((unsigned)&CVRCON*8)+0;
               bit	CVR1		@ ((unsigned)&CVRCON*8)+1;
               bit	CVR2		@ ((unsigned)&CVRCON*8)+2;
               bit	CVR3		@ ((unsigned)&CVRCON*8)+3;
               bit	CVRR		@ ((unsigned)&CVRCON*8)+5;
               bit	CVROE		@ ((unsigned)&CVRCON*8)+6;
               bit	CVREN		@ ((unsigned)&CVRCON*8)+7;

/* Definitions for ADCON1 register */
               bit	PCFG0		@ ((unsigned)&ADCON1*8)+0;
               bit	PCFG1		@ ((unsigned)&ADCON1*8)+1;
               bit	PCFG2		@ ((unsigned)&ADCON1*8)+2;
               bit	PCFG3		@ ((unsigned)&ADCON1*8)+3;
               bit	VCFG0		@ ((unsigned)&ADCON1*8)+4;
               bit	VCFG1		@ ((unsigned)&ADCON1*8)+5;
               bit	ADCS2		@ ((unsigned)&ADCON1*8)+6;
               bit	ADFM		@ ((unsigned)&ADCON1*8)+7;

/* Definitions for WDTCON register */
               bit	SWDTEN		@ ((unsigned)&WDTCON*8)+0;
               bit	WDTPS0		@ ((unsigned)&WDTCON*8)+1;
               bit	WDTPS1		@ ((unsigned)&WDTCON*8)+2;
               bit	WDTPS2		@ ((unsigned)&WDTCON*8)+3;
               bit	WDTPS3		@ ((unsigned)&WDTCON*8)+4;

/* Definitions for LVDCON register */
               bit	LVDL0		@ ((unsigned)&LVDCON*8)+0;
               bit	LVDL1		@ ((unsigned)&LVDCON*8)+1;
               bit	LVDL2		@ ((unsigned)&LVDCON*8)+2;
               bit	LVDL3		@ ((unsigned)&LVDCON*8)+3;
               bit	LVDEN		@ ((unsigned)&LVDCON*8)+4;
volatile       bit	IRVST		@ ((unsigned)&LVDCON*8)+5;

/* Definitions for EECON1 register */
volatile       bit	RD		@ ((unsigned)&EECON1*8)+0;

/* define to select flash access routines in pic.h */
#define FLASH_TYPE_R
	

// Configuration Mask Definitions
#define CONFIG_ADDR	0x2007
// Protection of flash memory 
#define PROTECT		0x1FFF
#define UNPROTECT	0x3FFF
// CCP multiplex pin selection 
#define CCPRC1		0x3FFF
#define CCPRB3		0x2FFF
// In-Circuit Debugger Mode 
#define DEBUGEN		0x37FF
#define DEBUGDIS	0x3FFF
// Brown-Out reset enable (combines with BORSEN) 
#define BORV20		0x3FFF
#define BORV27		0x3F7F
#define BORV42		0x3EFF
#define BORV45		0x3E7F
#define BORON		0x3FFF
#define BORDIS		0x3FBF
// Master clear reset pin function
#define MCLREN		0x3FFF
#define MCLRDIS		0x3FDF
// Power up timer enable 
#define PWRTEN		0x3FF7
#define PWRTDIS		0x3FFF
// Watchdog timer enable 
#define WDTEN		0x3FFF
#define WDTDIS		0x3FFB
// Oscillator configurations 
#define RCCLK		0x3FFF
#define RCIO		0x3FFE
#define INTCLK		0x3FFD
#define INTIO		0x3FFC
#define EC		0x3FEF
#define HS		0x3FEE
#define XT		0x3FED
#define LP		0x3FEC
#define CONFIG_ADDR2	0x2008
// Brown-Out reset enable (combines with BOREN) 
#define BORSOFT		0x3FFF
#define BORDISSLEEP	0x3FBF
// Internal External switch over 
#define IESOEN		0x3FFF
#define IESODIS		0x3FFD
// Fail-safe clock monitor 
#define FCMEN		0x3FFF
#define FCMDIS		0x3FFE

#endif
