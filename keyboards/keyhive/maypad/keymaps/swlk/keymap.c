/* Copyright 2019 codybender
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#define _BL 0
#define _FL 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT_ortho_5x4(
        KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,   MT(MOD_LGUI, KC_PPLS),
        KC_P4,   KC_P5,   KC_P6,   MT(MOD_LGUI, KC_PPLS),
        KC_P1,   KC_P2,   KC_P3,   MT(MOD_LGUI | MOD_LSFT, KC_PENT),
        TG(_FL),   KC_P0,   KC_PDOT, MT(MOD_LGUI | MOD_LSFT, KC_PENT)
    ),

    [_FL] = LAYOUT_ortho_5x4(
        KC_F10, KC_F11, KC_F12, MT(RESET, KC_ESC),
        KC_F7,  KC_F8,  KC_F9,  C(A(S(KC_LGUI))),
        KC_F4,  KC_F5,  KC_F6,  C(A(S(KC_LGUI))),
        KC_F1,  KC_F2,  KC_F3,  C(KC_LALT),
        TG(_FL),KC_LCTRL,KC_LALT,C(KC_LALT)
    )
};