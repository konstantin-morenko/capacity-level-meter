
#include <xc.h>

#include "defs.h"


inline void scr_flush(void); 	/* Из screen.c */


void __interrupt () isr(void) {
  di();				/* Disable all interrupts */
  /* Checking IE & IF according to http://ww1.microchip.com/downloads/en/DeviceDoc/52053B.pdf#page=190 */
  if (TMR0IE && TMR0IF) {
    /* TMR0 Interruption Routine */
    scr_flush();
    TMR0IF = 0;
  }

#warning Interrupts is not set
  /* Revome this after configuring */

}
