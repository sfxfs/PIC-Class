
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic16715.h.

; NOTE: PICC assembler option -P is required to preprocess assembler sources. 

; Special Function Register definitions
INDF		equ	000h
TMR0		equ	001h
PCL		equ	002h
STATUS		equ	003h
FSR		equ	004h
PORTA		equ	005h
PORTB		equ	006h
DATACCP		equ	007h
PCLATH		equ	00Ah
INTCON		equ	00Bh
PIR1		equ	00Ch
TMR1L		equ	00Eh
TMR1H		equ	00Fh
T1CON		equ	010h
TMR2		equ	011h
T2CON		equ	012h
CCPR1L		equ	015h
CCPR1H		equ	016h
CCP1CON		equ	017h
ADRES		equ	01Eh
ADCON0		equ	01Fh
OPTION_REG		equ	081h
TRIS_REGA		equ	085h
TRIS_REGB		equ	086h
TRIS_REGCCP		equ	087h
PIE1		equ	08Ch
PCON		equ	08Eh
PR2		equ	092h
ADCON1		equ	09Fh

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#ifndef _16C715
#endif
#ifndef _16C715
#endif
#ifndef _16C715
#endif
#ifndef _16C715
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
#ifndef _16C715
#define DCCP	DATACCP,2
#define DT1CK	DATACCP,0
#endif
#define GIE	INTCON,7
#define PEIE	INTCON,6
#define T0IE	INTCON,5
#define INTE	INTCON,4
#define RBIE	INTCON,3
#define T0IF	INTCON,2
#define INTF	INTCON,1
#define RBIF	INTCON,0
#define ADIF	PIR1,6
#if defined(_16C712) || defined(_16C716)
#define CCP1IF	PIR1,2
#define TMR2IF	PIR1,1
#define TMR1IF	PIR1,0
#endif
#ifndef _16C715
#define T1CKPS1	T1CON,5
#define T1CKPS0	T1CON,4
#define T1OSCEN	T1CON,3
#define T1SYNC	T1CON,2
#define TMR1CS	T1CON,1
#define TMR1ON	T1CON,0
#define TOUTPS3	T2CON,6
#define TOUTPS2	T2CON,5
#define TOUTPS1	T2CON,4
#define TOUTPS0	T2CON,3
#define TMR2ON	T2CON,2
#define T2CKPS1	T2CON,1
#define T2CKPS0	T2CON,0
#define DC1B1	CCP1CON,5
#define DC1B0	CCP1CON,4
#define CCP1M3	CCP1CON,3
#define CCP1M2	CCP1CON,2
#define CCP1M1	CCP1CON,1
#define CCP1M0	CCP1CON,0
#endif
#define ADCS1	ADCON0,7
#define ADCS0	ADCON0,6
#define CHS2	ADCON0,5
#define CHS1	ADCON0,4
#define CHS0	ADCON0,3
#define ADGO	ADCON0,2
#define GODONE	ADCON0,2
#define ADON	ADCON0,0
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
#ifndef _16C715
#define TCCP	TRIS_REGCCP,2
#define TT1CK	TRIS_REGCCP,0
#endif
#define ADIE	PIE1,6
#if defined(_16C712) || defined(_16C716)
#define CCP1IE	PIE1,2
#define TMR2IE	PIE1,1
#define TMR1IE	PIE1,0
#endif
#ifdef _16C715
#define MPECS	PCON,7
#define PER	PCON,2
#endif
#define POR	PCON,1
#define BOR	PCON,0
#define PCFG1	ADCON1,1
#define PCFG0	ADCON1,0
#ifdef _16C715
#endif
