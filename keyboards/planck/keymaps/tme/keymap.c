#include "planck.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// layers
#define KM_BASE    0
#define KM_LOWER   1
#define KM_RAISE   2
#define KM_NUMMOUS 3
#define KM_XMONAD  4
#define KM_FKEYS   5

// function ids
#define FN_LOWER     0
#define FN_RAISE     1
#define FN_NUMMOUS   2
#define FN_CTRLESC   3
#define FN_BACKLIGHT 4
#define FN_RSFTCOMP  5
#define FN_XMONAD    6
#define FN_FKEYS     7
#define FN_CTRLENT   8

// actions for keymap
#define XMONAD    F(FN_XMONAD)
#define LOWER     F(FN_LOWER)
#define RAISE     F(FN_RAISE)
#define NUMMOUS   F(FN_NUMMOUS)
#define FKEYS     F(FN_FKEYS)
#define BACKLIGHT F(FN_BACKLIGHT)
#define CTRLESC   F(FN_CTRLESC)
#define CTRLENT   F(FN_CTRLENT)

#define __________ KC_TRNS
#define g(x) LGUI(x)
#define G(x) LGUI(S(x))

const uint16_t PROGMEM fn_actions[] = {
  [FN_LOWER]     = ACTION_LAYER_MOMENTARY(KM_LOWER),
  [FN_RAISE]     = ACTION_LAYER_MOMENTARY(KM_RAISE),
  [FN_XMONAD]    = ACTION_LAYER_MOMENTARY(KM_XMONAD),
  [FN_NUMMOUS]   = ACTION_LAYER_MOMENTARY(KM_NUMMOUS),
  [FN_FKEYS]     = ACTION_LAYER_MOMENTARY(KM_FKEYS),
  [FN_CTRLESC]   = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),
  [FN_CTRLENT]   = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENT),
  [FN_BACKLIGHT] = ACTION_BACKLIGHT_STEP(),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [KM_BASE] = {
    {KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC   },
    {CTRLESC,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    CTRLENT   },
    {KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT   },
    {XMONAD,     FKEYS,      KC_LGUI,    KC_LALT,    LOWER,      KC_SPC,     KC_SPC,     RAISE,      KC_RALT,    KC_RGUI,    KC_HYPR,    NUMMOUS   }
  },
  [KM_LOWER] = {
    {KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_DEL    },
    {__________, __________, __________, KC_EQL,     KC_MINS,    __________, KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    KC_QUOT,    KC_BSLS   },
    {__________, S(KC_COMM), S(KC_LBRC), KC_LBRC,    S(KC_9),    __________, __________, S(KC_0),    KC_RBRC,    S(KC_RBRC), S(KC_DOT),  __________},
    {__________, __________, __________, __________, __________, __________, __________, __________, __________, __________, __________, __________}
  },
  [KM_RAISE] = {
    {KC_TILD,    KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,    KC_CIRC,    KC_AMPR,    KC_ASTR,    __________, __________, KC_INS    },
    {__________, __________, __________, KC_PLUS,    KC_UNDS,    __________, KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     KC_DQUO,    KC_PIPE   },
    {__________, __________, __________, __________, __________, __________, __________, __________, __________, __________, __________, __________},
    {BACKLIGHT,  __________, __________, __________, __________, __________, __________, __________, __________, __________, __________, __________}
  },
  [KM_NUMMOUS] = {
    {KC_NLCK,    KC_P7,      KC_P8,      KC_P9,      KC_PMNS,    KC_PSLS,    KC_ACL0,    KC_ACL1,    KC_ACL2,    __________, __________, RESET     },
    {__________, KC_P4,      KC_P5,      KC_P6,      KC_PPLS,    KC_PAST,    KC_MS_L,    KC_MS_D,    KC_MS_U,    KC_MS_R,    __________, __________},
    {__________, KC_P1,      KC_P2,      KC_P3,      KC_PENT,    __________, KC_WH_L,    KC_WH_D,    KC_WH_U,    KC_WH_R,    __________, __________},
    {__________, KC_P0,      KC_P0,      KC_PDOT,    KC_PENT,    KC_MS_BTN1, KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN2, __________, __________, __________}
  },
  [KM_XMONAD] = {
    {g(KC_GRV),  g(KC_1),    g(KC_2),    g(KC_3),    g(KC_4),    g(KC_5),    g(KC_6),    g(KC_7),    g(KC_8),    g(KC_9),    g(KC_0),    G(KC_ENT) },
    {__________, g(KC_Q),    g(KC_W),    g(KC_E),    g(KC_R),    g(KC_T),    g(KC_H),    g(KC_J),    g(KC_K),    g(KC_L),    __________, __________},
    {__________, __________, __________, g(KC_C),    g(KC_M),    g(KC_B),    g(KC_LEFT), g(KC_DOWN), g(KC_UP),   g(KC_RGHT), __________, __________},
    {__________, __________, __________, __________, g(KC_P),    g(KC_SPC),  g(KC_SPC),  g(KC_ENT),  __________, __________, __________, __________}
  },
  [KM_FKEYS] = {
    {KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12    },
    {KC_F13,     KC_F14,     KC_F15,     KC_F16,     KC_F17,     KC_F18,     KC_F18,     KC_F20,     KC_F21,     KC_F22,     KC_F23,     KC_F24    },
    {__________, KC_PSCR,    KC_SLCK,    KC_PAUS,    __________, __________, __________, __________, __________, __________, __________, __________},
    {__________, __________, __________, __________, __________, __________, __________, __________, __________, __________, __________, __________}
  }
};
