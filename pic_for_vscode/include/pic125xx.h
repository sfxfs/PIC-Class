
#ifndef	_HTC_H_
#warning Header file pic125xx.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip 
 *	PIC 12C508 
 *	PIC 12C509 
 *	PIC 12F508 
 *	PIC 12F509 
 *	PIC 12C508A 
 *      PIC 12C509A 
 *      PIC 12CE518 
 *      PIC 12CE519 
 *      PIC 12CR509A 
 *      rfPIC 12C509AG 
 *      rfPIC 12C509AF 
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

         unsigned char control	OPTION	@ 0x00;
volatile	unsigned char control	TRIS	@ 0x06;

/*	STATUS bits	*/
bit 	GPWUF	@ (unsigned)&STATUS*8+7;
bit	PA0	@ (unsigned)&STATUS*8+5;
bit 	TO	@ (unsigned)&STATUS*8+4;
bit 	PD	@ (unsigned)&STATUS*8+3;
bit 	ZERO	@ (unsigned)&STATUS*8+2;
bit	DC	@ (unsigned)&STATUS*8+1;
volatile bit	CARRY	@ (unsigned)&STATUS*8+0;

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
#if defined(_12C508) || defined(_12C509)
volatile bit     CAL3    @ (unsigned)&OSCCAL*8+7;
volatile bit     CAL2    @ (unsigned)&OSCCAL*8+6;
volatile bit     CAL1    @ (unsigned)&OSCCAL*8+5;
volatile bit     CAL0    @ (unsigned)&OSCCAL*8+4;
#elif	defined(_12C508A) || defined(_12C509A) ||\
	defined(_12CE518) || defined(_12CE519) ||\
	defined(_12C509AG) || defined(_12C509AF) ||\
	defined(_12CR509A)
	volatile bit     CAL5    @ (unsigned)&OSCCAL*8+7;
	volatile bit     CAL4    @ (unsigned)&OSCCAL*8+6;
	volatile bit     CAL3    @ (unsigned)&OSCCAL*8+5;
	volatile bit     CAL2    @ (unsigned)&OSCCAL*8+4;
	volatile bit     CAL1    @ (unsigned)&OSCCAL*8+3;
	volatile bit     CAL0    @ (unsigned)&OSCCAL*8+2;
#elif defined(_12F508) || defined(_12F509)
volatile bit     CAL6    @ (unsigned)&OSCCAL*8+7;
volatile bit     CAL5    @ (unsigned)&OSCCAL*8+6;
volatile bit     CAL4    @ (unsigned)&OSCCAL*8+5;
volatile bit     CAL3    @ (unsigned)&OSCCAL*8+4;
volatile bit     CAL2    @ (unsigned)&OSCCAL*8+3;
volatile bit     CAL1    @ (unsigned)&OSCCAL*8+2;
volatile bit     CAL0    @ (unsigned)&OSCCAL*8+1;
#endif
	
/*	GPIO bits	*/
#if defined(_12CE518) || defined(_12CE519)
	volatile bit     SCL     @ (unsigned)&GPIO*8+7;
	volatile bit     SDA     @ (unsigned)&GPIO*8+6;
#endif
volatile bit	GP5	@ (unsigned)&GPIO*8+5;
volatile bit	GP4	@ (unsigned)&GPIO*8+4;
volatile bit	GP3	@ (unsigned)&GPIO*8+3;
volatile bit	GP2	@ (unsigned)&GPIO*8+2;
volatile bit	GP1	@ (unsigned)&GPIO*8+1;
volatile bit	GP0	@ (unsigned)&GPIO*8+0;


#define CONFIG_ADDR	0xFFF

/* MCLR Pin function */
#define MCLREN		0xFFF	// master clear reset enable
#define MCLRDIS		0xFEF	// master clear reset disable

/*watchdog*/
#define WDTEN		0xFFF	// watchdog timer enable
#define WDTDIS		0xFFB	// watchdog timer disable

/* code protection */
#define PROTECT		0xFF7	// protect the program code
#define UNPROTECT	0xFFF	// do not protect the program code

/*osc configurations*/
#define EXTRC   	0xFFF	// external resistor/capacitor
#define INTRC		0xFFE	// internal
#define XT		0xFFD	// crystal/resonator
#define LP		0xFFC	// low power crystal/resonator
