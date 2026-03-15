#include <zephyr/kernel.h>
#include <lvgl.h>
#include <zmk/event_manager.h>
#include <zmk/events/activity_state_changed.h>

#include "widgets/sleep.h"
#include "assets/custom_fonts.h"

LV_IMG_DECLARE(toucan128);
LV_IMG_DECLARE(sleep_icon);

static lv_obj_t *screen_img;
static lv_obj_t *sleep_label;

void setup_status_screen(lv_obj_t *screen) {
    lv_obj_set_style_border_width(screen, 0, LV_PART_MAIN);
    lv_obj_set_style_pad_all(screen, 0, LV_PART_MAIN);
    lv_obj_set_style_bg_color(screen, lv_color_black(), LV_PART_MAIN);
    lv_obj_set_style_bg_opa(screen, LV_OPA_COVER, LV_PART_MAIN);

    screen_img = lv_img_create(screen);
    lv_img_set_src(screen_img, &toucan128);
    lv_obj_center(screen_img);

    sleep_label = lv_label_create(screen);
    lv_label_set_text(sleep_label, "SLEEP");
    lv_obj_set_style_text_font(sleep_label, &quinquefive_8, LV_PART_MAIN);
    lv_obj_set_style_text_color(sleep_label, lv_color_white(), LV_PART_MAIN);
    lv_obj_align(sleep_label, LV_ALIGN_BOTTOM_MID, 0, -10);
    lv_obj_add_flag(sleep_label, LV_OBJ_FLAG_HIDDEN);
}

lv_obj_t *zmk_display_status_screen() {
    lv_obj_t *screen = lv_obj_create(NULL);
    setup_status_screen(screen);
    return screen;
}

static int display_activity_event_handler(const zmk_event_t *eh) {
    struct zmk_activity_state_changed *ev = as_zmk_activity_state_changed(eh);
    if (ev == NULL) {
        return -ENOTSUP;
    }

    switch (ev->state) {
    case ZMK_ACTIVITY_ACTIVE:
        set_sleep_screen_active(false);
        lv_obj_add_flag(sleep_label, LV_OBJ_FLAG_HIDDEN);
        lv_img_set_src(screen_img, &toucan128);
        lv_obj_center(screen_img);
        break;
    case ZMK_ACTIVITY_SLEEP:
        set_sleep_screen_active(true);
        lv_img_set_src(screen_img, &sleep_icon);
        lv_obj_center(screen_img);
        lv_obj_clear_flag(sleep_label, LV_OBJ_FLAG_HIDDEN);
        lv_task_handler();
        lv_refr_now(NULL);
        break;
    default:
        break;
    }
    return 0;
}

ZMK_LISTENER(toucan_pet_display, display_activity_event_handler);
ZMK_SUBSCRIPTION(toucan_pet_display, zmk_activity_state_changed);
