
#ifndef	_HTC_H_
#warning Header file pic16505.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip 
 *	PIC 16C505
 *	PIC 16F505
 *	Baseline Microcontrollers
 */

volatile unsigned char	INDF	@ 0x00;
volatile unsigned char	RTCC	@ 0x01;
volatile unsigned char	TMR0	@ 0x01;
volatile unsigned char	PCL	@ 0x02;
volatile unsigned char	STATUS	@ 0x03;
         unsigned char	FSR	@ 0x04;
volatile unsigned char	OSCCAL	@ 0x05;
volatile unsigned char	PORTB	@ 0x06;
volatile unsigned char	PORTC	@ 0x07;

         unsigned char control	OPTION	@ 0x00;
volatile unsigned char control	TRISB	@ 0x06;
volatile unsigned char control	TRISC	@ 0x07;

/*	STATUS bits	*/
volatile bit 	RBWUF	@ (unsigned)&STATUS*8+7;
volatile bit	PA0	@ (unsigned)&STATUS*8+5;
volatile bit 	TO	@ (unsigned)&STATUS*8+4;
volatile bit 	PD	@ (unsigned)&STATUS*8+3;
volatile bit 	ZERO	@ (unsigned)&STATUS*8+2;
volatile bit	DC	@ (unsigned)&STATUS*8+1;
volatile bit	CARRY	@ (unsigned)&STATUS*8+0;

/*	OPTION bits	*/
#define		RBWU	(1<<7)
#define		RBPU	(1<<6)
#define		T0CS	(1<<5)
#define		T0SE	(1<<4)
#define		PSA	(1<<3)
#define		PS2	(1<<2)
#define		PS1	(1<<1)
#define		PS0	(1<<0)

/*	OSCCAL bits	*/
#ifdef _16C505
volatile bit 	CAL5	@ (unsigned)&OSCCAL*8+7;
volatile bit	CAL4	@ (unsigned)&OSCCAL*8+6;
volatile bit	CAL3	@ (unsigned)&OSCCAL*8+5;
volatile bit	CAL2	@ (unsigned)&OSCCAL*8+4;
volatile bit	CAL1	@ (unsigned)&OSCCAL*8+3;
volatile bit	CAL0	@ (unsigned)&OSCCAL*8+2;
#else
volatile bit 	CAL6	@ (unsigned)&OSCCAL*8+7;
volatile bit	CAL5	@ (unsigned)&OSCCAL*8+6;
volatile bit	CAL4	@ (unsigned)&OSCCAL*8+5;
volatile bit	CAL3	@ (unsigned)&OSCCAL*8+4;
volatile bit	CAL2	@ (unsigned)&OSCCAL*8+3;
volatile bit	CAL1	@ (unsigned)&OSCCAL*8+2;
volatile bit	CAL0	@ (unsigned)&OSCCAL*8+1;
#endif

/*	PORTB bits	*/
volatile bit	RB5	@ (unsigned)&PORTB*8+5;
volatile bit	RB4	@ (unsigned)&PORTB*8+4;
volatile bit	RB3	@ (unsigned)&PORTB*8+3;
volatile bit	RB2	@ (unsigned)&PORTB*8+2;
volatile bit	RB1	@ (unsigned)&PORTB*8+1;
volatile bit	RB0	@ (unsigned)&PORTB*8+0;

/*	PORTC bits	*/
volatile bit	RC5	@ (unsigned)&PORTC*8+5;
volatile bit	RC4	@ (unsigned)&PORTC*8+4;
volatile bit	RC3	@ (unsigned)&PORTC*8+3;
volatile bit	RC2	@ (unsigned)&PORTC*8+2;
volatile bit	RC1	@ (unsigned)&PORTC*8+1;
volatile bit	RC0	@ (unsigned)&PORTC*8+0;


#define CONFIG_ADDR	0xFFF

/*code protection*/
#define UNPROTECT	0xFFF	// do not protect code
#define PROTECT		0xFEF	// protect code

/*osc configurations*/
#define EXTRC		0xFFF	// external resistor/capacitor oscillator, CLKOUT function on RB4/OSC2/CLKOUT pin
#define EXTRCRB4	0xFFE	// external resistor capacitor oscillator, RB4 function on RB4/OSC2/CLKOUT pin
#define INTRC		0xFFD	// internal 4Mhz oscillator, CLKOUT function on RB4/OSC2/CLKOUT pin
#define INTRCRB4	0xFFC	// internal 4MHz oscillator, RB4 function on RB4/OSC2/CLKOUT pin
#define HS		0xFFA	// high speed crystal/resonator
#define XT		0xFF9	// crystal/resonator
#define LP		0xFF8	// low power crystal/resonator

/*watchdog*/
#define WDTEN		0xFFF	// enable watchdog timer
#define WDTDIS		0xFF7	// disable watchdog timer

/*MCLRE*/
#define MCLREN		0xFFF	// enable master clear
#define MCLRDIS		0xFDF	// disbale master clear

