
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic10f20x.h.

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
CMCON		equ	007h
CMCON0		equ	007h
OPTION_REG		equ	000h
TRIS_REGGPIO	equ	006h
TRIS_REG		equ	006h

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#if defined(_10F204) || defined(_10F206)
#endif
#define GPWUF	STATUS,7
#if defined(_10F204) || defined(_10F206)
#define CWUF	STATUS,6
#endif
#define TO	STATUS,4
#define PD	STATUS,3
#define ZERO	STATUS,2
#define DC	STATUS,1
#define CARRY	STATUS,0
#if defined(_10F204) || defined(_10F206)
#define CWU	CMCON,0
#define CPREF	CMCON,1
#define CNREF	CMCON,2
#define CMPON	CMCON,3
#define CMPT0CS	CMCON,4
#define POL	CMCON,5
#define COUTEN	CMCON,6
#define CMPOUT	CMCON,7
#endif
#define CAL6	OSCCAL,7
#define CAL5	OSCCAL,6
#define CAL4	OSCCAL,5
#define CAL3	OSCCAL,4
#define CAL2	OSCCAL,3
#define CAL1	OSCCAL,2
#define CAL0	OSCCAL,1
#define FOSC4	OSCCAL,0
#define GP3	GPIO,3
#define GP2	GPIO,2
#define GP1	GPIO,1
#define GP0	GPIO,0
#if defined(_10F204) || defined(_10F206)
#endif
