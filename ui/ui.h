// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"

void test1_Animation(lv_obj_t * TargetObject, int delay);
void ui_event_Screen1(lv_event_t * e);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Screen1_Panel1;
extern lv_obj_t * ui_Screen1_Switch1;
extern lv_obj_t * ui_Screen1_Bar1;
extern lv_obj_t * ui_Screen1_Dropdown1;
void ui_event_Screen1_Label1(lv_event_t * e);
extern lv_obj_t * ui_Screen1_Label1;
extern lv_obj_t * ui_Screen1_Slider1;
extern lv_obj_t * ui_Screen1_Slider2;
extern lv_obj_t * ui_Screen1_Slider3;
extern lv_obj_t * ui_Screen1_Panel2;
extern lv_obj_t * ui_Screen1_Label2;
extern lv_obj_t * ui_Screen1_Slider4;
void ui_event_Screen1_Panel10(lv_event_t * e);
extern lv_obj_t * ui_Screen1_Panel10;
void ui_event_Screen2(lv_event_t * e);
extern lv_obj_t * ui_Screen2;
extern lv_obj_t * ui_Screen1_Keyboard1;
void ui_event_password(lv_event_t * e);
extern lv_obj_t * ui_password;
void ui_event_username(lv_event_t * e);
extern lv_obj_t * ui_username;

void beep(lv_event_t * e);
void password__set_keyboard(lv_event_t * e);
void username__set_keyboard(lv_event_t * e);





void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
