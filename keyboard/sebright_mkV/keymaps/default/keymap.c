#include "sebright_mk2.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = { /* Base */
        {KC_ESC,  KC_Q,    KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_TAB },
        {KC_BSPC,  KC_A,    KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_NO,   KC_ENT  },
        {KC_LSFT,KC_NO,   KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_QUOT, KC_FN1,  KC_FN0 },
        {KC_NO,   KC_LCTRL, KC_NO,    KC_LALT, KC_LGUI,  KC_NO,   KC_SPC,  KC_FN2,   KC_COMM, KC_DOT,  KC_SLSH, KC_NO }
    },
    [0] = { /* First */
        {KC_GRV,  KC_1,    KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TAB },
        {KC_BSPC,  ?, ?,  , ?, ?, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_NO,   KC_ENT  },
        {KC_LSFT,KC_NO,   ?,     ?,    ?,    ? , KC_NUHS,  KC_NUBS,  KC_SCLN, KC_QUOT,   KC_FN1,  KC_FN0 },
        {KC_NO,   KC_LCTRL, KC_NO,    KC_LALT, KC_LGUI,  KC_NO,   KC_SPC,  KC_FN2,   KC_LEFT, KC_DOWN, KC_RIGHT,KC_NO }
    },
    [1] = { /* Second */
        {KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12 },
        {KC_DELT,  KC_MUTE, KC_VOLD,  KC_VOLU, ?, KC_PSCR, KC_INS, KC_PGUP, KC_PGDN, ?, KC_NO,   KC_ENT  },
        {KC_LSFT, KC_NO,   KC_MPRV,  KC_MPLY, KC_MNXT, ?,  KC_HOME,  KC_END,  KC_NO,   KC_UP,   KC_FN1,  KC_FN0 },
        {KC_NO,   KC_LCTRL, KC_NO,    KC_LALT, KC_LGUI,  KC_NO,   KC_SPC,  KC_FN2,   KC_LEFT, KC_DOWN, KC_RIGHT,KC_NO }
    },
};

const uint16_t PROGMEM fn_actions[] = {
	    [0] = ACTION_LAYER_MOMENTARY(1),  // to First overlay
	    [1] = ACTION_LAYER_MOMENTARY(2),  // to Second overlay

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) // MACRODOWN only works in this function
{
    return MACRO_NONE;
};
