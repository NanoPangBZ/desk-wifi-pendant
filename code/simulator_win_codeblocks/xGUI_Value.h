/**************************************************START OF FILE*****************************************************/

#ifndef HH__XGUI_VALUE__HH
#define HH__XGUI_VALUE__HH

/*------------------------------------------------------------------------------------------------------------------
Includes
*/
#include "lvgl.h"

/*------------------------------------------------------------------------------------------------------------------
macro definition
*/
#define COLOR_GREY lv_color_hex(0x919191)

/*------------------------------------------------------------------------------------------------------------------
Variables
*/

/**UI控件参数**/
extern lv_obj_t *lv_src;

/**主页面obj**/
extern lv_obj_t *obj_logo;
extern lv_obj_t *obj_main;
extern lv_obj_t *obj_tuner;
extern lv_obj_t *obj_tuner_A; //调音表 自动识别
extern lv_obj_t *obj_preset;
extern lv_obj_t *obj_looper;
extern lv_obj_t *obj_drummer;
extern lv_obj_t *obj_setting;
extern lv_obj_t *obj_Charge;

/**开机页面obj**/
extern lv_obj_t *obj_Startup;
extern lv_obj_t *obj_Startup_lable;
extern lv_obj_t *obj_Startup_img;

/**测试页面**/
extern lv_obj_t *obj_Test;
extern lv_obj_t *obj_Test_lable;
extern lv_obj_t *obj_Test_roller;
extern lv_obj_t *obj_Test_btn_Back;


/**logo页面子obj**/
extern lv_obj_t *obj_logo_foot;
extern lv_obj_t *obj_logo_ble;
extern lv_obj_t *obj_logo_hp;
extern lv_obj_t *obj_logo_linein;
extern lv_obj_t *obj_logo_lineout;
extern lv_obj_t *obj_logo_gt_mute; //消除人声
extern lv_obj_t *obj_logo_music;
extern lv_obj_t *obj_logo_otg;
extern lv_obj_t *obj_logo_battery_out;
extern lv_obj_t *obj_logo_battery_blocks[5];   //电池电量的五个块


//充电背景
extern lv_obj_t *obj_show_charge;

//充电动画
extern lv_anim_t *anim_charge;

/**主页面子obj**/
extern lv_obj_t *obj_main_bg1;
extern lv_obj_t *obj_main_bg2;
extern lv_obj_t *obj_main_btn_L;
extern lv_obj_t *obj_main_btn_M;
extern lv_obj_t *obj_main_btn_R;

extern lv_obj_t *obj_main_label_volume;
extern lv_obj_t *obj_main_label_PresetBankCurrent;
extern lv_obj_t *obj_main_label_PresetBankNext;
extern lv_obj_t *obj_main_label_Looper;
extern lv_obj_t *obj_main_label_Drummer;

/**tuner页面子obj**/
extern lv_obj_t *obj_tuner_A;  //调音表 自动识别
extern lv_obj_t *obj_tuner_GT; //调音表 琴头

//右边3个按键
extern lv_obj_t *obj_tuner_btn_mute;
extern lv_obj_t *obj_tuner_btn_beep;
extern lv_obj_t *obj_tuner_btn_vocal;
extern lv_obj_t *obj_tuner_label_mute;
extern lv_obj_t *obj_tuner_label_beep;
extern lv_obj_t *obj_tuner_label_vocal;

/**tuner-琴头页面**/
extern lv_obj_t *obj_tuner_guitar;   //琴头
extern lv_obj_t *obj_tuner_guitar_img; //琴头图案
extern lv_obj_t *obj_tuner_konb[6];  //琴头旋钮
extern lv_obj_t *obj_tuner_point[6];   //琴头标志圆点
extern lv_obj_t *obj_tuner_ruler;    //刻度尺
extern lv_obj_t *obj_tuner_triangle; //三角形

extern lv_obj_t *obj_tuner_pitch; //音分
extern lv_obj_t *obj_tuner_label_pitch;

/**tuner-自动识别页面**/
extern lv_obj_t *obj_tuner_A_divide;
extern lv_obj_t *obj_tuner_A_value;
extern lv_obj_t *obj_tuner_A_value_block;
extern lv_obj_t *obj_tuner_A_slider;
extern lv_obj_t *obj_tuner_A_label_name;
extern lv_obj_t *obj_tuner_A_pitch;

/**Looper页面子obj**/
extern lv_obj_t *obj_lp_circular;
extern lv_obj_t *obj_lp_label_status;
extern lv_obj_t *obj_lp_label_redoundo;

extern lv_obj_t *obj_lp_preset;
extern lv_obj_t *obj_lp_label_preset;

extern lv_obj_t *obj_lp_btn_statue;
extern lv_obj_t *obj_lp_btn_DV;
extern lv_obj_t *obj_lp_btn_LV;
extern lv_obj_t *obj_lp_btn_TYPE;
extern lv_obj_t *obj_lp_btn_BPM;
extern lv_obj_t *obj_lp_label_DV;
extern lv_obj_t *obj_lp_label_LV;
extern lv_obj_t *obj_lp_label_TYPE;
extern lv_obj_t *obj_lp_label_BPM;

extern lv_obj_t *obj_lp_btn_L;
extern lv_obj_t *obj_lp_btn_M;
extern lv_obj_t *obj_lp_btn_R;

extern lv_obj_t *obj_lp_label_Back;
extern lv_obj_t *obj_lp_label_Drummer;

/**drummer页面子obj**/
extern lv_obj_t *obj_drum_bg;
extern lv_obj_t *obj_drum_roller_bg;

extern lv_obj_t *obj_type_roller;

extern lv_obj_t *obj_drum_btn_TYPE;
extern lv_obj_t *obj_drum_btn_DV;
extern lv_obj_t *obj_drum_btn_BPM;

extern lv_obj_t *obj_drum_label_btn_type;
extern lv_obj_t *obj_drum_label_btn_DV;
extern lv_obj_t *obj_drum_label_btn_BPM;

extern lv_obj_t *obj_drum_btn_L;
extern lv_obj_t *obj_drum_btn_M;
extern lv_obj_t *obj_drum_btn_R;

/**preset页面子obj**/
extern lv_obj_t *obj_preset_bg;
extern lv_obj_t *obj_preset_btn;
extern lv_obj_t *obj_preset_roller;
extern lv_obj_t *obj_preset_roller_bg;
extern lv_obj_t *obj_preset_label_bank;


/**Setting页面子obj**/
extern lv_obj_t *obj_set_btn_L;
extern lv_obj_t *obj_set_btn_M;
extern lv_obj_t *obj_set_btn_R;

extern lv_obj_t *obj_set_label_Drummer;

/**test**/
extern lv_obj_t *obj_label_battery;
extern lv_obj_t *obj_label_chargeVoltage;
extern lv_obj_t *obj_label_UCheckVoltage;
extern lv_obj_t *obj_main_label_Point;

//extern GUI_MainPageTypeDef UiPagecurrent;
//extern GUI_MainPageTypeDef UiPageLast;
extern uint32_t SubPageLast;
//extern GUI_MainPageTypeDef PageTemp; //当前界面

extern const char *pPresetName[];

/*------------------------------------------------------------------------------------------------------------------
Function declaration
*/

#endif

/****************************************************END OF FILE*****************************************************/
