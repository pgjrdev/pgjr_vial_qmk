/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T, KC_LCTL,    KC_RCTL,    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G, KC_LALT,    KC_RALT,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      QK_BOOT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, QK_BOOT,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, TL_LOWR,  KC_SPC,     KC_ENT, TL_UPPR, KC_RGUI
                                      //`--------------------------'  `--------------------------'


  ),


  [1] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, KC_LCTL,    KC_RCTL,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT,    KC_RALT, KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RGUI
                                      //`--------------------------'  `--------------------------'
  ),


  [2] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
       KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, KC_LCTL,    KC_RCTL, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT,    KC_RALT, KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RGUI
                                      //`--------------------------'  `--------------------------'
  ),


  [3] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RGUI
                                      //`--------------------------'  `--------------------------'
  )
};

//
// BEGIN; RGB color based on active layer
//

// #define CUE_LED 12  // Replace 12 with the RGB Matrix LED index for your chosen key
//
// bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
//     if (CUE_LED < led_min || CUE_LED >= led_max) {
//         return false;
//     }
//
//     switch (get_highest_layer(layer_state | default_layer_state)) {
//         case 0:
//             rgb_matrix_set_color(CUE_LED, 0, 180, 0);   // Layer 0: green
//             break;
//         case 1:
//             rgb_matrix_set_color(CUE_LED, 0, 0, 255);   // Layer 1: blue
//             break;
//         case 2:
//             rgb_matrix_set_color(CUE_LED, 255, 80, 0);  // Layer 2: orange
//             break;
//         default:
//             rgb_matrix_set_color(CUE_LED, 180, 0, 180); // Other layers: purple
//             break;
//     }
//
//     return false;
// }

//
// END: RGB color based on active layer
//

// Define QK_KB_32 and higher
enum {
    QK_KB_32 = QK_KB_31 + 1,
    QK_KB_33,
    QK_KB_34,
    QK_KB_35,
    QK_KB_36,
    QK_KB_37,
    QK_KB_38,
    QK_KB_39,
    QK_KB_40,
    QK_KB_41,
    QK_KB_42,
    QK_KB_43,
    QK_KB_44,
    QK_KB_45,
    QK_KB_46,
    QK_KB_47,
    QK_KB_48,
    QK_KB_49,
    QK_KB_50,
    QK_KB_51,
    QK_KB_52,
    QK_KB_53,
    QK_KB_54,
    QK_KB_55,
    QK_KB_56,
    QK_KB_57,
    QK_KB_58,
    QK_KB_59,
    QK_KB_60,
    QK_KB_61,
    QK_KB_62,
    QK_KB_63,
};

// Custom keycodes
enum custom_keycodes {
    RESET_TO_L00       = QK_KB_0,
    RESET_TO_L01       = QK_KB_1,
    RESET_TO_L02       = QK_KB_2,
    RESET_TO_L03       = QK_KB_3,
    RESET_TO_L04       = QK_KB_4,
    RESET_TO_L05       = QK_KB_5,
    RESET_TO_L06       = QK_KB_6,
    RESET_TO_L07       = QK_KB_7,
    RESET_TO_L08       = QK_KB_8,
    RESET_TO_L09       = QK_KB_9,
    RESET_TO_L10       = QK_KB_10,

    APPLE_GLOBE        = QK_KB_11,

    UC_MODE_WINC       = QK_KB_12,
    UC_MODE_MAC        = QK_KB_13,
    UC_MODE_LINUX      = QK_KB_14,

    UC_DASH_EN         = QK_KB_15,
    UC_DASH_EM         = QK_KB_16,
    UC_DASH_EMEM       = QK_KB_17,
    UC_DASH_EMEMEM     = QK_KB_18,
    UC_ELLIPSIS        = QK_KB_19,
    UC_BULLET          = QK_KB_20,
    UC_MIDDLEDOT       = QK_KB_21,
    UC_CURLY_SQ_LEFT   = QK_KB_22,
    UC_CURLY_SQ_RIGHT  = QK_KB_23,
    UC_CURLY_DQ_LEFT   = QK_KB_24,
    UC_CURLY_DQ_RIGHT  = QK_KB_25,
    UC_SIGN_COPYRIGHT  = QK_KB_26,
    UC_SIGN_REGISTERED = QK_KB_27,
    UC_SIGN_TRADEMARK  = QK_KB_28,
    UC_SIGN_DEGREE     = QK_KB_29,
    UC_OP_MULTIPLY     = QK_KB_30,
    UC_OP_DIVISION     = QK_KB_31,
    UC_OP_LESSEQ       = QK_KB_32,
    UC_OP_GREATEQ      = QK_KB_33,

    UC_ARROW_NORTHWEST = QK_KB_34,
    UC_ARROW_NORTH     = QK_KB_35,
    UC_ARROW_NORTHEAST = QK_KB_36,
    UC_ARROW_EAST      = QK_KB_37,
    UC_ARROW_SOUTHEAST = QK_KB_38,
    UC_ARROW_SOUTH     = QK_KB_39,
    UC_ARROW_SOUTHWEST = QK_KB_40,
    UC_ARROW_WEST      = QK_KB_41,

    UC_DEADKEY_GRAVE   = QK_KB_42,
    UC_DEADKEY_ACUTE   = QK_KB_43,
    UC_DEADKEY_TILDE   = QK_KB_44,

    UC_OP_CHECKMARK    = QK_KB_45,
    UC_OP_CHECKMARKH   = QK_KB_46,
    UC_OP_XMARK        = QK_KB_47,
    UC_OP_XMARKH       = QK_KB_48,
};

// -- BEGIN - Apple Globe Key --------------------------------------------------

#define APPLE_GLOBE_TAP_TOGGLE      2
#define APPLE_GLOBE_TAP_WINDOW_MS   600
#define APPLE_GLOBE_ONESHOT_TIMEOUT 6000

static bool     apple_globe_pending       = false;
static bool     apple_globe_locked        = false;
static bool     apple_globe_oneshot_active = false;
static uint8_t  apple_globe_tap_count     = 0;
static uint8_t  apple_globe_active_row;
static uint8_t  apple_globe_active_col;
static uint32_t apple_globe_pending_timer;
static uint32_t apple_globe_tap_timer;

// Run after QMK has processed the key release, so the key and Globe
// are not released in the wrong order.
void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!record->event.pressed &&
        apple_globe_oneshot_active &&
        record->event.key.row == apple_globe_active_row &&
        record->event.key.col == apple_globe_active_col) {
        host_consumer_send(0);
        apple_globe_oneshot_active = false;
    }
}

void housekeeping_task_user(void) {
    if (apple_globe_pending &&
        timer_elapsed32(apple_globe_pending_timer) > APPLE_GLOBE_ONESHOT_TIMEOUT) {
        apple_globe_pending = false;
    }

    if (apple_globe_tap_count > 0 &&
        timer_elapsed32(apple_globe_tap_timer) > APPLE_GLOBE_TAP_WINDOW_MS) {
        apple_globe_tap_count = 0;
    }
}

static void clear_apple_globe_state(void) {
    bool apple_globe_was_down = apple_globe_locked || apple_globe_oneshot_active;

    apple_globe_pending        = false;
    apple_globe_locked         = false;
    apple_globe_oneshot_active = false;
    apple_globe_tap_count      = 0;
    apple_globe_pending_timer  = 0;
    apple_globe_tap_timer      = 0;

    if (apple_globe_was_down) {
        host_consumer_send(0); // Release the Globe Consumer usage.
    }
}

// -- END - Apple Globe Key -----------------------------------------------------

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (
        keycode == RESET_TO_L00 ||
        keycode == RESET_TO_L01 ||
        keycode == RESET_TO_L02 ||
        keycode == RESET_TO_L03 ||
        keycode == RESET_TO_L04 ||
        keycode == RESET_TO_L05 ||
        keycode == RESET_TO_L06 ||
        keycode == RESET_TO_L07 ||
        keycode == RESET_TO_L08 ||
        keycode == RESET_TO_L09 ||
        keycode == RESET_TO_L10
    ) {
        if (record->event.pressed) {
            clear_apple_globe_state();      // Resets the One-Shot function for Apple's Globe Modifier

            clear_oneshot_mods();           // Clear pending OSM
            clear_oneshot_locked_mods();    // Clear tap-toggle-locked OSM
            clear_mods();
            clear_weak_mods();
            reset_oneshot_layer();          // Clear pending or locked OSL

            clear_keyboard();               // Sends broad release of active key/modifier state which can help clear a stuck key or modifier
            send_keyboard_report();         // Tell the host that the key was released

            // Set the active layer
            switch (keycode) {
                case RESET_TO_L00:
                    layer_move(0);
                    break;
                case RESET_TO_L01:
                    layer_move(1);
                    break;
                case RESET_TO_L02:
                    layer_move(2);
                    break;
                case RESET_TO_L03:
                    layer_move(3);
                    break;
                case RESET_TO_L04:
                    layer_move(4);
                    break;
                case RESET_TO_L05:
                    layer_move(5);
                    break;
                case RESET_TO_L06:
                    layer_move(6);
                    break;
                case RESET_TO_L07:
                    layer_move(7);
                    break;
                case RESET_TO_L08:
                    layer_move(8);
                    break;
                case RESET_TO_L09:
                    layer_move(9);
                    break;
                case RESET_TO_L10:
                    layer_move(10);
                    break;
            }

            default_layer_set(1UL << 0);    // Always make layer 0 the default layer
        }
        return false; // Don't send the custom keycode to the host
    } else if ( keycode == APPLE_GLOBE ) {
        if (!record->event.pressed) {
            if (apple_globe_locked) {
                // One tap unlocks it.
                apple_globe_locked = false;
                host_consumer_send(0);
                apple_globe_tap_count = 0;
            } else {
                // Count rapid taps. The fifth locks Globe on.
                if (apple_globe_tap_count > 0 &&
                    timer_elapsed32(apple_globe_tap_timer) <= APPLE_GLOBE_TAP_WINDOW_MS) {
                    apple_globe_tap_count++;
                } else {
                    apple_globe_tap_count = 1;
                }
                apple_globe_tap_timer = timer_read32();

                if (apple_globe_tap_count >= APPLE_GLOBE_TAP_TOGGLE) {
                    apple_globe_locked = true;
                    apple_globe_pending = false;
                    apple_globe_tap_count = 0;
                    host_consumer_send(AC_NEXT_KEYBOARD_LAYOUT_SELECT);
                } else {
                    apple_globe_pending = true;
                    apple_globe_pending_timer = timer_read32();
                }
            }
        }
        return false; // Don't send APPLE_GLOBE as a normal key.
    } else if (
        keycode == UC_MODE_WINC ||
        keycode == UC_MODE_MAC ||
        keycode == UC_MODE_LINUX ||

        keycode == UC_DASH_EN ||
        keycode == UC_DASH_EM ||
        keycode == UC_DASH_EMEM ||
        keycode == UC_DASH_EMEMEM ||
        keycode == UC_ELLIPSIS ||
        keycode == UC_BULLET ||
        keycode == UC_MIDDLEDOT ||
        keycode == UC_CURLY_SQ_LEFT ||
        keycode == UC_CURLY_SQ_RIGHT ||
        keycode == UC_CURLY_DQ_LEFT ||
        keycode == UC_CURLY_DQ_RIGHT ||
        keycode == UC_SIGN_COPYRIGHT ||
        keycode == UC_SIGN_REGISTERED ||
        keycode == UC_SIGN_TRADEMARK ||
        keycode == UC_SIGN_DEGREE ||
        keycode == UC_OP_MULTIPLY ||
        keycode == UC_OP_DIVISION ||
        keycode == UC_OP_LESSEQ ||
        keycode == UC_OP_GREATEQ ||

        keycode == UC_ARROW_NORTHWEST ||
        keycode == UC_ARROW_NORTH ||
        keycode == UC_ARROW_NORTHEAST ||
        keycode == UC_ARROW_EAST ||
        keycode == UC_ARROW_SOUTHEAST ||
        keycode == UC_ARROW_SOUTH ||
        keycode == UC_ARROW_SOUTHWEST ||
        keycode == UC_ARROW_WEST ||

        keycode == UC_DEADKEY_GRAVE ||
        keycode == UC_DEADKEY_ACUTE ||
        keycode == UC_DEADKEY_TILDE ||

        keycode == UC_OP_CHECKMARK ||
        keycode == UC_OP_CHECKMARKH ||
        keycode == UC_OP_XMARK ||
        keycode == UC_OP_XMARKH
    ) {
        if (!record->event.pressed) {
            return true;
        }

        switch (keycode) {
            case UC_MODE_WINC:
                set_unicode_input_mode(UNICODE_MODE_WINCOMPOSE);
                return false;
            case UC_MODE_MAC:
                set_unicode_input_mode(UNICODE_MODE_MACOS);
                return false;
            case UC_MODE_LINUX:
                set_unicode_input_mode(UNICODE_MODE_LINUX);
                return false;

            case UC_DASH_EN:
                register_unicode(0x2013);
                return false;
            case UC_DASH_EM:
                register_unicode(0x2014);
                return false;
            case UC_DASH_EMEM:
                register_unicode(0x2E3A);
                return false;
            case UC_DASH_EMEMEM:
                register_unicode(0x2E3B);
                return false;
            case UC_ELLIPSIS:
                register_unicode(0x2026);
                return false;
            case UC_BULLET:
                register_unicode(0x2022);
                return false;
            case UC_MIDDLEDOT:
                register_unicode(0x00B7);
                return false;
            case UC_CURLY_SQ_LEFT:
                register_unicode(0x2018);
                return false;
            case UC_CURLY_SQ_RIGHT:
                register_unicode(0x2019);
                return false;
            case UC_CURLY_DQ_LEFT:
                register_unicode(0x201C);
                return false;
            case UC_CURLY_DQ_RIGHT:
                register_unicode(0x201D);
                return false;
            case UC_SIGN_COPYRIGHT:
                register_unicode(0x00A9);
                return false;
            case UC_SIGN_REGISTERED:
                register_unicode(0x00AE);
                return false;
            case UC_SIGN_TRADEMARK:
                register_unicode(0x2122);
                return false;
            case UC_SIGN_DEGREE:
                register_unicode(0x00B0);
                return false;
            case UC_OP_MULTIPLY:
                register_unicode(0x00D7);
                return false;
            case UC_OP_DIVISION:
                register_unicode(0x00F7);
                return false;
            case UC_OP_LESSEQ:
                register_unicode(0x2264);
                return false;
            case UC_OP_GREATEQ:
                register_unicode(0x2265);
                return false;

            case UC_ARROW_NORTHWEST:
                register_unicode(0x2196);
                return false;
            case UC_ARROW_NORTH:
                register_unicode(0x2191);
                return false;
            case UC_ARROW_NORTHEAST:
                register_unicode(0x2197);
                return false;
            case UC_ARROW_EAST:
                register_unicode(0x2192);
                return false;
            case UC_ARROW_SOUTHEAST:
                register_unicode(0x2198);
                return false;
            case UC_ARROW_SOUTH:
                register_unicode(0x2193);
                return false;
            case UC_ARROW_SOUTHWEST:
                register_unicode(0x2199);
                return false;
            case UC_ARROW_WEST:
                register_unicode(0x2190);
                return false;

            case UC_DEADKEY_GRAVE:
                register_unicode(0x0300);
                return false;
            case UC_DEADKEY_ACUTE:
                register_unicode(0x0301);
                return false;
            case UC_DEADKEY_TILDE:
                register_unicode(0x0303);
                return false;

            case UC_OP_CHECKMARK:
                register_unicode(0x2713);
                return false;
            case UC_OP_CHECKMARKH:
                register_unicode(0x2714);
                return false;
            case UC_OP_XMARK:
                register_unicode(0x2717);
                return false;
            case UC_OP_XMARKH:
                register_unicode(0x2718);
                return false;
        }
    } else {
        // The first ordinary key after a Globe tap uses the one-shot.
        if (record->event.pressed && apple_globe_pending && !apple_globe_locked) {
            apple_globe_pending = false;
            apple_globe_tap_count = 0;
            apple_globe_oneshot_active = true;
            apple_globe_active_row = record->event.key.row;
            apple_globe_active_col = record->event.key.col;
            host_consumer_send(AC_NEXT_KEYBOARD_LAYOUT_SELECT);
        }
    }
    return true; // Let QMK process the ordinary key normally.
}

#ifdef OLED_ENABLE
#include <stdio.h>

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
        case L_ADJUST|L_LOWER|L_RAISE:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_ENABLE
