
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic16505.h.

; NOTE: PICC assembler option -P is required to preprocess assembler sources. 

; Special Function Register definitions
INDF		equ	000h
RTCC		equ	001h
TMR0		equ	001h
PCL		equ	002h
STATUS		equ	003h
FSR		equ	004h
OSCCAL		equ	005h
PORTB		equ	006h
PORTC		equ	007h
OPTION_REG		equ	000h
TRIS_REGB		equ	006h
TRIS_REGC		equ	007h

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#define RBWUF	STATUS,7
#define PA0	STATUS,5
#define TO	STATUS,4
#define PD	STATUS,3
#define ZERO	STATUS,2
#define DC	STATUS,1
#define CARRY	STATUS,0
#ifdef _16C505
#define CAL5	OSCCAL,7
#define CAL4	OSCCAL,6
#define CAL3	OSCCAL,5
#define CAL2	OSCCAL,4
#define CAL1	OSCCAL,3
#define CAL0	OSCCAL,2
#define CAL6	OSCCAL,7
#define CAL5	OSCCAL,6
#define CAL4	OSCCAL,5
#define CAL3	OSCCAL,4
#define CAL2	OSCCAL,3
#define CAL1	OSCCAL,2
#define CAL0	OSCCAL,1
#endif
#define RB5	PORTB,5
#define RB4	PORTB,4
#define RB3	PORTB,3
#define RB2	PORTB,2
#define RB1	PORTB,1
#define RB0	PORTB,0
#define RC5	PORTC,5
#define RC4	PORTC,4
#define RC3	PORTC,3
#define RC2	PORTC,2
#define RC1	PORTC,1
#define RC0	PORTC,0
