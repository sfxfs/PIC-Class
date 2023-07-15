
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic12f6x.h.

; NOTE: PICC assembler option -P is required to preprocess assembler sources. 

; Special Function Register definitions
INDF		equ	000h
TMR0		equ	001h
PCL		equ	002h
STATUS		equ	003h
FSR		equ	004h
GPIO		equ	005h
PCLATH		equ	00Ah
INTCON		equ	00Bh
PIR1		equ	00Ch
TMR1L		equ	00Eh
TMR1H		equ	00Fh
T1CON		equ	010h
CMCON		equ	019h
ADRESH		equ	01Eh
ADCON0		equ	01Fh
OPTION_REG		equ	081h
TRIS_REGIO		equ	085h
PIE1		equ	08Ch
PCON		equ	08Eh
OSCCAL		equ	090h
WPU		equ	095h
IOCB		equ	096h
VRCON		equ	099h
EEDATA		equ	09Ah
EEADR		equ	09Bh
EECON1		equ	09Ch
EECON2		equ	09Dh
ADRESL		equ	09Eh
ANSEL		equ	09Fh

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#if defined(_12F675)
#endif
#if defined(_12F675)
#endif
#define CARRY	STATUS,0
#define DC	STATUS,1
#define ZERO	STATUS,2
#define PD	STATUS,3
#define TO	STATUS,4
#define RP0	STATUS,5
#define GPIO0	GPIO,0
#define GPIO1	GPIO,1
#define GPIO2	GPIO,2
#define GPIO3	GPIO,3
#define GPIO4	GPIO,4
#define GPIO5	GPIO,5
#define GPIF	INTCON,0
#define INTF	INTCON,1
#define T0IF	INTCON,2
#define GPIE	INTCON,3
#define INTE	INTCON,4
#define T0IE	INTCON,5
#define PEIE	INTCON,6
#define GIE	INTCON,7
#define TMR1IF	PIR1,0
#define CMIF	PIR1,3
#define ADIF	PIR1,6
#define EEIF	PIR1,7
#define TMR1ON	T1CON,0
#define TMR1CS	T1CON,1
#define T1SYNC	T1CON,2
#define T1OSCEN	T1CON,3
#define T1CKPS0	T1CON,4
#define T1CKPS1	T1CON,5
#define TMR1GE	T1CON,6
#define CM0	CMCON,0
#define CM1	CMCON,1
#define CM2	CMCON,2
#define CIS	CMCON,3
#define CINV	CMCON,4
#define COUT	CMCON,6
#if defined(_12F675)
#define ADON	ADCON0,0
#define GODONE	ADCON0,1
#define CHS0	ADCON0,2
#define CHS1	ADCON0,3
#define VCFG	ADCON0,6
#define ADFM	ADCON0,7
#endif
#define PS0	OPTION_REG,0
#define PS1	OPTION_REG,1
#define PS2	OPTION_REG,2
#define PSA	OPTION_REG,3
#define T0SE	OPTION_REG,4
#define T0CS	OPTION_REG,5
#define INTEDG	OPTION_REG,6
#define GPPU	OPTION_REG,7
#define TRIS_REG0	TRIS_REGIO,0
#define TRIS_REG1	TRIS_REGIO,1
#define TRIS_REG2	TRIS_REGIO,2
#define TRIS_REG3	TRIS_REGIO,3
#define TRIS_REG4	TRIS_REGIO,4
#define TRIS_REG5	TRIS_REGIO,5
#define TMR1IE	PIE1,0
#define CMIE	PIE1,3
#define ADIE	PIE1,6
#define EEIE	PIE1,7
#define BOD	PCON,0
#define POR	PCON,1
#define CAL0	OSCCAL,2
#define CAL1	OSCCAL,3
#define CAL2	OSCCAL,4
#define CAL3	OSCCAL,5
#define CAL4	OSCCAL,6
#define CAL5	OSCCAL,7
#define WPU0	WPU,0
#define WPU1	WPU,1
#define WPU2	WPU,2
#define WPU4	WPU,4
#define WPU5	WPU,5
#define IOCB0	IOCB,0
#define IOCB1	IOCB,1
#define IOCB2	IOCB,2
#define IOCB3	IOCB,3
#define IOCB4	IOCB,4
#define IOCB5	IOCB,5
#define VR0	VRCON,0
#define VR1	VRCON,1
#define VR2	VRCON,2
#define VR3	VRCON,3
#define VRR	VRCON,5
#define VREN	VRCON,7
#define RD	EECON1,0
#define WR	EECON1,1
#define WREN	EECON1,2
#define WRERR	EECON1,3
#if defined(_12F675)
#define ANS0	ANSEL,0
#define ANS1	ANSEL,1
#define ANS2	ANSEL,2
#define ANS3	ANSEL,3
#define ADCS0	ANSEL,4
#define ADCS1	ANSEL,5
#define ADCS2	ANSEL,6
#endif
