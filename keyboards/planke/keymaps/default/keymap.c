// Copyright 2021 jonasbak (@jonasbak)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "keymap_norwegian.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _NUM_SIGN,
    _CONTROL,
    _FN
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        NO_Q,         NO_W,     NO_E,     NO_R,     NO_T,     NO_Y,     NO_U,     NO_I,     NO_O,     NO_P,     NO_ARNG,
        NO_A,         NO_S,     NO_D,     NO_F,     NO_G,     NO_H,     NO_J,     NO_K,     NO_L,     NO_OSTR,  NO_AE,
        LSFT_T(NO_Z), NO_X,     NO_C,     NO_V,     NO_B,     NO_N,     NO_M,     NO_COMM,  NO_DOT,   NO_MINS,  RSFT_T(KC_NO),
                            LCTL_T(KC_ESC), LALT_T(KC_SPC), LGUI_T(KC_ENT), LT(_NUM_SIGN, KC_TAB), LT(_CONTROL, KC_BSPC),  LT(_FN, KC_ESC)
    ),
    [_NUM_SIGN] = LAYOUT(
        _______,  _______,  _______,  _______,  _______,  _______,  NO_7,     NO_8,     NO_9,     _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  NO_4,     NO_5,     NO_6,     _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  NO_1,     NO_2,     NO_3,     NO_0,     _______,
                            _______,  _______,  _______,  _______,  _______,  _______
    ),
    [_CONTROL] = LAYOUT(
        KC_NO,    KC_NO,    KC_MS_U,  KC_NO,    KC_WH_U,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_WH_D,  KC_NO,    KC_RIGHT, KC_DOWN,  KC_UP,    KC_LEFT,  KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                            _______,  KC_BTN1,  KC_BTN2,  _______,  _______,  _______
    ),
    [_FN] = LAYOUT(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
                            _______,  _______,  RESET,    _______,  _______,  _______
    )
};
