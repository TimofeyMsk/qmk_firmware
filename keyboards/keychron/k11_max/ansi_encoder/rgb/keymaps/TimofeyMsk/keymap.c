/* Copyright 2024 @ Keychron (https://www.keychron.com)
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
 
 
 *  qmk compile -kb keychron/k11_max/ansi_encoder/rgb -km TimofeyMsk
 
 
 */

#include QMK_KEYBOARD_H
#include "keychron_common.h"

enum layers{
    MAC_BASE,
    WIN_BASE,
    WIN_FN1,
    SERVICE,
	MAC_FN1,
};

// TIMOFEY_MSK
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_69_ansi(
        KC_ESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    		 KC_7,     KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,                         MO(SERVICE),
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,   					 KC_Y,  KC_U,     KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,                    KC_DEL,
 CTL_T(KC_ESC), KC_A,     KC_S,     KC_D,    KC_F,    KC_G,             		 KC_H,     KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,                            KC_HOME,
 CTL_T(KC_ESC),           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    		 KC_B,     KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,                KC_UP,
 CTL_T(KC_ESC), KC_LOPTN, KC_LCMMD,          KC_SPC,           MO(MAC_FN1),		 MO(MAC_FN1),          KC_SPC,            KC_RCMMD,                    KC_LEFT, KC_DOWN,    KC_RGHT),

    [WIN_BASE] = LAYOUT_69_ansi(
        KC_ESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,   			  		KC_7,     KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,             			 MO(SERVICE),
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    							KC_Y,     KC_U,    KC_I,    KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,             KC_DEL,
  CTL_T(KC_ESC), KC_A,     KC_S,     KC_D,    KC_F,    KC_G,            			  		KC_H,     KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,             			 KC_HOME,
  CTL_T(KC_ESC),           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,   		  KC_B,     KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, 		         	 KC_UP,
  CTL_T(KC_ESC), KC_LWIN,  KC_LALT, SFT_T(KC_SPC),    MO(WIN_FN1), 					MO(WIN_FN1),    SFT_T(KC_SPC),     		  KC_LALT,            			KC_LEFT, KC_DOWN, KC_RGHT),

    [WIN_FN1] = LAYOUT_69_ansi(
        KC_GRV,  KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,    KC_F6,                    KC_F7,    KC_F8,   KC_F9,  KC_F10,   KC_F11,   KC_F12,   KC_BRK,            				 KC_PSCR,
   LALT(KC_ESC),  LCTL(KC_Q), KC_QUOT,  KC_MINS, KC_EQL,  LSA(KC_9),  	     KC_HOME,LCTL(KC_LEFT),KC_UP,LCTL(KC_RGHT), KC_PGUP,  KC_NO,  KC_NO,  KC_NO,                    KC_INS,
        _______,  KC_COLN, KC_LPRN,  KC_RPRN, KC_UNDS,  LSA(KC_8),     			LCTL(KC_BSPC), KC_LEFT,KC_DOWN,KC_RGHT,KC_END, KC_PGDN,  KC_NO,                   				  KC_END,
        _______,     LCTL(KC_Z),LCTL(KC_X),LCTL(KC_C),LCTL(KC_V), KC_GRV,         KC_BSPC, KC_DEL , KC_LBRC,  KC_RBRC, KC_NO,   LCTL(KC_SLSH),  KC_NO,                     KC_PGUP,
        _______, _______,  _______,           KC_LSFT,           LWIN(KC_SPC),  	  LWIN(KC_SPC),           KC_RSFT,                _______,                   	    KC_HOME, KC_PGDN,     KC_END),

    [SERVICE] = LAYOUT_69_ansi(
        _______,   KC_BRID,  KC_BRIU,  KC_TASK, KC_FILE, RGB_VAD, RGB_VAI, 				KC_MPRV,  KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,           				      _______,
        RGB_TOG,   RGB_MOD,  RGB_VAI,  RGB_HUI, RGB_SAI, RGB_SPI,  		     			BT_HST1,  BT_HST2, BT_HST3,   P2P4G,  _______,  _______,  _______,  _______,                      _______,
        _______,   RGB_RMOD, RGB_VAD,  RGB_HUD, RGB_SAD, RGB_SPD,          				_______,  _______, _______, _______,  _______,  _______,  _______,                                DM_PLY1,
        _______,             _______,  _______, _______, _______, BAT_LVL,  			BAT_LVL,  NK_TOGG, _______, _______,  _______,  _______,  _______, 		             DM_REC1,
        _______, _______,  _______,          _______,             _______,  				_______,           _______,           			_______,   			    DM_RSTP, DM_REC2,     DM_PLY2),
		
    [MAC_FN1] = LAYOUT_69_ansi(
        KC_GRV,  KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,    KC_F6,                    KC_F7,    KC_F8,   KC_F9,  KC_F10,   KC_F11,   KC_F12,   KC_BRK,            				 KC_PSCR,
        _______,  KC_NO, KC_QUOT,  KC_MINS, KC_EQL,  KC_NO,  	     KC_HOME,LOPT(KC_LEFT),KC_UP, LOPT(KC_RGHT), KC_PGUP,  KC_NO,  KC_NO,  KC_NO,                                    KC_INS,
        _______,  KC_COLN, KC_LPRN,  KC_RPRN, KC_UNDS,  KC_NO,     			LOPT(KC_BSPC), KC_LEFT,KC_DOWN,KC_RGHT,KC_END, KC_PGDN,  KC_NO,                         				  KC_END,
        _______,     LCMD(KC_Z),LCMD(KC_X),LCMD(KC_C),LCMD(KC_V), KC_GRV,         KC_BSPC, KC_DEL , KC_LBRC,  KC_RBRC, KC_NO,   LCMD(KC_SLSH),  KC_NO,                     KC_PGUP,
_______, _______,  _______,           _______,           _______,  	      KC_BSPC,           _______,                _______,                   	    KC_HOME, KC_PGDN,     KC_END)
};

#if defined(ENCODER_MAP_ENABLE)
	const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
		[MAC_BASE]  = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
		[WIN_BASE]  = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
		[WIN_FN1]   = {ENCODER_CCW_CW(KC_PGDN, KC_PGUP)},
		[SERVICE]   = {ENCODER_CCW_CW(KC_MPRV, KC_MNXT)},
		[MAC_FN1]   = {ENCODER_CCW_CW(KC_PGDN, KC_PGUP)}
	};
#endif // ENCODER_MAP_ENABLE

// clang-format on
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }
    return true;
}
