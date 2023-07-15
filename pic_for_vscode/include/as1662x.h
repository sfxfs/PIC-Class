
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic1662x.h.

; NOTE: PICC assembler option -P is required to preprocess assembler sources. 

; Special Function Register definitions
INDF		equ	000h
TMR0		equ	001h
PCL		equ	002h
STATUS		equ	003h
FSR		equ	004h
PORTA		equ	005h
PORTB		equ	006h
PCLATH		equ	00Ah
INTCON		equ	00Bh
PIR1		equ	00Ch
CMCON		equ	01Fh
OPTION_REG		equ	081h
TRIS_REGA		equ	085h
TRIS_REGB		equ	086h
PIE1		equ	08Ch
PCON		equ	08Eh
VRCON		equ	09Fh
EEINTF		equ	090h

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#if defined(_16CE623) || defined(_16CE624) || defined(_16CE625)
#endif
#define RP0	STATUS,5
#define TO	STATUS,4
#define PD	STATUS,3
#define ZERO	STATUS,2
#define DC	STATUS,1
#define CARRY	STATUS,0
#define RA4	PORTA,4
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
#define GIE	INTCON,7
#define PEIE	INTCON,6
#define T0IE	INTCON,5
#define INTE	INTCON,4
#define RBIE	INTCON,3
#define T0IF	INTCON,2
#define INTF	INTCON,1
#define RBIF	INTCON,0
#define CMIF	PIR1,6
#define C2OUT	CMCON,7
#define C1OUT	CMCON,6
#define CIS	CMCON,3
#define CM2	CMCON,2
#define CM1	CMCON,1
#define CM0	CMCON,0
#define RBPU	OPTION_REG,7
#define INTEDG	OPTION_REG,6
#define T0CS	OPTION_REG,5
#define T0SE	OPTION_REG,4
#define PSA	OPTION_REG,3
#define PS2	OPTION_REG,2
#define PS1	OPTION_REG,1
#define PS0	OPTION_REG,0
#define TRIS_REGA4	TRIS_REGA,4
#define TRIS_REGA3	TRIS_REGA,3
#define TRIS_REGA2	TRIS_REGA,2
#define TRIS_REGA1	TRIS_REGA,1
#define TRIS_REGA0	TRIS_REGA,0
#define TRIS_REGB7	TRIS_REGB,7
#define TRIS_REGB6	TRIS_REGB,6
#define TRIS_REGB5	TRIS_REGB,5
#define TRIS_REGB4	TRIS_REGB,4
#define TRIS_REGB3	TRIS_REGB,3
#define TRIS_REGB2	TRIS_REGB,2
#define TRIS_REGB1	TRIS_REGB,1
#define TRIS_REGB0	TRIS_REGB,0
#define CMIE	PIE1,6
#define POR	PCON,1
#define BOR	PCON,0
#if defined(_16CE623) || defined(_16CE624) || defined(_16CE625)
#define EESCL	EEINTF,2
#define EESDA	EEINTF,1
#define EEVDD	EEINTF,0
#endif
#define VREN	VRCON,7
#define VROE	VRCON,6
#define VRR	VRCON,5
#define VR3	VRCON,3
#define VR2	VRCON,2
#define VR1	VRCON,1
#define VR0	VRCON,0
