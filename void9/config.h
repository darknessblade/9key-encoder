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



/* USB Device descriptor parameter */
#define VENDOR_ID    0x6666 
#define PRODUCT_ID   0x5521
#define DEVICE_VER   0x0001
#define MANUFACTURER darknessbladers
#define PRODUCT      knob9


#define MATRIX_ROW_PINS { GP28, GP27, GP26}
#define MATRIX_COL_PINS { GP25, GP24, GP23}
#define ENCODERS_PAD_A {GP0, GP1, GP3, GP5, GP7, GP9, GP11, GP13,}
#define ENCODERS_PAD_B { GP2, GP4, GP6, GP8, GP10, GP12, GP14, GP15}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
