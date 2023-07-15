
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic16f5x.h.

; NOTE: PICC assembler option -P is required to preprocess assembler sources. 

; Special Function Register definitions
INDF		equ	000h
TMR0		equ	001h
PCL		equ	002h
STATUS		equ	003h
FSR		equ	004h
PORTA		equ	005h
PORTB		equ	006h
PORTC		equ	007h
PORTD		equ	008h
PORTE		equ	009h
TRIS_REGA		equ	005h
TRIS_REGB		equ	006h
TRIS_REGC		equ	007h
TRIS_REGD		equ	008h
TRIS_REGE		equ	009h
OPTION_REG		equ	000h

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#ifndef	__PIC16F57_H
#if defined(_16F57) || defined(_16F59)
#if defined(_16F59)
#endif
#endif
#if defined(_16F57) || defined(_16F59)
#if defined(_16F59)
#endif
#endif
#define CARRY	STATUS,0
#define DC	STATUS,1
#define ZERO	STATUS,2
#define PD	STATUS,3
#define TO	STATUS,4
#define PA0	STATUS,5
#define PA1	STATUS,6
#if defined(_16F59)
#define PA2	STATUS,7
#endif
#define RA0	PORTA,0
#define RA1	PORTA,1
#define RA2	PORTA,2
#define RA3	PORTA,3
#define RB0	PORTB,0
#define RB1	PORTB,1
#define RB2	PORTB,2
#define RB3	PORTB,3
#define RB4	PORTB,4
#define RB5	PORTB,5
#define RB6	PORTB,6
#define RB7	PORTB,7
#if defined(_16F57) || defined(_16F59)
#define RC0	PORTC,0
#define RC1	PORTC,1
#define RC2	PORTC,2
#define RC3	PORTC,3
#define RC4	PORTC,4
#define RC5	PORTC,5
#define RC6	PORTC,6
#define RC7	PORTC,7
#if defined(_16F59)
#define RD0	PORTD,0
#define RD1	PORTD,1
#define RD2	PORTD,2
#define RD3	PORTD,3
#define RD4	PORTD,4
#define RD5	PORTD,5
#define RD6	PORTD,6
#define RD7	PORTD,7
#define RE4	PORTE,4
#define RE5	PORTE,5
#define RE6	PORTE,6
#define RE7	PORTE,7
#endif
#endif
#endif
