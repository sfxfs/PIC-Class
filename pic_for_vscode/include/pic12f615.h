#ifndef	_HTC_H_
 #warning Header file pic12f615.h included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP PIC microcontroller
	12F609
	12HV609
	12F615
	12HV615
 */

#ifndef	__PIC12F615_H
#define	__PIC12F615_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x000;
volatile       unsigned char	TMR0		@ 0x001;
volatile       unsigned char	PCL		@ 0x002;
volatile       unsigned char	STATUS		@ 0x003;
               unsigned char	FSR		@ 0x004;
volatile       unsigned char	GPIO		@ 0x005;
volatile       unsigned char	PCLATH		@ 0x00A;
volatile       unsigned char	INTCON		@ 0x00B;
volatile       unsigned char	PIR1		@ 0x00C;
volatile       unsigned char	TMR1L		@ 0x00E;
volatile       unsigned char	TMR1H		@ 0x00F;
               unsigned char	T1CON		@ 0x010;
#if defined(_12F615) || defined(_12HV615)
volatile       unsigned char	TMR2		@ 0x011;
               unsigned char	T2CON		@ 0x012;
volatile       unsigned char	CCPR1L		@ 0x013;
volatile       unsigned char	CCPR1H		@ 0x014;
volatile       unsigned char	CCP1CON		@ 0x015;
volatile       unsigned char	PWM1CON		@ 0x016;
volatile       unsigned char	ECCPAS		@ 0x017;
#endif
               unsigned char	VRCON		@ 0x019;
volatile       unsigned char	CMCON0		@ 0x01A;
               unsigned char	CMCON1		@ 0x01C;
#if defined(_12F615) || defined(_12HV615)
volatile       unsigned char	ADRESH		@ 0x01E;
volatile       unsigned char	ADCON0		@ 0x01F;
#endif
               unsigned char	OPTION		@ 0x081;
volatile       unsigned char	TRISIO		@ 0x085;
               unsigned char	PIE1		@ 0x08C;
volatile       unsigned char	PCON		@ 0x08E;
               unsigned char	OSCTUNE		@ 0x090;
#if defined(_12F615) || defined(_12HV615)
               unsigned char	PR2		@ 0x092;
               unsigned char	APFCON		@ 0x093;
#endif
               unsigned char	WPU		@ 0x095;
               unsigned char	IOC		@ 0x096;
#if defined(_12F615) || defined(_12HV615)
volatile       unsigned char	ADRESL		@ 0x09E;
#endif
               unsigned char	ANSEL		@ 0x09F;


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
volatile       bit	GP0		@ ((unsigned)&GPIO*8)+0;
volatile       bit	GP1		@ ((unsigned)&GPIO*8)+1;
volatile       bit	GP2		@ ((unsigned)&GPIO*8)+2;
volatile       bit	GP3		@ ((unsigned)&GPIO*8)+3;
volatile       bit	GP4		@ ((unsigned)&GPIO*8)+4;
volatile       bit	GP5		@ ((unsigned)&GPIO*8)+5;

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
#if defined(_12F615) || defined(_12HV615)
volatile       bit	TMR2IF		@ ((unsigned)&PIR1*8)+1;
#endif
volatile       bit	CMIF		@ ((unsigned)&PIR1*8)+3;
#if defined(_12F615) || defined(_12HV615)
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

#if defined(_12F615) || defined(_12HV615)
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
               bit	P1M		@ ((unsigned)&CCP1CON*8)+7;

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
               bit	FVREN		@ ((unsigned)&VRCON*8)+4;
               bit	VRR		@ ((unsigned)&VRCON*8)+5;
               bit	CMVREN		@ ((unsigned)&VRCON*8)+7;

/* Definitions for CMCON0 register */
               bit	CMCH		@ ((unsigned)&CMCON0*8)+0;
               bit	CMR		@ ((unsigned)&CMCON0*8)+2;
               bit	CMPOL		@ ((unsigned)&CMCON0*8)+4;
               bit	CMOE		@ ((unsigned)&CMCON0*8)+5;
volatile       bit	COUT		@ ((unsigned)&CMCON0*8)+6;
               bit	CMON		@ ((unsigned)&CMCON0*8)+7;

/* Definitions for CMCON1 register */
               bit	CMSYNC		@ ((unsigned)&CMCON1*8)+0;
               bit	T1GSS		@ ((unsigned)&CMCON1*8)+1;
               bit	CMHYS		@ ((unsigned)&CMCON1*8)+3;
               bit	T1ACS		@ ((unsigned)&CMCON1*8)+4;

#if defined(_12F615) || defined(_12HV615)
/* Definitions for ADCON0 register */
               bit	ADON		@ ((unsigned)&ADCON0*8)+0;
volatile       bit	GODONE		@ ((unsigned)&ADCON0*8)+1;
               bit	CHS0		@ ((unsigned)&ADCON0*8)+2;
               bit	CHS1		@ ((unsigned)&ADCON0*8)+3;
               bit	CHS2		@ ((unsigned)&ADCON0*8)+4;
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
#if defined(_12F615) || defined(_12HV615)
               bit	TMR2IE		@ ((unsigned)&PIE1*8)+1;
#endif
               bit	CMIE		@ ((unsigned)&PIE1*8)+3;
#if defined(_12F615) || defined(_12HV615)
               bit	CCP1IE		@ ((unsigned)&PIE1*8)+5;
               bit	ADIE		@ ((unsigned)&PIE1*8)+6;
#endif

/* Definitions for PCON register */
volatile       bit	BOR		@ ((unsigned)&PCON*8)+0;
volatile       bit	POR		@ ((unsigned)&PCON*8)+1;

#if defined(_12F615) || defined(_12HV615)
/* Definitions for APFCON register */
               bit	P1ASEL		@ ((unsigned)&APFCON*8)+0;
               bit	P1BSEL		@ ((unsigned)&APFCON*8)+1;
               bit	T1GSEL		@ ((unsigned)&APFCON*8)+4;
#endif

/* Definitions for WPU register */
               bit	WPU0		@ ((unsigned)&WPU*8)+0;
               bit	WPU1		@ ((unsigned)&WPU*8)+1;
               bit	WPU2		@ ((unsigned)&WPU*8)+2;
               bit	WPU4		@ ((unsigned)&WPU*8)+4;
               bit	WPU5		@ ((unsigned)&WPU*8)+5;

/* Definitions for IOC register */
               bit	IOC0		@ ((unsigned)&IOC*8)+0;
               bit	IOC1		@ ((unsigned)&IOC*8)+1;
               bit	IOC2		@ ((unsigned)&IOC*8)+2;
               bit	IOC3		@ ((unsigned)&IOC*8)+3;
               bit	IOC4		@ ((unsigned)&IOC*8)+4;
               bit	IOC5		@ ((unsigned)&IOC*8)+5;

/* Definitions for ANSEL register */
               bit	ANS0		@ ((unsigned)&ANSEL*8)+0;
               bit	ANS1		@ ((unsigned)&ANSEL*8)+1;
#if defined(_12F615) || defined(_12HV615)
               bit	ANS2		@ ((unsigned)&ANSEL*8)+2;
#endif
               bit	ANS3		@ ((unsigned)&ANSEL*8)+3;
#if defined(_12F615) || defined(_12HV615)
               bit	ADCS0		@ ((unsigned)&ANSEL*8)+4;
               bit	ADCS1		@ ((unsigned)&ANSEL*8)+5;
               bit	ADCS2		@ ((unsigned)&ANSEL*8)+6;
#endif

// Configuration Mask Definitions
#define CONFIG_ADDR	0x2007
// Brown-out detect modes 
#define BOREN		0x3FFF
#define BOREN_XSLP	0x3EFF
#define BORDIS		0x3DFF
// Internal Oscillator Frequecy Select 
#define OSC_8MHZ	0x3FFF
#define OSC_4MHZ	0x3F7F
// Protection of program code 
#define UNPROTECT	0x3FFF
#define PROTECT		0x3FBF
// Memory clear enable 
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
