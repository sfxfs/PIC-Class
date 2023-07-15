
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic125xx.h.

; NOTE: PICC assembler option -P is required to preprocess assembler sources. 

; Special Function Register definitions
INDF		equ	000h
RTCC		equ	001h
TMR0		equ	001h
PCL		equ	002h
STATUS		equ	003h
FSR		equ	004h
OSCCAL		equ	005h
GPIO		equ	006h
OPTION_REG		equ	000h
TRIS_REG		equ	006h

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#define GPWUF	STATUS,7
#define PA0	STATUS,5
#define TO	STATUS,4
#define PD	STATUS,3
#define ZERO	STATUS,2
#define DC	STATUS,1
#define CARRY	STATUS,0
#if defined(_12C508) || defined(_12C509)
#define CAL3	OSCCAL,7
#define CAL2	OSCCAL,6
#define CAL1	OSCCAL,5
#define CAL0	OSCCAL,4
#elif	defined(_12C508A) || defined(_12C509A) ||\
#define CAL5	OSCCAL,7
#define CAL4	OSCCAL,6
#define CAL3	OSCCAL,5
#define CAL2	OSCCAL,4
#define CAL1	OSCCAL,3
#define CAL0	OSCCAL,2
#elif defined(_12F508) || defined(_12F509)
#define CAL6	OSCCAL,7
#define CAL5	OSCCAL,6
#define CAL4	OSCCAL,5
#define CAL3	OSCCAL,4
#define CAL2	OSCCAL,3
#define CAL1	OSCCAL,2
#define CAL0	OSCCAL,1
#endif
#if defined(_12CE518) || defined(_12CE519)
#define SCL	GPIO,7
#define SDA	GPIO,6
#endif
#define GP5	GPIO,5
#define GP4	GPIO,4
#define GP3	GPIO,3
#define GP2	GPIO,2
#define GP1	GPIO,1
#define GP0	GPIO,0
