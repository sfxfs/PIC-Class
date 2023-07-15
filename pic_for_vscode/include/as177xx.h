
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic177xx.h.

; NOTE: PICC assembler option -P is required to preprocess assembler sources. 

; Special Function Register definitions
INDF0		equ	000h
FSR0		equ	001h
PCL		equ	002h
PCLATH		equ	003h
ALUSTA		equ	004h
T0STA		equ	005h
CPUSTA		equ	006h
INTSTA		equ	007h
INDF1		equ	008h
FSR1		equ	009h
WREG		equ	00Ah
TMR0L		equ	00Bh
TMR0H		equ	00Ch
TBLPTRL		equ	00Dh
TBLPTRH		equ	00Eh
BSR		equ	00Fh
PRODL		equ	018h
PRODH		equ	019h
PORTA		equ	010h
DDRB		equ	011h
PORTB		equ	012h
RCSTA1		equ	013h
RCREG1		equ	014h
TXSTA1		equ	015h
TXREG1		equ	016h
SPBRG1		equ	017h
DDRC		equ	0110h
PORTC		equ	0111h
DDRD		equ	0112h
PORTD		equ	0113h
DDRE		equ	0114h
PORTE		equ	0115h
PIR1		equ	0116h
PIE1		equ	0117h
TMR1		equ	0210h
TMR2		equ	0211h
TMR3L		equ	0212h
TMR3H		equ	0213h
PR1		equ	0214h
PR2		equ	0215h
PR3L		equ	0216h
PR3H		equ	0217h
PW1DCL		equ	0310h
PW2DCL		equ	0311h
PW1DCH		equ	0312h
PW2DCH		equ	0313h
CA2L		equ	0314h
CA2H		equ	0315h
TCON1		equ	0316h
TCON2		equ	0317h
PIR2		equ	0410h
PIE2		equ	0411h
RCSTA2		equ	0413h
RCREG2		equ	0414h
TXSTA2		equ	0415h
TXREG2		equ	0416h
SPBRG2		equ	0417h
DDRF		equ	0510h
PORTF		equ	0511h
DDRG		equ	0512h
PORTG		equ	0513h
ADCON0		equ	0514h
ADCON1		equ	0515h
ADRESL		equ	0516h
ADRESH		equ	0517h
SSPADD		equ	0610h
SSPCON1		equ	0611h
SSPCON2		equ	0612h
SSPSTAT		equ	0613h
SSPBUF		equ	0614h
PW3DCL		equ	0710h
PW3DCH		equ	0711h
CA3L		equ	0712h
CA3H		equ	0713h
CA4L		equ	0714h
CA4H		equ	0715h
TCON3		equ	0716h
TSTMD1		equ	0F14h
TSTMD2		equ	0F16h

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#if defined(_17C762) || defined(_17C766)
#endif
#define FS3	ALUSTA,7
#define FS2	ALUSTA,6
#define FS1	ALUSTA,5
#define FS0	ALUSTA,4
#define OV	ALUSTA,3
#define ZERO	ALUSTA,2
#define DC	ALUSTA,1
#define CARRY	ALUSTA,0
#define INTEDG	T0STA,7
#define T0SE	T0STA,6
#define T0CS	T0STA,5
#define PS3	T0STA,4
#define PS2	T0STA,3
#define PS1	T0STA,2
#define PS0	T0STA,1
#define STKAV	CPUSTA,5
#define GLINTD	CPUSTA,4
#define TO	CPUSTA,3
#define PD	CPUSTA,2
#define POR	CPUSTA,1
#define BOR	CPUSTA,0
#define PEIF	INTSTA,7
#define T0CKIF	INTSTA,6
#define T0IF	INTSTA,5
#define INTF	INTSTA,4
#define PEIE	INTSTA,3
#define T0CKIE	INTSTA,2
#define T0IE	INTSTA,1
#define INTE	INTSTA,0
#define RBPU	PORTA,7
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
#define DDRB7	DDRB,7
#define DDRB6	DDRB,6
#define DDRB5	DDRB,5
#define DDRB4	DDRB,4
#define DDRB3	DDRB,3
#define DDRB2	DDRB,2
#define DDRB1	DDRB,1
#define DDRB0	DDRB,0
#define SPEN1	RCSTA1,7
#define RX91	RCSTA1,6
#define SREN1	RCSTA1,5
#define CREN1	RCSTA1,4
#define FERR1	RCSTA1,2
#define OERR1	RCSTA1,1
#define RX9D1	RCSTA1,0
#define CSRC1	TXSTA1,7
#define TX91	TXSTA1,6
#define TXEN1	TXSTA1,5
#define SYNC1	TXSTA1,4
#define TRMT1	TXSTA1,1
#define TX9D1	TXSTA1,0
#define RC7	PORTC,7
#define RC6	PORTC,6
#define RC5	PORTC,5
#define RC4	PORTC,4
#define RC3	PORTC,3
#define RC2	PORTC,2
#define RC1	PORTC,1
#define RC0	PORTC,0
#define DDRC7	DDRC,7
#define DDRC6	DDRC,6
#define DDRC5	DDRC,5
#define DDRC4	DDRC,4
#define DDRC3	DDRC,3
#define DDRC2	DDRC,2
#define DDRC1	DDRC,1
#define DDRC0	DDRC,0
#define RD7	PORTD,7
#define RD6	PORTD,6
#define RD5	PORTD,5
#define RD4	PORTD,4
#define RD3	PORTD,3
#define RD2	PORTD,2
#define RD1	PORTD,1
#define RD0	PORTD,0
#define DDRD7	DDRD,7
#define DDRD6	DDRD,6
#define DDRD5	DDRD,5
#define DDRD4	DDRD,4
#define DDRD3	DDRD,3
#define DDRD2	DDRD,2
#define DDRD1	DDRD,1
#define DDRD0	DDRD,0
#define RE3	PORTE,3
#define RE2	PORTE,2
#define RE1	PORTE,1
#define RE0	PORTE,0
#define DDRE3	DDRE,3
#define DDRE2	DDRE,2
#define DDRE1	DDRE,1
#define DDRE0	DDRE,0
#define RBIF	PIR1,7
#define TMR3IF	PIR1,6
#define TMR2IF	PIR1,5
#define TMR1IF	PIR1,4
#define CA2IF	PIR1,3
#define CA1IF	PIR1,2
#define TX1IF	PIR1,1
#define RC1IF	PIR1,0
#define RBIE	PIE1,7
#define TMR3IE	PIE1,6
#define TMR2IE	PIE1,5
#define TMR1IE	PIE1,4
#define CA2IE	PIE1,3
#define CA1IE	PIE1,2
#define TX1IE	PIE1,1
#define RC1IE	PIE1,0
#define DC1PW1	PW1DCL,7
#define DC0PW1	PW1DCL,6
#define DC1PW2	PW2DCL,7
#define DC0PW2	PW2DCL,6
#define TM2PW2	PW2DCL,5
#define DC9PW1	PW1DCH,7
#define DC8PW1	PW1DCH,6
#define DC7PW1	PW1DCH,5
#define DC6PW1	PW1DCH,4
#define DC5PW1	PW1DCH,3
#define DC4PW1	PW1DCH,2
#define DC3PW1	PW1DCH,1
#define DC2PW1	PW1DCH,0
#define DC9PW2	PW2DCH,7
#define DC8PW2	PW2DCH,6
#define DC7PW2	PW2DCH,5
#define DC6PW2	PW2DCH,4
#define DC5PW2	PW2DCH,3
#define DC4PW2	PW2DCH,2
#define DC3PW2	PW2DCH,1
#define DC2PW2	PW2DCH,0
#define CA2ED1	TCON1,7
#define CA2ED0	TCON1,6
#define CA1ED1	TCON1,5
#define CA1ED0	TCON1,4
#define T16	TCON1,3
#define TMR3CS	TCON1,2
#define TMR2CS	TCON1,1
#define TMR1CS	TCON1,0
#define CA2OVF	TCON2,7
#define CA1OVF	TCON2,6
#define PWM2ON	TCON2,5
#define PWM1ON	TCON2,4
#define CA1	TCON2,3
#define TMR3ON	TCON2,2
#define TMR2ON	TCON2,1
#define TMR1ON	TCON2,0
#define SSPIF	PIR2,7
#define BCLIF	PIR2,6
#define ADIF	PIR2,5
#define CA4IF	PIR2,3
#define CA3IF	PIR2,2
#define TX2IF	PIR2,1
#define RC2IF	PIR2,0
#define SSPIE	PIE2,7
#define BCLIE	PIE2,6
#define ADIE	PIE2,5
#define CA4IE	PIE2,3
#define CA3IE	PIE2,2
#define TX2IE	PIE2,1
#define RC2IE	PIE2,0
#define SPEN2	RCSTA2,7
#define RX92	RCSTA2,6
#define SREN2	RCSTA2,5
#define CREN2	RCSTA2,4
#define FERR2	RCSTA2,2
#define OERR2	RCSTA2,1
#define RX9D2	RCSTA2,0
#define CSRC2	TXSTA2,7
#define TX92	TXSTA2,6
#define TXEN2	TXSTA2,5
#define SYNC2	TXSTA2,4
#define TRMT2	TXSTA2,1
#define TX9D2	TXSTA2,0
#define RF7	PORTF,7
#define RF6	PORTF,6
#define RF5	PORTF,5
#define RF4	PORTF,4
#define RF3	PORTF,3
#define RF2	PORTF,2
#define RF1	PORTF,1
#define RF0	PORTF,0
#define DDRF7	DDRF,7
#define DDRF6	DDRF,6
#define DDRF5	DDRF,5
#define DDRF4	DDRF,4
#define DDRF3	DDRF,3
#define DDRF2	DDRF,2
#define DDRF1	DDRF,1
#define DDRF0	DDRF,0
#define RG7	PORTG,7
#define RG6	PORTG,6
#define RG5	PORTG,5
#define RG4	PORTG,4
#define RG3	PORTG,3
#define RG2	PORTG,2
#define RG1	PORTG,1
#define RG0	PORTG,0
#define DDRG7	DDRG,7
#define DDRG6	DDRG,6
#define DDRG5	DDRG,5
#define DDRG4	DDRG,4
#define DDRG3	DDRG,3
#define DDRG2	DDRG,2
#define DDRG1	DDRG,1
#define DDRG0	DDRG,0
#define CHS3	ADCON0,7
#define CHS2	ADCON0,6
#define CHS1	ADCON0,5
#define CHS0	ADCON0,4
#define GO	ADCON0,2
#define ADON	ADCON0,0
#define ADCS1	ADCON1,7
#define ADCS0	ADCON1,6
#define ADFM	ADCON1,5
#define PCFG3	ADCON1,3
#define PCFG2	ADCON1,2
#define PCFG1	ADCON1,1
#define PCFG0	ADCON1,0
#define WCOL	SSPCON1,7
#define SSPOV	SSPCON1,6
#define SSPEN	SSPCON1,5
#define CKP	SSPCON1,4
#define SSPM3	SSPCON1,3
#define SSPM2	SSPCON1,2
#define SSPM1	SSPCON1,1
#define SSPM0	SSPCON1,0
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
#define DC1PW3	PW3DCL,7
#define DC0PW3	PW3DCL,6
#define TM2PW3	PW3DCL,5
#define DC9PW3	PW3DCH,7
#define DC8PW3	PW3DCH,6
#define DC7PW3	PW3DCH,5
#define DC6PW3	PW3DCH,4
#define DC5PW3	PW3DCH,3
#define DC4PW3	PW3DCH,2
#define DC3PW3	PW3DCH,1
#define DC2PW3	PW3DCH,0
#define CA4OVF	TCON3,6
#define CA3OVF	TCON3,5
#define CA4ED1	TCON3,4
#define CA4ED0	TCON3,3
#define CA3ED1	TCON3,2
#define CA3ED0	TCON3,1
#define PWM3ON	TCON3,0
#if defined(_17C762) || defined(_17C766)
#define RH7	PORTH,7
#define RH6	PORTH,6
#define RH5	PORTH,5
#define RH4	PORTH,4
#define RH3	PORTH,3
#define RH2	PORTH,2
#define RH1	PORTH,1
#define RH0	PORTH,0
#define RJ7	PORTJ,7
#define RJ6	PORTJ,6
#define RJ5	PORTJ,5
#define RJ4	PORTJ,4
#define RJ3	PORTJ,3
#define RJ2	PORTJ,2
#define RJ1	PORTJ,1
#define RJ0	PORTJ,0
#define DDRH7	DDRH,7
#define DDRH6	DDRH,6
#define DDRH5	DDRH,5
#define DDRH4	DDRH,4
#define DDRH3	DDRH,3
#define DDRH2	DDRH,2
#define DDRH1	DDRH,1
#define DDRH0	DDRH,0
#define DDRJ7	DDRJ,7
#define DDRJ6	DDRJ,6
#define DDRJ5	DDRJ,5
#define DDRJ4	DDRJ,4
#define DDRJ3	DDRJ,3
#define DDRJ2	DDRJ,2
#define DDRJ1	DDRJ,1
#define DDRJ0	DDRJ,0
#endif
#if	0
#define FPMM2	TSTMD1,7
#define BODEN1	TSTMD1,6
#define ADTST	TSTMD1,0
#define TSTMUX	TSTMD2,7
#define FPMM1	TSTMD2,6
#define GLWP	TSTMD2,5
#define FPMM0	TSTMD2,4
#define NWDT1	TSTMD2,3
#define NWDT0	TSTMD2,2
#define SOSC1	TSTMD2,1
#define SOSC0	TSTMD2,0
#endif