
#include <xc.h>

/* ==================== CONFIG ==================== */

/* /opt/microchip/xc8/v2.10/docs/chips/16f886.html */
#pragma config FOSC = INTRC_NOCLKOUT  // INTOSCIO oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN
#pragma config WDTE = OFF       // WDT disabled
#pragma config PWRTE = OFF      // PWRT disabled
#pragma config MCLRE = ON       // RA5/MCLR/VPP pin function is MCLR
#pragma config BOREN = OFF      // BOD disabled
#pragma config LVP = OFF        // RB4/PGM pin has digital I/O function, HV on MCLR
#pragma config CPD = OFF        // Data memory code protection off
#pragma config CP = OFF         // Code protection off

#warning Config is not set
/* Revome this after configuring */

/* ==================== IDLOC ==================== */

/* Rules for setting my IdLoc */
/* https://github.com/konstantin-morenko/my-pic-idloc */

#pragma config IDLOC3 = 0x0
#pragma config IDLOC2 = 0x0
#pragma config IDLOC1 = 0x0
#pragma config IDLOC0 = 0x9

#warning IdLoc is not set
/* Revome this after configuring */
