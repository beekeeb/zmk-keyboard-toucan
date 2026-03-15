#pragma once

#include <lvgl.h>
#include "util.h"

/**
 * Draw a sleep screen showing the keyboard is in sleep mode.
 * This is displayed when the device enters deep sleep to give the user visual
 * feedback before the display is powered off.
 */
void draw_sleep_screen(lv_obj_t *canvas);

/**
 * Check if the sleep screen should be shown.
 * Returns true when the device is entering sleep mode.
 */
bool is_sleep_screen_active(void);

/**
 * Set the sleep screen active state.
 * Called by the activity state change handler.
 */
void set_sleep_screen_active(bool active);
