
#ifndef	_HTC_H_
#warning Header file pic16f688.h included directly. Use #include <htc.h> instead.
#endif


 /* header file for the MICROCHIP PIC microcontroller
  * PIC16F688
 */

#ifndef	__PIC16F688_H
#define	__PIC16F688_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x00;
volatile       unsigned char	TMR0		@ 0x01;
volatile       unsigned char	PCL		@ 0x02;
volatile       unsigned char	STATUS		@ 0x03;
               unsigned char	FSR		@ 0x04;
volatile       unsigned char	PORTA		@ 0x05;
volatile       unsigned char	PORTC		@ 0x07;
volatile       unsigned char	PCLATH		@ 0x0A;
volatile       unsigned char	INTCON		@ 0x0B;
volatile       unsigned char	PIR1		@ 0x0C;
volatile       unsigned char	TMR1L		@ 0x0E;
volatile       unsigned char	TMR1H		@ 0x0F;
volatile       unsigned char	T1CON		@ 0x10;
volatile       unsigned char	BAUDCTL		@ 0x11;
               unsigned char	SPBRGH		@ 0x12;
               unsigned char	SPBRG		@ 0x13;
volatile       unsigned char	RCREG		@ 0x14;
volatile       unsigned char	TXREG		@ 0x15;
volatile       unsigned char	TXSTA		@ 0x16;
volatile       unsigned char	RCSTA		@ 0x17;
volatile       unsigned char	WDTCON		@ 0x18;
volatile       unsigned char	CMCON0		@ 0x19;
               unsigned char	CMCON1		@ 0x1A;
volatile       unsigned char	ADRESH		@ 0x1E;
volatile       unsigned char	ADCON0		@ 0x1F;
               unsigned char	OPTION		@ 0x81;
volatile       unsigned char	TRISA		@ 0x85;
volatile       unsigned char	TRISC		@ 0x87;
               unsigned char	PIE1		@ 0x8C;
volatile       unsigned char	PCON		@ 0x8E;
volatile       unsigned char	OSCCON		@ 0x8F;
               unsigned char	OSCTUNE		@ 0x90;
               unsigned char	ANSEL		@ 0x91;
               unsigned char	WPUA		@ 0x95;
               unsigned char	IOCA		@ 0x96;
volatile       unsigned char	EEDATH		@ 0x97;
volatile       unsigned char	EEADRH		@ 0x98;
               unsigned char	VRCON		@ 0x99;
volatile       unsigned char	EEDAT		@ 0x9A;
/* Alternate definition */
volatile       unsigned char	EEDATA		@ 0x9A;
volatile       unsigned char	EEADR		@ 0x9B;
/* Alternate definition */
volatile       unsigned char	EEADRL		@ 0x9B;
volatile       unsigned char	EECON1		@ 0x9C;
volatile       unsigned char	EECON2		@ 0x9D;
volatile       unsigned char	ADRESL		@ 0x9E;
               unsigned char	ADCON1		@ 0x9F;


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

/* Definitions for PORTC register */
volatile       bit	RC0		@ ((unsigned)&PORTC*8)+0;
volatile       bit	RC1		@ ((unsigned)&PORTC*8)+1;
volatile       bit	RC2		@ ((unsigned)&PORTC*8)+2;
volatile       bit	RC3		@ ((unsigned)&PORTC*8)+3;
volatile       bit	RC4		@ ((unsigned)&PORTC*8)+4;
volatile       bit	RC5		@ ((unsigned)&PORTC*8)+5;

/* Definitions for INTCON register */
volatile       bit	RAIF		@ ((unsigned)&INTCON*8)+0;
volatile       bit	INTF		@ ((unsigned)&INTCON*8)+1;
volatile       bit	T0IF		@ ((unsigned)&INTCON*8)+2;
               bit	RAIE		@ ((unsigned)&INTCON*8)+3;
               bit	INTE		@ ((unsigned)&INTCON*8)+4;
               bit	T0IE		@ ((unsigned)&INTCON*8)+5;
               bit	PEIE		@ ((unsigned)&INTCON*8)+6;
volatile bit	GIE		@ ((unsigned)&INTCON*8)+7;

/* Definitions for PIR1 register */
volatile       bit	TMR1IF		@ ((unsigned)&PIR1*8)+0;
volatile       bit	TXIF		@ ((unsigned)&PIR1*8)+1;
volatile       bit	OSFIF		@ ((unsigned)&PIR1*8)+2;
volatile       bit	C1IF		@ ((unsigned)&PIR1*8)+3;
volatile       bit	C2IF		@ ((unsigned)&PIR1*8)+4;
volatile       bit	RCIF		@ ((unsigned)&PIR1*8)+5;
volatile       bit	ADIF		@ ((unsigned)&PIR1*8)+6;
volatile       bit	EEIF		@ ((unsigned)&PIR1*8)+7;

/* Definitions for T1CON register */
               bit	TMR1ON		@ ((unsigned)&T1CON*8)+0;
               bit	TMR1CS		@ ((unsigned)&T1CON*8)+1;
               bit	T1SYNC		@ ((unsigned)&T1CON*8)+2;
               bit	T1OSCEN		@ ((unsigned)&T1CON*8)+3;
               bit	T1CKPS0		@ ((unsigned)&T1CON*8)+4;
               bit	T1CKPS1		@ ((unsigned)&T1CON*8)+5;
               bit	T1GE		@ ((unsigned)&T1CON*8)+6;
               bit	T1GINV		@ ((unsigned)&T1CON*8)+7;

/* Definitions for BAUDCTL register */
volatile       bit	ABDEN		@ ((unsigned)&BAUDCTL*8)+0;
volatile       bit	WUE		@ ((unsigned)&BAUDCTL*8)+1;
               bit	BRG16		@ ((unsigned)&BAUDCTL*8)+3;
volatile       bit	SCKP		@ ((unsigned)&BAUDCTL*8)+4;
volatile       bit	RCIDL		@ ((unsigned)&BAUDCTL*8)+6;
volatile       bit	ABDOVF		@ ((unsigned)&BAUDCTL*8)+7;

/* Definitions for TXSTA register */
volatile       bit	TX9D		@ ((unsigned)&TXSTA*8)+0;
volatile       bit	TRMT		@ ((unsigned)&TXSTA*8)+1;
               bit	BRGH		@ ((unsigned)&TXSTA*8)+2;
               bit	SENDB		@ ((unsigned)&TXSTA*8)+3;
               bit	SYNC		@ ((unsigned)&TXSTA*8)+4;
               bit	TXEN		@ ((unsigned)&TXSTA*8)+5;
               bit	TX9		@ ((unsigned)&TXSTA*8)+6;
               bit	CSRC		@ ((unsigned)&TXSTA*8)+7;

/* Definitions for RCSTA register */
volatile       bit	RX9D		@ ((unsigned)&RCSTA*8)+0;
volatile       bit	OERR		@ ((unsigned)&RCSTA*8)+1;
volatile       bit	FERR		@ ((unsigned)&RCSTA*8)+2;
               bit	ADDEN		@ ((unsigned)&RCSTA*8)+3;
               bit	CREN		@ ((unsigned)&RCSTA*8)+4;
               bit	SREN		@ ((unsigned)&RCSTA*8)+5;
               bit	RX9		@ ((unsigned)&RCSTA*8)+6;
               bit	SPEN		@ ((unsigned)&RCSTA*8)+7;

/* Definitions for WDTCON register */
               bit	SWDTEN		@ ((unsigned)&WDTCON*8)+0;
               bit	WDTPS0		@ ((unsigned)&WDTCON*8)+1;
               bit	WDTPS1		@ ((unsigned)&WDTCON*8)+2;
               bit	WDTPS2		@ ((unsigned)&WDTCON*8)+3;
               bit	WDTPS3		@ ((unsigned)&WDTCON*8)+4;

/* Definitions for CMCON0 register */
               bit	CM0		@ ((unsigned)&CMCON0*8)+0;
               bit	CM1		@ ((unsigned)&CMCON0*8)+1;
               bit	CM2		@ ((unsigned)&CMCON0*8)+2;
               bit	CIS		@ ((unsigned)&CMCON0*8)+3;
               bit	C1INV		@ ((unsigned)&CMCON0*8)+4;
               bit	C2INV		@ ((unsigned)&CMCON0*8)+5;
volatile       bit	C1OUT		@ ((unsigned)&CMCON0*8)+6;
volatile       bit	C2OUT		@ ((unsigned)&CMCON0*8)+7;

/* Definitions for CMCON1 register */
               bit	C2SYNC		@ ((unsigned)&CMCON1*8)+0;
               bit	T1GSS		@ ((unsigned)&CMCON1*8)+1;

/* Definitions for ADCON0 register */
               bit	ADON		@ ((unsigned)&ADCON0*8)+0;
volatile       bit	GODONE		@ ((unsigned)&ADCON0*8)+1;
               bit	CHS0		@ ((unsigned)&ADCON0*8)+2;
               bit	CHS1		@ ((unsigned)&ADCON0*8)+3;
               bit	CHS2		@ ((unsigned)&ADCON0*8)+4;
               bit	VCFG		@ ((unsigned)&ADCON0*8)+6;
               bit	ADFM		@ ((unsigned)&ADCON0*8)+7;

/* Definitions for OPTION register */
               bit	PS0		@ ((unsigned)&OPTION*8)+0;
               bit	PS1		@ ((unsigned)&OPTION*8)+1;
               bit	PS2		@ ((unsigned)&OPTION*8)+2;
               bit	PSA		@ ((unsigned)&OPTION*8)+3;
               bit	T0SE		@ ((unsigned)&OPTION*8)+4;
               bit	T0CS		@ ((unsigned)&OPTION*8)+5;
               bit	INTEDG		@ ((unsigned)&OPTION*8)+6;
               bit	RAPU		@ ((unsigned)&OPTION*8)+7;

/* Definitions for TRISA register */
               bit	TRISA0		@ ((unsigned)&TRISA*8)+0;
               bit	TRISA1		@ ((unsigned)&TRISA*8)+1;
               bit	TRISA2		@ ((unsigned)&TRISA*8)+2;
               bit	TRISA3		@ ((unsigned)&TRISA*8)+3;
               bit	TRISA4		@ ((unsigned)&TRISA*8)+4;
               bit	TRISA5		@ ((unsigned)&TRISA*8)+5;

/* Definitions for TRISC register */
volatile       bit	TRISC0		@ ((unsigned)&TRISC*8)+0;
volatile       bit	TRISC1		@ ((unsigned)&TRISC*8)+1;
volatile       bit	TRISC2		@ ((unsigned)&TRISC*8)+2;
volatile       bit	TRISC3		@ ((unsigned)&TRISC*8)+3;
volatile       bit	TRISC4		@ ((unsigned)&TRISC*8)+4;
volatile       bit	TRISC5		@ ((unsigned)&TRISC*8)+5;

/* Definitions for PIE1 register */
               bit	TMR1IE		@ ((unsigned)&PIE1*8)+0;
               bit	TXIE		@ ((unsigned)&PIE1*8)+1;
               bit	OSFIE		@ ((unsigned)&PIE1*8)+2;
               bit	C1IE		@ ((unsigned)&PIE1*8)+3;
               bit	C2IE		@ ((unsigned)&PIE1*8)+4;
               bit	RCIE		@ ((unsigned)&PIE1*8)+5;
               bit	ADIE		@ ((unsigned)&PIE1*8)+6;
               bit	EEIE		@ ((unsigned)&PIE1*8)+7;

/* Definitions for PCON register */
volatile       bit	BOD		@ ((unsigned)&PCON*8)+0;
volatile       bit	POR		@ ((unsigned)&PCON*8)+1;
               bit	SBODEN		@ ((unsigned)&PCON*8)+4;
               bit	ULPWUE		@ ((unsigned)&PCON*8)+5;

/* Definitions for OSCCON register */
               bit	SCS		@ ((unsigned)&OSCCON*8)+0;
volatile       bit	LTS		@ ((unsigned)&OSCCON*8)+1;
volatile       bit	HTS		@ ((unsigned)&OSCCON*8)+2;
volatile       bit	OSTS		@ ((unsigned)&OSCCON*8)+3;
               bit	IOSCF0		@ ((unsigned)&OSCCON*8)+4;
               bit	IOSCF1		@ ((unsigned)&OSCCON*8)+5;
               bit	IOSCF2		@ ((unsigned)&OSCCON*8)+6;
/* Alternate definitions for OSCCON register */
               bit	IRCF0		@ ((unsigned)&OSCCON*8)+4;
               bit	IRCF1		@ ((unsigned)&OSCCON*8)+5;
               bit	IRCF2		@ ((unsigned)&OSCCON*8)+6;

/* Definitions for OSCTUNE register */
               bit	TUN0		@ ((unsigned)&OSCTUNE*8)+0;
               bit	TUN1		@ ((unsigned)&OSCTUNE*8)+1;
               bit	TUN2		@ ((unsigned)&OSCTUNE*8)+2;
               bit	TUN3		@ ((unsigned)&OSCTUNE*8)+3;
               bit	TUN4		@ ((unsigned)&OSCTUNE*8)+4;

/* Definitions for ANSEL register */
               bit	ANS0		@ ((unsigned)&ANSEL*8)+0;
               bit	ANS1		@ ((unsigned)&ANSEL*8)+1;
               bit	ANS2		@ ((unsigned)&ANSEL*8)+2;
               bit	ANS3		@ ((unsigned)&ANSEL*8)+3;
               bit	ANS4		@ ((unsigned)&ANSEL*8)+4;
               bit	ANS5		@ ((unsigned)&ANSEL*8)+5;
               bit	ANS6		@ ((unsigned)&ANSEL*8)+6;
               bit	ANS7		@ ((unsigned)&ANSEL*8)+7;

/* Definitions for WPUA register */
               bit	WPUA0		@ ((unsigned)&WPUA*8)+0;
               bit	WPUA1		@ ((unsigned)&WPUA*8)+1;
               bit	WPUA2		@ ((unsigned)&WPUA*8)+2;
               bit	WPUA4		@ ((unsigned)&WPUA*8)+4;
               bit	WPUA5		@ ((unsigned)&WPUA*8)+5;

/* Definitions for IOCA register */
               bit	IOCA0		@ ((unsigned)&IOCA*8)+0;
               bit	IOCA1		@ ((unsigned)&IOCA*8)+1;
               bit	IOCA2		@ ((unsigned)&IOCA*8)+2;
               bit	IOCA3		@ ((unsigned)&IOCA*8)+3;
               bit	IOCA4		@ ((unsigned)&IOCA*8)+4;
               bit	IOCA5		@ ((unsigned)&IOCA*8)+5;

/* Definitions for VRCON register */
               bit	VR0		@ ((unsigned)&VRCON*8)+0;
               bit	VR1		@ ((unsigned)&VRCON*8)+1;
               bit	VR2		@ ((unsigned)&VRCON*8)+2;
               bit	VR3		@ ((unsigned)&VRCON*8)+3;
               bit	VRR		@ ((unsigned)&VRCON*8)+5;
               bit	VREN		@ ((unsigned)&VRCON*8)+7;

/* Definitions for EECON1 register */
volatile       bit	RD		@ ((unsigned)&EECON1*8)+0;
volatile       bit	WR		@ ((unsigned)&EECON1*8)+1;
volatile       bit	WREN		@ ((unsigned)&EECON1*8)+2;
volatile       bit	WRERR		@ ((unsigned)&EECON1*8)+3;
volatile       bit	EEPGD		@ ((unsigned)&EECON1*8)+7;

/* Definitions for ADCON1 register */
               bit	ADCS0		@ ((unsigned)&ADCON1*8)+4;
               bit	ADCS1		@ ((unsigned)&ADCON1*8)+5;
               bit	ADCS2		@ ((unsigned)&ADCON1*8)+6;

					
// Configuration Mask Definitions
#define CONFIG_ADDR	0x2007
// Fail-Safe clock monitor 
#define FCMEN		0x3FFF
#define FCMDIS		0x37FF
// Internal External Switch Over 
#define IESOEN		0x3FFF
#define IESODIS		0x3BFF
// Brown-out detect modes 
#define BOREN		0x3FFF
#define BOREN_XSLP	0x3EFF
#define SBOREN		0x3DFF
#define BORDIS		0x3CFF
// Protection of data block 
#define UNPROTECT	0x3FFF
#define CPD		0x3F7F
// Protection of program code 
#define UNPROTECT	0x3FFF
#define PROTECT		0x3FBF
// Master clear reset pin function
#define MCLREN		0x3FFF
#define MCLRDIS		0x3FDF
// Power up timer enable 
#define PWRTDIS		0x3FFF
#define PWRTEN		0x3FEF
// Watchdog timer enable 
#define WDTEN		0x3FFF
#define WDTDIS		0x3FF7
// Oscillator configurations 
#define RCCLK		0x3FFF
#define RCIO		0x3FFE
#define INTCLK		0x3FFD
#define INTIO		0x3FFC
#define EC		0x3FFB
#define HS		0x3FFA
#define XT		0x3FF9
#define LP		0x3FF8

#endif
