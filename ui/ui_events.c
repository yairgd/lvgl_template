// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#include "ui.h"

extern lv_obj_t * ui_Screen1_TextArea1;
extern lv_obj_t * ui_Screen2_TextArea1;
extern lv_obj_t * ui_Screen1_Keyboard1;
//https://forum.lvgl.io/t/how-to-detect-keyboard-input-in-lvgl-simulator/1651/2
void beep(lv_event_t * e)
{
	// Your code here
}

void password__set_keyboard(lv_event_t * e)
{

	lv_indev_t * indev = lv_indev_get_act();
	if(indev == NULL) return;
	lv_indev_type_t indev_type = lv_indev_get_type(indev);

	lv_event_code_t code = lv_event_get_code(e);	

	if(code == LV_EVENT_CLICKED ) {
		lv_keyboard_set_textarea(ui_Screen1_Keyboard1, ui_password);	
	}

	
	// Your code here
}

void username__set_keyboard(lv_event_t * e)
{
	lv_event_code_t code = lv_event_get_code(e);

	if(code == LV_EVENT_CLICKED ) {
		lv_keyboard_set_textarea(ui_Screen1_Keyboard1, ui_username);		
	}


	// Your code here
}
