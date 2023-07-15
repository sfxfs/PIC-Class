
; HI-TECH Software PICC Assembler header file.
; Definitions based on C header file: pic7695x.h.

; NOTE: PICC assembler option -P is required to preprocess assembler sources. 

; Special Function Register definitions
INDF		equ	000h
PCL		equ	002h
STATUS		equ	003h
STAT		equ	003h
FSR		equ	004h
PCLATH		equ	00Ah
INTCON		equ	00Bh
PORTB		equ	006h
TRIS_REGB		equ	086h
ICKBUG		equ	00Eh
BIGBUG		equ	00Fh
EXTDATA1	equ	010h
EXTDATA2	equ	011h
EXTADDR1L	equ	012h
EXTADDR1H	equ	013h
EXTADDR2L	equ	014h
EXTADDR2H	equ	015h
DIAG		equ	07Fh

; Bit variables associates within SFRs
#define IRP	STATUS,7
#define RP1	STATUS,6
#define RP0	STATUS,5
#define TO	STATUS,4
#define PD	STATUS,3
#define ZERO	STATUS,2
#define DC	STATUS,1
#define CARRY	STATUS,0
#define GIE	INTCON,7
#define PEIE	INTCON,6
#define T0IE	INTCON,5
#define TMR0IE	INTCON,5
#define INTE	INTCON,4
#define RBIE	INTCON,3
#define T0IF	INTCON,2
#define TMR0IF	INTCON,2
#define INTF	INTCON,1
#define RBIF	INTCON,0
#define RB7	PORTB,7
#define RB6	PORTB,6
#define RB5	PORTB,5
#define RB4	PORTB,4
#define RB3	PORTB,3
#define RB2	PORTB,2
#define RB1	PORTB,1
#define RB0	PORTB,0
#define TRIS_REGB7	TRIS_REGB,7
#define TRIS_REGB6	TRIS_REGB,6
#define TRIS_REGB5	TRIS_REGB,5
#define TRIS_REGB4	TRIS_REGB,4
#define TRIS_REGB3	TRIS_REGB,3
#define TRIS_REGB2	TRIS_REGB,2
#define TRIS_REGB1	TRIS_REGB,1
#define TRIS_REGB0	TRIS_REGB,0
