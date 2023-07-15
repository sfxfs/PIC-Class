#ifndef	_HTC_H_
 #warning Header file pic16f526.h included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP PIC microcontroller
	16F526
 */

#ifndef	__PIC16F526_H
#define	__PIC16F526_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x000;
volatile control unsigned char	TRISB		@ 0x006;
volatile control unsigned char	TRISC		@ 0x007;
         control unsigned char	OPTION		@ 0x000;
volatile       unsigned char	TMR0		@ 0x001;
volatile       unsigned char	PCL		@ 0x002;
volatile       unsigned char	STATUS		@ 0x003;
               unsigned char	FSR		@ 0x004;
               unsigned char	OSCCAL		@ 0x005;
volatile       unsigned char	PORTB		@ 0x006;
volatile       unsigned char	PORTC		@ 0x007;
volatile       unsigned char	CM1CON0		@ 0x008;
volatile       unsigned char	ADCON0		@ 0x009;
volatile       unsigned char	ADRES		@ 0x00A;
volatile       unsigned char	CM2CON0		@ 0x00B;
               unsigned char	VRCON		@ 0x00C;
volatile       unsigned char	EECON		@ 0x021;
volatile       unsigned char	EEDATA		@ 0x025;
/* Alternate definition */
volatile       unsigned char	EEDATL		@ 0x025;
volatile       unsigned char	EEADR		@ 0x026;
/* Alternate definition */
volatile       unsigned char	EEADRL		@ 0x026;

/* Definitions for TRIS register */
#define TRIS0	(1<<0)
#define TRIS1	(1<<1)
#define TRIS2	(1<<2)
#define TRIS3	(1<<3)
#define TRIS4	(1<<4)
#define TRIS5	(1<<5)

/* Definitions for OPTION register */
#define PS0	(1<<0)
#define PS1	(1<<1)
#define PS2	(1<<2)
#define PSA	(1<<3)
#define T0SE	(1<<4)
#define T0CS	(1<<5)
#define RBPU	(1<<6)
#define RBWU	(1<<7)


/* Definitions for STATUS register */
volatile       bit	CARRY		@ ((unsigned)&STATUS*8)+0;
volatile       bit	DC		@ ((unsigned)&STATUS*8)+1;
volatile       bit	ZERO		@ ((unsigned)&STATUS*8)+2;
volatile       bit	PD		@ ((unsigned)&STATUS*8)+3;
volatile       bit	TO		@ ((unsigned)&STATUS*8)+4;
               bit	PA0		@ ((unsigned)&STATUS*8)+5;
volatile       bit	CWUF		@ ((unsigned)&STATUS*8)+6;
volatile       bit	RBWUF		@ ((unsigned)&STATUS*8)+7;

/* Definitions for OSCCAL register */
               bit	CAL0		@ ((unsigned)&OSCCAL*8)+0;
               bit	CAL1		@ ((unsigned)&OSCCAL*8)+1;
               bit	CAL2		@ ((unsigned)&OSCCAL*8)+2;
               bit	CAL3		@ ((unsigned)&OSCCAL*8)+3;
               bit	CAL4		@ ((unsigned)&OSCCAL*8)+4;
               bit	CAL5		@ ((unsigned)&OSCCAL*8)+5;
               bit	CAL6		@ ((unsigned)&OSCCAL*8)+6;

/* Definitions for PORTB register */
volatile       bit	RB0		@ ((unsigned)&PORTB*8)+0;
volatile       bit	RB1		@ ((unsigned)&PORTB*8)+1;
volatile       bit	RB2		@ ((unsigned)&PORTB*8)+2;
volatile       bit	RB3		@ ((unsigned)&PORTB*8)+3;
volatile       bit	RB4		@ ((unsigned)&PORTB*8)+4;
volatile       bit	RB5		@ ((unsigned)&PORTB*8)+5;

/* Definitions for PORTC register */
volatile       bit	RC0		@ ((unsigned)&PORTC*8)+0;
volatile       bit	RC1		@ ((unsigned)&PORTC*8)+1;
volatile       bit	RC2		@ ((unsigned)&PORTC*8)+2;
volatile       bit	RC3		@ ((unsigned)&PORTC*8)+3;
volatile       bit	RC4		@ ((unsigned)&PORTC*8)+4;
volatile       bit	RC5		@ ((unsigned)&PORTC*8)+5;

/* Definitions for CM1CON0 register */
               bit	C1WU		@ ((unsigned)&CM1CON0*8)+0;
               bit	C1PREF		@ ((unsigned)&CM1CON0*8)+1;
               bit	C1NREF		@ ((unsigned)&CM1CON0*8)+2;
               bit	C1ON		@ ((unsigned)&CM1CON0*8)+3;
               bit	C1T0CS		@ ((unsigned)&CM1CON0*8)+4;
               bit	C1POL		@ ((unsigned)&CM1CON0*8)+5;
               bit	C1OUTEN		@ ((unsigned)&CM1CON0*8)+6;
volatile       bit	C1OUT		@ ((unsigned)&CM1CON0*8)+7;

/* Definitions for ADCON0 register */
               bit	ADON		@ ((unsigned)&ADCON0*8)+0;
volatile       bit	GODONE		@ ((unsigned)&ADCON0*8)+1;
               bit	CHS0		@ ((unsigned)&ADCON0*8)+2;
               bit	CHS1		@ ((unsigned)&ADCON0*8)+3;
               bit	ADCS0		@ ((unsigned)&ADCON0*8)+4;
               bit	ADCS1		@ ((unsigned)&ADCON0*8)+5;
               bit	ANS0		@ ((unsigned)&ADCON0*8)+6;
               bit	ANS1		@ ((unsigned)&ADCON0*8)+7;

/* Definitions for CM2CON0 register */
               bit	C2WU		@ ((unsigned)&CM2CON0*8)+0;
               bit	C2PREF1		@ ((unsigned)&CM2CON0*8)+1;
               bit	C2NREF		@ ((unsigned)&CM2CON0*8)+2;
               bit	C2ON		@ ((unsigned)&CM2CON0*8)+3;
               bit	C2PREF2		@ ((unsigned)&CM2CON0*8)+4;
               bit	C2POL		@ ((unsigned)&CM2CON0*8)+5;
               bit	C2OUTEN		@ ((unsigned)&CM2CON0*8)+6;
volatile       bit	C2OUT		@ ((unsigned)&CM2CON0*8)+7;

/* Definitions for VRCON register */
               bit	VR0		@ ((unsigned)&VRCON*8)+0;
               bit	VR1		@ ((unsigned)&VRCON*8)+1;
               bit	VR2		@ ((unsigned)&VRCON*8)+2;
               bit	VR3		@ ((unsigned)&VRCON*8)+3;
               bit	VRR		@ ((unsigned)&VRCON*8)+4;
               bit	VROE		@ ((unsigned)&VRCON*8)+5;
               bit	VREN		@ ((unsigned)&VRCON*8)+6;

/* Definitions for EECON register */
volatile       bit	RD		@ ((unsigned)&EECON*8)+0;
volatile       bit	WR		@ ((unsigned)&EECON*8)+1;
volatile bit	WREN		@ ((unsigned)&EECON*8)+2;
volatile       bit	WRERR		@ ((unsigned)&EECON*8)+3;
volatile       bit	FREE		@ ((unsigned)&EECON*8)+4;

// Configuration Mask Definitions
#define CONFIG_ADDR	0x7FF
// Data flash protection 
#define CPD		0xF7F
// Internal Oscillator Frequecy Select 
#define OSC_8MHZ	0xFFF
#define OSC_4MHZ	0xFBF
// Memory clear enable 
#define MCLREN		0xFFF
#define MCLRDIS		0xFDF
// Protection of program code 
#define UNPROTECT	0xFFF
#define PROTECT		0xFEF
// Watchdog timer enable 
#define WDTEN		0xFFF
#define WDTDIS		0xFF7
// Oscillator configurations 
#define EXTCLKO		0xFFF
#define EXTIO		0xFFE
#define INTCLKO		0xFFD
#define INTIO		0xFFC
#define EC		0xFFB
#define HS		0xFFA
#define XT		0xFF9
#define LP		0xFF8

#endif
