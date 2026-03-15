#pragma once

#include <lvgl.h>

#define SCREEN_WIDTH 144
#define SCREEN_HEIGHT 168

#define BUFFER_SIZE 168
#define BUFFER_OFFSET_MIDDLE 0
#define BUFFER_OFFSET_BOTTOM 0

#define LVGL_BACKGROUND lv_color_white()
#define LVGL_FOREGROUND lv_color_black()

void fill_background(lv_obj_t *canvas);

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
