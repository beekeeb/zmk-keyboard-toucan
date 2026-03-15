#pragma once

#include <lvgl.h>

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
