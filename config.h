// Copyright 2024 Matthieu Napoli (@mnapoli)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Default is 200ms
// https://docs.qmk.fm/tap_hold#dynamic-tapping-term
#define TAPPING_TERM 150

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/*
 * Flash the bootloader by pressing ESC when plugging in the keyboard.
 * https://docs.qmk.fm/#/feature_bootmagic
 */
#define BOOTMAGIC_ROW 0
#define BOOTMAGIC_COLUMN 2

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
