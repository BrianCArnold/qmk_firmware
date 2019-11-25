#include QMK_KEYBOARD_H
#include "keymap.h"
#include "relativity.h"
#include "keyDefinitions.h"
#include "customLogic.h"

// planned change: store previous table names and abbreviations to allow scrolling for inner joins on table name+id and abbreviation+id.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [QWERTY]=
    LAYOUT_ortho_5x14(
      ESCAP,     KC_1,    KC_2,  KC_3,  KC_4,  KC_5,  KC_6,    /**/ KC_7,  KC_8,        KC_9,          KC_0,    MNUS,  EQUL,               BACKSPC,
      KC_TAB,    KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,    /**/ KC_Y,  KC_U,        KC_I,          KC_O,    KC_P,  BSLASH,             ____,
      FN_QT,     FN_QT,   KC_A,  KC_S,  KC_D,  KC_F,  KC_G,    /**/ KC_H,  KC_J,        KC_K,          KC_L,    COLN,  QUOT,               ENTER_OR_SQL,
      LEFTSHFT, LEFTSHFT, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,    /**/ KC_N,  KC_M,        CMMA,          PRRD,    SLSH,  RIGHT_SHIFT__PAREN, RIGHT_SHIFT__PAREN,
      CTLL,  WINL,  ALTL, KC_LBRC, LSFT(KC_LBRC),APPR,KC_SPC,  /**/ KC_SPC,LWIN(ESCAP), RSFT(KC_RBRC), KC_RBRC, ALTR,  WINR,               CTLR),

  [SQLMACROS]=
    LAYOUT_ortho_5x14(
      S_ALTER, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______,
      ______,    ____,  ____, S_WHERE, ____, ____, ____,                  ____, ____, S_INRJN, S_ORDER, ____, ____, ____,
      _______, ____,  ____,  S_SLCT, S_ASTRK ,S_FROM, S_GROUP,            ____, ____, ____, S_LFTJN, ____, ____, ____,
      ____,  ____, ____, ____, S_COUNT,  ____,  ____,                     S_NOT,  ____,  ____,  ____,  ____,  ____, ____,
      _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______),

  [FN_LAYER]=
    LAYOUT_ortho_5x14(
      KC_GRV,  KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,               KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_DEL,
      ____, KC_CAPSLOCK, KC_MPRV, KC_MPLY, KC_MNXT, LWIN(KC_R), ____,     KC_CALC, KC_PGUP, KC_UP, KC_PGDN, KC_PSCR, KC_SLCK, KC_BRK,
      ____, ____, KC_VOLD, KC_MUTE, KC_VOLU, ____, ____,                  KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT, KC_INS, KC_DEL, ____,
      _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______)

};
