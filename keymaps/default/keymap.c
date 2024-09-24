// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_bepo.h"

#define CUT LCMD(KC_X)
#define COPY LCMD(KC_C)
#define PASTE LCMD(KC_V)
#define EXPO LOPT(KC_TAB)
#define DESK LCTL(BP_I)
#define SPOT LCTL(KC_SPC)

//enum custom_keycodes {
//    SS_DLR = SAFE_RANGE,
//};

// Tap Dance definitions
enum {
    TD_ESC,
    TD_F1,
    TD_F2,
    TD_F3,
    TD_F4,
};
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Expose
    [TD_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, EXPO),
    // Tap once for Fx, twice for Space x
    [TD_F1] = ACTION_TAP_DANCE_DOUBLE(KC_F1, LAG(KC_1)),
    [TD_F2] = ACTION_TAP_DANCE_DOUBLE(KC_F2, LAG(KC_2)),
    [TD_F3] = ACTION_TAP_DANCE_DOUBLE(KC_F3, LAG(KC_3)),
    [TD_F4] = ACTION_TAP_DANCE_DOUBLE(KC_F4, LAG(KC_4)),
};

/*
 * https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_bepo.h
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
     * Layer 0
     */
    [0] = LAYOUT_matrx(
                                          TD(TD_ESC), TD(TD_F1), TD(TD_F2), TD(TD_F3), TD(TD_F4),   KC_F5, KC_F6, KC_F7, KC_F8,   KC_F9, KC_F10, KC_F11, KC_F12,

        LAG(KC_1), LAG(KC_2), LAG(KC_3),  BP_DLR,  KC_1, KC_2, KC_3, KC_4, KC_5,       KC_DEL,  KC_6, KC_7, KC_8, KC_9, KC_0, BP_EQL, BP_PERC,
        LAG(KC_4), LAG(KC_5), LAG(KC_6),  KC_TAB,  BP_B, BP_EACU, BP_P, BP_O, BP_EGRV, KC_BSPC, BP_DCIR, BP_V, BP_D, BP_L, BP_J, BP_Z, BP_W,
        EXPO,  DESK,  SPOT,               KC_LSFT, BP_A, BP_U, BP_I, BP_E, BP_COMM,    KC_ENT,  BP_C, BP_T, BP_S, BP_R, BP_N, BP_M, KC_RSFT,
        CUT,   COPY,  PASTE,                       BP_AGRV, BP_Y, BP_X, BP_DOT, BP_K,           BP_QUOT, BP_Q, BP_G, BP_H, BP_F, KC_UP,

        OSL(1), OSL(1),                   KC_LCMD, KC_LCTL, KC_LALT,       LALT_T(KC_SPC), RALT_T(KC_BSPC),  KC_RALT, BP_CCED, KC_LEFT, KC_DOWN, KC_RIGHT
    ),

    /*
     * Layer 1
     */
    [1] = LAYOUT_matrx(
                                     QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BRIGHTNESS_DOWN, KC_BRIGHTNESS_UP,

        _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,   AS_TOGG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,            _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, KC_AUDIO_VOL_UP,

        _______, _______,            _______, _______, _______,           KC_MEDIA_PLAY_PAUSE, KC_KB_MUTE,   _______, _______, KC_MPRV, KC_AUDIO_VOL_DOWN, KC_MNXT
    )

};
