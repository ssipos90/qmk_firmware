#include QMK_KEYBOARD_H

#define _QRTY 0
#define _DVRK 1
#define _NAVI 2
#define _NMPD 3
#define _CNFG 4

#define MO_NMPD MO(_NMPD)
#define MO_NAVI MO(_NAVI)
#define MO_CNFG MO(_CNFG)
#define DF_QRTY DF(_QRTY)
#define DF_DVRK DF(_DVRK)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QRTY] = LAYOUT(
        QK_GESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL,  KC_GRV,  _______,
        KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        KC_LGUI,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,           KC_ENT,
        KC_LSFT, XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT, XXXXXXX,
        KC_LCTL, MO_NMPD, KC_LALT,                   KC_BSPC, MO_NAVI,  KC_SPC,          XXXXXXX, XXXXXXX, MO_CNFG, KC_SCRL,  KC_ENT
    ),
    [_DVRK] = LAYOUT(
        QK_GESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL,  KC_GRV,  _______,
        KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        KC_LGUI,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,           KC_ENT,
        KC_LSFT, XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT, XXXXXXX,
        KC_LCTL, MO_NMPD, KC_LALT,                   KC_BSPC, MO_NAVI,  KC_SPC,          XXXXXXX, KC_RCTL, MO_CNFG, KC_SCRL,  KC_ENT
    ),
    [_NAVI] = LAYOUT(
        XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, XXXXXXX,   KC_DEL,
        _______, KC_BTN1, KC_MS_U, KC_BTN2, _______, _______, XXXXXXX, KC_HOME, KC_END,  KC_PGUP, KC_PGDN, XXXXXXX, _______, _______,
        _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, XXXXXXX, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, _______,          _______,
        _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______,
        _______, _______, _______,                   _______, _______, _______,          _______, _______, _______, _______, _______
    ),
    [_NMPD] = LAYOUT(
        _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS, KC_EQL,  KC_GRV,  _______,
        _______, _______, _______, _______, _______, _______, _______,    KC_4,    KC_5,    KC_6, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,    KC_1,    KC_2,    KC_3, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______,    KC_7,    KC_8,    KC_9, _______, _______, _______, _______,
        _______, _______, _______,                   _______, _______, _______,          _______, _______, _______, _______, _______
    ),
    [_CNFG] = LAYOUT(
        XXXXXXX, DF_QRTY, DF_DVRK, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX,
        XXXXXXX, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PSCR, KC_MPLY, KC_MPRV, KC_MNXT,  QK_RBT,
        KC_CAPS, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,
        XXXXXXX, BL_DOWN, BL_TOGG,   BL_UP, BL_STEP, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MRWD, KC_MFFD, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    )
};

// LEADER_EXTERNS();

