#include QMK_KEYBOARD_H

// Neo Specific Unicode Characters
enum unicode_names
{
    hat,
    r_acc,
    l_acc,
    long_s,
    ae,
    AE,
    oe,
    OE,
    ue,
    UE,
    sz,
    SZ,
    elli,
    inv_ex,
    inv_qm,
    ordf,
    deg,
    No,
    dots,
    middot,
    pound,
    curren,
    sup1,
    sup2,
    sup3,
    s_s,
    s_g,
    en_dash,
    dot_up,
    two_acc,
    cent,
    yen,
    upring,
};

const uint32_t PROGMEM unicode_map[] = {
    [hat] = 0x02C6, // ^ (letter modifier)
    [r_acc] = 0x02CB,
    [l_acc] = 0x02CA,
    [long_s] = 0x017F,
    [ae] = 0x00E4,      // ä
    [AE] = 0x00C4,      // Ä
    [oe] = 0x00F6,      // ö
    [OE] = 0x00D6,      // Ö
    [ue] = 0x00FC,      // ü
    [UE] = 0x00DC,      // Ü
    [sz] = 0x00DF,      // ß
    [SZ] = 0x1E9E,      // ẞ
    [elli] = 0x2026,    // ...
    [inv_ex] = 0x00A1,  // ¡
    [inv_qm] = 0x00BF,  // ¿
    [ordf] = 0x00AA,    // ª
    [deg] = 0x00B0,     // º
    [No] = 0x2116,      // №
    [dots] = 0x22FE,    // ⋮
    [middot] = 0x00B7,  // ·
    [pound] = 0x00A3,   // £
    [curren] = 0x00A4,  // ¤
    [sup1] = 0x00B9,    // ¹
    [sup2] = 0x00B2,    // ²
    [sup3] = 0x00B3,    // ³
    [s_s] = 0x2039,     // ‹
    [s_g] = 0x203A,     // ›
    [en_dash] = 0x2014, // −
    [dot_up] = 0x02D9,  //̇
    [two_acc] = 0x02F6, // ̋
    [cent] = 0x00A2,
    [yen] = 0x00A5,
    [upring] = 0x02DA,
};

enum ctrl_keycodes
{
    L_BRI = SAFE_RANGE, // LED Brightness Increase                                   //Working
    L_BRD,              // LED Brightness Decrease                                   //Working
    L_PTN,              // LED Pattern Select Next                                   //Working
    L_PTP,              // LED Pattern Select Previous                               //Working
    L_PSI,              // LED Pattern Speed Increase                                //Working
    L_PSD,              // LED Pattern Speed Decrease                                //Working
    L_T_MD,             // LED Toggle Mode                                           //Working
    L_T_ONF,            // LED Toggle On / Off                                       //Broken
    L_ON,               // LED On                                                    //Broken
    L_OFF,              // LED Off                                                   //Broken
    L_T_BR,             // LED Toggle Breath Effect                                  //Working
    L_T_PTD,            // LED Toggle Scrolling Pattern Direction                    //Working
    U_T_AGCR,           // USB Toggle Automatic GCR control                          //Working
    DBG_TOG,            // DEBUG Toggle On / Off                                     //
    DBG_MTRX,           // DEBUG Toggle Matrix Prints                                //
    DBG_KBD,            // DEBUG Toggle Keyboard Prints                              //
    DBG_MOU,            // DEBUG Toggle Mouse Prints                                 //
    MD_BOOT             // Restart into bootloader after hold timeout                //Working
};

#define TG_NKRO MAGIC_TOGGLE_NKRO // Toggle 6KRO / NKRO mode

keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, DF(1), UNICODE_MODE_FORWARD, L_T_MD, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Z, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_END, KC_PGDN, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, KC_Y, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_NO, KC_APP, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),
    [1] = LAYOUT(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, DF(0), UNICODE_MODE_FORWARD, L_T_MD, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_SLSH, S(KC_PLUS), KC_BSPC, L_T_BR, L_PTN, L_BRI, KC_TAB, KC_X, KC_V, KC_L, KC_C, KC_W, KC_K, KC_H, KC_G, KC_F, KC_Q, KC_MINS, KC_PLUS, MO(2), U_T_AGCR, L_PTP, L_BRD, MO(2), KC_U, KC_I, KC_A, KC_E, KC_O, KC_S, KC_N, KC_R, KC_T, KC_D, KC_Z, KC_ENT, KC_LSFT, KC_LBRC, KC_SCLN, KC_QUOT, KC_P, KC_Y, KC_B, KC_M, KC_COMM, KC_DOT, KC_J, KC_RSFT, KC_UP, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(3), KC_RALT, KC_APP, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),
    [2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, X(sup1), X(sup2), X(sup3), X(s_s), X(s_g), X(cent), X(yen), KC_COMM, KC_GRV, KC_QUOT, KC_NO, X(upring), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, X(elli), S(KC_SLSH), RALT(KC_8), RALT(KC_9), KC_GRV, S(KC_1), KC_NUBS, S(KC_NUBS), S(KC_0), S(KC_6), X(long_s), KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RALT(KC_MINS), S(KC_7), RALT(KC_7), RALT(KC_0), S(KC_RBRC), S(KC_MINS), S(KC_8), S(KC_9), KC_SLSH, S(KC_DOT), RALT(KC_Q), KC_TRNS, KC_TRNS, KC_BSLS, S(KC_4), RALT(KC_NUBS), RALT(KC_RBRC), S(KC_PLUS), KC_RBRC, S(KC_5), S(KC_2), S(KC_BSLS), S(KC_COMM), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [3] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, X(dot_up), X(ordf), X(deg), X(No), X(dots), X(middot), X(pound), X(curren), KC_TAB, KC_SLSH, S(KC_8), KC_MINS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_BSPC, KC_UP, KC_DEL, KC_PGDN, X(inv_ex), KC_7, KC_8, KC_9, S(KC_EQL), X(en_dash), X(two_acc), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, X(inv_qm), KC_4, KC_5, KC_6, KC_COMM, KC_DOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TAB, KC_INS, KC_ENT, KC_WBAK, S(KC_SCLN), KC_1, KC_2, KC_3, KC_SCLN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_0, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    /*[4] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, TG_NKRO, _______, _______, _______, _______, _______,                              _______, \
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______ \
    ),*/
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void){};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void){};

#define MODS_SHIFT (get_mods() & MOD_BIT(KC_LSHIFT) || get_mods() & MOD_BIT(KC_RSHIFT))
#define MODS_CTRL (get_mods() & MOD_BIT(KC_LCTL) || get_mods() & MOD_BIT(KC_RCTRL))
#define MODS_ALT (get_mods() & MOD_BIT(KC_LALT) || get_mods() & MOD_BIT(KC_RALT))

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    static uint32_t key_timer;

    switch (keycode)
    {
    case L_BRI:
        if (record->event.pressed)
        {
            if (LED_GCR_STEP > LED_GCR_MAX - gcr_desired)
                gcr_desired = LED_GCR_MAX;
            else
                gcr_desired += LED_GCR_STEP;
            if (led_animation_breathing)
                gcr_breathe = gcr_desired;
        }
        return false;
    case L_BRD:
        if (record->event.pressed)
        {
            if (LED_GCR_STEP > gcr_desired)
                gcr_desired = 0;
            else
                gcr_desired -= LED_GCR_STEP;
            if (led_animation_breathing)
                gcr_breathe = gcr_desired;
        }
        return false;
    case L_PTN:
        if (record->event.pressed)
        {
            if (led_animation_id == led_setups_count - 1)
                led_animation_id = 0;
            else
                led_animation_id++;
        }
        return false;
    case L_PTP:
        if (record->event.pressed)
        {
            if (led_animation_id == 0)
                led_animation_id = led_setups_count - 1;
            else
                led_animation_id--;
        }
        return false;
    case L_PSI:
        if (record->event.pressed)
        {
            led_animation_speed += ANIMATION_SPEED_STEP;
        }
        return false;
    case L_PSD:
        if (record->event.pressed)
        {
            led_animation_speed -= ANIMATION_SPEED_STEP;
            if (led_animation_speed < 0)
                led_animation_speed = 0;
        }
        return false;
    case L_T_MD:
        if (record->event.pressed)
        {
            led_lighting_mode++;
            if (led_lighting_mode > LED_MODE_MAX_INDEX)
                led_lighting_mode = LED_MODE_NORMAL;
        }
        return false;
    case L_T_ONF:
        if (record->event.pressed)
        {
            led_enabled = !led_enabled;
            I2C3733_Control_Set(led_enabled);
        }
        return false;
    case L_ON:
        if (record->event.pressed)
        {
            led_enabled = 1;
            I2C3733_Control_Set(led_enabled);
        }
        return false;
    case L_OFF:
        if (record->event.pressed)
        {
            led_enabled = 0;
            I2C3733_Control_Set(led_enabled);
        }
        return false;
    case L_T_BR:
        if (record->event.pressed)
        {
            led_animation_breathing = !led_animation_breathing;
            if (led_animation_breathing)
            {
                gcr_breathe = gcr_desired;
                led_animation_breathe_cur = BREATHE_MIN_STEP;
                breathe_dir = 1;
            }
        }
        return false;
    case L_T_PTD:
        if (record->event.pressed)
        {
            led_animation_direction = !led_animation_direction;
        }
        return false;
    case U_T_AGCR:
        if (record->event.pressed && MODS_SHIFT && MODS_CTRL)
        {
            TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
        }
        return false;
    case DBG_TOG:
        if (record->event.pressed)
        {
            TOGGLE_FLAG_AND_PRINT(debug_enable, "Debug mode");
        }
    }
    return false;
case RGB_TOG:
    if (record->event.pressed)
    {
        switch (rgb_matrix_get_flags())
        {
        case LED_FLAG_ALL:
        {
            rgb_matrix_set_flags(LED_FLAG_KEYLIGHT);
            rgb_matrix_set_color_all(0, 0, 0);
        }
        break;
        case LED_FLAG_KEYLIGHT:
        {
            rgb_matrix_set_flags(LED_FLAG_UNDERGLOW);
            rgb_matrix_set_color_all(0, 0, 0);
        }
        break;
        case LED_FLAG_UNDERGLOW:
        {
            rgb_matrix_set_flags(LED_FLAG_NONE);
            rgb_matrix_disable_noeeprom();
        }
        break;
        default:
        {
            rgb_matrix_set_flags(LED_FLAG_ALL);
            rgb_matrix_enable_noeeprom();
        }
            return false;
        default:
            return true; // Process all other keycodes normally
        }
    }

    led_instruction_t led_instructions[] = {
        // LEDs are normally inactive, no processing is performed on them
        // Flags are used in matching criteria for an LED to be active and indicate how to color it
        // Flags can be found in tmk_core/protocol/arm_atsam/led_matrix.h (prefixed with LED_FLAG_)
        // LED IDs can be found in config_led.h in the keyboard's directory
        // Examples are below

        // All LEDs use the user's selected pattern (this is the factory default)
        {.flags = LED_FLAG_USE_ROTATE_PATTERN},

        // Specific LEDs use the user's selected pattern while all others are off
        // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN, .id0 = 0xFFFFFFFF, .id1 = 0xAAAAAAAA, .id2 = 0x55555555, .id3 = 0x11111111 },

        // Specific LEDs use specified RGB values while all others are off
        // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .id0 = 0xFF, .id1 = 0x00FF, .id2 = 0x0000FF00, .id3 = 0xFF000000, .r = 75, .g = 150, .b = 225 },

        // All LEDs use the user's selected pattern
        // On layer 1, all key LEDs (except the top row which keeps active pattern) are red while all edge LEDs are green
        // When layer 1 is active, key LEDs use red    (id0  32 -  17: 1111 1111 1111 1111 0000 0000 0000 0000 = 0xFFFF0000) (except top row 16 - 1)
        // When layer 1 is active, key LEDs use red    (id1  64 -  33: 1111 1111 1111 1111 1111 1111 1111 1111 = 0xFFFFFFFF)
        // When layer 1 is active, key LEDs use red    (id2  87 -  65: 0000 0000 0111 1111 1111 1111 1111 1111 = 0x007FFFFF)
        // When layer 1 is active, edge LEDs use green (id2  95 -  88: 1111 1111 1000 0000 0000 0000 0000 0000 = 0xFF800000)
        // When layer 1 is active, edge LEDs use green (id3 119 -  96: 0000 0000 1111 1111 1111 1111 1111 1111 = 0x00FFFFFF)
        // { .flags = LED_FLAG_USE_ROTATE_PATTERN },
        // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0xFFFF0000, .id1 = 0xFFFFFFFF, .id2 = 0x007FFFFF, .r = 255, .layer = 1 },
        // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id2 = 0xFF800000, .id3 = 0x00FFFFFF, .g = 127, .layer = 1 },

        // All key LEDs use red while edge LEDs use the active pattern
        // All key LEDs use red     (id0  32 -   1: 1111 1111 1111 1111 1111 1111 1111 1111 = 0xFFFFFFFF)
        // All key LEDs use red     (id1  64 -  33: 1111 1111 1111 1111 1111 1111 1111 1111 = 0xFFFFFFFF)
        // All key LEDs use red     (id2  87 -  65: 0000 0000 0111 1111 1111 1111 1111 1111 = 0x007FFFFF)
        // Edge uses active pattern (id2  95 -  88: 1111 1111 1000 0000 0000 0000 0000 0000 = 0xFF800000)
        // Edge uses active pattern (id3 119 -  96: 0000 0000 1111 1111 1111 1111 1111 1111 = 0x00FFFFFF)
        // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .id0 = 0xFFFFFFFF, .id1 = 0xFFFFFFFF, .id2 = 0x007FFFFF, .r = 255 },
        // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN , .id2 = 0xFF800000, .id3 = 0x00FFFFFF },

        // end must be set to 1 to indicate end of instruction set
        {.end = 1}};
