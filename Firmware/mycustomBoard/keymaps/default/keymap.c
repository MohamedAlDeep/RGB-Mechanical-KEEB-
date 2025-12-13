// File: qmk_firmware/keyboards/my_custom_board/keymaps/default/keymap.c

#include QMK_KEYBOARD_H

// This defines the layers of your keyboard.
// Layer 0: Default/Base Layer (e.g., standard QWERTY)
// Layer 1: Function/Fn Layer (e.g., media keys, F-keys)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
     * LAYER 0: DEFAULT
     * This is the base layer.
     * Use MO(1) or TO(1) to access Layer 1.
     */
    [0] = LAYOUT_all(
        // R0: Esc  F1   F2   F3   F4   F5   F6   F7   F8   F9   F10  F11  F12  PrtSc  ScrollL  Pause
           KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUS,
        // R1: ~   1    2    3    4    5    6    7    8    9    0    -    =    Bksp   Insert   Home
           KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS,  KC_HOME,
        // R2: Tab  Q    W    E    R    T    Y    U    I    O    P    [    ]    \    Delete End
           KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,  KC_END,
        // R3: Caps A    S    D    F    G    H    J    K    L    ;    '    Return      PgUp
           KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,  KC_NO,   KC_PGUP,
        // R4: LShift Z    X    C    V    B    N    M    ,    .    /    RShift          Up   PgDown
           KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_NO,   KC_UP,   KC_PGDN,
        // R5: LCtrl LAlt LWin          Space                   RWin RAlt Fn   RCtrl Left Down Right
           KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_RGUI, KC_RALT, MO(1), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    /*
     * LAYER 1: FUNCTION
     * Accessed by holding down the Fn key (MO(1) from Layer 0).
     */
    [1] = LAYOUT_all(
        // R0: Reset   MediaKeys (Mute, Vol-, Vol+)  ...  F13  F14  F15  ...
           QK_RST, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F13, KC_F14, KC_F15,
        // R1: Backlight controls ...
           BL_TOGG, BL_DEC, BL_INC, BL_BRTG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        // R2: Mouse Keys
           KC_NO, KC_MS_UP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_UP, KC_MS_DOWN, KC_MS_LEFT, KC_MS_RIGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        // R3: Mouse Buttons
           KC_NO, KC_BTN1, KC_BTN2, KC_BTN3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        // R4: ...
           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        // R5: Keep Fn key transparent on Fn layer
           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};