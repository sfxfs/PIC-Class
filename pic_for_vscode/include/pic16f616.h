
#ifndef	_HTC_H_
#warning Header file pic16f616.h included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP PIC microcontroller
	16F610
	16HV610
	16F616
	16HV616
 */

#ifndef	__PIC16F616_H
#define	__PIC16F616_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x000;
volatile       unsigned char	TMR0		@ 0x001;
volatile       unsigned char	PCL		@ 0x002;
volatile       unsigned char	STATUS		@ 0x003;
               unsigned char	FSR		@ 0x004;
volatile       unsigned char	PORTA		@ 0x005;
volatile       unsigned char	PORTC		@ 0x007;
volatile       unsigned char	PCLATH		@ 0x00A;
volatile       unsigned char	INTCON		@ 0x00B;
volatile       unsigned char	PIR1		@ 0x00C;
volatile       unsigned char	TMR1L		@ 0x00E;
volatile       unsigned char	TMR1H		@ 0x00F;
               unsigned char	T1CON		@ 0x010;
#if defined(_16F616) || defined(_16HV616)
volatile       unsigned char	TMR2		@ 0x011;
               unsigned char	T2CON		@ 0x012;
volatile       unsigned char	CCPR1L		@ 0x013;
volatile       unsigned char	CCPR1H		@ 0x014;
volatile       unsigned char	CCP1CON		@ 0x015;
volatile       unsigned char	PWM1CON		@ 0x016;
volatile       unsigned char	ECCPAS		@ 0x017;
#endif
               unsigned char	VRCON		@ 0x019;
volatile       unsigned char	CM1CON0		@ 0x01A;
volatile       unsigned char	CM2CON0		@ 0x01B;
volatile       unsigned char	CM2CON1		@ 0x01C;
#if defined(_16F616) || defined(_16HV616)
volatile       unsigned char	ADRESH		@ 0x01E;
volatile       unsigned char	ADCON0		@ 0x01F;
#endif
               unsigned char	OPTION		@ 0x081;
volatile       unsigned char	TRISA		@ 0x085;
volatile       unsigned char	TRISC		@ 0x087;
               unsigned char	PIE1		@ 0x08C;
volatile       unsigned char	PCON		@ 0x08E;
               unsigned char	OSCTUNE		@ 0x090;
               unsigned char	ANSEL		@ 0x091;
#if defined(_16F616) || defined(_16HV616)
               unsigned char	PR2		@ 0x092;
#endif
               unsigned char	WPUA		@ 0x095;
               unsigned char	IOCA		@ 0x096;
volatile       unsigned char	SRCON0		@ 0x099;
               unsigned char	SRCON1		@ 0x09A;
#if defined(_16F616) || defined(_16HV616)
volatile       unsigned char	ADRESL		@ 0x09E;
               unsigned char	ADCON1		@ 0x09F;
#endif


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
#if defined(_16F616) || defined(_16HV616)
volatile       bit	TMR2IF		@ ((unsigned)&PIR1*8)+1;
#endif
volatile       bit	C1IF		@ ((unsigned)&PIR1*8)+3;
volatile       bit	C2IF		@ ((unsigned)&PIR1*8)+4;
#if defined(_16F616) || defined(_16HV616)
volatile       bit	CCP1IF		@ ((unsigned)&PIR1*8)+5;
volatile       bit	ADIF		@ ((unsigned)&PIR1*8)+6;
#endif

/* Definitions for T1CON register */
               bit	TMR1ON		@ ((unsigned)&T1CON*8)+0;
               bit	TMR1CS		@ ((unsigned)&T1CON*8)+1;
               bit	T1SYNC		@ ((unsigned)&T1CON*8)+2;
               bit	T1OSCEN		@ ((unsigned)&T1CON*8)+3;
               bit	T1CKPS0		@ ((unsigned)&T1CON*8)+4;
               bit	T1CKPS1		@ ((unsigned)&T1CON*8)+5;
               bit	TMR1GE		@ ((unsigned)&T1CON*8)+6;
               bit	T1GINV		@ ((unsigned)&T1CON*8)+7;

#if defined(_16F616) || defined(_16HV616)
/* Definitions for T2CON register */
               bit	T2CKPS0		@ ((unsigned)&T2CON*8)+0;
               bit	T2CKPS1		@ ((unsigned)&T2CON*8)+1;
               bit	TMR2ON		@ ((unsigned)&T2CON*8)+2;
               bit	TOUTPS0		@ ((unsigned)&T2CON*8)+3;
               bit	TOUTPS1		@ ((unsigned)&T2CON*8)+4;
               bit	TOUTPS2		@ ((unsigned)&T2CON*8)+5;
               bit	TOUTPS3		@ ((unsigned)&T2CON*8)+6;

/* Definitions for CCP1CON register */
               bit	CCP1M0		@ ((unsigned)&CCP1CON*8)+0;
               bit	CCP1M1		@ ((unsigned)&CCP1CON*8)+1;
               bit	CCP1M2		@ ((unsigned)&CCP1CON*8)+2;
               bit	CCP1M3		@ ((unsigned)&CCP1CON*8)+3;
               bit	DC1B0		@ ((unsigned)&CCP1CON*8)+4;
               bit	DC1B1		@ ((unsigned)&CCP1CON*8)+5;
               bit	P1M0		@ ((unsigned)&CCP1CON*8)+6;
               bit	P1M1		@ ((unsigned)&CCP1CON*8)+7;

/* Definitions for PWM1CON register */
volatile       bit	PDC0		@ ((unsigned)&PWM1CON*8)+0;
volatile       bit	PDC1		@ ((unsigned)&PWM1CON*8)+1;
volatile       bit	PDC2		@ ((unsigned)&PWM1CON*8)+2;
volatile       bit	PDC3		@ ((unsigned)&PWM1CON*8)+3;
volatile       bit	PDC4		@ ((unsigned)&PWM1CON*8)+4;
volatile       bit	PDC5		@ ((unsigned)&PWM1CON*8)+5;
volatile       bit	PDC6		@ ((unsigned)&PWM1CON*8)+6;
volatile       bit	PRSEN		@ ((unsigned)&PWM1CON*8)+7;

/* Definitions for ECCPAS register */
               bit	PSSBD0		@ ((unsigned)&ECCPAS*8)+0;
               bit	PSSBD1		@ ((unsigned)&ECCPAS*8)+1;
               bit	PSSAC0		@ ((unsigned)&ECCPAS*8)+2;
               bit	PSSAC1		@ ((unsigned)&ECCPAS*8)+3;
               bit	ECCPAS0		@ ((unsigned)&ECCPAS*8)+4;
               bit	ECCPAS1		@ ((unsigned)&ECCPAS*8)+5;
               bit	ECCPAS2		@ ((unsigned)&ECCPAS*8)+6;
volatile       bit	ECCPASE		@ ((unsigned)&ECCPAS*8)+7;
#endif

/* Definitions for VRCON register */
               bit	VR0		@ ((unsigned)&VRCON*8)+0;
               bit	VR1		@ ((unsigned)&VRCON*8)+1;
               bit	VR2		@ ((unsigned)&VRCON*8)+2;
               bit	VR3		@ ((unsigned)&VRCON*8)+3;
               bit	VP6EN		@ ((unsigned)&VRCON*8)+4;
               bit	VRR		@ ((unsigned)&VRCON*8)+5;
               bit	C2VREN		@ ((unsigned)&VRCON*8)+6;
               bit	C1VREN		@ ((unsigned)&VRCON*8)+7;

/* Definitions for CM1CON0 register */
               bit	C1CH0		@ ((unsigned)&CM1CON0*8)+0;
               bit	C1CH1		@ ((unsigned)&CM1CON0*8)+1;
               bit	C1R		@ ((unsigned)&CM1CON0*8)+2;
               bit	C1POL		@ ((unsigned)&CM1CON0*8)+4;
               bit	C1OE		@ ((unsigned)&CM1CON0*8)+5;
volatile       bit	C1OUT		@ ((unsigned)&CM1CON0*8)+6;
               bit	C1ON		@ ((unsigned)&CM1CON0*8)+7;

/* Definitions for CM2CON0 register */
               bit	C2CH0		@ ((unsigned)&CM2CON0*8)+0;
               bit	C2CH1		@ ((unsigned)&CM2CON0*8)+1;
               bit	C2R		@ ((unsigned)&CM2CON0*8)+2;
               bit	C2POL		@ ((unsigned)&CM2CON0*8)+4;
               bit	C2OE		@ ((unsigned)&CM2CON0*8)+5;
volatile       bit	C2OUT		@ ((unsigned)&CM2CON0*8)+6;
               bit	C2ON		@ ((unsigned)&CM2CON0*8)+7;

/* Definitions for CM2CON1 register */
               bit	C2SYNC		@ ((unsigned)&CM2CON1*8)+0;
               bit	T1GSS		@ ((unsigned)&CM2CON1*8)+1;
               bit	C2HYS		@ ((unsigned)&CM2CON1*8)+2;
               bit	C1HYS		@ ((unsigned)&CM2CON1*8)+3;
               bit	T1ACS		@ ((unsigned)&CM2CON1*8)+4;
volatile       bit	MC2OUT		@ ((unsigned)&CM2CON1*8)+6;
volatile       bit	MC1OUT		@ ((unsigned)&CM2CON1*8)+7;

#if defined(_16F616) || defined(_16HV616)
/* Definitions for ADCON0 register */
               bit	ADON		@ ((unsigned)&ADCON0*8)+0;
volatile       bit	GODONE		@ ((unsigned)&ADCON0*8)+1;
               bit	CHS0		@ ((unsigned)&ADCON0*8)+2;
               bit	CHS1		@ ((unsigned)&ADCON0*8)+3;
               bit	CHS2		@ ((unsigned)&ADCON0*8)+4;
               bit	CHS3		@ ((unsigned)&ADCON0*8)+5;
               bit	VCFG		@ ((unsigned)&ADCON0*8)+6;
               bit	ADFM		@ ((unsigned)&ADCON0*8)+7;
#endif

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
#if defined(_16F616) || defined(_16HV616)
               bit	TMR2IE		@ ((unsigned)&PIE1*8)+1;
#endif
               bit	C1IE		@ ((unsigned)&PIE1*8)+3;
               bit	C2IE		@ ((unsigned)&PIE1*8)+4;
#if defined(_16F616) || defined(_16HV616)
               bit	CCP1IE		@ ((unsigned)&PIE1*8)+5;
               bit	ADIE		@ ((unsigned)&PIE1*8)+6;
#endif

/* Definitions for PCON register */
volatile       bit	BOR		@ ((unsigned)&PCON*8)+0;
volatile       bit	POR		@ ((unsigned)&PCON*8)+1;

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

/* Definitions for SRCON0 register */
               bit	SRCLKEN		@ ((unsigned)&SRCON0*8)+0;
volatile       bit	PULSR		@ ((unsigned)&SRCON0*8)+2;
volatile       bit	PULSS		@ ((unsigned)&SRCON0*8)+3;
               bit	C2REN		@ ((unsigned)&SRCON0*8)+4;
               bit	C1SEN		@ ((unsigned)&SRCON0*8)+5;
               bit	SR0		@ ((unsigned)&SRCON0*8)+6;
               bit	SR1		@ ((unsigned)&SRCON0*8)+7;

/* Definitions for SRCON1 register */
               bit	SRCS2		@ ((unsigned)&SRCON1*8)+6;
               bit	SRCS1		@ ((unsigned)&SRCON1*8)+7;

#if defined(_16F616) || defined(_16HV616)
/* Definitions for ADCON1 register */
               bit	ADCS0		@ ((unsigned)&ADCON1*8)+4;
               bit	ADCS1		@ ((unsigned)&ADCON1*8)+5;
               bit	ADCS2		@ ((unsigned)&ADCON1*8)+6;
#endif

// Configuration Mask Definitions
#define CONFIG_ADDR	0x2007
// Brown-Out reset 
#define BOREN		0x3FFF	// Enabled
#define BORXSLP		0x3EFF	// Enabled except in sleep
#define BORDIS		0x3DFF	// Disabled
// Internal Oscillator Frequency Select 
#define OSC_4MHZ	0x3F7F	// 4 MHz
#define OSC_8MHZ	0x3FFF	// 8 MHz
// Protection of flash memory 
#define PROTECT		0x3FBF	// Protected
#define UNPROTECT	0x3FFF	// Unprotected
// Master Clear Function 
#define MCLREN		0x3FFF	// Enabled
#define MCLRDIS		0x3FDF	// Disabled
// Power up timer 
#define PWRTEN		0x3FEF	// Enabled
#define PWRTDIS		0x3FFF	// Disabled
// Watchdog timer 
#define WDTEN		0x3FFF	// Enabled
#define WDTDIS		0x3FF7	// Disabled
// Oscillator configurations 
#define EXTCLK		0x3FFF	// External RC Clockout
#define EXTIO		0x3FFE	// External RC No Clock
#define INTCLK		0x3FFD	// Internal RC Clockout
#define INTIO		0x3FFC	// Internal RC No Clock
#define EC		0x3FFB	// EC
#define HS		0x3FFA	// HS
#define XT		0x3FF9	// XT
#define LP		0x3FF8	// LP

#endif
