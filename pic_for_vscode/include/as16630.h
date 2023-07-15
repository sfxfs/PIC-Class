
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic16630.h.

; NOTE: PICC assembler option -P is required to preprocess assembler sources. 

; Special Function Register definitions
INDF		equ	000h
TMR0		equ	001h
PCL		equ	002h
STATUS		equ	003h
FSR		equ	004h
PORTA		equ	005h
PORTC		equ	007h
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
TRIS_REGA		equ	085h
TRIS_REGC		equ	087h
PIE1		equ	08Ch
PCON		equ	08Eh
OSCCAL		equ	090h
ANSEL		equ	091h
WPUA		equ	095h
IOCA		equ	096h
VRCON		equ	099h
EEDAT		equ	09Ah
EEDATA		equ	09Ah
EEADR		equ	09Bh
EECON1		equ	09Ch
EECON2		equ	09Dh
ADRESL		equ	09Eh
ADCON1		equ	09Fh

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#ifndef	__PIC16630_H
#if defined(_16F676)
#endif
#if defined(_16F676)
#endif
#if defined(_16F676)
#endif
#define CARRY	STATUS,0
#define DC	STATUS,1
#define ZERO	STATUS,2
#define PD	STATUS,3
#define TO	STATUS,4
#define RP0	STATUS,5
#define RA0	PORTA,0
#define RA1	PORTA,1
#define RA2	PORTA,2
#define RA3	PORTA,3
#define RA4	PORTA,4
#define RA5	PORTA,5
#define RC0	PORTC,0
#define RC1	PORTC,1
#define RC2	PORTC,2
#define RC3	PORTC,3
#define RC4	PORTC,4
#define RC5	PORTC,5
#define RAIF	INTCON,0
#define INTF	INTCON,1
#define T0IF	INTCON,2
#define RAIE	INTCON,3
#define INTE	INTCON,4
#define T0IE	INTCON,5
#define PEIE	INTCON,6
#define GIE	INTCON,7
#define TMR1IF	PIR1,0
#define CMIF	PIR1,3
#if defined(_16F676)
#define ADIF	PIR1,6
#endif
#define EEIF	PIR1,7
#define TMR1ON	T1CON,0
#define TMR1CS	T1CON,1
#define T1SYNC	T1CON,2
#define T1OSCEN	T1CON,3
#define T1CKPS0	T1CON,4
#define T1CKPS1	T1CON,5
#define T1GE	T1CON,6
#define TMR1GE	T1CON,6
#define CM0	CMCON,0
#define CM1	CMCON,1
#define CM2	CMCON,2
#define CIS	CMCON,3
#define CINV	CMCON,4
#define COUT	CMCON,6
#if defined(_16F676)
#define ADON	ADCON0,0
#define GODONE	ADCON0,1
#define CHS0	ADCON0,2
#define CHS1	ADCON0,3
#define CHS2	ADCON0,4
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
#define RAPU	OPTION_REG,7
#define TRIS_REGA0	TRIS_REGA,0
#define TRIS_REGA1	TRIS_REGA,1
#define TRIS_REGA2	TRIS_REGA,2
#define TRIS_REGA3	TRIS_REGA,3
#define TRIS_REGA4	TRIS_REGA,4
#define TRIS_REGA5	TRIS_REGA,5
#define TRIS_REGC0	TRIS_REGC,0
#define TRIS_REGC1	TRIS_REGC,1
#define TRIS_REGC2	TRIS_REGC,2
#define TRIS_REGC3	TRIS_REGC,3
#define TRIS_REGC4	TRIS_REGC,4
#define TRIS_REGC5	TRIS_REGC,5
#define TMR1IE	PIE1,0
#define CMIE	PIE1,3
#if defined(_16F676)
#define ADIE	PIE1,6
#endif
#define EEIE	PIE1,7
#define BOR	PCON,0
#define POR	PCON,1
#define CAL0	OSCCAL,2
#define CAL1	OSCCAL,3
#define CAL2	OSCCAL,4
#define CAL3	OSCCAL,5
#define CAL4	OSCCAL,6
#define CAL5	OSCCAL,7
#if defined(_16F676)
#define ANS0	ANSEL,0
#define ANS1	ANSEL,1
#define ANS2	ANSEL,2
#define ANS3	ANSEL,3
#define ANS4	ANSEL,4
#define ANS5	ANSEL,5
#define ANS6	ANSEL,6
#define ANS7	ANSEL,7
#endif
#define WPUA0	WPUA,0
#define WPUA1	WPUA,1
#define WPUA2	WPUA,2
#define WPUA4	WPUA,4
#define WPUA5	WPUA,5
#define IOCA0	IOCA,0
#define IOCA1	IOCA,1
#define IOCA2	IOCA,2
#define IOCA3	IOCA,3
#define IOCA4	IOCA,4
#define IOCA5	IOCA,5
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
#if defined(_16F676)
#define ADCS0	ADCON1,4
#define ADCS1	ADCON1,5
#define ADCS2	ADCON1,6
#endif
#endif
