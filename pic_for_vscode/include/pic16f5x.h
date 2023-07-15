
#ifndef	_HTC_H_
#warning Header file pic16f5x.h included directly. Use #include <htc.h> instead.
#endif


 /* header file for the MICROCHIP PIC microcontrollers
  * PIC16F54
  * PIC16F57
  * PIC16F59
 */

#ifndef	__PIC16F57_H
#define	__PIC16F57_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x00;
volatile       unsigned char	TMR0		@ 0x01;
volatile       unsigned char	PCL		@ 0x02;
volatile       unsigned char	STATUS		@ 0x03;
               unsigned char	FSR		@ 0x04;
volatile       unsigned char	PORTA		@ 0x05;
volatile       unsigned char	PORTB		@ 0x06;
#if defined(_16F57) || defined(_16F59)
volatile       unsigned char	PORTC		@ 0x07;
#if defined(_16F59)
volatile       unsigned char	PORTD		@ 0x08;
volatile       unsigned char	PORTE		@ 0x09;
#endif
#endif
volatile control unsigned char	TRISA		@ 0x05;
volatile control unsigned char	TRISB		@ 0x06;
#if defined(_16F57) || defined(_16F59)
volatile control unsigned char	TRISC		@ 0x07;
#if defined(_16F59)
volatile control unsigned char	TRISD		@ 0x08;
volatile control unsigned char	TRISE		@ 0x09;
#endif
#endif
volatile control unsigned char	OPTION		@ 0x00;


/* Definitions for STATUS register */
volatile       bit	CARRY		@ ((unsigned)&STATUS*8)+0;
volatile       bit	DC		@ ((unsigned)&STATUS*8)+1;
volatile       bit	ZERO		@ ((unsigned)&STATUS*8)+2;
volatile       bit	PD		@ ((unsigned)&STATUS*8)+3;
volatile       bit	TO		@ ((unsigned)&STATUS*8)+4;
volatile       bit	PA0		@ ((unsigned)&STATUS*8)+5;
volatile       bit	PA1		@ ((unsigned)&STATUS*8)+6;
#if defined(_16F59)
volatile       bit	PA2		@ ((unsigned)&STATUS*8)+7;
#endif

/* Definitions for PORTA register */
volatile       bit	RA0		@ ((unsigned)&PORTA*8)+0;
volatile       bit	RA1		@ ((unsigned)&PORTA*8)+1;
volatile       bit	RA2		@ ((unsigned)&PORTA*8)+2;
volatile       bit	RA3		@ ((unsigned)&PORTA*8)+3;

/* Definitions for PORTB register */
volatile       bit	RB0		@ ((unsigned)&PORTB*8)+0;
volatile       bit	RB1		@ ((unsigned)&PORTB*8)+1;
volatile       bit	RB2		@ ((unsigned)&PORTB*8)+2;
volatile       bit	RB3		@ ((unsigned)&PORTB*8)+3;
volatile       bit	RB4		@ ((unsigned)&PORTB*8)+4;
volatile       bit	RB5		@ ((unsigned)&PORTB*8)+5;
volatile       bit	RB6		@ ((unsigned)&PORTB*8)+6;
volatile       bit	RB7		@ ((unsigned)&PORTB*8)+7;

#if defined(_16F57) || defined(_16F59)
/* Definitions for PORTC register */
volatile       bit	RC0		@ ((unsigned)&PORTC*8)+0;
volatile       bit	RC1		@ ((unsigned)&PORTC*8)+1;
volatile       bit	RC2		@ ((unsigned)&PORTC*8)+2;
volatile       bit	RC3		@ ((unsigned)&PORTC*8)+3;
volatile       bit	RC4		@ ((unsigned)&PORTC*8)+4;
volatile       bit	RC5		@ ((unsigned)&PORTC*8)+5;
volatile       bit	RC6		@ ((unsigned)&PORTC*8)+6;
volatile       bit	RC7		@ ((unsigned)&PORTC*8)+7;
#if defined(_16F59)
/* Definitions for PORTD register */
volatile       bit	RD0		@ ((unsigned)&PORTD*8)+0;
volatile       bit	RD1		@ ((unsigned)&PORTD*8)+1;
volatile       bit	RD2		@ ((unsigned)&PORTD*8)+2;
volatile       bit	RD3		@ ((unsigned)&PORTD*8)+3;
volatile       bit	RD4		@ ((unsigned)&PORTD*8)+4;
volatile       bit	RD5		@ ((unsigned)&PORTD*8)+5;
volatile       bit	RD6		@ ((unsigned)&PORTD*8)+6;
volatile       bit	RD7		@ ((unsigned)&PORTD*8)+7;

/* Definitions for PORTE register */
volatile       bit	RE4		@ ((unsigned)&PORTE*8)+4;
volatile       bit	RE5		@ ((unsigned)&PORTE*8)+5;
volatile       bit	RE6		@ ((unsigned)&PORTE*8)+6;
volatile       bit	RE7		@ ((unsigned)&PORTE*8)+7;
#endif
#endif

/*	OPTION bits	*/
#define	T0CS	(1<<5)
#define	T0SE	(1<<4)
#define	PSA	(1<<3)
#define	PS2	(1<<2)
#define	PS1	(1<<1)
#define	PS0	(1<<0)

// Configuration Mask Definitions
#define CONFIG_ADDR	0xFFF
// Oscillator 
#define RC		0xFFF
#define LP		0xFFC
#define XT		0xFFD
#define HS		0xFFE
// Watchdog Timer 
#define WDTEN		0xFFF
#define WDTDIS		0xFFB
// Code Protect 
#define UNPROTECT	0xFFF
#define CP		0xFF7
#define PROTECT		CP	//alternate

#endif
