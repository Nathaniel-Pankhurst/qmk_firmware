#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: minorca */
	 KEYMAP(ESC,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, BSPC, \
			TAB,   A,   S,   D,   F,   G,   H,   J,   K,   L,   ENT, \
			LSFT,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH, \
			LCTL,  LALT,FN2,	  SPC,	     SPC,     FN1, QUOT, FN0),
    /* 1: colemak */
	 KEYMAP(ESC,   Q,   W,   F,   P,   G,   J,   L,   U,   Y, RGUI, BSPC, \
			BSPC,  A,   R,   S,   T,   D,   H,   N,   E,   I,   O, \
			LSFT,  Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH, \
			LCTL,  LALT,FN2,	  SPC,	    CAPS,    FN1, QUOT, FN0),
    /* 2: dvorak */
	 KEYMAP(GRV,   QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L, BSPC, \
			TAB,   A,   O,   E,   U,   I,   D,   H,   T,   N,   S, \
			LSFT,  SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z, \
			LCTL,  LALT,FN2,	  SPC,	    DEL,     FN1, QUOT, FN0),
    /* 3: hhkb */
	 KEYMAP(GRV,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, DEL, \
			TAB,   A,   S,   D,   F,   G,   H,   J,   K,   L,   ENT, \
			LCTL,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH, \
			LSFT,  LALT,FN2,	  CAPS,	    SPC,      FN1, QUOT,FN0),
    /* 5: Layout selector
     * ,-----------------------------------------------------------.
     * | Lq| Lc| Ld| Lw|   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |Lq |Lw |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |Ld |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |Lc |   |   |   |   |   |   |   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------|
     * Lq: set Minorca layout
     * Lc: set Colemak layout
     * Ld: set Dvorak layout
     * Lw: set HHKB layout
	 */
    /* 4: layout */
	 KEYMAP(FN5, FN6, FN7, FN8, TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,HOME,ESC, \
			TRNS, FN5,FN8,TRNS,TRNS,TRNS,TRNS,TRNS,PGDN,END,INS,  \
			TRNS,TRNS,FN7,FN6,TRNS,TRNS,TRNS,TRNS,LEFT,UP, RIGHT, \
			TRNS,  TRNS,FN2,	  SPC,	     SPC,  TRNS, DOWN, TRNS),
    /* 5: numfunc */
	 KEYMAP(GRV,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0, DEL, \
			CAPS,  TRNS,TRNS,TRNS,COMM,DOT, MINS, EQL,  LBRC,RBRC, ENT, \
			LSFT,  TRNS, TRNS, INS, PSCR, QUOT, SCLN, EQL, LEFT,UP, RIGHT, \
			TRNS,  TRNS,TRNS,	  FN11,	     SPC,     TRNS, DOWN, TRNS),
    /* 6: arrow */
	 KEYMAP(ESC,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, \
			TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
			TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,UP, RIGHT, \
			TRNS,  TRNS,TRNS,	  TRNS,	     TRNS,  TRNS, DOWN, TRNS),
	 
};
const uint16_t PROGMEM fn_actions[] = {
    /* Minorca Layout */
    [0] = ACTION_LAYER_MOMENTARY(5),  // to numfunc overlay
    [1] = ACTION_LAYER_TOGGLE(6),     // toggle arrow overlay
    [2] = ACTION_LAYER_MOMENTARY(4),  // to Layout selector
    [5] = ACTION_DEFAULT_LAYER_SET(0),  // set minorca layout
    [6] = ACTION_DEFAULT_LAYER_SET(1),  // set colemak layout
    [7] = ACTION_DEFAULT_LAYER_SET(2),  // set dvorak layout
    [8] = ACTION_DEFAULT_LAYER_SET(3),  // set hhkb layout
    [11] = ACTION_DEFAULT_LAYER_SET(0),  // set minorca layout
	};
