
#ifndef	_HTC_H_
#warning Header file pic16f62xa.h included directly. Use #include <htc.h> instead.
#endif


 /* header file for the MICROCHIP PIC microcontrollers
	PIC16F627A
	PIC16F628A
	PIC16F648A
 */

#ifndef	__PIC16F62XA_H
#define	__PIC16F62XA_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x00;
volatile       unsigned char	TMR0		@ 0x01;
volatile       unsigned char	PCL		@ 0x02;
volatile       unsigned char	STATUS		@ 0x03;
               unsigned char	FSR		@ 0x04;
volatile       unsigned char	PORTA		@ 0x05;
volatile       unsigned char	PORTB		@ 0x06;
volatile       unsigned char	PCLATH		@ 0x0A;
volatile       unsigned char	INTCON		@ 0x0B;
volatile       unsigned char	PIR1		@ 0x0C;
volatile       unsigned char	TMR1L		@ 0x0E;
volatile       unsigned char	TMR1H		@ 0x0F;
volatile       unsigned char	T1CON		@ 0x10;
volatile       unsigned char	TMR2		@ 0x11;
volatile       unsigned char	T2CON		@ 0x12;
volatile       unsigned char	CCPR1L		@ 0x15;
volatile       unsigned char	CCPR1H		@ 0x16;
volatile       unsigned char	CCP1CON		@ 0x17;
volatile       unsigned char	RCSTA		@ 0x18;
volatile       unsigned char	TXREG		@ 0x19;
volatile       unsigned char	RCREG		@ 0x1A;
volatile       unsigned char	CMCON		@ 0x1F;
               unsigned char	OPTION		@ 0x81;
volatile       unsigned char	TRISA		@ 0x85;
volatile       unsigned char	TRISB		@ 0x86;
               unsigned char	PIE1		@ 0x8C;
volatile       unsigned char	PCON		@ 0x8E;
               unsigned char	PR2		@ 0x92;
volatile       unsigned char	TXSTA		@ 0x98;
               unsigned char	SPBRG		@ 0x99;
volatile       unsigned char	EEDATA		@ 0x9A;
volatile       unsigned char	EEADR		@ 0x9B;
volatile       unsigned char	EECON1		@ 0x9C;
volatile       unsigned char	EECON2		@ 0x9D;
               unsigned char	VRCON		@ 0x9F;


/* Definitions for STATUS register */
volatile       bit	CARRY		@((unsigned)&STATUS*8)+0;
volatile       bit	DC		@((unsigned)&STATUS*8)+1;
volatile       bit	ZERO		@((unsigned)&STATUS*8)+2;
volatile       bit	PD		@((unsigned)&STATUS*8)+3;
volatile       bit	TO		@((unsigned)&STATUS*8)+4;
               bit	RP0		@((unsigned)&STATUS*8)+5;
               bit	RP1		@((unsigned)&STATUS*8)+6;
               bit	IRP		@((unsigned)&STATUS*8)+7;

/* Definitions for PORTA register */
volatile       bit	RA0		@((unsigned)&PORTA*8)+0;
volatile       bit	RA1		@((unsigned)&PORTA*8)+1;
volatile       bit	RA2		@((unsigned)&PORTA*8)+2;
volatile       bit	RA3		@((unsigned)&PORTA*8)+3;
volatile       bit	RA4		@((unsigned)&PORTA*8)+4;
volatile       bit	RA5		@((unsigned)&PORTA*8)+5;
volatile       bit	RA6		@((unsigned)&PORTA*8)+6;
volatile       bit	RA7		@((unsigned)&PORTA*8)+7;

/* Definitions for PORTB register */
volatile       bit	RB0		@((unsigned)&PORTB*8)+0;
volatile       bit	RB1		@((unsigned)&PORTB*8)+1;
volatile       bit	RB2		@((unsigned)&PORTB*8)+2;
volatile       bit	RB3		@((unsigned)&PORTB*8)+3;
volatile       bit	RB4		@((unsigned)&PORTB*8)+4;
volatile       bit	RB5		@((unsigned)&PORTB*8)+5;
volatile       bit	RB6		@((unsigned)&PORTB*8)+6;
volatile       bit	RB7		@((unsigned)&PORTB*8)+7;

/* Definitions for INTCON register */
volatile       bit	RBIF		@((unsigned)&INTCON*8)+0;
volatile       bit	INTF		@((unsigned)&INTCON*8)+1;
volatile       bit	T0IF		@((unsigned)&INTCON*8)+2;
               bit	RBIE		@((unsigned)&INTCON*8)+3;
               bit	INTE		@((unsigned)&INTCON*8)+4;
               bit	T0IE		@((unsigned)&INTCON*8)+5;
               bit	PEIE		@((unsigned)&INTCON*8)+6;
volatile bit	GIE		@((unsigned)&INTCON*8)+7;

/* Definitions for PIR1 register */
volatile       bit	TMR1IF		@((unsigned)&PIR1*8)+0;
volatile       bit	TMR2IF		@((unsigned)&PIR1*8)+1;
volatile       bit	CCP1IF		@((unsigned)&PIR1*8)+2;
volatile       bit	TXIF		@((unsigned)&PIR1*8)+4;
volatile       bit	RCIF		@((unsigned)&PIR1*8)+5;
volatile       bit	CMIF		@((unsigned)&PIR1*8)+6;
volatile       bit	EEIF		@((unsigned)&PIR1*8)+7;

/* Definitions for T1CON register */
               bit	TMR1ON		@((unsigned)&T1CON*8)+0;
               bit	TMR1CS		@((unsigned)&T1CON*8)+1;
               bit	T1SYNC		@((unsigned)&T1CON*8)+2;
               bit	T1OSCEN		@((unsigned)&T1CON*8)+3;
               bit	T1CKPS0		@((unsigned)&T1CON*8)+4;
               bit	T1CKPS1		@((unsigned)&T1CON*8)+5;

/* Definitions for T2CON register */
               bit	T2CKPS0		@((unsigned)&T2CON*8)+0;
               bit	T2CKPS1		@((unsigned)&T2CON*8)+1;
               bit	TMR2ON		@((unsigned)&T2CON*8)+2;
               bit	TOUTPS0		@((unsigned)&T2CON*8)+3;
               bit	TOUTPS1		@((unsigned)&T2CON*8)+4;
               bit	TOUTPS2		@((unsigned)&T2CON*8)+5;
               bit	TOUTPS3		@((unsigned)&T2CON*8)+6;

/* Definitions for CCP1CON register */
               bit	CCP1M0		@((unsigned)&CCP1CON*8)+0;
               bit	CCP1M1		@((unsigned)&CCP1CON*8)+1;
               bit	CCP1M2		@((unsigned)&CCP1CON*8)+2;
               bit	CCP1M3		@((unsigned)&CCP1CON*8)+3;
volatile       bit	CCP1Y		@((unsigned)&CCP1CON*8)+4;
volatile       bit	CCP1X		@((unsigned)&CCP1CON*8)+5;

/* Definitions for RCSTA register */
volatile       bit	RX9D		@((unsigned)&RCSTA*8)+0;
volatile       bit	OERR		@((unsigned)&RCSTA*8)+1;
volatile       bit	FERR		@((unsigned)&RCSTA*8)+2;
               bit	ADEN		@((unsigned)&RCSTA*8)+3;
               bit	CREN		@((unsigned)&RCSTA*8)+4;
               bit	SREN		@((unsigned)&RCSTA*8)+5;
               bit	RX9		@((unsigned)&RCSTA*8)+6;
               bit	SPEN		@((unsigned)&RCSTA*8)+7;

/* Definitions for CMCON register */
               bit	CM0		@((unsigned)&CMCON*8)+0;
               bit	CM1		@((unsigned)&CMCON*8)+1;
               bit	CM2		@((unsigned)&CMCON*8)+2;
               bit	CIS		@((unsigned)&CMCON*8)+3;
               bit	C1INV		@((unsigned)&CMCON*8)+4;
               bit	C2INV		@((unsigned)&CMCON*8)+5;
volatile       bit	C1OUT		@((unsigned)&CMCON*8)+6;
volatile       bit	C2OUT		@((unsigned)&CMCON*8)+7;

/* Definitions for OPTION register */
               bit	PS0		@((unsigned)&OPTION*8)+0;
               bit	PS1		@((unsigned)&OPTION*8)+1;
               bit	PS2		@((unsigned)&OPTION*8)+2;
               bit	PSA		@((unsigned)&OPTION*8)+3;
               bit	T0SE		@((unsigned)&OPTION*8)+4;
               bit	T0CS		@((unsigned)&OPTION*8)+5;
               bit	INTEDG		@((unsigned)&OPTION*8)+6;
               bit	RBPU		@((unsigned)&OPTION*8)+7;

/* Definitions for TRISA register */
volatile       bit	TRISA0		@((unsigned)&TRISA*8)+0;
volatile       bit	TRISA1		@((unsigned)&TRISA*8)+1;
volatile       bit	TRISA2		@((unsigned)&TRISA*8)+2;
volatile       bit	TRISA3		@((unsigned)&TRISA*8)+3;
volatile       bit	TRISA4		@((unsigned)&TRISA*8)+4;
volatile       bit	TRISA5		@((unsigned)&TRISA*8)+5;
volatile       bit	TRISA6		@((unsigned)&TRISA*8)+6;
volatile       bit	TRISA7		@((unsigned)&TRISA*8)+7;

/* Definitions for TRISB register */
volatile       bit	TRISB0		@((unsigned)&TRISB*8)+0;
volatile       bit	TRISB1		@((unsigned)&TRISB*8)+1;
volatile       bit	TRISB2		@((unsigned)&TRISB*8)+2;
volatile       bit	TRISB3		@((unsigned)&TRISB*8)+3;
volatile       bit	TRISB4		@((unsigned)&TRISB*8)+4;
volatile       bit	TRISB5		@((unsigned)&TRISB*8)+5;
volatile       bit	TRISB6		@((unsigned)&TRISB*8)+6;
volatile       bit	TRISB7		@((unsigned)&TRISB*8)+7;

/* Definitions for PIE1 register */
               bit	TMR1IE		@((unsigned)&PIE1*8)+0;
               bit	TMR2IE		@((unsigned)&PIE1*8)+1;
               bit	CCP1IE		@((unsigned)&PIE1*8)+2;
               bit	TXIE		@((unsigned)&PIE1*8)+4;
               bit	RCIE		@((unsigned)&PIE1*8)+5;
               bit	CMIE		@((unsigned)&PIE1*8)+6;
               bit	EEIE		@((unsigned)&PIE1*8)+7;

/* Definitions for PCON register */
volatile       bit	BOR		@((unsigned)&PCON*8)+0;
volatile       bit	POR		@((unsigned)&PCON*8)+1;
               bit	OSCF		@((unsigned)&PCON*8)+3;

/* Definitions for TXSTA register */
volatile       bit	TX9D		@((unsigned)&TXSTA*8)+0;
volatile       bit	TRMT		@((unsigned)&TXSTA*8)+1;
               bit	BRGH		@((unsigned)&TXSTA*8)+2;
               bit	SYNC		@((unsigned)&TXSTA*8)+4;
               bit	TXEN		@((unsigned)&TXSTA*8)+5;
               bit	TX9		@((unsigned)&TXSTA*8)+6;
               bit	CSRC		@((unsigned)&TXSTA*8)+7;

/* Definitions for EECON1 register */
volatile       bit	RD		@((unsigned)&EECON1*8)+0;
volatile       bit	WR		@((unsigned)&EECON1*8)+1;
volatile       bit	WREN		@((unsigned)&EECON1*8)+2;
volatile       bit	WRERR		@((unsigned)&EECON1*8)+3;

/* Definitions for VRCON register */
               bit	VR0		@((unsigned)&VRCON*8)+0;
               bit	VR1		@((unsigned)&VRCON*8)+1;
               bit	VR2		@((unsigned)&VRCON*8)+2;
               bit	VR3		@((unsigned)&VRCON*8)+3;
               bit	VRR		@((unsigned)&VRCON*8)+5;
               bit	VROE		@((unsigned)&VRCON*8)+6;
               bit	VREN		@((unsigned)&VRCON*8)+7;

					
#define CONFIG_ADDR	0x2007

// Configuration Mask Definitions
#define CONFIG_ADDR	0x2007
// Protection of flash memory 
#define PROTECT		0x1FFF
#define UNPROTECT	0x3FFF
// Protection of EEPROM data memory 
#define CPD		0x3EFF
#define UNPROTECT	0x3FFF
// Low voltage programming enable 
#define LVPEN		0x3FFF
#define LVPDIS		0x3F7F
// Brown out detection enable 
#define BOREN		0x3FFF
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

#endif
