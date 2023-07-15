
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic16f62xa.h.

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
TMR1L		equ	00Eh
TMR1H		equ	00Fh
T1CON		equ	010h
TMR2		equ	011h
T2CON		equ	012h
CCPR1L		equ	015h
CCPR1H		equ	016h
CCP1CON		equ	017h
RCSTA		equ	018h
TXREG		equ	019h
RCREG		equ	01Ah
CMCON		equ	01Fh
OPTION_REG		equ	081h
TRIS_REGA		equ	085h
TRIS_REGB		equ	086h
PIE1		equ	08Ch
PCON		equ	08Eh
PR2		equ	092h
TXSTA		equ	098h
SPBRG		equ	099h
EEDATA		equ	09Ah
EEADR		equ	09Bh
EECON1		equ	09Ch
EECON2		equ	09Dh
VRCON		equ	09Fh

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#ifndef	__PIC16F62XA_H
#define CARRY	STATUS,0
#define DC	STATUS,1
#define ZERO	STATUS,2
#define PD	STATUS,3
#define TO	STATUS,4
#define RP0	STATUS,5
#define RP1	STATUS,6
#define IRP	STATUS,7
#define RA0	PORTA,0
#define RA1	PORTA,1
#define RA2	PORTA,2
#define RA3	PORTA,3
#define RA4	PORTA,4
#define RA5	PORTA,5
#define RA6	PORTA,6
#define RA7	PORTA,7
#define RB0	PORTB,0
#define RB1	PORTB,1
#define RB2	PORTB,2
#define RB3	PORTB,3
#define RB4	PORTB,4
#define RB5	PORTB,5
#define RB6	PORTB,6
#define RB7	PORTB,7
#define RBIF	INTCON,0
#define INTF	INTCON,1
#define T0IF	INTCON,2
#define RBIE	INTCON,3
#define INTE	INTCON,4
#define T0IE	INTCON,5
#define PEIE	INTCON,6
#define GIE	INTCON,7
#define TMR1IF	PIR1,0
#define TMR2IF	PIR1,1
#define CCP1IF	PIR1,2
#define TXIF	PIR1,4
#define RCIF	PIR1,5
#define CMIF	PIR1,6
#define EEIF	PIR1,7
#define TMR1ON	T1CON,0
#define TMR1CS	T1CON,1
#define T1SYNC	T1CON,2
#define T1OSCEN	T1CON,3
#define T1CKPS0	T1CON,4
#define T1CKPS1	T1CON,5
#define T2CKPS0	T2CON,0
#define T2CKPS1	T2CON,1
#define TMR2ON	T2CON,2
#define TOUTPS0	T2CON,3
#define TOUTPS1	T2CON,4
#define TOUTPS2	T2CON,5
#define TOUTPS3	T2CON,6
#define CCP1M0	CCP1CON,0
#define CCP1M1	CCP1CON,1
#define CCP1M2	CCP1CON,2
#define CCP1M3	CCP1CON,3
#define CCP1Y	CCP1CON,4
#define CCP1X	CCP1CON,5
#define RX9D	RCSTA,0
#define OERR	RCSTA,1
#define FERR	RCSTA,2
#define ADEN	RCSTA,3
#define CREN	RCSTA,4
#define SREN	RCSTA,5
#define RX9	RCSTA,6
#define SPEN	RCSTA,7
#define CM0	CMCON,0
#define CM1	CMCON,1
#define CM2	CMCON,2
#define CIS	CMCON,3
#define C1INV	CMCON,4
#define C2INV	CMCON,5
#define C1OUT	CMCON,6
#define C2OUT	CMCON,7
#define PS0	OPTION_REG,0
#define PS1	OPTION_REG,1
#define PS2	OPTION_REG,2
#define PSA	OPTION_REG,3
#define T0SE	OPTION_REG,4
#define T0CS	OPTION_REG,5
#define INTEDG	OPTION_REG,6
#define RBPU	OPTION_REG,7
#define TRIS_REGA0	TRIS_REGA,0
#define TRIS_REGA1	TRIS_REGA,1
#define TRIS_REGA2	TRIS_REGA,2
#define TRIS_REGA3	TRIS_REGA,3
#define TRIS_REGA4	TRIS_REGA,4
#define TRIS_REGA5	TRIS_REGA,5
#define TRIS_REGA6	TRIS_REGA,6
#define TRIS_REGA7	TRIS_REGA,7
#define TRIS_REGB0	TRIS_REGB,0
#define TRIS_REGB1	TRIS_REGB,1
#define TRIS_REGB2	TRIS_REGB,2
#define TRIS_REGB3	TRIS_REGB,3
#define TRIS_REGB4	TRIS_REGB,4
#define TRIS_REGB5	TRIS_REGB,5
#define TRIS_REGB6	TRIS_REGB,6
#define TRIS_REGB7	TRIS_REGB,7
#define TMR1IE	PIE1,0
#define TMR2IE	PIE1,1
#define CCP1IE	PIE1,2
#define TXIE	PIE1,4
#define RCIE	PIE1,5
#define CMIE	PIE1,6
#define EEIE	PIE1,7
#define BOR	PCON,0
#define POR	PCON,1
#define OSCF	PCON,3
#define TX9D	TXSTA,0
#define TRMT	TXSTA,1
#define BRGH	TXSTA,2
#define SYNC	TXSTA,4
#define TXEN	TXSTA,5
#define TX9	TXSTA,6
#define CSRC	TXSTA,7
#define RD	EECON1,0
#define WR	EECON1,1
#define WREN	EECON1,2
#define WRERR	EECON1,3
#define VR0	VRCON,0
#define VR1	VRCON,1
#define VR2	VRCON,2
#define VR3	VRCON,3
#define VRR	VRCON,5
#define VROE	VRCON,6
#define VREN	VRCON,7
#endif
