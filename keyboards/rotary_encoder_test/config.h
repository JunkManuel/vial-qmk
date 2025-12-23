/*
Copyright 2025 Manuel Rama Villasenin <kiramantler@disr.it>

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

#pragma once

// RP2040 specific configs
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP16
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

// key matrix configs
// #define DIRECT_PINS { { GP14 } }
// #define DIODE_DIRECTION COL2ROW

// RGBMatrix configs
//#define ENABLE_RGB_MATRIX_BREATHING
// #define RGB_MATRIX_LED_COUNT 1
//#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
//#define RGB_MATRIX_DEFAULT_ON true
//#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_BREATHING

// WS2812 configs
// #define WS2812_DI_PIN GP16
// #define WS2812_LED_COUNT 1
#define WS2812_TIMING 1250
#define WS2812_T1H 900
#define WS2812_T0H 300
#define WS2812_TRST_US 350
