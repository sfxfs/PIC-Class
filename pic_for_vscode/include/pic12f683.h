
#ifndef	_HTC_H_
#warning Header file pic12f683.h included directly. Use #include <htc.h> instead.
#endif


 /* header file for the MICROCHIP PIC microcontroller
 */

#ifndef	__PIC12F683_H
#define	__PIC12F683_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x00;
volatile       unsigned char	TMR0		@ 0x01;
volatile       unsigned char	PCL		@ 0x02;
volatile       unsigned char	STATUS		@ 0x03;
               unsigned char	FSR		@ 0x04;
volatile       unsigned char	GPIO		@ 0x05;
volatile       unsigned char	PCLATH		@ 0x0A;
volatile       unsigned char	INTCON		@ 0x0B;
volatile       unsigned char	PIR1		@ 0x0C;
volatile       unsigned char	TMR1L		@ 0x0E;
volatile       unsigned char	TMR1H		@ 0x0F;
volatile       unsigned char	T1CON		@ 0x10;
volatile       unsigned char	TMR2		@ 0x11;
volatile       unsigned char	T2CON		@ 0x12;
volatile       unsigned char	CCPR1L		@ 0x13;
volatile       unsigned char	CCPR1H		@ 0x14;
volatile       unsigned char	CCP1CON		@ 0x15;
volatile       unsigned char	WDTCON		@ 0x18;
volatile       unsigned char	CMCON0		@ 0x19;
               unsigned char	CMCON1		@ 0x1A;
volatile       unsigned char	ADRESH		@ 0x1E;
volatile       unsigned char	ADCON0		@ 0x1F;
               unsigned char	OPTION		@ 0x81;
volatile       unsigned char	TRISIO		@ 0x85;
               unsigned char	PIE1		@ 0x8C;
volatile       unsigned char	PCON		@ 0x8E;
volatile       unsigned char	OSCCON		@ 0x8F;
               unsigned char	OSCTUNE		@ 0x90;
               unsigned char	PR2		@ 0x92;
               unsigned char	WPU		@ 0x95;
               unsigned char	IOC		@ 0x96;
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
               unsigned char	ANSEL		@ 0x9F;


/* Definitions for STATUS register */
volatile       bit	CARRY		@ ((unsigned)&STATUS*8)+0;
volatile       bit	DC		@ ((unsigned)&STATUS*8)+1;
volatile       bit	ZERO		@ ((unsigned)&STATUS*8)+2;
volatile       bit	PD		@ ((unsigned)&STATUS*8)+3;
volatile       bit	TO		@ ((unsigned)&STATUS*8)+4;
               bit	RP0		@ ((unsigned)&STATUS*8)+5;
               bit	RP1		@ ((unsigned)&STATUS*8)+6;
               bit	IRP		@ ((unsigned)&STATUS*8)+7;

/* Definitions for GPIO register */
volatile       bit	GPIO0		@ ((unsigned)&GPIO*8)+0;
volatile       bit	GPIO1		@ ((unsigned)&GPIO*8)+1;
volatile       bit	GPIO2		@ ((unsigned)&GPIO*8)+2;
volatile       bit	GPIO3		@ ((unsigned)&GPIO*8)+3;
volatile       bit	GPIO4		@ ((unsigned)&GPIO*8)+4;
volatile       bit	GPIO5		@ ((unsigned)&GPIO*8)+5;

/* Definitions for INTCON register */
volatile       bit	GPIF		@ ((unsigned)&INTCON*8)+0;
volatile       bit	INTF		@ ((unsigned)&INTCON*8)+1;
volatile       bit	T0IF		@ ((unsigned)&INTCON*8)+2;
               bit	GPIE		@ ((unsigned)&INTCON*8)+3;
               bit	INTE		@ ((unsigned)&INTCON*8)+4;
               bit	T0IE		@ ((unsigned)&INTCON*8)+5;
               bit	PEIE		@ ((unsigned)&INTCON*8)+6;
volatile bit	GIE		@ ((unsigned)&INTCON*8)+7;

/* Definitions for PIR1 register */
volatile       bit	TMR1IF		@ ((unsigned)&PIR1*8)+0;
volatile       bit	TMR2IF		@ ((unsigned)&PIR1*8)+1;
volatile       bit	OSFIF		@ ((unsigned)&PIR1*8)+2;
volatile       bit	CMIF		@ ((unsigned)&PIR1*8)+3;
volatile       bit	CCP1IF		@ ((unsigned)&PIR1*8)+5;
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
               bit	CINV		@ ((unsigned)&CMCON0*8)+4;
volatile       bit	COUT		@ ((unsigned)&CMCON0*8)+6;

/* Definitions for CMCON1 register */
               bit	CMSYNC		@ ((unsigned)&CMCON1*8)+0;
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
               bit	GPPU		@ ((unsigned)&OPTION*8)+7;

/* Definitions for TRISIO register */
volatile       bit	TRISIO0		@ ((unsigned)&TRISIO*8)+0;
volatile       bit	TRISIO1		@ ((unsigned)&TRISIO*8)+1;
volatile       bit	TRISIO2		@ ((unsigned)&TRISIO*8)+2;
volatile       bit	TRISIO3		@ ((unsigned)&TRISIO*8)+3;
volatile       bit	TRISIO4		@ ((unsigned)&TRISIO*8)+4;
volatile       bit	TRISIO5		@ ((unsigned)&TRISIO*8)+5;

/* Definitions for PIE1 register */
               bit	TMR1IE		@ ((unsigned)&PIE1*8)+0;
               bit	TMR2IE		@ ((unsigned)&PIE1*8)+1;
               bit	OSFIE		@ ((unsigned)&PIE1*8)+2;
               bit	CMIE		@ ((unsigned)&PIE1*8)+3;
               bit	CCP1IE		@ ((unsigned)&PIE1*8)+5;
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
               bit	IRCF0		@ ((unsigned)&OSCCON*8)+4;
               bit	IRCF1		@ ((unsigned)&OSCCON*8)+5;
               bit	IRCF2		@ ((unsigned)&OSCCON*8)+6;

/* Definitions for OSCTUNE register */
               bit	TUN0		@ ((unsigned)&OSCTUNE*8)+0;
               bit	TUN1		@ ((unsigned)&OSCTUNE*8)+1;
               bit	TUN2		@ ((unsigned)&OSCTUNE*8)+2;
               bit	TUN3		@ ((unsigned)&OSCTUNE*8)+3;
               bit	TUN4		@ ((unsigned)&OSCTUNE*8)+4;

/* Definitions for WPU register */
               bit	WPU0		@ ((unsigned)&WPU*8)+0;
               bit	WPU1		@ ((unsigned)&WPU*8)+1;
               bit	WPU2		@ ((unsigned)&WPU*8)+2;
               bit	WPU3		@ ((unsigned)&WPU*8)+3;
               bit	WPU4		@ ((unsigned)&WPU*8)+4;
               bit	WPU5		@ ((unsigned)&WPU*8)+5;

/* Definitions for IOC register */
               bit	IOC0		@ ((unsigned)&IOC*8)+0;
               bit	IOC1		@ ((unsigned)&IOC*8)+1;
               bit	IOC2		@ ((unsigned)&IOC*8)+2;
               bit	IOC3		@ ((unsigned)&IOC*8)+3;
               bit	IOC4		@ ((unsigned)&IOC*8)+4;
               bit	IOC5		@ ((unsigned)&IOC*8)+5;

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

/* Definitions for ANSEL register */
               bit	ANS0		@ ((unsigned)&ANSEL*8)+0;
               bit	ANS1		@ ((unsigned)&ANSEL*8)+1;
               bit	ANS2		@ ((unsigned)&ANSEL*8)+2;
               bit	ANS3		@ ((unsigned)&ANSEL*8)+3;
               bit	ADCS0		@ ((unsigned)&ANSEL*8)+4;
               bit	ADCS1		@ ((unsigned)&ANSEL*8)+5;
               bit	ADCS2		@ ((unsigned)&ANSEL*8)+6;


// Configuration Mask Definitions
#define CONFIG_ADDR	0x2007
// Fail Clock Monitor Enable 
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
// Master clear reset
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
