
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic165x.h.

; NOTE: PICC assembler option -P is required to preprocess assembler sources. 

; Special Function Register definitions
INDF		equ	000h
TMR0		equ	001h
RTCC		equ	001h
PCL		equ	002h
STATUS		equ	003h
FSR		equ	004h
PORTA		equ	005h
PORTB		equ	006h
OPTION_REG		equ	000h
TRIS_REGA		equ	005h
TRIS_REGB		equ	006h
OPTION_REG2		equ	007h
PORTC		equ	007h
TRIS_REGC		equ	007h

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#ifdef _16HV540
#endif
#define PA1	STATUS,6
#define PA0	STATUS,5
#define TO	STATUS,4
#define PD	STATUS,3
#define ZERO	STATUS,2
#define DC	STATUS,1
#define CARRY	STATUS,0
#ifdef _16HV540
#endif
#define RA3	PORTA,3
#define RA2	PORTA,2
#define RA1	PORTA,1
#define RA0	PORTA,0
#define RB7	PORTB,7
#define RB6	PORTB,6
#define RB5	PORTB,5
#define RB4	PORTB,4
#define RB3	PORTB,3
#define RB2	PORTB,2
#define RB1	PORTB,1
#define RB0	PORTB,0
#if defined(_16C55) 	|| defined(_16C55A)	|| defined(_16C57) 	||\
#define RC7	PORTC,7
#define RC6	PORTC,6
#define RC5	PORTC,5
#define RC4	PORTC,4
#define RC3	PORTC,3
#define RC2	PORTC,2
#define RC1	PORTC,1
#define RC0	PORTC,0
#endif
#if defined(_16C52) || defined(_16C54) || defined(_16C54A) 	||\
#endif
