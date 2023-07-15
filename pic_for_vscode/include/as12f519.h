
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic12f519.h.

; NOTE: PICC assembler option -P is required to preprocess assembler sources. 

; Special Function Register definitions
INDF		equ	0000h
TRIS_REG		equ	0006h
OPTION_REG		equ	0000h
TMR0		equ	0001h
PCL		equ	0002h
STATUS		equ	0003h
FSR		equ	0004h
OSCCAL		equ	0005h
PORTB		equ	0006h
EECON		equ	0021h
EEDATA		equ	0025h
EEDATL		equ	0025h
EEADR		equ	0026h
EEADRL		equ	0026h

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#ifndef	__PIC12F519_H
#define CARRY	STATUS,0
#define DC	STATUS,1
#define ZERO	STATUS,2
#define PD	STATUS,3
#define TO	STATUS,4
#define PA0	STATUS,5
#define RBWUF	STATUS,6
#define CAL0	OSCCAL,0
#define CAL1	OSCCAL,1
#define CAL2	OSCCAL,2
#define CAL3	OSCCAL,3
#define CAL4	OSCCAL,4
#define CAL5	OSCCAL,5
#define CAL6	OSCCAL,6
#define RB0	PORTB,0
#define RB1	PORTB,1
#define RB2	PORTB,2
#define RB3	PORTB,3
#define RB4	PORTB,4
#define RB5	PORTB,5
#define RD	EECON,0
#define WR	EECON,1
#define WREN	EECON,2
#define WRERR	EECON,3
#define FREE	EECON,4
#endif
