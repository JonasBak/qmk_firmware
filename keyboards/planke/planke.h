// Copyright 2021 jonasbak (@jonasbak)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, \
	            K302, K303, K304, K305, K306, K307  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210 }, \
	{ KC_NO, KC_NO, K302,  K303,  K304,  K305,  K306,  K307,  KC_NO, KC_NO, KC_NO }  \
}
