
#ifndef	_HTC_H_
#warning Header file pic1267x.h included directly. Use #include <htc.h> instead.
#endif

/*
 *	Header file for the Microchip 
 *	PIC 12C671 chip
 *	PIC 12C672 chip
 *	PIC 12CE673 chip
 *	PIC 12CE674 chip
 *	Midrange Microcontrollers
 */

volatile unsigned char	INDF	@ 0x00;
volatile unsigned char	RTCC	@ 0x01;
volatile unsigned char	TMR0	@ 0x01;
volatile unsigned char	PCL	@ 0x02;
volatile unsigned char	STATUS	@ 0x03;
		unsigned char	FSR	@ 0x04;
volatile unsigned char	GPIO	@ 0x05;
		unsigned char	PCLATH	@ 0x0A;
volatile unsigned char	INTCON	@ 0x0B;
volatile unsigned char	PIR1	@ 0x0C;
volatile unsigned char	ADRES	@ 0x1E;
volatile unsigned char	ADCON0	@ 0x1F;

		unsigned char      	OPTION	@ 0x81;
volatile	unsigned char      	TRIS	@ 0x85;
volatile unsigned char      	PIE1	@ 0x8C;
volatile unsigned char      	PCON	@ 0x8E;
volatile unsigned char      	OSCCAL	@ 0x8F;
volatile unsigned char      	ADCON1	@ 0x9F;

/*	STATUS bits	*/
volatile bit	RP0	@ (unsigned)&STATUS*8+5;
volatile bit	TO	@ (unsigned)&STATUS*8+4;
volatile bit	PD	@ (unsigned)&STATUS*8+3;
volatile bit	ZERO	@ (unsigned)&STATUS*8+2;
volatile bit	DC	@ (unsigned)&STATUS*8+1;
volatile bit	CARRY	@ (unsigned)&STATUS*8+0;

/*	GPIO bits	*/
#if defined(_12CE673) || defined(_12CE674)
volatile bit	SCL	@ (unsigned)&GPIO*8+7;
volatile bit	SDA	@ (unsigned)&GPIO*8+6;
#endif
volatile bit	GP5	@ (unsigned)&GPIO*8+5;
volatile bit	GP4	@ (unsigned)&GPIO*8+4;
volatile bit	GP3	@ (unsigned)&GPIO*8+3;
volatile bit	GP2	@ (unsigned)&GPIO*8+2;
volatile bit	GP1	@ (unsigned)&GPIO*8+1;
volatile bit	GP0	@ (unsigned)&GPIO*8+0;

/*	INTCON bits	*/
volatile bit	GIE	@ (unsigned)&INTCON*8+7;
volatile bit	PEIE	@ (unsigned)&INTCON*8+6;
volatile bit	T0IE	@ (unsigned)&INTCON*8+5;
volatile bit	INTE	@ (unsigned)&INTCON*8+4;
volatile bit	GPIE	@ (unsigned)&INTCON*8+3;
volatile bit	T0IF	@ (unsigned)&INTCON*8+2;
volatile bit	INTF	@ (unsigned)&INTCON*8+1;
volatile bit	GPIF	@ (unsigned)&INTCON*8+0;

/*	PIR1 bits */
volatile bit	ADIF	@ (unsigned)&PIR1*8+6;

/*	ADCON0 bits	*/
volatile	bit	ADCS1	@ (unsigned)&ADCON0*8+7;
volatile	bit	ADCS0	@ (unsigned)&ADCON0*8+6;
volatile	bit	CHS1	@ (unsigned)&ADCON0*8+4;
volatile	bit	CHS0	@ (unsigned)&ADCON0*8+3;
volatile bit	GODONE	@ (unsigned)&ADCON0*8+2;
volatile	bit	ADON	@ (unsigned)&ADCON0*8+0;

/*	OPTION bits	*/
      bit	GPPU	@ (unsigned)&OPTION*8+7;
      bit	INTEDG	@ (unsigned)&OPTION*8+6;
      bit	T0CS	@ (unsigned)&OPTION*8+5;
      bit	T0SE	@ (unsigned)&OPTION*8+4;
      bit	PSA	@ (unsigned)&OPTION*8+3;
      bit	PS2	@ (unsigned)&OPTION*8+2;
      bit	PS1	@ (unsigned)&OPTION*8+1;
      bit	PS0	@ (unsigned)&OPTION*8+0;

/*      TRIS bits      */
volatile       bit        TRIS5  @ (unsigned)&TRIS*8+5;
volatile       bit        TRIS4  @ (unsigned)&TRIS*8+4;
volatile       bit        TRIS3  @ (unsigned)&TRIS*8+3;
volatile       bit        TRIS2  @ (unsigned)&TRIS*8+2;
volatile       bit        TRIS1  @ (unsigned)&TRIS*8+1;
volatile       bit        TRIS0  @ (unsigned)&TRIS*8+0;

/*	PIE1 bits	*/
volatile       bit	ADIE	@ (unsigned)&PIE1*8+6;

/*	PCON bits */
volatile	bit	POR	@ (unsigned)&PCON*8+1;

/*	OSCCAL bits */
#if defined(_12C671) || defined(_12C672)
volatile       bit	CAL3	@ (unsigned)&OSCCAL*8+7;
volatile       bit	CAL2	@ (unsigned)&OSCCAL*8+6;
volatile       bit	CAL1	@ (unsigned)&OSCCAL*8+5;
volatile       bit	CAL0	@ (unsigned)&OSCCAL*8+4;
volatile       bit	CALFST	@ (unsigned)&OSCCAL*8+3;
volatile       bit	CALSLW	@ (unsigned)&OSCCAL*8+2;
#elif defined(_12CE673) || defined(_12CE674)
volatile       bit	CAL5	@ (unsigned)&OSCCAL*8+7;
volatile       bit	CAL4	@ (unsigned)&OSCCAL*8+6;
volatile       bit	CAL3	@ (unsigned)&OSCCAL*8+5;
volatile       bit	CAL2	@ (unsigned)&OSCCAL*8+4;
volatile       bit	CAL1	@ (unsigned)&OSCCAL*8+3;
volatile       bit	CAL0	@ (unsigned)&OSCCAL*8+2;
#endif

/*	ADCON1 bits */
volatile       bit	PCFG2	@ (unsigned)&ADCON1*8+2;
volatile       bit	PCFG1	@ (unsigned)&ADCON1*8+1;
volatile       bit	PCFG0	@ (unsigned)&ADCON1*8+0;

/*	Calibration constant in ROM */

#if defined(_12C671) || defined(_12CE673) || defined(_12C672) || defined(_12CE674)
extern unsigned char __osccal_val(void);
#define	_READ_OSCCAL_DATA()	__osccal_val()
#endif

#define CONFIG_ADDR	0x2007

/*osc configurations*/
#define EXTRC		0x3FFF	// external resistor/capacitor with clockout on OSC2
#define EXTRCIO		0x3FFE	// external resistor/capacitor with OSC2 as I/O
#define INTRC		0x3FFD	// internal 4MHz oscillator, clockout on OSC2 
#define INTRCIO		0x3FFC	// internal 4MHz oscillator, OSC2 as I/O
#define HS		0x3FFA	// high speed crystal/resonator
#define XT		0x3FF9	// crystal resonator
#define LP		0x3FF8	// low power crystal

/*watchdog*/
#define WDTEN		0x3FFF	// enable watchdog timer
#define WDTDIS		0x3FF7	// disable watchdog timer

/*code protection*/
#define PROTECT		0x009F	// protect all code blocks
#define PROTECT75	0x15BF	// protect 200h - 7FEh
#if !defined(_12C671) && !defined(_12CE673)
#define PROTECT50	0x2ADF	// protect 400h - 7FEh
#endif
#define UNPROTECT	0x3FFF	// no code protection

/*MCLRE*/
#define MCLRN		0x3FFF	// use alternative definition
//alternatively
#define MCLREN		0x3FFF	// enable master clear
#define MCLRDIS		0x3F7F	// disable master clear

/*power up timer*/
#define PWRTEN		0x3FEF	// enable power up timer
#define PWRTDIS		0x3FFF	// disable power up timer
