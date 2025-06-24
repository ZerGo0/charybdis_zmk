#include QMK_KEYBOARD_H

#define CHARYBDIS_AUTO_SNIPING_ON_LAYER LAYER_FUNC2

enum zergo_layers {
     LAYER_BASE = 0,
     LAYER_SYM,
     LAYER_FUNC1,
     LAYER_FUNC2
};

tap_dance_action_t tap_dance_actions[] = {
  [0] = ACTION_TAP_DANCE_DOUBLE(KC_QUOTE, KC_MINUS),
  [1] = ACTION_TAP_DANCE_DOUBLE(LSFT(KC_4), ALGR(KC_E)),
  [2] = ACTION_TAP_DANCE_DOUBLE(KC_HOME, KC_END),
  [3] = ACTION_TAP_DANCE_DOUBLE(KC_H, KC_COMMA),
};



// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
        KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_PSCR,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,       KC_J,    KC_L,    KC_U,    KC_Z,    TD(0), KC_SCLN,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LSFT,LGUI_T(KC_A),LALT_T(KC_R),LSFT_T(KC_S),LCTL_T(KC_T), KC_G,       KC_M,RCTL_T(KC_N),RSFT_T(KC_E),LALT_T(KC_I),KC_O, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LCTL,    KC_Y,    KC_X,    KC_C,    KC_D,    KC_V,       KC_K,    KC_H, KC_COMM,  KC_DOT, KC_LBRC, TD(2),
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                               LT(LAYER_FUNC2, KC_SPC),KC_ENTER,MO(LAYER_SYM),      KC_DEL,  KC_BSPC,
                                             MO(LAYER_FUNC1),   MO(LAYER_FUNC2),     MO(LAYER_FUNC1)
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [LAYER_SYM] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮                        ╭──────────────────────────────────────────────────────╮
       KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  // ├──────────────────────────────────────────────────────┤                        ├──────────────────────────────────────────────────────┤
       KC_TRNS,KC_SLASH,LSFT(KC_SLASH),ALGR(KC_8),ALGR(KC_9),ALGR(KC_NUBS),     LSFT(KC_1),KC_NUBS,LSFT(KC_NUBS),LSFT(KC_5),TD(1),KC_TRNS,
  // ├──────────────────────────────────────────────────────┤                        ├──────────────────────────────────────────────────────┤
       KC_TRNS,LSFT(KC_7),ALGR(KC_MINUS),ALGR(KC_7),ALGR(KC_0),LSFT(KC_6),              LSFT(KC_MINUS),LSFT(KC_8),LSFT(KC_9),LSFT(KC_DOT),LSFT(KC_COMMA),KC_TRNS,
  // ├──────────────────────────────────────────────────────┤                        ├──────────────────────────────────────────────────────┤
       KC_TRNS,ALGR(KC_Q),KC_BSLS,LSFT(KC_EQUAL),LSFT(KC_BSLS),  LSFT(KC_2),      LSFT(KC_0),LSFT(KC_RBRC),KC_RBRC,ALGR(KC_RBRC),KC_GRAVE,KC_TRNS,
  // ╰──────────────────────────────────────────────────────┤                        ├──────────────────────────────────────────────────────╯
                                  KC_TRNS, KC_TRNS, KC_TRNS,                         KC_TRNS, KC_TRNS,
                                           KC_TRNS, KC_TRNS,                         KC_TRNS
  //                            ╰───────────────────────────╯                        ╰──────────────────╯
  ),

  [LAYER_FUNC1] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮                   ╭──────────────────────────────────────────────────────╮
       KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,            KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,
  // ├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
       KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F10, KC_F11,                            KC_KP_SLASH, KC_7, KC_8, KC_9, KC_KP_MINUS, KC_TRNS,
  // ├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
       KC_TRNS,LGUI_T(KC_F4),LALT_T(KC_F5),LSFT_T(KC_F6),LCTL_T(KC_F12),KC_F13, KC_KP_ASTERISK, RCTL_T(KC_4), RSFT_T(KC_5), LALT_T(KC_6), KC_KP_PLUS, KC_TRNS,
  // ├──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────┤
       KC_TRNS, KC_F7, KC_F8, KC_F9,  KC_F14, KC_F15,                           KC_0, KC_1,  KC_2, KC_3, KC_KP_DOT, KC_KP_COMMA,
  // ╰──────────────────────────────────────────────────────┤                   ├──────────────────────────────────────────────────────╯
                                  KC_TRNS, KC_TRNS, KC_TRNS,                    KC_TRNS, KC_TRNS,
                                           KC_TRNS, KC_TRNS,                    KC_TRNS
  //                            ╰───────────────────────────╯                   ╰──────────────────╯
  ),

  [LAYER_FUNC2] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮                       ╭──────────────────────────────────────────────────────╮
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,             KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,
  // ├──────────────────────────────────────────────────────┤                       ├──────────────────────────────────────────────────────┤
       KC_TRNS, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17,                             XXXXXXX, KC_WH_R, KC_UP, KC_WH_L, XXXXXXX, KC_TRNS,
  // ├──────────────────────────────────────────────────────┤                       ├──────────────────────────────────────────────────────┤
       KC_TRNS,LGUI_T(KC_F18),LALT_T(KC_F19),LSFT_T(KC_F20),LCTL_T(KC_F17),KC_F18,  KC_WH_D, KC_LEFT, KC_DOWN, KC_RIGHT, KC_BTN4, KC_TRNS,
  // ├──────────────────────────────────────────────────────┤                       ├──────────────────────────────────────────────────────┤
       KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX,  KC_F19, KC_F20,                         KC_WH_U, KC_BTN1,  KC_BTN3, KC_BTN2, KC_BTN5, KC_TRNS,
  // ╰──────────────────────────────────────────────────────┤                       ├──────────────────────────────────────────────────────╯
                                  KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS,
                                           KC_TRNS, KC_TRNS,                        KC_TRNS
  //                            ╰───────────────────────────╯                       ╰──────────────────╯
  ),
};

#if defined(POINTING_DEVICE_ENABLE) && defined(CHARYBDIS_AUTO_SNIPING_ON_LAYER)
layer_state_t layer_state_set_kb(layer_state_t state) {
    state = layer_state_set_user(state);
    charybdis_set_pointer_sniping_enabled(layer_state_cmp(state, CHARYBDIS_AUTO_SNIPING_ON_LAYER));
    return state;
}
#endif // POINTING_DEVICE_ENABLE && CHARYBDIS_AUTO_SNIPING_ON_LAYER

// clang-format on