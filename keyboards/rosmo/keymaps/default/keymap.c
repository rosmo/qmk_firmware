/*
Copyright 2018 Cole Markham

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "users/holykeebs/holykeebs.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Layer 0, default
LAYOUT(
    QK_MOUSE_BUTTON_1, HK_D_MODE, QK_MOUSE_BUTTON_2, // Key switches
    LT(3, KC_VOLU), LT(2, KC_VOLD), MO(1)), // Right button, left button, scroll wheel

// Layer 1, scroll wheel page up and now
LAYOUT(
    QK_MOUSE_BUTTON_1, HK_D_MODE, QK_MOUSE_BUTTON_2,
    MO(1), MO(2), MO(1)),

// Layer 2, configuration 1
LAYOUT(
    HK_P_SET_D, HK_P_SET_S, HK_P_SET_BUF,
    HK_I_SCROLL, KC_NO, HK_DUMP),
 
// Layer 3, configuration 2
LAYOUT(
    HK_S_MODE_T, HK_D_MODE_T, HK_C_SCROLL,
    KC_NO, HK_SAVE, HK_RESET),

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS_LEFT][NUM_DIRECTIONS] = {
    // Layer 1, default
    [0] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD) }, // Scroll up / down
    // Layer 2, scroll wheel page up and down
    [1] = { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN) }, // Page up / page down
    // Layer 3, configurations 1 - adjust default profile scale
    [2] = { ENCODER_CCW_CW(KC_UP, KC_DOWN) },
    // Layer 4, configurations 1 - adjust scroll buffer
    [3] = { ENCODER_CCW_CW(KC_UP, KC_DOWN) },
};
#endif


