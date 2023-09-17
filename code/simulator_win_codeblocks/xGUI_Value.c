/**************************************************START OF FILE*****************************************************/

/*------------------------------------------------------------------------------------------------------------------
Includes
*/
#include "lvgl.h"

/*------------------------------------------------------------------------------------------------------------------
macro definition
*/

/*------------------------------------------------------------------------------------------------------------------
Variables
*/
/**UI控件参数**/
lv_obj_t *lv_src = NULL;

/**主页面obj**/
lv_obj_t *obj_logo = NULL;
lv_obj_t *obj_main = NULL;
lv_obj_t *obj_tuner = NULL; //调音表 顺序调音
lv_obj_t *obj_preset = NULL;
lv_obj_t *obj_looper = NULL;
lv_obj_t *obj_drummer = NULL;
lv_obj_t *obj_setting = NULL;
lv_obj_t *obj_Test = NULL;
lv_obj_t *obj_Charge = NULL;

/**开机页面obj**/
lv_obj_t *obj_Startup = NULL;
lv_obj_t *obj_Startup_lable;
lv_obj_t *obj_Startup_img;

/**测试页面**/
lv_obj_t *obj_Test_lable;
lv_obj_t *obj_Test_roller;
lv_obj_t *obj_Test_btn_Back;


/**logo页面子obj**/
lv_obj_t *obj_logo_foot;
lv_obj_t *obj_logo_ble;
lv_obj_t *obj_logo_hp;
lv_obj_t *obj_logo_linein;
lv_obj_t *obj_logo_lineout;
lv_obj_t *obj_logo_gt_mute; //拾音器静音
lv_obj_t *obj_logo_music;   //消除人声，伴奏
lv_obj_t *obj_logo_otg;
lv_obj_t *obj_logo_battery_out;
lv_obj_t *obj_logo_battery_blocks[5];   //电池电量的五个块

/**充电界面obj**/
lv_obj_t *obj_show_charge;
lv_anim_t *anim_charge;

/**主页面子obj**/
lv_obj_t *obj_main_bg1;
lv_obj_t *obj_main_bg2;
lv_obj_t *obj_main_btn_L;
lv_obj_t *obj_main_btn_M;
lv_obj_t *obj_main_btn_R;

lv_obj_t *obj_main_label_volume;
lv_obj_t *obj_main_label_PresetBankCurrent;
lv_obj_t *obj_main_label_PresetBankNext;

lv_obj_t *obj_main_label_Looper;
lv_obj_t *obj_main_label_Drummer;


/**tuner页面子obj**/
lv_obj_t *obj_tuner_A = NULL;  //调音表 自动识别
lv_obj_t *obj_tuner_GT = NULL; //调音表 琴头


//右边3个按键
lv_obj_t *obj_tuner_btn_mute;
lv_obj_t *obj_tuner_btn_beep;
lv_obj_t *obj_tuner_btn_vocal;
lv_obj_t *obj_tuner_label_mute;
lv_obj_t *obj_tuner_label_beep;
lv_obj_t *obj_tuner_label_vocal;

/**tuner-琴头页面**/
lv_obj_t *obj_tuner_guitar;   //琴头
lv_obj_t *obj_tuner_guitar_img; //琴头图案
lv_obj_t *obj_tuner_konb[6];  //琴头旋钮
lv_obj_t *obj_tuner_point[6];   //琴头圆点
lv_obj_t *obj_tuner_ruler;    //刻度尺
lv_obj_t *obj_tuner_triangle; //三角形

lv_obj_t *obj_tuner_label_pitch;

/**tuner-自动识别页面**/
lv_obj_t *obj_tuner_A_divide;
lv_obj_t *obj_tuner_A_value;
lv_obj_t *obj_tuner_A_value_block;
lv_obj_t *obj_tuner_A_slider;
lv_obj_t *obj_tuner_A_label_name;
lv_obj_t *obj_tuner_A_pitch;

/**Looper页面子obj**/
lv_obj_t *obj_lp_circular;
lv_obj_t *obj_lp_label_status;
lv_obj_t *obj_lp_label_redoundo;

lv_obj_t *obj_lp_preset;
lv_obj_t *obj_lp_label_preset;

lv_obj_t *obj_lp_btn_statue;
lv_obj_t *obj_lp_btn_DV;
lv_obj_t *obj_lp_btn_LV;
lv_obj_t *obj_lp_btn_TYPE;
lv_obj_t *obj_lp_btn_BPM;
lv_obj_t *obj_lp_label_DV;
lv_obj_t *obj_lp_label_LV;
lv_obj_t *obj_lp_label_TYPE;
lv_obj_t *obj_lp_label_BPM;

lv_obj_t *obj_lp_btn_L;
lv_obj_t *obj_lp_btn_M;
lv_obj_t *obj_lp_btn_R;

lv_obj_t *obj_lp_label_Back;
lv_obj_t *obj_lp_label_Drummer;

/**drummer页面子obj**/
lv_obj_t *obj_drum_bg;
lv_obj_t *obj_drum_roller_bg;


lv_obj_t *obj_type_roller;

lv_obj_t *obj_drum_btn_TYPE;
lv_obj_t *obj_drum_btn_DV;
lv_obj_t *obj_drum_btn_BPM;

lv_obj_t *obj_drum_label_btn_type;
lv_obj_t *obj_drum_label_btn_DV;
lv_obj_t *obj_drum_label_btn_BPM;

lv_obj_t *obj_drum_btn_L;
lv_obj_t *obj_drum_btn_M;
lv_obj_t *obj_drum_btn_R;

/**preset页面子obj**/
lv_obj_t *obj_preset_bg;
lv_obj_t *obj_preset_btn;

lv_obj_t *obj_preset_roller;
lv_obj_t *obj_preset_roller_bg;
lv_obj_t *obj_preset_label_bank;


/**Setting页面子obj**/
lv_obj_t *obj_set_btn_L;
lv_obj_t *obj_set_btn_M;
lv_obj_t *obj_set_btn_R;

lv_obj_t *obj_set_label_Drummer;

/**test**/
lv_obj_t *obj_label_battery;
lv_obj_t *obj_label_chargeVoltage;
lv_obj_t *obj_label_UCheckVoltage;
lv_obj_t *obj_main_label_Point;

/*UI相关全局参数*/
//GUI_MainPageTypeDef UiPagecurrent = GUI_MAINPAGE_MAIN;
//GUI_MainPageTypeDef UiPageLast = GUI_MAINPAGE_MAX;
uint32_t SubPageLast = 0;

//GUI_MainPageTypeDef PageTemp = GUI_MAINPAGE_MAIN; //当前界面

const char *pPresetName[3 + 1] = {"Acous", "Boom", "Singer", "Up Down"};

/****************************************************END OF FILE*****************************************************/
