// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void test1_Animation(lv_obj_t * TargetObject, int delay);
void ui_event_Screen1(lv_event_t * e);
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Screen1_Panel1;
lv_obj_t * ui_Screen1_Switch1;
lv_obj_t * ui_Screen1_Bar1;
lv_obj_t * ui_Screen1_Dropdown1;
void ui_event_Screen1_Label1(lv_event_t * e);
lv_obj_t * ui_Screen1_Label1;
lv_obj_t * ui_Screen1_Slider1;
lv_obj_t * ui_Screen1_Slider2;
lv_obj_t * ui_Screen1_Slider3;
lv_obj_t * ui_Screen1_Panel2;
lv_obj_t * ui_Screen1_Label2;
lv_obj_t * ui_Screen1_Slider4;
void ui_event_Screen1_Panel10(lv_event_t * e);
lv_obj_t * ui_Screen1_Panel10;
void ui_event_Screen2(lv_event_t * e);
lv_obj_t * ui_Screen2;
lv_obj_t * ui_Screen1_Keyboard1;
void ui_event_password(lv_event_t * e);
lv_obj_t * ui_password;
void ui_event_username(lv_event_t * e);
lv_obj_t * ui_username;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void test1_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, 50);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 100);
    lv_anim_set_playback_time(&PropertyAnimation_0, 1);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 100);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_1, 50, 0);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 100);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_start(&PropertyAnimation_1);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_Screen1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
    }
}
void ui_event_Screen1_Label1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_bar_increment(ui_Screen1_Bar1, 1, LV_ANIM_ON);
        _ui_slider_increment(ui_Screen1_Slider1, 1, LV_ANIM_ON);
    }
}
void ui_event_Screen1_Panel10(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_slider_increment(ui_Screen1_Slider4, 1, LV_ANIM_ON);
        test1_Animation(ui_Screen1_Label1, 0);
        beep(e);
    }
}
void ui_event_Screen2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_password(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        password__set_keyboard(e);
    }
}
void ui_event_username(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        username__set_keyboard(e);
        (e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x6A1616), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Panel1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Panel1, 491);
    lv_obj_set_height(ui_Screen1_Panel1, 292);
    lv_obj_set_x(ui_Screen1_Panel1, -146);
    lv_obj_set_y(ui_Screen1_Panel1, 3);
    lv_obj_set_align(ui_Screen1_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Screen1_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Screen1_Switch1 = lv_switch_create(ui_Screen1_Panel1);
    lv_obj_set_width(ui_Screen1_Switch1, 50);
    lv_obj_set_height(ui_Screen1_Switch1, 25);
    lv_obj_set_x(ui_Screen1_Switch1, -9);
    lv_obj_set_y(ui_Screen1_Switch1, 63);
    lv_obj_set_align(ui_Screen1_Switch1, LV_ALIGN_CENTER);

    ui_Screen1_Bar1 = lv_bar_create(ui_Screen1_Panel1);
    lv_bar_set_value(ui_Screen1_Bar1, 25, LV_ANIM_OFF);
    lv_obj_set_width(ui_Screen1_Bar1, 150);
    lv_obj_set_height(ui_Screen1_Bar1, 10);
    lv_obj_set_x(ui_Screen1_Bar1, -164);
    lv_obj_set_y(ui_Screen1_Bar1, 96);
    lv_obj_set_align(ui_Screen1_Bar1, LV_ALIGN_CENTER);

    ui_Screen1_Dropdown1 = lv_dropdown_create(ui_Screen1_Panel1);
    lv_obj_set_width(ui_Screen1_Dropdown1, 150);
    lv_obj_set_height(ui_Screen1_Dropdown1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Dropdown1, 93);
    lv_obj_set_y(ui_Screen1_Dropdown1, -105);
    lv_obj_set_align(ui_Screen1_Dropdown1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Screen1_Dropdown1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags

    ui_Screen1_Label1 = lv_label_create(ui_Screen1_Panel1);
    lv_obj_set_width(ui_Screen1_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Label1, 135);
    lv_obj_set_y(ui_Screen1_Label1, 54);
    lv_obj_set_align(ui_Screen1_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Label1, "test from 111");
    lv_obj_add_flag(ui_Screen1_Label1, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_set_style_text_color(ui_Screen1_Label1, lv_color_hex(0x7C5F5F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Screen1_Label1, lv_color_hex(0x832222), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Slider1 = lv_slider_create(ui_Screen1_Panel1);
    lv_obj_set_width(ui_Screen1_Slider1, 150);
    lv_obj_set_height(ui_Screen1_Slider1, 11);
    lv_obj_set_x(ui_Screen1_Slider1, -65);
    lv_obj_set_y(ui_Screen1_Slider1, 129);
    lv_obj_set_align(ui_Screen1_Slider1, LV_ALIGN_CENTER);

    ui_Screen1_Slider2 = lv_slider_create(ui_Screen1_Panel1);
    lv_obj_set_width(ui_Screen1_Slider2, 150);
    lv_obj_set_height(ui_Screen1_Slider2, 9);
    lv_obj_set_x(ui_Screen1_Slider2, 6);
    lv_obj_set_y(ui_Screen1_Slider2, 27);
    lv_obj_set_align(ui_Screen1_Slider2, LV_ALIGN_CENTER);

    ui_Screen1_Slider3 = lv_slider_create(ui_Screen1_Panel1);
    lv_obj_set_width(ui_Screen1_Slider3, 150);
    lv_obj_set_height(ui_Screen1_Slider3, 11);
    lv_obj_set_x(ui_Screen1_Slider3, -161);
    lv_obj_set_y(ui_Screen1_Slider3, 55);
    lv_obj_set_align(ui_Screen1_Slider3, LV_ALIGN_CENTER);

    ui_Screen1_Panel2 = lv_obj_create(ui_Screen1_Panel1);
    lv_obj_set_width(ui_Screen1_Panel2, 100);
    lv_obj_set_height(ui_Screen1_Panel2, 50);
    lv_obj_set_x(ui_Screen1_Panel2, -165);
    lv_obj_set_y(ui_Screen1_Panel2, -19);
    lv_obj_set_align(ui_Screen1_Panel2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Screen1_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Screen1_Label2 = lv_label_create(ui_Screen1_Panel1);
    lv_obj_set_width(ui_Screen1_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen1_Label2, LV_ALIGN_CENTER);

    ui_Screen1_Slider4 = lv_slider_create(ui_Screen1_Panel1);
    lv_obj_set_width(ui_Screen1_Slider4, 150);
    lv_obj_set_height(ui_Screen1_Slider4, 10);
    lv_obj_set_x(ui_Screen1_Slider4, -116);
    lv_obj_set_y(ui_Screen1_Slider4, -94);
    lv_obj_set_align(ui_Screen1_Slider4, LV_ALIGN_CENTER);

    ui_Screen1_Panel10 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Panel10, 100);
    lv_obj_set_height(ui_Screen1_Panel10, 100);
    lv_obj_set_x(ui_Screen1_Panel10, 317);
    lv_obj_set_y(ui_Screen1_Panel10, -110);
    lv_obj_set_align(ui_Screen1_Panel10, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Screen1_Panel10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Screen1_Panel10, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Screen1_Panel10, lv_color_hex(0x96678D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Panel10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Screen1_Panel10, lv_color_hex(0x9E441F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Screen1_Panel10, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Screen1_Panel10, 50, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Screen1_Panel10, lv_color_hex(0x16D079), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Screen1_Panel10, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_color(ui_Screen1_Panel10, lv_color_hex(0x162FD0), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui_Screen1_Panel10, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui_Screen1_Panel10, 50, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Screen1_Panel10, lv_color_hex(0x0D8A94), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Screen1_Panel10, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_color(ui_Screen1_Panel10, lv_color_hex(0x1FA9B3), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_main_stop(ui_Screen1_Panel10, 0, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_stop(ui_Screen1_Panel10, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui_Screen1_Panel10, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(ui_Screen1_Panel10, lv_color_hex(0xD5139D), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui_Screen1_Panel10, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui_Screen1_Panel10, 50, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui_Screen1_Panel10, 10, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui_Screen1_Panel10, 50, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Screen1_Panel10, lv_color_hex(0x498048),
                              LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Screen1_Panel10, 255, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_color(ui_Screen1_Panel10, lv_color_hex(0x804852),
                                   LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui_Screen1_Panel10, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);

    lv_obj_add_event_cb(ui_Screen1_Label1, ui_event_Screen1_Label1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen1_Panel10, ui_event_Screen1_Panel10, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen1, ui_event_Screen1, LV_EVENT_ALL, NULL);

}
void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_Screen2, LV_SCROLLBAR_MODE_ON);
    lv_obj_set_scroll_dir(ui_Screen2, LV_DIR_LEFT);
    lv_obj_set_style_bg_color(ui_Screen2, lv_color_hex(0x1482EB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Screen2, lv_color_hex(0x266FB6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Screen2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Keyboard1 = lv_keyboard_create(ui_Screen2);
    lv_obj_set_width(ui_Screen1_Keyboard1, 772);
    lv_obj_set_height(ui_Screen1_Keyboard1, 239);
    lv_obj_set_x(ui_Screen1_Keyboard1, -2);
    lv_obj_set_y(ui_Screen1_Keyboard1, 108);
    lv_obj_set_align(ui_Screen1_Keyboard1, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Screen1_Keyboard1, lv_color_hex(0xD0CE17), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Keyboard1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Screen1_Keyboard1, lv_color_hex(0xD6919D), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Keyboard1, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Screen1_Keyboard1, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Screen1_Keyboard1, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Screen1_Keyboard1, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Screen1_Keyboard1, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_Screen1_Keyboard1, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_Screen1_Keyboard1, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_Screen1_Keyboard1, lv_color_hex(0x9196D6), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_Keyboard1, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);

    ui_password = lv_textarea_create(ui_Screen2);
    lv_obj_set_width(ui_password, 352);
    lv_obj_set_height(ui_password, 120);
    lv_obj_set_x(ui_password, -125);
    lv_obj_set_y(ui_password, -144);
    lv_obj_set_align(ui_password, LV_ALIGN_CENTER);

    ui_username = lv_textarea_create(ui_Screen2);
    lv_obj_set_width(ui_username, 237);
    lv_obj_set_height(ui_username, 70);
    lv_obj_set_x(ui_username, 225);
    lv_obj_set_y(ui_username, -141);
    lv_obj_set_align(ui_username, LV_ALIGN_CENTER);

    lv_keyboard_set_textarea(ui_Screen1_Keyboard1, ui_password);
    lv_obj_add_event_cb(ui_password, ui_event_password, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_username, ui_event_username, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen2, ui_event_Screen2, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
