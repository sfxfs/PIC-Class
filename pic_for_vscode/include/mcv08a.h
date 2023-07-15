
#ifndef	_HTC_H_
#warning Header file mcv08a.h included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP microcontroller
  * MCV08A
 */

#ifndef	__MCV08A_H
#define	__MCV08A_H

// Special function register definitions

volatile       unsigned char	TMR0		@ 0x001;
volatile       unsigned char	PCL		@ 0x002;
volatile       unsigned char	STATUS		@ 0x003;
               unsigned char	FSR		@ 0x004;
               unsigned char	OSCCAL		@ 0x005;
volatile       unsigned char	GPIO		@ 0x006;
volatile       unsigned char	CM1CON0		@ 0x007;
volatile       unsigned char	ADCON0		@ 0x008;
volatile       unsigned char	ADRES		@ 0x009;

         control unsigned char	OPTION		@ 0x000;
volatile control unsigned char	TRIS		@ 0x006;

/*	OPTION bits	*/
#define		GPWU	(1<<7)
#define		GPPU	(1<<6)
#define		T0CS	(1<<5)
#define		T0SE	(1<<4)
#define		PSA	(1<<3)
#define		PS2	(1<<2)
#define		PS1	(1<<1)
#define		PS0	(1<<0)


/* Definitions for STATUS register */
volatile       bit	CARRY		@ ((unsigned)&STATUS*8)+0;
volatile       bit	DC		@ ((unsigned)&STATUS*8)+1;
volatile       bit	ZERO		@ ((unsigned)&STATUS*8)+2;
volatile       bit	PD		@ ((unsigned)&STATUS*8)+3;
volatile       bit	TO		@ ((unsigned)&STATUS*8)+4;
               bit	PA0		@ ((unsigned)&STATUS*8)+5;
volatile       bit	CWUF		@ ((unsigned)&STATUS*8)+6;
volatile       bit	GPWUF		@ ((unsigned)&STATUS*8)+7;

/* Definitions for OSCCAL register */
               bit	CAL0		@ ((unsigned)&OSCCAL*8)+1;
               bit	CAL1		@ ((unsigned)&OSCCAL*8)+2;
               bit	CAL2		@ ((unsigned)&OSCCAL*8)+3;
               bit	CAL3		@ ((unsigned)&OSCCAL*8)+4;
               bit	CAL4		@ ((unsigned)&OSCCAL*8)+5;
               bit	CAL5		@ ((unsigned)&OSCCAL*8)+6;
               bit	CAL6		@ ((unsigned)&OSCCAL*8)+7;

/* Definitions for GPIO register */
volatile       bit	GP0		@ ((unsigned)&GPIO*8)+0;
volatile       bit	GP1		@ ((unsigned)&GPIO*8)+1;
volatile       bit	GP2		@ ((unsigned)&GPIO*8)+2;
volatile       bit	GP3		@ ((unsigned)&GPIO*8)+3;
volatile       bit	GP4		@ ((unsigned)&GPIO*8)+4;
volatile       bit	GP5		@ ((unsigned)&GPIO*8)+5;

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

// Configuration Mask Definitions
#define CONFIG_ADDR	0xFFF
// Oscillator configurations 
#define EXTRC		0xFFF
#define INTOSC		0xFFE
#define XT		0xFFD
#define RC		0xFFC
// Watchdog Timer 
#define WDTEN		0xFFF
#define WDTDIS		0xFFB
// Code protection 
#define UNPROTECT	0xFFF
#define CP		0xFF7
// Master clear enable 
#define MCLREN		0xFFF
#define MCLRDIS		0xFEF
// Internal oscillator speed 
#define INTOSC8		0xFFF
#define INTOSC4		0xFDF

#endif
