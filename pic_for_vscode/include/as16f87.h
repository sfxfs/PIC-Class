
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic16f87.h.

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
PIR2		equ	00Dh
TMR1L		equ	00Eh
TMR1H		equ	00Fh
T1CON		equ	010h
TMR2		equ	011h
T2CON		equ	012h
SSPBUF		equ	013h
SSPCON		equ	014h
CCPR1L		equ	015h
CCPR1H		equ	016h
CCP1CON		equ	017h
RCSTA		equ	018h
TXREG		equ	019h
RCREG		equ	01Ah
ADRESH		equ	01Eh
ADCON0		equ	01Fh
OPTION_REG		equ	081h
TRIS_REGA		equ	085h
TRIS_REGB		equ	086h
PIE1		equ	08Ch
PIE2		equ	08Dh
PCON		equ	08Eh
OSCCON		equ	08Fh
OSCTUNE		equ	090h
PR2		equ	092h
SSPADD		equ	093h
SSPSTAT		equ	094h
TXSTA		equ	098h
SPBRG		equ	099h
ANSEL		equ	09Bh
CMCON		equ	09Ch
CVRCON		equ	09Dh
ADRESL		equ	09Eh
ADCON1		equ	09Fh
WDTCON		equ	0105h
EEDATA		equ	010Ch
EEDAT		equ	010Ch
EEADR		equ	010Dh
EEADRL		equ	010Dh
EEDATH		equ	010Eh
EEADRH		equ	010Fh
EECON1		equ	018Ch
EECON2		equ	018Dh

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#ifndef	__PIC16F87_H
#if defined(_16F88)
#endif
#if defined(_16F88)
#endif
#if defined(_16F88)
#endif
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
#define INT0IF	INTCON,1
#define TMR0IF	INTCON,2
#define RBIE	INTCON,3
#define INT0IE	INTCON,4
#define TMR0IE	INTCON,5
#define PEIE	INTCON,6
#define GIE	INTCON,7
#define TMR1IF	PIR1,0
#define TMR2IF	PIR1,1
#define CCP1IF	PIR1,2
#define SSPIF	PIR1,3
#define TXIF	PIR1,4
#define RCIF	PIR1,5
#define ADIF	PIR1,6
#define EEIF	PIR2,4
#define CMIF	PIR2,6
#define OSFIF	PIR2,7
#define TMR1ON	T1CON,0
#define TMR1CS	T1CON,1
#define T1SYNC	T1CON,2
#define T1OSCEN	T1CON,3
#define T1CKPS0	T1CON,4
#define T1CKPS1	T1CON,5
#define T1RUN	T1CON,6
#define T2CKPS0	T2CON,0
#define T2CKPS1	T2CON,1
#define TMR2ON	T2CON,2
#define TOUTPS0	T2CON,3
#define TOUTPS1	T2CON,4
#define TOUTPS2	T2CON,5
#define TOUTPS3	T2CON,6
#define SSPM0	SSPCON,0
#define SSPM1	SSPCON,1
#define SSPM2	SSPCON,2
#define SSPM3	SSPCON,3
#define CKP	SSPCON,4
#define SSPEN	SSPCON,5
#define SSPOV	SSPCON,6
#define WCOL	SSPCON,7
#define CCP1M0	CCP1CON,0
#define CCP1M1	CCP1CON,1
#define CCP1M2	CCP1CON,2
#define CCP1M3	CCP1CON,3
#define CCP1Y	CCP1CON,4
#define CCP1X	CCP1CON,5
#define RX9D	RCSTA,0
#define OERR	RCSTA,1
#define FERR	RCSTA,2
#define ADDEN	RCSTA,3
#define CREN	RCSTA,4
#define SREN	RCSTA,5
#define RX9	RCSTA,6
#define SPEN	RCSTA,7
#if defined(_16F88)
#define ADON	ADCON0,0
#define GODONE	ADCON0,2
#define CHS0	ADCON0,3
#define CHS1	ADCON0,4
#define CHS2	ADCON0,5
#define ADCS0	ADCON0,6
#define ADCS1	ADCON0,7
#define ADGO	ADCON0,2
#endif
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
#define SSPIE	PIE1,3
#define TXIE	PIE1,4
#define RCIE	PIE1,5
#define ADIE	PIE1,6
#define EEIE	PIE2,4
#define CMIE	PIE2,6
#define OSFIE	PIE2,7
#define BOR	PCON,0
#define POR	PCON,1
#define SCS0	OSCCON,0
#define SCS1	OSCCON,1
#define IOFS	OSCCON,2
#define OSTS	OSCCON,3
#define IRCF0	OSCCON,4
#define IRCF1	OSCCON,5
#define IRCF2	OSCCON,6
#define TUN0	OSCTUNE,0
#define TUN1	OSCTUNE,1
#define TUN2	OSCTUNE,2
#define TUN3	OSCTUNE,3
#define TUN4	OSCTUNE,4
#define TUN5	OSCTUNE,5
#define BF	SSPSTAT,0
#define UA	SSPSTAT,1
#define RW	SSPSTAT,2
#define START	SSPSTAT,3
#define STOP	SSPSTAT,4
#define DA	SSPSTAT,5
#define CKE	SSPSTAT,6
#define SMP	SSPSTAT,7
#define TX9D	TXSTA,0
#define TRMT	TXSTA,1
#define BRGH	TXSTA,2
#define SYNC	TXSTA,4
#define TXEN	TXSTA,5
#define TX9	TXSTA,6
#define CSRC	TXSTA,7
#if defined(_16F88)
#define ANS0	ANSEL,0
#define ANS1	ANSEL,1
#define ANS2	ANSEL,2
#define ANS3	ANSEL,3
#define ANS4	ANSEL,4
#define ANS5	ANSEL,5
#define ANS6	ANSEL,6
#endif
#define CM0	CMCON,0
#define CM1	CMCON,1
#define CM2	CMCON,2
#define CIS	CMCON,3
#define C1INV	CMCON,4
#define C2INV	CMCON,5
#define C1OUT	CMCON,6
#define C2OUT	CMCON,7
#define CVR0	CVRCON,0
#define CVR1	CVRCON,1
#define CVR2	CVRCON,2
#define CVR3	CVRCON,3
#define CVRR	CVRCON,5
#define CVROE	CVRCON,6
#define CVREN	CVRCON,7
#if defined(_16F88)
#define VCFG0	ADCON1,4
#define VCFG1	ADCON1,5
#define ADCS2	ADCON1,6
#define ADFM	ADCON1,7
#endif
#define SWDTEN	WDTCON,0
#define WDTPS0	WDTCON,1
#define WDTPS1	WDTCON,2
#define WDTPS2	WDTCON,3
#define WDTPS3	WDTCON,4
#define RD	EECON1,0
#define WR	EECON1,1
#define WREN	EECON1,2
#define WRERR	EECON1,3
#define FREE	EECON1,4
#define EEPGD	EECON1,7
#endif
