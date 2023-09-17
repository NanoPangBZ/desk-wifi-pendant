/**************************************************START OF FILE*****************************************************/

#ifndef HH__XIMAGE__HH
#define HH__XIMAGE__HH

/*------------------------------------------------------------------------------------------------------------------
Includes
*/
#include <stdint.h>
#include "../../lvgl/src/widgets/lv_img.h"

/*------------------------------------------------------------------------------------------------------------------
macro definition
*/

/****位置****/
#define X_LOGO_ENYA 137
#define Y_LOGO_ENYA 59

#define Y_LOGO 10
#define X_LOGO_FOOT 6
#define X_LOGO_BLE 38
#define X_LOGO_HP 70
#define X_LOGO_GT_MUTE 102
#define X_LOGO_MUSIC 134
#define X_LOGO_OTG 166
#define X_LOGO_LINEIN 198
#define X_LOGO_LINEOUT 230
#define X_LOGO_BATTERY 263

/*电池图标内部位置*/
#define Y_LOGO_BATTERY_1 (17 - Y_LOGO)
#define X_LOGO_BATTERY_1 (266 - X_LOGO_BATTERY)
#define X_LOGO_BATTERY_2 (273 - X_LOGO_BATTERY)
#define X_LOGO_BATTERY_3 (280 - X_LOGO_BATTERY)
#define X_LOGO_BATTERY_4 (287 - X_LOGO_BATTERY)
#define X_LOGO_BATTERY_5 (294 - X_LOGO_BATTERY)

//主界面
#define X_MAIN_BG1 11
#define Y_MAIN_BG1 24
#define X_MAIN_BG2 171
#define Y_MAIN_BG2 24
#define X_MAIN_BTN_L 11
#define Y_MAIN_BTN_L 155
#define X_MAIN_BTN_M 111
#define Y_MAIN_BTN_M 155
#define X_MAIN_BTN_R 211
#define Y_MAIN_BTN_R 155

#define X_VOLUME 81 //音量
#define Y_VOLUME (135 - 65)
#define X_NAME_CURRENT 241
#define Y_NAME_CURRENT (109 - 18)
#define X_NAME_NEXT 245
#define Y_NAME_NEXT (162 - 18)

// PRESET界面
#define X_PRESET_BG (19 - 5)
#define Y_PRESET_BG 42
#define X_PRESET_CONFIRM 16
#define Y_PRESET_CONFIRM 109
#define X_PRESET_BACK 100
#define Y_PRESET_BACK 109

#define X_PRESET_BTN_P1 (212 - 5)
#define Y_PRESET_BTN_P1 30

// tuner界面
#define X_TUNER_BTN_MUTE 208
#define Y_TUNER_BTN_MUTE 75
#define X_TUNER_BTN_BEEP 208
#define Y_TUNER_BTN_BEEP 119
#define X_TUNER_BTN_VOCAL 208
#define Y_TUNER_BTN_VOCAL 162

// tuner-琴头页面
#define X_TUNER_GT (65)
#define Y_TUNER_GT (53)

// 6个圆
extern const int tuner_point_position[6][2];
#define X_TUNER_C(index) (tuner_point_position[index][0])
#define Y_TUNER_C(index) (tuner_point_position[index][1])
#define D_TUNER_GT_CIR  (22)    //圆直径

// 6个琴头旋钮
extern const int tuner_konb_position[6][2];
#define X_TUNER_KONB(index) (tuner_konb_position[index][0])
#define Y_TUNER_KONB(index) (tuner_konb_position[index][1])

//标尺
#define X_TUNER_RULER 43
#define Y_TUNER_RULER 25
#define X_TUNER_B 29 //"b"
#define Y_TUNER_B 12
#define X_TUNER_II 176 //"#"
#define Y_TUNER_II 11

//三角形
#define Y_TUNER_TRIANGLE 13
#define X_TUNER_TRIANGLE_MIN 38
#define X_TUNER_TRIANGLE_MAX (X_TUNER_TRIANGLE_MIN + 125)

//音分
#define X_TUNER_PITCH 89
#define Y_TUNER_PITCH 42

/**tuner-自动调音页面**/
#define X_TUNER_A_DIVIDE (10)
#define Y_TUNER_A_DIVIDE (58)
#define W_TUNER_A_VALUE_BLOCK (65)
#define H_TUNER_A_VALUE_BLOCK (21)
#define X_TUNER_A_VALUE_BLOCK (120)
#define Y_TUNER_A_VALUE_BLOCK (0)
#define W_TUNER_A_SLIDER ( img_tuner_large_ruler_ok.header.w )
#define X_TUNER_A_SLIDER (0)
#define Y_TUNER_A_SLIDER (-13)
#define X_TUNER_A_B (0)
#define Y_TUNER_A_B (22)
#define X_TUNER_A_II (283)
#define Y_TUNER_A_II (22)
#define X_TUNER_A_PITCH (131)
#define Y_TUNER_A_PITCH (75)
#define X_TUNER_LARGE_RULER (10)
#define Y_TUNER_LARGE_RULER (43)

// looper界面
#define X_LP_PRESET 258
#define Y_LP_PRESET 5
#define X_LP_CIRCULAR 108 //圆环
#define Y_LP_CIRCULAR 24
#define X_LP_BTN_DV 11 //鼓机音量
#define Y_LP_BTN_DV 33
#define X_LP_BTN_LV 221 // LOOPER音量
#define Y_LP_BTN_LV 33
#define X_LP_BTN_TYPE 10
#define Y_LP_BTN_TYPE 86
#define X_LP_BTN_BPM 221
#define Y_LP_BTN_BPM 86

#define X_LP_STATUS 160
#define Y_LP_STATUS 76

// drummer界面
#define X_DR_BTN_TYPE 12
#define Y_DR_BTN_TYPE 20
#define X_DR_BTN_DV 13
#define Y_DR_BTN_DV (110-40)
#define X_DR_BTN_BPM 91
#define Y_DR_BTN_BPM (110-40)

#define X_DR_LIST_TYPE (220 - 35) //列表
#define Y_DR_LIST_TYPE 14

#define X_DR_DV 21
#define Y_DR_DV 76
#define X_DR_BPM 99
#define Y_DR_BPM 76

// setting界面
#define X_SET_1 11
#define Y_SET_1 14
#define X_SET_2 90
#define Y_SET_2 14
#define X_SET_3 169
#define Y_SET_3 14
#define X_SET_4 248
#define Y_SET_4 14

//
#define Y_OTHER (Y_LOGO + 30)
#define X_OTHER_STA 0
#define X_OTHER_END 320

/*------------------------------------------------------------------------------------------------------------------
Variables
*/

LV_IMG_DECLARE(img_drummer_roller_bg);
LV_IMG_DECLARE(img_back_charge);
LV_IMG_DECLARE(img_startup);
LV_IMG_DECLARE(img_drummer_bg1);
LV_IMG_DECLARE(img_drummer_bg2);
LV_IMG_DECLARE(img_drummer_btn_type);
LV_IMG_DECLARE(img_drummer_btn_dv);
LV_IMG_DECLARE(img_drummer_btn_bpm);
LV_IMG_DECLARE(img_drummer_btn_none);
LV_IMG_DECLARE(img_logo_battery_in);
LV_IMG_DECLARE(img_logo_battery_out);
LV_IMG_DECLARE(img_logo_ble);
LV_IMG_DECLARE(img_logo_foot);
LV_IMG_DECLARE(img_logo_gt_mute);
LV_IMG_DECLARE(img_logo_hp);
LV_IMG_DECLARE(img_logo_linein);
LV_IMG_DECLARE(img_logo_lineout);
LV_IMG_DECLARE(img_logo_music);
LV_IMG_DECLARE(img_logo_otg);
LV_IMG_DECLARE(img_looper_btn_none);
LV_IMG_DECLARE(img_looper_btn_select);
LV_IMG_DECLARE(img_looper_circular);
LV_IMG_DECLARE(img_main_bg1);
LV_IMG_DECLARE(img_main_bg2);
LV_IMG_DECLARE(img_main_btn_L);
LV_IMG_DECLARE(img_main_btn_L2);
LV_IMG_DECLARE(img_main_btn_M);
LV_IMG_DECLARE(img_main_btn_M2);
LV_IMG_DECLARE(img_main_btn_R);
LV_IMG_DECLARE(img_main_btn_R2);
LV_IMG_DECLARE(img_preset_bg);
LV_IMG_DECLARE(img_preset_roller_bg);
LV_IMG_DECLARE(img_tuner_btn_none);
LV_IMG_DECLARE(img_tuner_btn_select);
LV_IMG_DECLARE(img_tuner_guitar);
LV_IMG_DECLARE(img_tuner_ok);
LV_IMG_DECLARE(img_tuner_PitchCent);
LV_IMG_DECLARE(img_tuner_mask);
LV_IMG_DECLARE(img_tuner_down);
LV_IMG_DECLARE(img_tuner_up);
LV_IMG_DECLARE(img_tuner_ruler);
LV_IMG_DECLARE(img_tuner_triangle);
LV_IMG_DECLARE(img_tuner_triangle_green);
LV_IMG_DECLARE(img_tuner_b);
LV_IMG_DECLARE(img_tuner_ii);
LV_IMG_DECLARE(img_tuner_konb_L_check);
LV_IMG_DECLARE(img_tuner_konb_L_none);
LV_IMG_DECLARE(img_tuner_konb_L_ok);
LV_IMG_DECLARE(img_tuner_konb_R_check);
LV_IMG_DECLARE(img_tuner_konb_R_none);
LV_IMG_DECLARE(img_tuner_konb_R_ok);
LV_IMG_DECLARE(img_set_ble);
LV_IMG_DECLARE(img_set_brightness);
LV_IMG_DECLARE(img_set_foot);
LV_IMG_DECLARE(img_set_hp);
LV_IMG_DECLARE(img_set_linein);
LV_IMG_DECLARE(img_set_lineout);
LV_IMG_DECLARE(img_set_otg);
LV_IMG_DECLARE(img_set_u);
LV_IMG_DECLARE(img_set_u1);
LV_IMG_DECLARE(img_set_u2);
LV_IMG_DECLARE(img_tuner_large_ruler_ok);
LV_IMG_DECLARE(img_tuner_large_ruler);
LV_IMG_DECLARE(img_tuner_ruler_ok);

void xGUI_ImageDataInit(void);

#endif

/****************************************************END OF FILE*****************************************************/
