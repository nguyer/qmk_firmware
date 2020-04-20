#pragma once

#include "7skb.h"

#include "quantum.h"

//////////////////////////////////////////////////////////////////////////////
// When only use 7skb.
//////////////////////////////////////////////////////////////////////////////
/*
 * ,------------------------------------   ------------------------------------------------------.
 * | L00 | L01 | L02 | L03 | L04 | L05 |   | R00 | R01 | R02 | R03 | R04 | R05 | R06 | R07 | R17 |
 * |---------------------------------------------------------------------------------------------+
 * |   L10  | L11 | L12 | L13 | L14 | L15 |   | R10 | R11 | R12 | R13 | R14 | R15 | R16 |   R27  |
 * |----------------------------------------  ---------------------------------------------------+
 * |   L20   | L21 | L22 | L23 | L24 | L25 |   | R20 | R21 | R22 | R23 | R24 | R25 |     R26     |
 * |---------------------------------------------------------------------------------------------+
 * |    L30     | L31 | L32 | L33 | L34 | L35 |   | R30 | R31 | R32 | R33 | R34 |   R35    | R36 |
 * |-------------------------------------------   -----------------------------------------------'
 *           | L41 |   L42  | L43  |  L44  |   |  R40  |    R41   |  R43  | R44 |
 *           |------------------------------   ---------------------------------'
 */

#define LAYOUT( \
    L00, L01, L02, L03, L04, L05,      R00, R01, R02, R03, R04, R05, R06, R07, R17, \
    L10, L11, L12, L13, L14, L15,      R10, R11, R12, R13, R14, R15, R16, R27, \
    L20, L21, L22, L23, L24, L25,      R20, R21, R22, R23, R24, R25, R26, \
    L30, L31, L32, L33, L34, L35,      R30, R31, R32, R33, R34, R35, R36, \
         L41, L42, L43, L44,           R40, R41,      R43, R44 \
  ) \
  { \
    { L00,   L01,   L02,   L03,   L04,   L05,   KC_NO, KC_NO }, \
    { L10,   L11,   L12,   L13,   L14,   L15,   KC_NO, KC_NO }, \
    { L20,   L21,   L22,   L23,   L24,   L25,   KC_NO, KC_NO }, \
    { L30,   L31,   L32,   L33,   L34,   L35,   KC_NO, KC_NO }, \
    {KC_NO,  L41,   L42,   L43,   L44, KC_NO,   KC_NO, KC_NO }, \
    { R00,   R01,   R02,   R03,   R04,   R05,   R06,   R07   }, \
    { R10,   R11,   R12,   R13,   R14,   R15,   R16,   R17   }, \
    { R20,   R21,   R22,   R23,   R24,   R25,   R26,   R27   }, \
    { R30,   R31,   R32,   R33,   R34,   R35,   R36,   KC_NO }, \
    { R40,   R41,   KC_NO, R43,   R44,   KC_NO, KC_NO, KC_NO }  \
  }
