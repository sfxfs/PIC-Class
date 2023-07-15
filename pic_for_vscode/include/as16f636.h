
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic16f636.h.

; NOTE: PICC assembler option -P is required to preprocess assembler sources. 

; Special Function Register definitions
INDF		equ	000h
TMR0		equ	001h
PCL		equ	002h
STATUS		equ	003h
FSR		equ	004h
PORTA		equ	005h
PORTC		equ	007h
GPIO		equ	005h
PCLATH		equ	00Ah
INTCON		equ	00Bh
PIR1		equ	00Ch
TMR1L		equ	00Eh
TMR1H		equ	00Fh
T1CON		equ	010h
WDTCON		equ	018h
CMCON0		equ	019h
CMCON1		equ	01Ah
OPTION_REG		equ	081h
TRIS_REGA		equ	085h
TRIS_REGC		equ	087h
TRIS_REGIO		equ	085h
PIE1		equ	08Ch
PCON		equ	08Eh
OSCCON		equ	08Fh
OSCTUNE		equ	090h
LVDCON		equ	094h
WPUDA		equ	095h
IOCA		equ	096h
WDA		equ	097h
VRCON		equ	099h
EEDAT		equ	09Ah
EEDATA		equ	09Ah
EEADR		equ	09Bh
EEADRL		equ	09Bh
EECON1		equ	09Ch
EECON2		equ	09Dh
CRCON		equ	0110h
CRDAT0		equ	0111h
CRDAT1		equ	0112h
CRDAT2		equ	0113h
CRDAT3		equ	0114h

; Bit variables associates within SFRs
#ifndef	_HTC_H_
#endif
#ifndef	__PIC16F636_H
#if defined(_16F636) || defined(_16F639)
#endif
#if defined(_16F636) || defined(_16F639)
#endif
#define CARRY	STATUS,0
#define DC	STATUS,1
#define ZERO	STATUS,2
#define PD	STATUS,3
#define TO	STATUS,4
#define RP0	STATUS,5
#define RP1	STATUS,6
#define IRP	STATUS,7
#if defined(_16F636) || defined(_16F639)
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
#define GP0	GPIO,0
#define GP1	GPIO,1
#define GP2	GPIO,2
#define GP3	GPIO,3
#define GP4	GPIO,4
#define GP5	GPIO,5
#endif
#define RAIF	INTCON,0
#define INTF	INTCON,1
#define T0IF	INTCON,2
#define RAIE	INTCON,3
#define INTE	INTCON,4
#define T0IE	INTCON,5
#define PEIE	INTCON,6
#define GIE	INTCON,7
#define TMR1IF	PIR1,0
#define OSFIF	PIR1,2
#define C1IF	PIR1,3
#if defined(_16F636) || defined(_16F639)
#define C2IF	PIR1,4
#endif
#define CRIF	PIR1,5
#define LVDIF	PIR1,6
#define EEIF	PIR1,7
#define TMR1ON	T1CON,0
#define TMR1CS	T1CON,1
#define T1SYNC	T1CON,2
#define T1OSCEN	T1CON,3
#define T1CKPS0	T1CON,4
#define T1CKPS1	T1CON,5
#define TMR1GE	T1CON,6
#define T1GINV	T1CON,7
#define SWDTEN	WDTCON,0
#define WDTPS0	WDTCON,1
#define WDTPS1	WDTCON,2
#define WDTPS2	WDTCON,3
#define WDTPS3	WDTCON,4
#define CM0	CMCON0,0
#define CM1	CMCON0,1
#define CM2	CMCON0,2
#define CIS	CMCON0,3
#define C1INV	CMCON0,4
#if defined(_16F636) || defined(_16F639)
#define C2INV	CMCON0,5
#endif
#define C1OUT	CMCON0,6
#if defined(_16F636) || defined(_16F639)
#define C2OUT	CMCON0,7
#endif
#define C2SYNC	CMCON1,0
#define T1GSS	CMCON1,1
#define PS0	OPTION_REG,0
#define PS1	OPTION_REG,1
#define PS2	OPTION_REG,2
#define PSA	OPTION_REG,3
#define T0SE	OPTION_REG,4
#define T0CS	OPTION_REG,5
#define INTEDG	OPTION_REG,6
#define RAPU	OPTION_REG,7
#if defined(_16F636) || defined(_16F639)
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
#define TRIS_REGIO0	TRIS_REGIO,0
#define TRIS_REGIO1	TRIS_REGIO,1
#define TRIS_REGIO2	TRIS_REGIO,2
#define TRIS_REGIO3	TRIS_REGIO,3
#define TRIS_REGIO4	TRIS_REGIO,4
#define TRIS_REGIO5	TRIS_REGIO,5
#endif
#define TMR1IE	PIE1,0
#define OSFIE	PIE1,2
#define C1IE	PIE1,3
#if defined(_16F636) || defined(_16F639)
#define C2IE	PIE1,4
#endif
#define CRIE	PIE1,5
#define LVDIE	PIE1,6
#define EEIE	PIE1,7
#define BOD	PCON,0
#define POR	PCON,1
#define WUR	PCON,3
#define SBODEN	PCON,4
#define ULPWUE	PCON,5
#define SCS	OSCCON,0
#define LTS	OSCCON,1
#define HTS	OSCCON,2
#define OSTS	OSCCON,3
#define IRCF0	OSCCON,4
#define IRCF1	OSCCON,5
#define IRCF2	OSCCON,6
#define TUN0	OSCTUNE,0
#define TUN1	OSCTUNE,1
#define TUN2	OSCTUNE,2
#define TUN3	OSCTUNE,3
#define TUN4	OSCTUNE,4
#define LVDL0	LVDCON,0
#define LVDL1	LVDCON,1
#define LVDL2	LVDCON,2
#define LVDEN	LVDCON,4
#define IRVST	LVDCON,5
#define WPUDA0	WPUDA,0
#define WPUDA1	WPUDA,1
#define WPUDA2	WPUDA,2
#define WPUDA4	WPUDA,4
#define WPUDA5	WPUDA,5
#define IOCA0	IOCA,0
#define IOCA1	IOCA,1
#define IOCA2	IOCA,2
#define IOCA3	IOCA,3
#define IOCA4	IOCA,4
#define IOCA5	IOCA,5
#define WDA0	WDA,0
#define WDA1	WDA,1
#define WDA2	WDA,2
#define WDA4	WDA,4
#define WDA5	WDA,5
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
#define CRREG0	CRCON,0
#define CRREG1	CRCON,1
#define ENCDEC	CRCON,6
#define GODONE	CRCON,7
#endif
