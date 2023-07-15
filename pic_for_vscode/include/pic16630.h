
#ifndef	_HTC_H_
#warning Header file pic16630.h included directly. Use #include <htc.h> instead.
#endif


 /* header file for the MICROCHIP PIC microcontrollers
  * PIC16F630
  * PIC16F676
 */

#ifndef	__PIC16630_H
#define	__PIC16630_H

// Special function register definitions

volatile       unsigned char	INDF		@ 0x00;
volatile       unsigned char	TMR0		@ 0x01;
volatile       unsigned char	PCL		@ 0x02;
volatile       unsigned char	STATUS		@ 0x03;
               unsigned char	FSR		@ 0x04;
volatile       unsigned char	PORTA		@ 0x05;
volatile       unsigned char	PORTC		@ 0x07;
volatile       unsigned char	PCLATH		@ 0x0A;
volatile       unsigned char	INTCON		@ 0x0B;
volatile       unsigned char	PIR1		@ 0x0C;
volatile       unsigned char	TMR1L		@ 0x0E;
volatile       unsigned char	TMR1H		@ 0x0F;
volatile       unsigned char	T1CON		@ 0x10;
volatile       unsigned char	CMCON		@ 0x19;
#if defined(_16F676)
volatile       unsigned char	ADRESH		@ 0x1E;
volatile       unsigned char	ADCON0		@ 0x1F;
#endif
               unsigned char	OPTION		@ 0x81;
volatile       unsigned char	TRISA		@ 0x85;
volatile       unsigned char	TRISC		@ 0x87;
               unsigned char	PIE1		@ 0x8C;
volatile       unsigned char	PCON		@ 0x8E;
               unsigned char	OSCCAL		@ 0x90;
#if defined(_16F676)
               unsigned char	ANSEL		@ 0x91;
#endif
               unsigned char	WPUA		@ 0x95;
               unsigned char	IOCA		@ 0x96;
               unsigned char	VRCON		@ 0x99;
volatile       unsigned char	EEDAT		@ 0x9A;
// alternate definition
volatile       unsigned char	EEDATA		@ 0x9A;
volatile       unsigned char	EEADR		@ 0x9B;
volatile       unsigned char	EECON1		@ 0x9C;
volatile       unsigned char	EECON2		@ 0x9D;
#if defined(_16F676)
volatile       unsigned char	ADRESL		@ 0x9E;
               unsigned char	ADCON1		@ 0x9F;
#endif


/* Definitions for STATUS register */
volatile       bit	CARRY	@((unsigned)&STATUS*8)+0;
volatile       bit	DC	@((unsigned)&STATUS*8)+1;
volatile       bit	ZERO	@((unsigned)&STATUS*8)+2;
volatile       bit	PD	@((unsigned)&STATUS*8)+3;
volatile       bit	TO	@((unsigned)&STATUS*8)+4;
               bit	RP0	@((unsigned)&STATUS*8)+5;

/* Definitions for PORTA register */
volatile       bit	RA0	@((unsigned)&PORTA*8)+0;
volatile       bit	RA1	@((unsigned)&PORTA*8)+1;
volatile       bit	RA2	@((unsigned)&PORTA*8)+2;
volatile       bit	RA3	@((unsigned)&PORTA*8)+3;
volatile       bit	RA4	@((unsigned)&PORTA*8)+4;
volatile       bit	RA5	@((unsigned)&PORTA*8)+5;

/* Definitions for PORTC register */
volatile       bit	RC0	@((unsigned)&PORTC*8)+0;
volatile       bit	RC1	@((unsigned)&PORTC*8)+1;
volatile       bit	RC2	@((unsigned)&PORTC*8)+2;
volatile       bit	RC3	@((unsigned)&PORTC*8)+3;
volatile       bit	RC4	@((unsigned)&PORTC*8)+4;
volatile       bit	RC5	@((unsigned)&PORTC*8)+5;

/* Definitions for INTCON register */
volatile       bit	RAIF	@((unsigned)&INTCON*8)+0;
volatile       bit	INTF	@((unsigned)&INTCON*8)+1;
volatile       bit	T0IF	@((unsigned)&INTCON*8)+2;
               bit	RAIE	@((unsigned)&INTCON*8)+3;
               bit	INTE	@((unsigned)&INTCON*8)+4;
               bit	T0IE	@((unsigned)&INTCON*8)+5;
               bit	PEIE	@((unsigned)&INTCON*8)+6;
volatile bit	GIE	@((unsigned)&INTCON*8)+7;

/* Definitions for PIR1 register */
volatile       bit	TMR1IF	@((unsigned)&PIR1*8)+0;
volatile       bit	CMIF	@((unsigned)&PIR1*8)+3;
#if defined(_16F676)
volatile       bit	ADIF	@((unsigned)&PIR1*8)+6;
#endif
volatile       bit	EEIF	@((unsigned)&PIR1*8)+7;

/* Definitions for T1CON register */
               bit	TMR1ON	@((unsigned)&T1CON*8)+0;
               bit	TMR1CS	@((unsigned)&T1CON*8)+1;
               bit	T1SYNC	@((unsigned)&T1CON*8)+2;
               bit	T1OSCEN	@((unsigned)&T1CON*8)+3;
               bit	T1CKPS0	@((unsigned)&T1CON*8)+4;
               bit	T1CKPS1	@((unsigned)&T1CON*8)+5;
               bit	T1GE	@((unsigned)&T1CON*8)+6;
// alternate definition
               bit	TMR1GE	@((unsigned)&T1CON*8)+6;

/* Definitions for CMCON register */
               bit	CM0	@((unsigned)&CMCON*8)+0;
               bit	CM1	@((unsigned)&CMCON*8)+1;
               bit	CM2	@((unsigned)&CMCON*8)+2;
               bit	CIS	@((unsigned)&CMCON*8)+3;
               bit	CINV	@((unsigned)&CMCON*8)+4;
volatile       bit	COUT	@((unsigned)&CMCON*8)+6;

#if defined(_16F676)
/* Definitions for ADCON0 register */
               bit	ADON	@((unsigned)&ADCON0*8)+0;
volatile       bit	GODONE	@((unsigned)&ADCON0*8)+1;
               bit	CHS0	@((unsigned)&ADCON0*8)+2;
               bit	CHS1	@((unsigned)&ADCON0*8)+3;
               bit	CHS2	@((unsigned)&ADCON0*8)+4;
               bit	VCFG	@((unsigned)&ADCON0*8)+6;
               bit	ADFM	@((unsigned)&ADCON0*8)+7;
#endif

/* Definitions for OPTION register */
               bit	PS0	@((unsigned)&OPTION*8)+0;
               bit	PS1	@((unsigned)&OPTION*8)+1;
               bit	PS2	@((unsigned)&OPTION*8)+2;
               bit	PSA	@((unsigned)&OPTION*8)+3;
               bit	T0SE	@((unsigned)&OPTION*8)+4;
               bit	T0CS	@((unsigned)&OPTION*8)+5;
               bit	INTEDG	@((unsigned)&OPTION*8)+6;
               bit	RAPU	@((unsigned)&OPTION*8)+7;

/* Definitions for TRISA register */
volatile       bit	TRISA0	@((unsigned)&TRISA*8)+0;
volatile       bit	TRISA1	@((unsigned)&TRISA*8)+1;
volatile       bit	TRISA2	@((unsigned)&TRISA*8)+2;
volatile       bit	TRISA3	@((unsigned)&TRISA*8)+3;
volatile       bit	TRISA4	@((unsigned)&TRISA*8)+4;
volatile       bit	TRISA5	@((unsigned)&TRISA*8)+5;

/* Definitions for TRISC register */
volatile       bit	TRISC0	@((unsigned)&TRISC*8)+0;
volatile       bit	TRISC1	@((unsigned)&TRISC*8)+1;
volatile       bit	TRISC2	@((unsigned)&TRISC*8)+2;
volatile       bit	TRISC3	@((unsigned)&TRISC*8)+3;
volatile       bit	TRISC4	@((unsigned)&TRISC*8)+4;
volatile       bit	TRISC5	@((unsigned)&TRISC*8)+5;

/* Definitions for PIE1 register */
               bit	TMR1IE	@((unsigned)&PIE1*8)+0;
               bit	CMIE	@((unsigned)&PIE1*8)+3;
#if defined(_16F676)
               bit	ADIE	@((unsigned)&PIE1*8)+6;
#endif
               bit	EEIE	@((unsigned)&PIE1*8)+7;

/* Definitions for PCON register */
volatile       bit	BOR	@((unsigned)&PCON*8)+0;
volatile       bit	POR	@((unsigned)&PCON*8)+1;

/* Definitions for OSCCAL register */
               bit	CAL0	@((unsigned)&OSCCAL*8)+2;
               bit	CAL1	@((unsigned)&OSCCAL*8)+3;
               bit	CAL2	@((unsigned)&OSCCAL*8)+4;
               bit	CAL3	@((unsigned)&OSCCAL*8)+5;
               bit	CAL4	@((unsigned)&OSCCAL*8)+6;
               bit	CAL5	@((unsigned)&OSCCAL*8)+7;

#if defined(_16F676)
/* Definitions for ANSEL register */
               bit	ANS0	@((unsigned)&ANSEL*8)+0;
               bit	ANS1	@((unsigned)&ANSEL*8)+1;
               bit	ANS2	@((unsigned)&ANSEL*8)+2;
               bit	ANS3	@((unsigned)&ANSEL*8)+3;
               bit	ANS4	@((unsigned)&ANSEL*8)+4;
               bit	ANS5	@((unsigned)&ANSEL*8)+5;
               bit	ANS6	@((unsigned)&ANSEL*8)+6;
               bit	ANS7	@((unsigned)&ANSEL*8)+7;
#endif

/* Definitions for WPUA register */
               bit	WPUA0	@((unsigned)&WPUA*8)+0;
               bit	WPUA1	@((unsigned)&WPUA*8)+1;
               bit	WPUA2	@((unsigned)&WPUA*8)+2;
               bit	WPUA4	@((unsigned)&WPUA*8)+4;
               bit	WPUA5	@((unsigned)&WPUA*8)+5;

/* Definitions for IOCA register */
               bit	IOCA0	@((unsigned)&IOCA*8)+0;
               bit	IOCA1	@((unsigned)&IOCA*8)+1;
               bit	IOCA2	@((unsigned)&IOCA*8)+2;
               bit	IOCA3	@((unsigned)&IOCA*8)+3;
               bit	IOCA4	@((unsigned)&IOCA*8)+4;
               bit	IOCA5	@((unsigned)&IOCA*8)+5;

/* Definitions for VRCON register */
               bit	VR0	@((unsigned)&VRCON*8)+0;
               bit	VR1	@((unsigned)&VRCON*8)+1;
               bit	VR2	@((unsigned)&VRCON*8)+2;
               bit	VR3	@((unsigned)&VRCON*8)+3;
               bit	VRR	@((unsigned)&VRCON*8)+5;
               bit	VREN	@((unsigned)&VRCON*8)+7;

/* Definitions for EECON1 register */
volatile       bit	RD	@((unsigned)&EECON1*8)+0;
volatile       bit	WR	@((unsigned)&EECON1*8)+1;
volatile       bit	WREN	@((unsigned)&EECON1*8)+2;
volatile       bit	WRERR	@((unsigned)&EECON1*8)+3;

#if defined(_16F676)
/* Definitions for ADCON1 register */
               bit	ADCS0	@((unsigned)&ADCON1*8)+4;
               bit	ADCS1	@((unsigned)&ADCON1*8)+5;
               bit	ADCS2	@((unsigned)&ADCON1*8)+6;
#endif

extern unsigned char __osccal_val(void);
#define	_READ_OSCCAL_DATA()	__osccal_val()


#define CONFIG_ADDR	0x2007
// Configuration Mask Definitions
// bandgap calibration
#define BGHIGH		0x3FFF	// highest bandgap voltage
#define BGLOW		0x0FFF	// lowest bandgap volatage
// data code protection
#define CPD		0x3EFF	// protect data memory
#define UNPROTECT	0x3FFF	// do not protect memory
// code protection
#define CPROTECT	0x3F7F	// protect program memory
// brown-out detect enable
#define BOREN		0x3FFF	// brown-out reset enabled
#define BORDIS		0x3FBF	// brown-out reset disabled
// RA3/MCLR pin function select
#define MCLREN		0x3FFF	// MCLR pin function enabled
#define MCLRDIS		0x3FDF	// MCLR pin function disabled
// power-up timer enable
#define PWRTEN		0x3FEF	// power-up timer enabled
#define PWRTDIS		0x3FFF	// power-up timer disabled
// watchdog timer enable
#define WDTEN		0x3FFF	// watchdog timer enabled
#define WDTDIS		0x3FF7	// watchdog timer disabled
// oscillator selection
#define RCCLKO		0x3FFF	// RC osc, RA4 pin is CLKOUT
#define RCIO		0x3FFE	// RC osc, RA4 pin is IO
#define INTOSCCLKO	0x3FFD	// INTOSC, RA4 pin is CLKOUT
#define INTOSCIO	0x3FFC	// INTOSC, RA4 pin is IO
#define EC		0x3FFB	// external clock
#define HS		0x3FFA	// high speed XTAL/resonator
#define XT		0x3FF9	// XTAL/resonator
#define LP		0x3FF8	// low power XTAL/resonator

#endif
