// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
//NOTE THIS IS THE CURRENT PROGRESS UP UNTIL JUNE 6
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_1, KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,    KC_8,   KC_9,      KC_0,      KC_MINS,   KC_EQL,   KC_BSPC,
        KC_TAB,  KC_Q, KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,   KC_O,      KC_P,      KC_LBRC,   KC_RBRC,  KC_BSLS,
        KC_CAPS,  KC_A, KC_D,    KC_S,    KC_F,   KC_G,   KC_H,   KC_J,    KC_K,   KC_L,      KC_SCLN,   KC_QUOT,   KC_ENT,   
        KC_LSFT,       KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,    KC_M,   KC_COMM,   KC_DOT,    KC_SLSH,   TG(1),    KC_UP,
        KC_LCTL,       KC_LWIN, KC_LALT,                         KC_SPC,                     KC_RSFT,   KC_RALT,   KC_LEFT,  KC_DOWN,  KC_RGHT
    ),
    [1] = LAYOUT(
        KC_ESC,  M(1), M(2),    M(3),    M(4),   M(5),   M(6),   M(7),    M(8),   M(9),      M(0),       KC_MINS,    KC_EQL,    KC_BSPC,
        KC_TAB,  KC_Q, KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,   KC_O,      KC_P,      KC_LBRC,   KC_RBRC,  KC_BSLS,
        KC_CAPS,  KC_A, KC_D,    KC_S,    KC_F,   KC_G,   KC_H,   KC_J,    KC_K,   KC_L,      KC_SCLN,   KC_QUOT,   KC_ENT,   
        KC_LSFT,       KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,    KC_M,   KC_COMM,   KC_DOT,    KC_SLSH,   TG(1),    MS_UP,
        KC_LCTL,       KC_LWIN, KC_LALT,                         KC_SPC,                     KC_RSFT,   KC_RALT,   MS_LEFT,  MS_DOWN,  MS_RGHT
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case M(1):
                SEND_STRING(SS_LCTL("ac"));
                return false;
            case M(2):
                SEND_STRING(SS_LCTL("v"));
                return false;
            case M(3):
                SEND_STRING(SS_LCTL("c"));
                return false;
            case M(4):
                SEND_STRING(SS_LCTL("x"));
                return false;
            case M(5):
                SEND_STRING(SS_LCTL("z"));
                return false;
            case M(6):
                register_code(KC_LCTL);
                register_code(KC_LSFT);
                tap_code(KC_T);
                unregister_code(KC_LCTL);
                unregister_code(KC_LSFT);
                return false;
            case M(7):
                register_code(KC_LALT);
                tap_code(KC_TAB);
                unregister_code(KC_LALT)
                return false;
            case M(8):
                register_code(KC_LALT);
                tap_code(KC_TAB);
                return false;
            case M(9):
                unregister_code(KC_LALT);
                return false;
            case M(0):
                SEND_STRING(SS_LCTL("w"));
                return false;
            
        }
    }
    return true;
}