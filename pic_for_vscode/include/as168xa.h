
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic168xa.h.

; NOTE: PICC assembler option -P is required to preprocess assembler sources. 

; Special Function Register definitions
INDF		equ	000h
TMR0		equ	001h
PCL		equ	002h
STATUS		equ	003h
FSR		equ	004h
PORTA		equ	005h
PORTB		equ	006h
PORTC		equ	007h
PORTD		equ	008h
PORTE		equ	009h
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
CCPR2L		equ	01Bh
CCPR2H		equ	01Ch
CCP2CON		equ	01Dh
ADRESH		equ	01Eh
ADCON0		equ	01Fh
OPTION_REG		equ	081h
TRIS_REGA		equ	085h
TRIS_REGB		equ	086h
TRIS_REGC		equ	087h
TRIS_REGD		equ	088h
TRIS_REGE		equ	089h
PIE1		equ	08Ch
PIE2		equ	08Dh
PCON		equ	08Eh
SSPCON2		equ	091h
PR2		equ	092h
SSPADD		equ	093h
SSPSTAT		equ	094h
TXSTA		equ	098h
SPBRG		equ	099h
CMCON		equ	09Ch
CVRCON		equ	09Dh
ADRESL		equ	09Eh
ADCON1		equ	09Fh
EEDATA		equ	010Ch
EEADR		equ	010Dh
EEADRL		equ	010Dh
EEDATH		equ	010Eh
EEADRH		equ	010Fh
EECON1		equ	018Ch
EECON2		equ	018Dh

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#if defined(_16F874A)	|| defined(_16F877A)
#endif
#ifdef __PINS_40
#endif
#ifdef	__PINS_40
#endif
#define IRP	STATUS,7
#define RP1	STATUS,6
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
#ifdef	__PINS_40
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
#endif
#define GIE	INTCON,7
#define PEIE	INTCON,6
#define T0IE	INTCON,5
#define INTE	INTCON,4
#define RBIE	INTCON,3
#define T0IF	INTCON,2
#define INTF	INTCON,1
#define RBIF	INTCON,0
#define TMR0IE	INTCON,5
#define TMR0IF	INTCON,2
#ifdef	__PINS_40
#define PSPIF	PIR1,7
#endif
#define ADIF	PIR1,6
#define RCIF	PIR1,5
#define TXIF	PIR1,4
#define SSPIF	PIR1,3
#define CCP1IF	PIR1,2
#define TMR2IF	PIR1,1
#define TMR1IF	PIR1,0
#define CMIF	PIR2,6
#define EEIF	PIR2,4
#define BCLIF	PIR2,3
#define CCP2IF	PIR2,0
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
#define WCOL	SSPCON,7
#define SSPOV	SSPCON,6
#define SSPEN	SSPCON,5
#define CKP	SSPCON,4
#define SSPM3	SSPCON,3
#define SSPM2	SSPCON,2
#define SSPM1	SSPCON,1
#define SSPM0	SSPCON,0
#define CCP1X	CCP1CON,5
#define CCP1Y	CCP1CON,4
#define CCP1M3	CCP1CON,3
#define CCP1M2	CCP1CON,2
#define CCP1M1	CCP1CON,1
#define CCP1M0	CCP1CON,0
#define SPEN	RCSTA,7
#define RX9	RCSTA,6
#define SREN	RCSTA,5
#define CREN	RCSTA,4
#define ADDEN	RCSTA,3
#define FERR	RCSTA,2
#define OERR	RCSTA,1
#define RX9D	RCSTA,0
#define CCP2X	CCP2CON,5
#define CCP2Y	CCP2CON,4
#define CCP2M3	CCP2CON,3
#define CCP2M2	CCP2CON,2
#define CCP2M1	CCP2CON,1
#define CCP2M0	CCP2CON,0
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
#define TRIS_REGC7	TRIS_REGC,7
#define TRIS_REGC6	TRIS_REGC,6
#define TRIS_REGC5	TRIS_REGC,5
#define TRIS_REGC4	TRIS_REGC,4
#define TRIS_REGC3	TRIS_REGC,3
#define TRIS_REGC2	TRIS_REGC,2
#define TRIS_REGC1	TRIS_REGC,1
#define TRIS_REGC0	TRIS_REGC,0
#ifdef	__PINS_40
#define TRIS_REGD7	TRIS_REGD,7
#define TRIS_REGD6	TRIS_REGD,6
#define TRIS_REGD5	TRIS_REGD,5
#define TRIS_REGD4	TRIS_REGD,4
#define TRIS_REGD3	TRIS_REGD,3
#define TRIS_REGD2	TRIS_REGD,2
#define TRIS_REGD1	TRIS_REGD,1
#define TRIS_REGD0	TRIS_REGD,0
#define IBF	TRIS_REGE,7
#define OBF	TRIS_REGE,6
#define IBOV	TRIS_REGE,5
#define PSPMODE	TRIS_REGE,4
#define TRIS_REGE2	TRIS_REGE,2
#define TRIS_REGE1	TRIS_REGE,1
#define TRIS_REGE0	TRIS_REGE,0
#endif
#ifdef	__PINS_40
#define PSPIE	PIE1,7
#endif
#define ADIE	PIE1,6
#define RCIE	PIE1,5
#define TXIE	PIE1,4
#define SSPIE	PIE1,3
#define CCP1IE	PIE1,2
#define TMR2IE	PIE1,1
#define TMR1IE	PIE1,0
#define CMIE	PIE2,6
#define EEIE	PIE2,4
#define BCLIE	PIE2,3
#define CCP2IE	PIE2,0
#define POR	PCON,1
#define BOR	PCON,0
#define GCEN	SSPCON2,7
#define ACKSTAT	SSPCON2,6
#define ACKDT	SSPCON2,5
#define ACKEN	SSPCON2,4
#define RCEN	SSPCON2,3
#define PEN	SSPCON2,2
#define RSEN	SSPCON2,1
#define SEN	SSPCON2,0
#define SMP	SSPSTAT,7
#define CKE	SSPSTAT,6
#define DA	SSPSTAT,5
#define STOP	SSPSTAT,4
#define START	SSPSTAT,3
#define RW	SSPSTAT,2
#define UA	SSPSTAT,1
#define BF	SSPSTAT,0
#ifdef __STAT_BACKWARD_COMPATIBILITY
#endif
#define CSRC	TXSTA,7
#define TX9	TXSTA,6
#define TXEN	TXSTA,5
#define SYNC	TXSTA,4
#define BRGH	TXSTA,2
#define TRMT	TXSTA,1
#define TX9D	TXSTA,0
#define C2OUT	CMCON,7
#define C1OUT	CMCON,6
#define C2INV	CMCON,5
#define C1INV	CMCON,4
#define CIS	CMCON,3
#define CM2	CMCON,2
#define CM1	CMCON,1
#define CM0	CMCON,0
#define CVREN	CVRCON,7
#define CVROE	CVRCON,6
#define CVRR	CVRCON,5
#define CVR3	CVRCON,3
#define CVR2	CVRCON,2
#define CVR1	CVRCON,1
#define CVR0	CVRCON,0
#define ADFM	ADCON1,7
#define ADCS2	ADCON1,6
#define PCFG3	ADCON1,3
#define PCFG2	ADCON1,2
#define PCFG1	ADCON1,1
#define PCFG0	ADCON1,0
#define EEPGD	EECON1,7
#define WRERR	EECON1,3
#define WREN	EECON1,2
#define WR	EECON1,1
#define RD	EECON1,0
