/* Copyright 2019 zk-phi
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

#ifdef RGBLIGHT_ENABLE
//Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif

enum layers {
    DEFAULT,
    RAISE,
    LOWER,
    LAUNCH
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [DEFAULT] = LAYOUT(
        LT(RAISE, KC_KP_EQUAL), LCTL(LSFT(KC_D)),   LCTL(LSFT(KC_P)),
        LCTL(LSFT(KC_S)), LCTL(LALT(KC_S)), LCTL(LALT(KC_M))
    ),
    [RAISE] = LAYOUT(
        _______, LCTL(LSFT(KC_F1)), LCTL(LSFT(KC_F2)),
        MO(LAUNCH), LCTL(LSFT(KC_F4)), LCTL(LSFT(KC_F3))
    ),
    [LOWER] = LAYOUT(
        MO(LAUNCH), _______, _______,
        _______,    _______, _______
    ),
    [LAUNCH] = LAYOUT(
        _______, LCTL(LALT(KC_D)), LCTL(LALT(KC_O)),
        _______, LCTL(LALT(KC_Y)), LCTL(LALT(KC_B))
    )
};
