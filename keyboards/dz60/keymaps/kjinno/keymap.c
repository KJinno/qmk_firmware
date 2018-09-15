#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_60_ansi(
    KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
    MO(1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_UP),
    KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_RGUI, RALT_T(KC_LEFT), LT(2, KC_DOWN), RCTL_T(KC_RGHT)),

  [1] = LAYOUT_60_ansi(
    KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
    _______, _______, KC_MS_U, _______, KC_WH_U, _______, _______, _______, KC_PSCR, _______, _______, KC_UP, _______, KC_INS,
    _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______, _______, _______, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, _______,
    _______, KC_BTN1, _______, KC_BTN2, _______, _______, _______, _______, KC_END, KC_PGDN, KC_DOWN, _______,
    _______, _______, _______, _______, _______, _______, DF(3), _______),

  [2] = LAYOUT_60_ansi(
    KC_ESC, _______, _______, _______, LALT(KC_F4), LCTL(KC_F5), _______, _______, _______, _______, _______, _______, _______, LCTL(LALT(KC_DEL)),
    _______, _______, KC_MS_U, _______, KC_WH_U, _______, _______, _______, KC_PSCR, _______, _______, KC_UP, _______, LCTL(LALT(KC_INS)),
    DF(3), KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______, _______, _______, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, _______,
    _______, KC_BTN1, _______, KC_BTN2, _______, _______, _______, _______, KC_END, KC_PGDN, KC_DOWN, _______,
    _______, _______, _______, _______, _______, _______, _______, _______),

  [3] = LAYOUT_60_ansi(
    DF(0), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX)

};
