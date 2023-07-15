
#ifndef	_HTC_H_
#warning Header file pic10f20x.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip 
 *	PIC 10F200 
 *	PIC 10F202 
 *	PIC 10F204
 *	PIC 10F206
 *	Baseline Microcontrollers
 */

volatile unsigned char	INDF	@ 0x00;
volatile unsigned char	RTCC	@ 0x01;
volatile unsigned char	TMR0	@ 0x01;
volatile unsigned char	PCL	@ 0x02;
volatile unsigned char	STATUS	@ 0x03;
         unsigned char	FSR	@ 0x04;
volatile unsigned char	OSCCAL	@ 0x05;
volatile unsigned char	GPIO	@ 0x06;
#if defined(_10F204) || defined(_10F206)
volatile unsigned char	CMCON	@ 0x07;
// alternate definition
volatile unsigned char	CMCON0	@ 0x07;
#endif

         unsigned char control	OPTION		@ 0x00;
volatile	unsigned char control	TRISGPIO	@ 0x06;
// alternate definition
volatile	unsigned char control	TRIS		@ 0x06;

/*	STATUS bits	*/
volatile bit 	GPWUF	@ (unsigned)&STATUS*8+7;
#if defined(_10F204) || defined(_10F206)
volatile bit 	CWUF	@ (unsigned)&STATUS*8+6;
#endif
volatile bit 	TO	@ (unsigned)&STATUS*8+4;
volatile bit 	PD	@ (unsigned)&STATUS*8+3;
volatile bit 	ZERO	@ (unsigned)&STATUS*8+2;
volatile bit	DC	@ (unsigned)&STATUS*8+1;
volatile bit	CARRY	@ (unsigned)&STATUS*8+0;

#if defined(_10F204) || defined(_10F206)
         bit	CWU	@ (unsigned)&CMCON*8+0;
         bit	CPREF	@ (unsigned)&CMCON*8+1;
         bit	CNREF	@ (unsigned)&CMCON*8+2;
         bit	CMPON	@ (unsigned)&CMCON*8+3;
         bit	CMPT0CS	@ (unsigned)&CMCON*8+4;
         bit	POL	@ (unsigned)&CMCON*8+5;
         bit	COUTEN	@ (unsigned)&CMCON*8+6;
volatile bit	CMPOUT	@ (unsigned)&CMCON*8+7;
#endif

/*	OPTION bits	*/
#define		GPWU	(1<<7)
#define		GPPU	(1<<6)
#define		T0CS	(1<<5)
#define		T0SE	(1<<4)
#define		PSA	(1<<3)
#define		PS2	(1<<2)
#define		PS1	(1<<1)
#define		PS0	(1<<0)

/*      OSCCAL bits     */
volatile bit     CAL6    @ (unsigned)&OSCCAL*8+7;
volatile bit     CAL5    @ (unsigned)&OSCCAL*8+6;
volatile bit     CAL4    @ (unsigned)&OSCCAL*8+5;
volatile bit     CAL3    @ (unsigned)&OSCCAL*8+4;
volatile bit     CAL2    @ (unsigned)&OSCCAL*8+3;
volatile bit     CAL1    @ (unsigned)&OSCCAL*8+2;
volatile bit     CAL0    @ (unsigned)&OSCCAL*8+1;
volatile bit     FOSC4   @ (unsigned)&OSCCAL*8+0;
	
/*	GPIO bits	*/
volatile bit	GP3	@ (unsigned)&GPIO*8+3;
volatile bit	GP2	@ (unsigned)&GPIO*8+2;
volatile bit	GP1	@ (unsigned)&GPIO*8+1;
volatile bit	GP0	@ (unsigned)&GPIO*8+0;

#if defined(_10F204) || defined(_10F206)
#define CONFIG_ADDR	0x3FF
#else
#define CONFIG_ADDR	0x1FF
#endif

/* MCLR Pin function */
#define MCLREN		0xFFF	// master clear reset enable
#define MCLRDIS		0xFEF	// master clear reset disable

/* watchdog*/
#define WDTEN		0xFFF	// watchdog timer enable
#define WDTDIS		0xFFB	// watchdog timer disable

/* code protection */
#define PROTECT		0xFF7	// protect the program code
#define UNPROTECT	0xFFF	// do not protect the program code

