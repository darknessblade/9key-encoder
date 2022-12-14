/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

#pragma once
#include "config_common.h"
/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT



// USB Device descriptor parameter 


//#define MATRIX_ROW_PINS { GP28, GP27, GP26} 
//#define MATRIX_COL_PINS { GP25, GP24, GP23} 

#define ENCODERS_PAD_A {GP0, GP2, GP4, GP6, GP8, GP10, GP12, GP14, GP16}
#define ENCODERS_PAD_B { GP1, GP3, GP5, GP7, GP9, GP11, GP13, GP15, GP17}

/* COL2ROW or ROW2COL */
//#define DIODE_DIRECTION COL2ROW 


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
