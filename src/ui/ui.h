// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.3
// LVGL version: 8.3.6
// Project name: EnergyMonitor_2

#ifndef _ENERGYMONITOR_2_UI_H
#define _ENERGYMONITOR_2_UI_H

#ifdef __cplusplus
extern "C" {
#endif

    #include "lvgl/lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t *ui_Screen1;
extern lv_obj_t *ui_Label1;
extern lv_obj_t *ui_Label2;
extern lv_obj_t *ui_LabelValue;
extern lv_obj_t *ui_EnergyLoadArc;
extern lv_obj_t *ui_ImageLineArcIndicator;
extern lv_obj_t *ui_ImageLine;
extern lv_obj_t *ui_ImageBoilerArcIndicator;
extern lv_obj_t *ui_ImageBoiler;
extern lv_obj_t *ui____initial_actions0;

LV_IMG_DECLARE( ui_img_bolt_circle_fill_png);   // assets/bolt.circle.fill.png
LV_IMG_DECLARE( ui_img_bolt_fill_white_png);   // assets/bolt.fill_white.png
LV_IMG_DECLARE( ui_img_water_waves_orange_png);   // assets/water.waves_orange.png



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
