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

LAYOUT(
    QK_MOUSE_BUTTON_1, HK_D_MODE, QK_MOUSE_BUTTON_2,
    MO(1), MO(2), KC_WWW_BACK),

LAYOUT(
    HK_SAVE, HK_I_SCROLL, HK_C_SCROLL,
    QK_MOUSE_BUTTON_4, QK_MOUSE_BUTTON_5, HK_RESET),
 
LAYOUT(
    KC_LEFT_SHIFT, HK_P_SET_D, HK_P_SET_BUF,
    QK_MOUSE_BUTTON_4, QK_MOUSE_BUTTON_5, HK_DUMP),

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS_LEFT][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
    [1] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
    [2] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
};
#endif

bool initialized = 0;

#if 0
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case KC_A:
    if (record->event.pressed) {
      SEND_STRING("Howdy!!\n");
      return false;
    }
  }
  return true;
}
#endif