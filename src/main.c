
#include <xc.h>
#include <stdint.h>
#include <stdbool.h>

#include "defs.h"
#include "screen.h"


/* All standard definitions in /opt/microchip/xc8/v2.10/pic/include/pic16f886.h */


inline void set_tmr0_int(void);

inline void scr_init(void);	/* Из screen.c */


void main(void) {
  /* ==================== INIT ==================== */

  set_tmr0_int();

  ANSEL = 0b00000;		/* PORTB */
  ANSELH = 0b000000;		/* PORTC */
  /* Turning off Analog Input by default */
#warning ANSEL is turned off

#warning Initialization is not set
  /* Revome this after configuring */
  scr_init();
  scr_text('-', 'h', 'i', '-');

  /* ==================== PROGRAM ==================== */
  while(1) {

#warning Main program is not set
    /* Revome this after configuring */

  }
}


inline void set_tmr0_int(void) {
  ei();				/* Enabling all interruptions */
  INTCONbits.T0IE = 1;
  OPTION_REGbits.T0CS = 0;
  return;
}
