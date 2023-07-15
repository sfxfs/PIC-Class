
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic10f22x.h.

; NOTE: PICC assembler option -P is required to preprocess assembler sources. 

; Special Function Register definitions
INDF		equ	000h
TMR0		equ	0001h
PCL		equ	0002h
STATUS		equ	0003h
FSR		equ	0004h
OSCCAL		equ	0005h
GPIO		equ	0006h
ADCON0		equ	0007h
ADRES		equ	0008h
OPTION_REG		equ	000h
TRIS_REGGPIO	equ	006h
TRIS_REG		equ	006h

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#ifndef	__PIC10F22X_H
#define CARRY	STATUS,0
#define DC	STATUS,1
#define ZERO	STATUS,2
#define PD	STATUS,3
#define TO	STATUS,4
#define GPWUF	STATUS,7
#define FOSC4	OSCCAL,0
#define CAL0	OSCCAL,1
#define CAL1	OSCCAL,2
#define CAL2	OSCCAL,3
#define CAL3	OSCCAL,4
#define CAL4	OSCCAL,5
#define CAL5	OSCCAL,6
#define CAL6	OSCCAL,7
#define GP0	GPIO,0
#define GP1	GPIO,1
#define GP2	GPIO,2
#define GP3	GPIO,3
#define ADON	ADCON0,0
#define GODONE	ADCON0,1
#define CHS0	ADCON0,2
#define CHS1	ADCON0,3
#define ANS0	ADCON0,6
#define ANS1	ADCON0,7
#endif
