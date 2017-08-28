/* Copyright 2017 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "tme_hw.h"
#include "action_layer.h"

#define LAYER_BASE 0
#define LAYER_FN1 1
#define LAYER_FN2 2

// function ids
#define FN_FN1       0
#define FN_FN2       1
#define FN_CTRLESC   3
#define FN_BACKLIGHT 4
#define FN_CTRLENT   5

// actions for keymap
#define FN1       F(FN_FN1)
#define FN2       F(FN_FN2)
#define CTRLESC   F(FN_CTRLESC)
#define CTRLENT   F(FN_CTRLENT)

const uint16_t PROGMEM fn_actions[] = {
  [FN_FN1]       = ACTION_LAYER_MOMENTARY(LAYER_FN1),
  [FN_FN2]       = ACTION_LAYER_MOMENTARY(LAYER_FN2),
  [FN_CTRLESC]   = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),
  [FN_CTRLENT]   = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENT),
};

#define _______ KC_TRNS
#define ___X___ KC_NO

/*
*
#`# #1# #2# #3# #4# #5# #6# #7# #8# #9# #0# #-# #+# ##BSPC##
#TAB# #Q# #W# #E# #R# #T# #Y# #U# #I# #O# #P# #[# #]# ##\###
#CTRL# #A# #S# #D# #F# #G# #H# #J# #K# #L# #;# #'# ###RET###
#SHIFT## #Z# #X# #C# #V# #B# #N# #M# #,# #.# #/# #Shif# #Fn#
Cod Sup# #Alt# ########Space########### #Alt# Sup# App# Cod#
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[LAYER_BASE] = KEYMAP(
  KC_GRV,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL, KC_BSPC, \
  KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,KC_BSLS, \
  CTRLESC, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,         CTRLENT, \
  KC_LSFT,         KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH, KC_RSFT, FN2, \
  FN1    , KC_LGUI,KC_LALT,                KC_SPC,                                 KC_RALT,KC_RGUI, KC_APP, FN1  ),

[LAYER_FN1] = KEYMAP(
  _______, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11,     KC_F12, KC_DEL,  \
  _______, _______,_______,_______,_______,_______,KC_HOME,KC_PGDN,KC_PGUP,KC_END, _______,_______,    _______,_______, \
  _______, _______,KC_MUTE,KC_VOLD,KC_VOLU,_______,KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT,KC_WH_U,_______,            _______, \
  _______,         KC_MPLY,KC_MPRV,KC_MNXT,_______,KC_MS_L,KC_MS_D,KC_MS_U,KC_MS_R,KC_WH_D,_______,    _______,_______, \
  _______, _______,_______,                KC_MS_BTN1,                          KC_MS_BTN3,KC_MS_BTN2, RESET,  _______),

[LAYER_FN2] = KEYMAP(
  _______, KC_NLCK,KC_PSLS,KC_PAST,KC_PMNS,_______,_______,_______,_______,_______,KC_PSCR,KC_SLCK, KC_PAUS,KC_INS,  \
  _______, KC_P7,  KC_P8,  KC_P9,  KC_PPLS,_______,_______,_______,_______,_______,_______,_______, _______,_______, \
  _______, KC_P4,  KC_P5,  KC_P6,  KC_PENT,_______,_______,_______,_______,_______,_______,_______,         _______, \
  _______,         KC_P1,  KC_P2,  KC_P3,  KC_PENT,_______,_______,_______,_______,_______,_______, _______,_______, \
  _______, _______,KC_P0,                  KC_PDOT,                                _______,_______, _______,_______)
};

