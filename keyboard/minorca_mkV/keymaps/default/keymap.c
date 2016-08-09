#include "minorca_mk2.h"
 
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = { /* Base */
        {KC_ESC,  KC_Q,    KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC },
        {KC_TAB,  KC_A,    KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_NO,   KC_ENT  },
        {KC_LCTRL,KC_NO,   KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_QUOT, KC_FN1,  KC_FN0 },
        {KC_NO,   KC_LSFT, KC_NO,    KC_LALT, KC_FN2,  KC_NO,   KC_SPC,  KC_NO,   KC_COMM, KC_DOT,  KC_SLSH, KC_NO }
    },
    [0] = { /* First */
        {KC_GRV,  KC_1,    KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DELT },
        {KC_TAB,  KC_MPRV, KC_MPLY,  KC_MNXT, KC_PGUP, KC_HOME, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_NO,   KC_LGUI  },
        {KC_LCTRL,KC_NO,   KC_Z,     KC_X,    KC_C,    KC_PGDN, KC_END,  KC_L,    KC_SCLN, KC_UP,   KC_FN1,  KC_FN0 },
        {KC_NO,   KC_LSFT, KC_NO,    KC_LALT, KC_FN2,  KC_NO,   KC_FN6,  KC_NO,   KC_LEFT, KC_DOWN, KC_RIGHT,KC_NO }
    },
    [1] = { /* Second */
        {KC_ESC,  KC_EXLM, KC_AT,    KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DELT },
        {KC_TAB,  KC_MUTE, KC_VOLD,  KC_VOLU, KC_TILD, KC_PIPE, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_NO,   KC_ENT  },
        {KC_CAPS, KC_NO,   KC_LSFT,  KC_RSFT, KC_PAUSE,   KC_F10,  KC_F11,  KC_F12,  KC_NO,   KC_UP,   KC_FN1,  KC_FN0 },
        {KC_NO,   KC_LGUI, KC_NO,    KC_LALT, KC_FN2,  KC_NO,   KC_FN6,  KC_NO,   KC_LEFT, KC_DOWN, KC_RIGHT,KC_NO }
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