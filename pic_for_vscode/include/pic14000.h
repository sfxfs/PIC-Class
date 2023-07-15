
#ifndef	_HTC_H_
#warning Header file pic14000.h included directly. Use #include <htc.h> instead.
#endif

/* 
 *	Header file for the Microchip :
 * 	PIC 14000 chip
 *	Midrange Microcontroller
 */

volatile unsigned char	INDF	@ 0x00;
volatile unsigned char	TMR0	@ 0x01;
volatile unsigned char	PCL	@ 0x02;
volatile unsigned char	STATUS	@ 0x03;
		unsigned char	FSR	@ 0x04;
volatile unsigned char	PORTA	@ 0x05;
volatile unsigned char	PORTC	@ 0x07;
volatile unsigned char	PORTD	@ 0x08;
		unsigned char	PCLATH	@ 0x0A;
volatile unsigned char	INTCON	@ 0x0B;
volatile unsigned char	PIR1	@ 0x0C;
volatile unsigned char	ADTMRL	@ 0x0E;
volatile unsigned char	ADTMRH	@ 0x0F;
volatile unsigned char	I2CBUF	@ 0x13;
volatile unsigned char	I2CCON	@ 0x14;
volatile unsigned short	ADCAP	@ 0x15;
volatile unsigned char	ADCAPL	@ 0x15;
volatile unsigned char	ADCAPH	@ 0x16;
volatile unsigned char	ADCON0	@ 0x1F;

		unsigned char      	OPTION	@ 0x81;
volatile	unsigned char      	TRISA	@ 0x85;
volatile	unsigned char      	TRISC	@ 0x87;
volatile	unsigned char      	TRISD	@ 0x88;
volatile unsigned char      	PIE1	@ 0x8C;
volatile unsigned char      	PCON	@ 0x8E;
volatile unsigned char      	SLPCON	@ 0x8F;
volatile unsigned char      	I2CADD	@ 0x93;
volatile unsigned char      	I2CSTAT	@ 0x94;
volatile unsigned char      	PREFA	@ 0x9B;
volatile unsigned char      	PREFB	@ 0x9C;
volatile unsigned char      	CMCON	@ 0x9D;
volatile unsigned char      	MISC	@ 0x9E;
volatile unsigned char      	ADCON1	@ 0x9F;

/*	STATUS bits	*/
volatile bit	RP0	@ (unsigned)&STATUS*8+5;
volatile bit	TO	@ (unsigned)&STATUS*8+4;
volatile bit	PD	@ (unsigned)&STATUS*8+3;
volatile bit	ZERO	@ (unsigned)&STATUS*8+2;
volatile bit	DC	@ (unsigned)&STATUS*8+1;
volatile bit	CARRY	@ (unsigned)&STATUS*8+0;

/*      PORTA bits      */
volatile bit      RA7     @ (unsigned)&PORTA*8+7;
volatile bit      RA6     @ (unsigned)&PORTA*8+6;
volatile bit      RA5     @ (unsigned)&PORTA*8+5;
volatile bit      RA4     @ (unsigned)&PORTA*8+4;
volatile bit      RA3     @ (unsigned)&PORTA*8+3;
volatile bit      RA2     @ (unsigned)&PORTA*8+2;
volatile bit      RA1     @ (unsigned)&PORTA*8+1;
volatile bit      RA0     @ (unsigned)&PORTA*8+0;

/*      PORTC bits      */
volatile bit      RC7     @ (unsigned)&PORTC*8+7;
volatile bit      RC6     @ (unsigned)&PORTC*8+6;
volatile bit      RC5     @ (unsigned)&PORTC*8+5;
volatile bit      RC4     @ (unsigned)&PORTC*8+4;
volatile bit      RC3     @ (unsigned)&PORTC*8+3;
volatile bit      RC2     @ (unsigned)&PORTC*8+2;
volatile bit      RC1     @ (unsigned)&PORTC*8+1;
volatile bit      RC0     @ (unsigned)&PORTC*8+0;

/*      PORTD bits      */
volatile bit      RD7     @ (unsigned)&PORTD*8+7;
volatile bit      RD6     @ (unsigned)&PORTD*8+6;
volatile	bit      RD5     @ (unsigned)&PORTD*8+5;
volatile bit      RD4     @ (unsigned)&PORTD*8+4;
volatile bit      RD3     @ (unsigned)&PORTD*8+3;
volatile bit      RD2     @ (unsigned)&PORTD*8+2;
volatile bit      RD1     @ (unsigned)&PORTD*8+1;
volatile bit      RD0     @ (unsigned)&PORTD*8+0;

/*	INTCON bits	*/
volatile	bit	GIE	@ (unsigned)&INTCON*8+7;
volatile	bit	PEIE	@ (unsigned)&INTCON*8+6;
volatile bit	T0IE	@ (unsigned)&INTCON*8+5;
volatile bit	T0IF	@ (unsigned)&INTCON*8+2;

/*	PIR1 bits	*/
volatile bit	CMIF	@ (unsigned)&PIR1*8+7;
volatile bit	PBIF	@ (unsigned)&PIR1*8+4;
volatile bit	I2CIF	@ (unsigned)&PIR1*8+3;
volatile bit	RCIF	@ (unsigned)&PIR1*8+2;
volatile bit	ADCIF	@ (unsigned)&PIR1*8+1;
volatile bit	OVFIF	@ (unsigned)&PIR1*8+0;

/*	I2CCON bits	*/
volatile bit	WCOL	@ (unsigned)&I2CCON*8+7;
volatile bit	I2COV	@ (unsigned)&I2CCON*8+6;
volatile bit	I2CEN	@ (unsigned)&I2CCON*8+5;
volatile bit	CKP	@ (unsigned)&I2CCON*8+4;
volatile bit	I2CM3	@ (unsigned)&I2CCON*8+3;
volatile bit	I2CM2	@ (unsigned)&I2CCON*8+2;
volatile bit	I2CM1	@ (unsigned)&I2CCON*8+1;
volatile bit	I2CM0	@ (unsigned)&I2CCON*8+0;

/*	ADCON0 bits	*/
volatile bit	ADCS3	@ (unsigned)&ADCON0*8+7;
volatile bit	ADCS2	@ (unsigned)&ADCON0*8+6;
volatile bit	ADCS1	@ (unsigned)&ADCON0*8+5;
volatile bit	ADCS0	@ (unsigned)&ADCON0*8+4;
volatile bit	AMUXOE	@ (unsigned)&ADCON0*8+2;
volatile bit	ADRST	@ (unsigned)&ADCON0*8+1;
volatile bit	ADZERO	@ (unsigned)&ADCON0*8+0;

/*	OPTION bits	*/
      bit	RCPU	@ (unsigned)&OPTION*8+7;
      bit	T0CS	@ (unsigned)&OPTION*8+5;
      bit	T0SE	@ (unsigned)&OPTION*8+4;
      bit	PSA	@ (unsigned)&OPTION*8+3;
      bit	PS2	@ (unsigned)&OPTION*8+2;
      bit	PS1	@ (unsigned)&OPTION*8+1;
      bit	PS0	@ (unsigned)&OPTION*8+0;

/*      TRISA bits      */
volatile       bit        TRISA7  @ (unsigned)&TRISA*8+7;
volatile       bit        TRISA6  @ (unsigned)&TRISA*8+6;
volatile       bit        TRISA5  @ (unsigned)&TRISA*8+5;
volatile       bit        TRISA4  @ (unsigned)&TRISA*8+4;
volatile       bit        TRISA3  @ (unsigned)&TRISA*8+3;
volatile       bit        TRISA2  @ (unsigned)&TRISA*8+2;
volatile       bit        TRISA1  @ (unsigned)&TRISA*8+1;
volatile       bit        TRISA0  @ (unsigned)&TRISA*8+0;

/*      TRISC bits      */
volatile       bit        TRISC7  @ (unsigned)&TRISC*8+7;
volatile       bit        TRISC6  @ (unsigned)&TRISC*8+6;
volatile       bit        TRISC5  @ (unsigned)&TRISC*8+5;
volatile       bit        TRISC4  @ (unsigned)&TRISC*8+4;
volatile       bit        TRISC3  @ (unsigned)&TRISC*8+3;
volatile       bit        TRISC2  @ (unsigned)&TRISC*8+2;
volatile       bit        TRISC1  @ (unsigned)&TRISC*8+1;
volatile       bit        TRISC0  @ (unsigned)&TRISC*8+0;

/*      TRISD bits      */
volatile       bit        TRISD7  @ (unsigned)&TRISD*8+7;
volatile       bit        TRISD6  @ (unsigned)&TRISD*8+6;
volatile       bit        TRISD5  @ (unsigned)&TRISD*8+5;
volatile       bit        TRISD4  @ (unsigned)&TRISD*8+4;
volatile       bit        TRISD3  @ (unsigned)&TRISD*8+3;
volatile       bit        TRISD2  @ (unsigned)&TRISD*8+2;
volatile       bit        TRISD1  @ (unsigned)&TRISD*8+1;
volatile       bit        TRISD0  @ (unsigned)&TRISD*8+0;

/*	PIE1 bits	*/
volatile       bit	CMIE	@ (unsigned)&PIE1*8+7;
volatile       bit	PBIE	@ (unsigned)&PIE1*8+4;
volatile       bit	I2CIE	@ (unsigned)&PIE1*8+3;
volatile       bit	RCIE	@ (unsigned)&PIE1*8+2;
volatile       bit	ADCIE	@ (unsigned)&PIE1*8+1;
volatile       bit	OVFIE	@ (unsigned)&PIE1*8+0;

/*	PCON bits	*/
volatile	      bit	POR	@ (unsigned)&PCON*8+1;
volatile       bit	LVD	@ (unsigned)&PCON*8+0;

/*	SLPCON bits	*/
volatile       bit	HIBEN	@ (unsigned)&SLPCON*8+7;
volatile       bit	REFOFF	@ (unsigned)&SLPCON*8+5;
volatile       bit	LSOFF	@ (unsigned)&SLPCON*8+4;
volatile       bit	OSCOFF	@ (unsigned)&SLPCON*8+3;
volatile       bit	CMOFF	@ (unsigned)&SLPCON*8+2;
volatile       bit	TEMPOFF	@ (unsigned)&SLPCON*8+1;
volatile       bit	ADOFF	@ (unsigned)&SLPCON*8+0;

/*	I2CSTAT bits	*/
volatile       bit	DA	@ (unsigned)&I2CSTAT*8+5;
volatile       bit	STOP	@ (unsigned)&I2CSTAT*8+4;
volatile       bit	START	@ (unsigned)&I2CSTAT*8+3;
volatile       bit	RW	@ (unsigned)&I2CSTAT*8+2;
volatile       bit	UA	@ (unsigned)&I2CSTAT*8+1;
volatile       bit	BF	@ (unsigned)&I2CSTAT*8+0;
#ifdef __STAT_BACKWARD_COMPATIBILITY
#define STAT_DA	DA
#define STAT_P	STOP
#define STAT_S	START
#define STAT_RW	RW
#define STAT_UA	UA
#define STAT_BF	BF
#endif

/*	PREFA bits	*/
volatile       bit	PRA7	@ (unsigned)&PREFA*8+7;
volatile       bit	PRA6	@ (unsigned)&PREFA*8+6;
volatile       bit	PRA5	@ (unsigned)&PREFA*8+5;
volatile       bit	PRA4	@ (unsigned)&PREFA*8+4;
volatile       bit	PRA3	@ (unsigned)&PREFA*8+3;
volatile       bit	PRA2	@ (unsigned)&PREFA*8+2;
volatile       bit	PRA1	@ (unsigned)&PREFA*8+1;
volatile       bit	PRA0	@ (unsigned)&PREFA*8+0;

/*	PREFB bits	*/
volatile       bit	PRB7	@ (unsigned)&PREFB*8+7;
volatile       bit	PRB6	@ (unsigned)&PREFB*8+6;
volatile       bit	PRB5	@ (unsigned)&PREFB*8+5;
volatile       bit	PRB4	@ (unsigned)&PREFB*8+4;
volatile       bit	PRB3	@ (unsigned)&PREFB*8+3;
volatile       bit	PRB2	@ (unsigned)&PREFB*8+2;
volatile       bit	PRB1	@ (unsigned)&PREFB*8+1;
volatile       bit	PRB0	@ (unsigned)&PREFB*8+0;

/*	CMCON bits	*/
volatile       bit	CMBOUT	@ (unsigned)&CMCON*8+6;
volatile       bit	CMBOE	@ (unsigned)&CMCON*8+5;
volatile       bit	CPOLB	@ (unsigned)&CMCON*8+4;
volatile       bit	CMAOUT	@ (unsigned)&CMCON*8+2;
volatile       bit	CMAOE	@ (unsigned)&CMCON*8+1;
volatile       bit	CPOLA	@ (unsigned)&CMCON*8+0;

/*	MISC bits	*/
volatile       bit	SMHOG	@ (unsigned)&MISC*8+7;
volatile       bit	SPGNDB	@ (unsigned)&MISC*8+6;
volatile       bit	SPGNDA	@ (unsigned)&MISC*8+5;
volatile       bit	I2CSEL	@ (unsigned)&MISC*8+4;
volatile       bit	SMBUS	@ (unsigned)&MISC*8+3;
volatile       bit	INCLKEN	@ (unsigned)&MISC*8+2;
volatile       bit	OSC2	@ (unsigned)&MISC*8+1;
volatile       bit	OSC1	@ (unsigned)&MISC*8+0;

/*	ADCON1 bits	*/
volatile       bit	ADDAC3	@ (unsigned)&ADCON1*8+7;
volatile       bit	ADDAC2	@ (unsigned)&ADCON1*8+6;
volatile       bit	ADDAC1	@ (unsigned)&ADCON1*8+5;
volatile       bit	ADDAC0	@ (unsigned)&ADCON1*8+4;
volatile       bit	PCFG3	@ (unsigned)&ADCON1*8+3;
volatile       bit	PCFG2	@ (unsigned)&ADCON1*8+2;
volatile       bit	PCFG1	@ (unsigned)&ADCON1*8+1;
volatile       bit	PCFG0	@ (unsigned)&ADCON1*8+0;

#define CONFIG_ADDR	0x2007
/*osc configuration*/
#define INT		0x3FFF	// internal 4MHz oscillator
#define HS		0x3FFE	// high speed crystal/resonator

/*watchdog*/
#define WTDTEN		0x3FFF	//use alternate definition
#define WDTEDIS		0x3FFB	//use alternate definition
// alternate definitions
#define WDTEN		0x3FFF	// enable watchdog timer
#define WDTDIS		0x3FFB	// disable watchdog timer

/*power up timer*/
#define PWRTEN		0x3FFB	// enable power up timer
#define PWRTDIS		0x3FFF	// disable power up timer

/*Calibration Space Code Protection*/
#define CPROTECT	0x3F7F	// protect the calibration space
#define CUNPROTECT	0x3FFF	// do not protect the calibration space

/*code protection*/
#define UNPROTECT	0x3FFF	// do not protect the code
#define PROTECT		0x3FCF	// protect the code

/*      ADC calibration data etc. Access with get_cal_data, e.g.
 *
 *      x = get_cal_data(KREF);
 *
 */

extern double get_cal_data(const unsigned char *);

const unsigned char      KREF[4]    @ 0xFC0;     /* Slope reference ratio */
const unsigned char      KBG[4]     @ 0xFC4;     /* Bandgap reference voltage */
const unsigned char      VTHERM[4]  @ 0xFC8;     /* Temperature sensor voltage */
const unsigned char      KTC[4]     @ 0xFCC;     /* Temperature sensor coefficient */
const unsigned char      OSCM       @ 0xFD0;     /* Oscillator freq. multiplier */
const unsigned char      TWDT       @ 0xFD2;     /* WDT time-out */

