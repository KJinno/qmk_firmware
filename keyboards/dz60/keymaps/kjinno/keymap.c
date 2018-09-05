#include QMK_KEYBOARD_H

#define ______ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_60_ansi(
    KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
    MO(1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
    KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_RGUI, KC_RALT, MO(2), KC_RCTL),

  [1] = LAYOUT_60_ansi(
    KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
    ______, ______, KC_MS_U, ______, KC_WH_U, ______, ______, ______, ______, ______, KC_PSCR, ______, ______, KC_INS,
    KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, ______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, ______, ______, ______,
    ______, KC_BTN1, ______, KC_BTN2, ______, ______, ______, ______, ______, ______, ______, ______,
    ______, ______, ______, ______, ______, ______, ______, ______),

	[2] = LAYOUT_60_ansi(
    RESET, DF(3), ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, LALT(LCTL(KC_DEL)),
    ______, ______, KC_MS_U, ______, KC_WH_U, ______, ______, ______, ______, ______, ______, ______, ______, LALT(LCTL(KC_INS)),
    ______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, ______, ______, ______, ______, KC_WH_U, ______, ______, ______,
    ______, KC_BTN1, ______, KC_BTN2, ______, ______, ______, ______, KC_BTN1, KC_WH_D, KC_BTN2, ______,
    ______, ______, ______, ______, ______, ______, KC_TRNS, ______),

  [3] = LAYOUT_60_ansi(
    KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
    MO(4), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_UP),
    KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_RGUI, RALT_T(KC_LEFT), LT(5, KC_DOWN), RCTL_T(KC_RGHT)),

  [4] = LAYOUT_60_ansi(
    KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
    ______, ______, KC_MS_U, ______, KC_WH_U, ______, ______, ______, ______, ______, KC_PSCR, ______, ______, KC_INS,
    KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, ______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, ______, ______, ______,
    ______, KC_BTN1, ______, KC_BTN2, ______, ______, ______, ______, ______, ______, ______, ______,
    ______, ______, ______, ______, ______, ______, ______, ______),

	[5] = LAYOUT_60_ansi(
    RESET, DF(0), RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, ______, ______, ______, LALT(LCTL(KC_DEL)),
    ______, ______, KC_MS_U, ______, KC_WH_U, ______, ______, ______, ______, ______, ______, ______, ______, LALT(LCTL(KC_INS)),
    ______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, ______, ______, ______, ______, KC_WH_U, ______, ______, ______,
    ______, KC_BTN1, ______, KC_BTN2, ______, ______, ______, ______, KC_BTN1, KC_WH_D, KC_BTN2, ______,
    ______, ______, ______, ______, ______, ______, KC_TRNS, ______)

};
