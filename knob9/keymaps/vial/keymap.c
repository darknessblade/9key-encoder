#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN1,
    _FN2,
    _FN3
};

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
[_BASE] = LAYOUT_ortho_3x3(
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
[_FN1] = LAYOUT_ortho_3x3(
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
[_FN2] = LAYOUT_ortho_3x3(
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
[_FN3] = LAYOUT_ortho_3x3(
    KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS
)
};

/* Rotary Encoder Settings */
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BASE] =  {    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),   ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
				ENCODER_CCW_CW(KC_TRNS, KC_TRNS),	ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
				ENCODER_CCW_CW(KC_TRNS, KC_TRNS),   ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS)
    },
    
    [_FN1] =  {    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),   ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
				ENCODER_CCW_CW(KC_TRNS, KC_TRNS),	ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
				ENCODER_CCW_CW(KC_TRNS, KC_TRNS),   ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS)
    },
    
    [_FN2] =  {    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),   ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
				ENCODER_CCW_CW(KC_TRNS, KC_TRNS),	ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
				ENCODER_CCW_CW(KC_TRNS, KC_TRNS),   ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS)
    },
    
    [_FN3] =  {    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),   ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
				ENCODER_CCW_CW(KC_TRNS, KC_TRNS),	ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
				ENCODER_CCW_CW(KC_TRNS, KC_TRNS),   ENCODER_CCW_CW(KC_TRNS, KC_TRNS),    ENCODER_CCW_CW(KC_TRNS, KC_TRNS)
    },
},
#endif