#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {



/* Base
 * ┌───┬───┬───┐
 * │   │   │   │
 * ├───┼───┼───┤
 * │   │   │   │
 * ├───┼───┼───┤
 * │   │   │   │
 * └───┴───┴───┘
 */
[0] = LAYOUT_ortho_3x3(
    KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS
),

/* FN1
 * ┌───┬───┬───┐
 * │ 7 │ 8 │ 9 │
 * ├───┼───┼───┤
 * │ 4 │ 5 │ 6 │
 * ├───┼───┼───┤
 * │ 1 │ 2 │ 3 │
 * └───┴───┴───┘
 */
[1] = LAYOUT_ortho_3x3(
    KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS
),

/* FN2
 * ┌───┬───┬───┐
 * │   │   │   │
 * ├───┼───┼───┤
 * │   │   │   │
 * ├───┼───┼───┤
 * │   │   │   │
 * └───┴───┴───┘
 */
[2] = LAYOUT_ortho_3x3(
    KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS
),

/* FN3
 * ┌───┬───┬───┐
 * │   │   │   │
 * ├───┼───┼───┤
 * │   │   │   │
 * ├───┼───┼───┤
 * │   │   │   │
 * └───┴───┴───┘
 */
[3] = LAYOUT_ortho_3x3(
    KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS
)
};

/* Rotary Encoder Settings */
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][9] = {
    [0] =  {    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),   ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
				ENCODER_CCW_CW(KC_TRNS, KC_TRNS),	ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
				ENCODER_CCW_CW(KC_TRNS, KC_TRNS),   ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS)
    },
    
    [1] =  {    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),   ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
				ENCODER_CCW_CW(KC_TRNS, KC_TRNS),	ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
				ENCODER_CCW_CW(KC_TRNS, KC_TRNS),   ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS)
    },
    
    [2] =  {    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),   ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
				ENCODER_CCW_CW(KC_TRNS, KC_TRNS),	ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
				ENCODER_CCW_CW(KC_TRNS, KC_TRNS),   ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS)
    },
    
    [3] =  {    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),   ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
				ENCODER_CCW_CW(KC_TRNS, KC_TRNS),	ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
				ENCODER_CCW_CW(KC_TRNS, KC_TRNS),   ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS)
    },
},