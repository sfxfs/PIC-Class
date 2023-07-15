
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic166xx.h.

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
PORTC		equ	007h
PCLATH		equ	00Ah
INTCON		equ	00Bh
PIR1		equ	00Ch
CMCON		equ	01Fh
OPTION_REG		equ	081h
TRIS_REGA		equ	085h
TRIS_REGB		equ	086h
TRIS_REGC		equ	087h
PIE1		equ	08Ch
PCON		equ	08Eh
VRCON		equ	09Fh
PORTD		equ	008h
PORTE		equ	009h
TRIS_REGD		equ	088h
TRIS_REGE		equ	089h

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#if defined(_16C661) || defined(_16C662)
#define RD7	PORTD,7
#define RD6	PORTD,6
#define RD5	PORTD,5
#define RD4	PORTD,4
#define RD3	PORTD,3
#define RD2	PORTD,2
#define RD1	PORTD,1
#define RD0	PORTD,0
#define RE2	PORTE,2
#define RE1	PORTE,1
#define RE0	PORTE,0
#define TRIS_REGD7	TRIS_REGD,7
#define TRIS_REGD6	TRIS_REGD,6
#define TRIS_REGD5	TRIS_REGD,5
#define TRIS_REGD4	TRIS_REGD,4
#define TRIS_REGD3	TRIS_REGD,3
#define TRIS_REGD2	TRIS_REGD,2
#define TRIS_REGD1	TRIS_REGD,1
#define TRIS_REGD0	TRIS_REGD,0
#define IBF	TRIS_REGE,7
#define OBIF	TRIS_REGE,6
#define IBOV	TRIS_REGE,5
#define PSPMODE	TRIS_REGE,4
#define TRIS_REGE2	TRIS_REGE,2
#define TRIS_REGE1	TRIS_REGE,1
#define TRIS_REGE0	TRIS_REGE,0
#endif  
#define RP0	STATUS,5
#define TO	STATUS,4
#define PD	STATUS,3
#define ZERO	STATUS,2
#define DC	STATUS,1
#define CARRY	STATUS,0
#define RA5	PORTA,5
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
#define RC7	PORTC,7
#define RC6	PORTC,6
#define RC5	PORTC,5
#define RC4	PORTC,4
#define RC3	PORTC,3
#define RC2	PORTC,2
#define RC1	PORTC,1
#define RC0	PORTC,0
#define GIE	INTCON,7
#define PEIE	INTCON,6
#define T0IE	INTCON,5
#define INTE	INTCON,4
#define RBIE	INTCON,3
#define T0IF	INTCON,2
#define INTF	INTCON,1
#define RBIF	INTCON,0
#if defined(_16C661) || defined(_16C662)
#define PSPIF	PIR1,7
#endif  
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
#define TRIS_REGA5	TRIS_REGA,5
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
#define TRIS_REGC7	TRIS_REGC,7
#define TRIS_REGC6	TRIS_REGC,6
#define TRIS_REGC5	TRIS_REGC,5
#define TRIS_REGC4	TRIS_REGC,4
#define TRIS_REGC3	TRIS_REGC,3
#define TRIS_REGC2	TRIS_REGC,2
#define TRIS_REGC1	TRIS_REGC,1
#define TRIS_REGC0	TRIS_REGC,0
#if defined(_16C661) || defined(_16C662)
#define PSPIE	PIE1,7
#endif  
#define CMIE	PIE1,6
#define MPECS	PCON,7
#define PER	PCON,2
#define POR	PCON,1
#define BOR	PCON,0
#define VREN	VRCON,7
#define VROE	VRCON,6
#define VRR	VRCON,5
#define VR3	VRCON,3
#define VR2	VRCON,2
#define VR1	VRCON,1
#define VR0	VRCON,0
