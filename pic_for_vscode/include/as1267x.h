
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic1267x.h.

; NOTE: PICC assembler option -P is required to preprocess assembler sources. 

; Special Function Register definitions
INDF		equ	000h
RTCC		equ	001h
TMR0		equ	001h
PCL		equ	002h
STATUS		equ	003h
FSR		equ	004h
GPIO		equ	005h
PCLATH		equ	00Ah
INTCON		equ	00Bh
PIR1		equ	00Ch
ADRES		equ	01Eh
ADCON0		equ	01Fh
OPTION_REG		equ	081h
TRIS_REG		equ	085h
PIE1		equ	08Ch
PCON		equ	08Eh
OSCCAL		equ	08Fh
ADCON1		equ	09Fh

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#define RP0	STATUS,5
#define TO	STATUS,4
#define PD	STATUS,3
#define ZERO	STATUS,2
#define DC	STATUS,1
#define CARRY	STATUS,0
#if defined(_12CE673) || defined(_12CE674)
#define SCL	GPIO,7
#define SDA	GPIO,6
#endif
#define GP5	GPIO,5
#define GP4	GPIO,4
#define GP3	GPIO,3
#define GP2	GPIO,2
#define GP1	GPIO,1
#define GP0	GPIO,0
#define GIE	INTCON,7
#define PEIE	INTCON,6
#define T0IE	INTCON,5
#define INTE	INTCON,4
#define GPIE	INTCON,3
#define T0IF	INTCON,2
#define INTF	INTCON,1
#define GPIF	INTCON,0
#define ADIF	PIR1,6
#define ADCS1	ADCON0,7
#define ADCS0	ADCON0,6
#define CHS1	ADCON0,4
#define CHS0	ADCON0,3
#define GODONE	ADCON0,2
#define ADON	ADCON0,0
#define GPPU	OPTION_REG,7
#define INTEDG	OPTION_REG,6
#define T0CS	OPTION_REG,5
#define T0SE	OPTION_REG,4
#define PSA	OPTION_REG,3
#define PS2	OPTION_REG,2
#define PS1	OPTION_REG,1
#define PS0	OPTION_REG,0
#define TRIS_REG5	TRIS_REG,5
#define TRIS_REG4	TRIS_REG,4
#define TRIS_REG3	TRIS_REG,3
#define TRIS_REG2	TRIS_REG,2
#define TRIS_REG1	TRIS_REG,1
#define TRIS_REG0	TRIS_REG,0
#define ADIE	PIE1,6
#define POR	PCON,1
#if defined(_12C671) || defined(_12C672)
#define CAL3	OSCCAL,7
#define CAL2	OSCCAL,6
#define CAL1	OSCCAL,5
#define CAL0	OSCCAL,4
#define CALFST	OSCCAL,3
#define CALSLW	OSCCAL,2
#elif defined(_12CE673) || defined(_12CE674)
#define CAL5	OSCCAL,7
#define CAL4	OSCCAL,6
#define CAL3	OSCCAL,5
#define CAL2	OSCCAL,4
#define CAL1	OSCCAL,3
#define CAL0	OSCCAL,2
#endif
#define PCFG2	ADCON1,2
#define PCFG1	ADCON1,1
#define PCFG0	ADCON1,0
#if defined(_12C671) || defined(_12CE673) || defined(_12C672) || defined(_12CE674)
#endif
#if !defined(_12C671) && !defined(_12CE673)
#endif
