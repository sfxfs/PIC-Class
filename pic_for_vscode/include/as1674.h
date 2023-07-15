
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic1674.h.

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
ADRES		equ	01Eh
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
PR2		equ	092h
SSPADD		equ	093h
SSPSTAT		equ	094h
TXSTA		equ	098h
SPBRG		equ	099h
ADCON1		equ	09Fh
PORTD		equ	008h
PORTE		equ	009h

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#if	defined(_16C73)  || defined(_16C74)  || \
#endif
#if	defined(_16C73)  || defined(_16C74)  || \
#endif
#define RP0	unsigned)
#define TO	unsigned)
#define PD	unsigned)
#define ZERO	unsigned)
#define DC	unsigned)
#define CARRY	unsigned)
#define RA5	unsigned)
#define RA4	unsigned)
#define RA3	unsigned)
#define RA2	unsigned)
#define RA1	unsigned)
#define RA0	unsigned)
#define RB7	unsigned)
#define RB6	unsigned)
#define RB5	unsigned)
#define RB4	unsigned)
#define RB3	unsigned)
#define RB2	unsigned)
#define RB1	unsigned)
#define RB0	unsigned)
#define RC7	unsigned)
#define RC6	unsigned)
#define RC5	unsigned)
#define RC4	unsigned)
#define RC3	unsigned)
#define RC2	unsigned)
#define RC1	unsigned)
#define RC0	unsigned)
#if 	defined(_16C74)  || defined(_16C74A) || \
#define RD7	unsigned)
#define RD6	unsigned)
#define RD5	unsigned)
#define RD4	unsigned)
#define RD3	unsigned)
#define RD2	unsigned)
#define RD1	unsigned)
#define RD0	unsigned)
#define RE2	unsigned)
#define RE1	unsigned)
#define RE0	unsigned)
#endif
#define GIE	unsigned)
#define PEIE	unsigned)
#define T0IE	unsigned)
#define INTE	unsigned)
#define RBIE	unsigned)
#define T0IF	unsigned)
#define INTF	unsigned)
#define RBIF	unsigned)
#if	defined(_16C74)  || defined(_16C74A) || \
#define PSPIF	unsigned)
#endif
#if	defined(_16C73)  || defined(_16C74)  || \
#define ADIF	unsigned)
#endif
#define RCIF	unsigned)
#define TXIF	unsigned)
#define SSPIF	unsigned)
#define CCP1IF	unsigned)
#define TMR2IF	unsigned)
#define TMR1IF	unsigned)
#define CCP2IF	unsigned)
#define T1CKPS1	unsigned)
#define T1CKPS0	unsigned)
#define T1OSCEN	unsigned)
#define T1SYNC	unsigned)
#define TMR1CS	unsigned)
#define TMR1ON	unsigned)
#define TOUTPS3	unsigned)
#define TOUTPS2	unsigned)
#define TOUTPS1	unsigned)
#define TOUTPS0	unsigned)
#define TMR2ON	unsigned)
#define T2CKPS1	unsigned)
#define T2CKPS0	unsigned)
#define WCOL	unsigned)
#define SSPOV	unsigned)
#define SSPEN	unsigned)
#define CKP	unsigned)
#define SSPM3	unsigned)
#define SSPM2	unsigned)
#define SSPM1	unsigned)
#define SSPM0	unsigned)
#define CCP1X	unsigned)
#define CCP1Y	unsigned)
#define CCP1M3	unsigned)
#define CCP1M2	unsigned)
#define CCP1M1	unsigned)
#define CCP1M0	unsigned)
#define SPEN	unsigned)
#define RX9	unsigned)
#define SREN	unsigned)
#define CREN	unsigned)
#define FERR	unsigned)
#define OERR	unsigned)
#define RX9D	unsigned)
#define CCP2X	unsigned)
#define CCP2Y	unsigned)
#define CCP2M3	unsigned)
#define CCP2M2	unsigned)
#define CCP2M1	unsigned)
#define CCP2M0	unsigned)
#if	defined(_16C73)  || defined(_16C74)  || \
#define ADCS1	unsigned)
#define ADCS0	unsigned)
#define CHS2	unsigned)
#define CHS1	unsigned)
#define CHS0	unsigned)
#define ADGO	unsigned)
#define GODONE	unsigned)
#define ADON	unsigned)
#endif
#define RBPU	unsigned)
#define INTEDG	unsigned)
#define T0CS	unsigned)
#define T0SE	unsigned)
#define PSA	unsigned)
#define PS2	unsigned)
#define PS1	unsigned)
#define PS0	unsigned)
#define TRIS_REGA5	unsigned)
#define TRIS_REGA4	unsigned)
#define TRIS_REGA3	unsigned)
#define TRIS_REGA2	unsigned)
#define TRIS_REGA1	unsigned)
#define TRIS_REGA0	unsigned)
#define TRIS_REGB7	unsigned)
#define TRIS_REGB6	unsigned)
#define TRIS_REGB5	unsigned)
#define TRIS_REGB4	unsigned)
#define TRIS_REGB3	unsigned)
#define TRIS_REGB2	unsigned)
#define TRIS_REGB1	unsigned)
#define TRIS_REGB0	unsigned)
#define TRIS_REGC7	unsigned)
#define TRIS_REGC6	unsigned)
#define TRIS_REGC5	unsigned)
#define TRIS_REGC4	unsigned)
#define TRIS_REGC3	unsigned)
#define TRIS_REGC2	unsigned)
#define TRIS_REGC1	unsigned)
#define TRIS_REGC0	unsigned)
#if	defined(_16C74) || defined(_16C74A) || \
#define TRIS_REGD7	unsigned)
#define TRIS_REGD6	unsigned)
#define TRIS_REGD5	unsigned)
#define TRIS_REGD4	unsigned)
#define TRIS_REGD3	unsigned)
#define TRIS_REGD2	unsigned)
#define TRIS_REGD1	unsigned)
#define TRIS_REGD0	unsigned)
#define IBF	unsigned)
#define OBF	unsigned)
#define IBOV	unsigned)
#define PSPMODE	unsigned)
#define TRIS_REGE2	unsigned)
#define TRIS_REGE1	unsigned)
#define TRIS_REGE0	unsigned)
#endif
#if	defined(_16C74)  || defined(_16C74A) || \
#define PSPIE	unsigned)
#endif
#if	defined(_16C73)  || defined(_16C74)  || \
#define ADIE	unsigned)
#endif
#define RCIE	unsigned)
#define TXIE	unsigned)
#define SSPIE	unsigned)
#define CCP1IE	unsigned)
#define TMR2IE	unsigned)
#define TMR1IE	unsigned)
#define CCP2IE	unsigned)
#define POR	unsigned)
#define BOR	unsigned)
#if 	defined(_16C63A) || defined(_16C65B) || \
#define SMP	unsigned)
#define CKE	unsigned)
#endif
#define DA	unsigned)
#define STOP	unsigned)
#define START	unsigned)
#define RW	unsigned)
#define UA	unsigned)
#define BF	unsigned)
#ifdef __STAT_BACKWARD_COMPATIBILITY
#endif
#define CSRC	unsigned)
#define TX9	unsigned)
#define TXEN	unsigned)
#define SYNC	unsigned)
#define BRGH	unsigned)
#define TRMT	unsigned)
#define TX9D	unsigned)
#if	defined(_16C73)  || defined(_16C74)  || \
#define PCFG2	unsigned)
#define PCFG1	unsigned)
#define PCFG0	unsigned)
#endif
#if	defined (_16C63) || defined (_16CR63) || defined (_16C63A) || \
#endif
#if defined(_16C74) || defined(_16C73)
#endif
