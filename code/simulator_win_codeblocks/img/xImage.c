#include "lvgl.h"
#include "xBSP_Config.h"
#include "xAPP_Config.h"

const int tuner_konb_position[6][2] = {
  {81,121}, {79,74}, {77,28},
  {-19,28}, {-21,74}, {-23,121}
};

const int tuner_point_position[6][2] = {
  {174,173}, {174,128}, {174,81},
  {14,81}, {14,128}, {14,173}
};

typedef enum
{
  INDEX_img_drummer_roller_bg,
  INDEX_img_back_charge,
  INDEX_img_startup,
  INDEX_img_drummer_bg1,
  INDEX_img_drummer_bg2,

  INDEX_img_drummer_btn_type,
  INDEX_img_drummer_btn_dv,
  INDEX_img_drummer_btn_bpm,
  INDEX_img_drummer_btn_none,

  INDEX_img_logo_battery_in,
  INDEX_img_logo_battery_out,
  INDEX_img_logo_ble,
  INDEX_img_logo_foot,
  INDEX_img_logo_gt_mute,
  INDEX_img_logo_hp,
  INDEX_img_logo_linein,
  INDEX_img_logo_lineout,
  INDEX_img_logo_music,
  INDEX_img_logo_otg,
  INDEX_img_looper_btn_none,
  INDEX_img_looper_btn_select,
  INDEX_img_looper_circular,
  INDEX_img_main_bg1,
  INDEX_img_main_bg2,
  INDEX_img_main_btn_L,
  INDEX_img_main_btn_L2,
  INDEX_img_main_btn_M,
  INDEX_img_main_btn_M2,
  INDEX_img_main_btn_R,
  INDEX_img_main_btn_R2,
  INDEX_img_preset_bg,
  INDEX_img_preset_roller_bg,
  INDEX_img_tuner_btn_none,
  INDEX_img_tuner_btn_select,
  INDEX_img_tuner_guitar,
  INDEX_img_tuner_ok,
  INDEX_img_tuner_PitchCent,
  INDEX_img_tuner_mask,
  INDEX_img_tuner_down,
  INDEX_img_tuner_up,
  INDEX_img_tuner_ruler,
  INDEX_img_tuner_triangle,
  INDEX_img_tuner_triangle_green,
  INDEX_img_tuner_b,
  INDEX_img_tuner_ii,
  INDEX_img_tuner_konb_L_check,
  INDEX_img_tuner_konb_L_none,
  INDEX_img_tuner_konb_L_ok,
  INDEX_img_tuner_konb_R_check,
  INDEX_img_tuner_konb_R_none,
  INDEX_img_tuner_konb_R_ok,
  INDEX_img_tuner_ruler_ok,
  INDEX_img_tuner_large_ruler,
  INDEX_img_tuner_large_ruler_ok,


  /**setting页面**/
  INDEX_img_set_ble,
  INDEX_img_set_brightness,
  INDEX_img_set_hp,
  INDEX_img_set_linein,
  INDEX_img_set_lineout,
  INDEX_img_set_otg,
  INDEX_img_set_u,
  INDEX_img_set_foot,
  INDEX_img_set_u1,
  INDEX_img_set_u2,

  INDEX_IMG_MAX,
} ImgIndexTypeDef;

#if CONFIG_EN_DOWNLOAD_IMAGE

#include "img_drummer_roller_bg.c"
#include "img_back_charge.c"
#include "img_startup.c"

#include "img_drummer_bg1.c"
#include "img_drummer_bg2.c"

#include "img_drummer_btn_type.c"
#include "img_drummer_btn_dv.c"
#include "img_drummer_btn_bpm.c"
#include "img_drummer_btn_none.c"

#include "img_logo_battery_in.c"
#include "img_logo_battery_out.c"
#include "img_logo_ble.c"
#include "img_logo_foot.c"
#include "img_logo_gt_mute.c"
#include "img_logo_hp.c"
#include "img_logo_linein.c"
#include "img_logo_lineout.c"
#include "img_logo_music.c"
#include "img_logo_otg.c"
#include "img_looper_btn_none.c"
#include "img_looper_btn_select.c"
#include "img_looper_circular.c"
/**main页面**/
#include "img_main_bg1.c"
#include "img_main_bg2.c"
#include "img_main_btn_L.c"
#include "img_main_btn_L2.c"
#include "img_main_btn_M.c"
#include "img_main_btn_M2.c"
#include "img_main_btn_R.c"
#include "img_main_btn_R2.c"

#include "img_preset_bg.c"
#include "img_preset_roller_bg.c"
/**tuner页面**/
#include "img_tuner_btn_none.c"
#include "img_tuner_btn_select.c"
#include "img_tuner_guitar.c"
#include "img_tuner_ok.c"
#include "img_tuner_PitchCent.c"
#include "img_tuner_mask.c"
#include "img_tuner_down.c"
#include "img_tuner_up.c"
#include "img_tuner_ruler.c"
#include "img_tuner_triangle.c"
#include "img_tuner_triangle_green.c"
#include "img_tuner_b.c"
#include "img_tuner_ii.c"
#include "img_tuner_konb_L_check.c"
#include "img_tuner_konb_L_none.c"
#include "img_tuner_konb_L_ok.c"
#include "img_tuner_konb_R_check.c"
#include "img_tuner_konb_R_none.c"
#include "img_tuner_konb_R_ok.c"
#include "img_tuner_ruler_ok.c"
#include "img_tuner_large_ruler.c"
#include "img_tuner_large_ruler_ok.c"

/**setting页面**/
#include "img_set_ble.c"
#include "img_set_brightness.c"
#include "img_set_hp.c"
#include "img_set_linein.c"
#include "img_set_lineout.c"
#include "img_set_otg.c"
#include "img_set_u.c"
#include "img_set_foot.c"
#include "img_set_u1.c"
#include "img_set_u2.c"

__attribute__((used)) ATTRIBUTE_IMAGE_SECTION const uint8_t *ImageAddrList[] =
    {   
        img_drummer_roller_bg_map,
        img_back_charge_map,
        img_startup_map,
        img_drummer_bg1_map,
        img_drummer_bg2_map,
        img_drummer_btn_type_map,
        img_drummer_btn_dv_map,
        img_drummer_btn_bpm_map,
        img_drummer_btn_none_map,
        img_logo_battery_in_map,
        img_logo_battery_out_map,
        img_logo_ble_map,
        img_logo_foot_map,
        img_logo_gt_mute_map,
        img_logo_hp_map,
        img_logo_linein_map,
        img_logo_lineout_map,
        img_logo_music_map,
        img_logo_otg_map,
        img_looper_btn_none_map,
        img_looper_btn_select_map,
        img_looper_circular_map,
        img_main_bg1_map,
        img_main_bg2_map,
        img_main_btn_L_map,
        img_main_btn_L2_map,
        img_main_btn_M_map,
        img_main_btn_M2_map,
        img_main_btn_R_map,
        img_main_btn_R2_map,
        img_preset_bg_map,
        img_preset_roller_bg_map,
        img_tuner_btn_none_map,
        img_tuner_btn_select_map,
        img_tuner_guitar_map,
        img_tuner_ok_map,
        img_tuner_PitchCent_map,
        img_tuner_mask_map,
        img_tuner_down_map,
        img_tuner_up_map,
        img_tuner_ruler_map,
        img_tuner_triangle_map,
        img_tuner_triangle_green_map,
        img_tuner_b_map,
        img_tuner_ii_map,
        img_tuner_konb_L_check_map,
        img_tuner_konb_L_none_map,
        img_tuner_konb_L_ok_map,
        img_tuner_konb_R_check_map,
        img_tuner_konb_R_none_map,
        img_tuner_konb_R_ok_map,
        img_tuner_ruler_ok_map,
        img_tuner_large_ruler_map,
        img_tuner_large_ruler_ok_map,

        img_set_ble_map,
        img_set_brightness_map,
        img_set_hp_map,
        img_set_linein_map,
        img_set_lineout_map,
        img_set_otg_map,
        img_set_u_map,
        img_set_foot_map,
        img_set_u1_map,
        img_set_u2_map,

};

const void *ImageAddrindex[] __attribute__((at(0x60000000 + (4 * 1024 * 1024)))) =
    {
        ImageAddrList,
};

#else

uint8_t **ImageAddrList;

#endif

lv_img_dsc_t img_tuner_konb_R_ok = {
  .header.always_zero = 0,
  .header.w = 24,
  .header.h = 22,
  .data_size = 528 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  // .data = img_tuner_konb_R_ok_map,
};

lv_img_dsc_t img_tuner_konb_R_none = {
  .header.always_zero = 0,
  .header.w = 24,
  .header.h = 22,
  .data_size = 528 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  // .data = img_tuner_konb_R_none_map,
};

lv_img_dsc_t img_tuner_konb_R_check = {
  .header.always_zero = 0,
  .header.w = 24,
  .header.h = 22,
  .data_size = 528 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  // .data = img_tuner_konb_R_check_map,
};

lv_img_dsc_t img_tuner_large_ruler_ok = {
  .header.always_zero = 0,
  .header.w = 282,
  .header.h = 19,
  .data_size = 5358 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  // .data = img_tuner_large_ruler_ok_map,
};

lv_img_dsc_t img_tuner_large_ruler = {
  .header.always_zero = 0,
  .header.w = 281,
  .header.h = 19,
  .data_size = 5339 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  // .data = img_tuner_large_ruler_map,
};

lv_img_dsc_t img_tuner_ruler_ok = {
  .header.always_zero = 0,
  .header.w = 127,
  .header.h = 13,
  .data_size = 1651 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  // .data = img_tuner_ruler_ok_map,
};

lv_img_dsc_t img_tuner_konb_L_ok = {
  .header.always_zero = 0,
  .header.w = 24,
  .header.h = 22,
  .data_size = 528 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  // .data = img_tuner_konb_L_ok_map,
};

lv_img_dsc_t img_tuner_konb_L_none = {
  .header.always_zero = 0,
  .header.w = 24,
  .header.h = 22,
  .data_size = 528 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  // .data = img_tuner_konb_L_none_map,
};

lv_img_dsc_t img_tuner_konb_L_check = {
  .header.always_zero = 0,
  .header.w = 24,
  .header.h = 22,
  .data_size = 528 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  // .data = img_tuner_konb_L_check_map,
};

lv_img_dsc_t img_drummer_roller_bg = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 133,
  .header.h = 108,
  .data_size = 14364 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  //.data = img_drummer_roller_bg_map,
};

lv_img_dsc_t img_back_charge = {
  .header.always_zero = 0,
  .header.w = 35,
  .header.h = 59,
  .data_size = 2065 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_back_charge_map,
};

lv_img_dsc_t img_drummer_bg2 = {
  .header.always_zero = 0,
  .header.w = 99,
  .header.h = 102,
  .data_size = 10098 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_drummer_bg2_map,
};

lv_img_dsc_t img_drummer_btn_bpm = {
  .header.always_zero = 0,
  .header.w = 81,
  .header.h = 51,
  .data_size = 4131 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_drummer_btn_bpm_map,
};

lv_img_dsc_t img_drummer_btn_dv = {
  .header.always_zero = 0,
  .header.w = 80,
  .header.h = 50,
  .data_size = 4000 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_drummer_btn_dv_map,
};

lv_img_dsc_t img_drummer_btn_none = {
  .header.always_zero = 0,
  .header.w = 159,
  .header.h = 51,
  .data_size = 8109 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_drummer_btn_none_map,
};

lv_img_dsc_t img_drummer_btn_type = {
  .header.always_zero = 0,
  .header.w = 160,
  .header.h = 51,
  .data_size = 8160 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_drummer_btn_type_map,
};

lv_img_dsc_t img_logo_battery_in = {
  .header.always_zero = 0,
  .header.w = 6,
  .header.h = 13,
  .data_size = 78 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_logo_battery_in_map,
};

lv_img_dsc_t img_logo_battery_out = {
  .header.always_zero = 0,
  .header.w = 41,
  .header.h = 27,
  .data_size = 1107 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_logo_battery_out_map,
};

lv_img_dsc_t img_logo_ble = {
  .header.always_zero = 0,
  .header.w = 27,
  .header.h = 27,
  .data_size = 729 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_logo_ble_map,
};

lv_img_dsc_t img_logo_foot = {
  .header.always_zero = 0,
  .header.w = 27,
  .header.h = 27,
  .data_size = 729 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_logo_foot_map,
};

lv_img_dsc_t img_logo_gt_mute = {
  .header.always_zero = 0,
  .header.w = 27,
  .header.h = 27,
  .data_size = 729 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_logo_gt_mute_map,
};

lv_img_dsc_t img_logo_hp = {
  .header.always_zero = 0,
  .header.w = 27,
  .header.h = 27,
  .data_size = 729 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_logo_hp_map,
};


lv_img_dsc_t img_logo_linein = {
  .header.always_zero = 0,
  .header.w = 27,
  .header.h = 27,
  .data_size = 729 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_logo_linein_map,
};

lv_img_dsc_t img_logo_lineout = {
  .header.always_zero = 0,
  .header.w = 27,
  .header.h = 27,
  .data_size = 729 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_logo_lineout_map,
};

lv_img_dsc_t img_logo_music = {
  .header.always_zero = 0,
  .header.w = 27,
  .header.h = 27,
  .data_size = 729 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_logo_music_map,
};

lv_img_dsc_t img_logo_otg = {
  .header.always_zero = 0,
  .header.w = 27,
  .header.h = 27,
  .data_size = 729 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_logo_otg_map,
};

lv_img_dsc_t img_looper_btn_none = {
  .header.always_zero = 0,
  .header.w = 87,
  .header.h = 35,
  .data_size = 3045 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_looper_btn_none_map,
};

lv_img_dsc_t img_looper_btn_select = {
  .header.always_zero = 0,
  .header.w = 87,
  .header.h = 35,
  .data_size = 3045 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_looper_btn_select_map,
};

lv_img_dsc_t img_looper_circular = {
  .header.always_zero = 0,
  .header.w = 105,
  .header.h = 105,
  .data_size = 11025 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_looper_circular_map,
};

lv_img_dsc_t img_main_bg1 = {
  .header.always_zero = 0,
  .header.w = 139,
  .header.h = 106,
  .data_size = 14734 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_main_bg1_map,
};

lv_img_dsc_t img_main_bg2 = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 138,
  .header.h = 107,
  .data_size = 14766 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  // .data = img_main_bg2_map,
};

lv_img_dsc_t img_main_btn_L = {
  .header.always_zero = 0,
  .header.w = 99,
  .header.h = 35,
  .data_size = 3465 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_main_btn_L_map,
};

lv_img_dsc_t img_main_btn_L2 = {
  .header.always_zero = 0,
  .header.w = 99,
  .header.h = 35,
  .data_size = 3465 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_main_btn_L2_map,
};

lv_img_dsc_t img_main_btn_M = {
  .header.always_zero = 0,
  .header.w = 99,
  .header.h = 35,
  .data_size = 3465 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_main_btn_M_map,
};

lv_img_dsc_t img_main_btn_M2 = {
  .header.always_zero = 0,
  .header.w = 99,
  .header.h = 35,
  .data_size = 3465 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_main_btn_M2_map,
};

lv_img_dsc_t img_main_btn_R = {
  .header.always_zero = 0,
  .header.w = 98,
  .header.h = 35,
  .data_size = 3430 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_main_btn_R_map,
};

lv_img_dsc_t img_main_btn_R2 = {
  .header.always_zero = 0,
  .header.w = 99,
  .header.h = 35,
  .data_size = 3465 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_main_btn_R2_map,
};

lv_img_dsc_t img_preset_bg = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 173,
  .header.h = 119,
  .data_size = 20587 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  // .data = img_preset_bg_map,
};

lv_img_dsc_t img_preset_roller_bg = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 99,
  .header.h = 119,
  .data_size = 11781 * LV_IMG_PX_SIZE_ALPHA_BYTE,
 // .data = img_preset_roller_bg_map,
};


lv_img_dsc_t img_set_ble = {
  .header.always_zero = 0,
  .header.w = 20,
  .header.h = 20,
  .data_size = 400 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_set_ble_map,
};

lv_img_dsc_t img_set_brightness = {
  .header.always_zero = 0,
  .header.w = 20,
  .header.h = 20,
  .data_size = 400 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_set_brightness_map,
};

lv_img_dsc_t img_set_hp = {
  .header.always_zero = 0,
  .header.w = 23,
  .header.h = 21,
  .data_size = 483 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_set_hp_map,
};

lv_img_dsc_t img_set_linein = {
  .header.always_zero = 0,
  .header.w = 20,
  .header.h = 20,
  .data_size = 400 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_set_linein_map,
};

lv_img_dsc_t img_set_lineout = {
  .header.always_zero = 0,
  .header.w = 20,
  .header.h = 20,
  .data_size = 400 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_set_lineout_map,
};

lv_img_dsc_t img_set_otg = {
  .header.always_zero = 0,
  .header.w = 20,
  .header.h = 20,
  .data_size = 400 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_set_otg_map,
};

lv_img_dsc_t img_set_u = {
  .header.always_zero = 0,
  .header.w = 20,
  .header.h = 20,
  .data_size = 400 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_set_u_map,
};

lv_img_dsc_t img_startup = {
  .header.always_zero = 0,
  .header.w = 46,
  .header.h = 121,
  .data_size = 5566 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_startup_map,
};

lv_img_dsc_t img_tuner_b = {
  .header.always_zero = 0,
  .header.w = 7,
  .header.h = 14,
  .data_size = 98 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_tuner_b_map,
};

lv_img_dsc_t img_tuner_btn_none = {
  .header.always_zero = 0,
  .header.w = 87,
  .header.h = 37,
  .data_size = 3219 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_tuner_btn_none_map,
};

lv_img_dsc_t img_tuner_btn_select = {
  .header.always_zero = 0,
  .header.w = 88,
  .header.h = 37,
  .data_size = 3256 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_tuner_btn_select_map,
};

lv_img_dsc_t img_tuner_up = {
  .header.always_zero = 0,
  .header.w = 16,
  .header.h = 8,
  .data_size = 128 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_tuner_up_map,
};

lv_img_dsc_t img_set_foot = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 35,
  .header.h = 16,
  .data_size = 560 * LV_IMG_PX_SIZE_ALPHA_BYTE,
//   .data = img_set_foot_map,
};

lv_img_dsc_t img_set_u2 = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 22,
  .header.h = 21,
  .data_size = 462 * LV_IMG_PX_SIZE_ALPHA_BYTE,
//   .data = img_set_u2_map,
};

lv_img_dsc_t img_set_u1 = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 20,
  .header.h = 21,
  .data_size = 420 * LV_IMG_PX_SIZE_ALPHA_BYTE,
//   .data = img_set_u1_map,
};

lv_img_dsc_t img_drummer_bg1 = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 159,
  .header.h = 101,
  .data_size = 16059 * LV_IMG_PX_SIZE_ALPHA_BYTE,
//   .data = img_drummer_bg1_map,
};

lv_img_dsc_t img_tuner_down = {
  .header.always_zero = 0,
  .header.w = 16,
  .header.h = 8,
  .data_size = 128 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_tuner_down_map,
};

lv_img_dsc_t img_tuner_mask = {
  .header.always_zero = 0,
  .header.w = 165,
  .header.h = 165,
  .data_size = 27225 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_tuner_mask_map,
};

lv_img_dsc_t img_tuner_guitar = {
  .header.always_zero = 0,
  .header.w = 83,
  .header.h = 188,
  .data_size = 15604 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_tuner_guitar_map,
};

lv_img_dsc_t img_tuner_ii = {
  .header.always_zero = 0,
  .header.w = 12,
  .header.h = 13,
  .data_size = 156 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_tuner_ii_map,
};

lv_img_dsc_t img_tuner_ok = {
  .header.always_zero = 0,
  .header.w = 165,
  .header.h = 165,
  .data_size = 27225 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_tuner_ok_map,
};

lv_img_dsc_t img_tuner_PitchCent = {
  .header.always_zero = 0,
  .header.w = 37,
  .header.h = 21,
  .data_size = 777 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_tuner_PitchCent_map,
};

lv_img_dsc_t img_tuner_ruler = {
  .header.always_zero = 0,
  .header.w = 127,
  .header.h = 13,
  .data_size = 1651 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_tuner_ruler_map,
};

lv_img_dsc_t img_tuner_triangle_green = {
  .header.always_zero = 0,
  .header.w = 13,
  .header.h = 12,
  .data_size = 156 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_tuner_triangle_green_map,
};

lv_img_dsc_t img_tuner_triangle = {
  .header.always_zero = 0,
  .header.w = 12,
  .header.h = 12,
  .data_size = 144 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_tuner_triangle_map,
};

/*
*********************************************************************************************************************
@ Brief  :

@ Param  : NONE

@ Return : NONE

@ Author : WZB

@ Data   : 2022-11-25 11:52
*********************************************************************************************************************
*/
void xGUI_ImageDataInit(void)
{
#if !CONFIG_EN_DOWNLOAD_IMAGE
  ImageAddrList = (uint8_t **)*((uint32_t *)(0x60000000 + (4 * 1024 * 1024)));
#endif

  img_drummer_roller_bg.data = ImageAddrList[INDEX_img_drummer_roller_bg];
  img_back_charge.data = ImageAddrList[INDEX_img_back_charge];
  img_startup.data = ImageAddrList[INDEX_img_startup];
  img_drummer_bg1.data = ImageAddrList[INDEX_img_drummer_bg1];
  img_drummer_bg2.data = ImageAddrList[INDEX_img_drummer_bg2];
  img_drummer_btn_type.data = ImageAddrList[INDEX_img_drummer_btn_type];
  img_drummer_btn_dv.data = ImageAddrList[INDEX_img_drummer_btn_dv];
  img_drummer_btn_bpm.data = ImageAddrList[INDEX_img_drummer_btn_bpm];
  img_drummer_btn_none.data = ImageAddrList[INDEX_img_drummer_btn_none];
  img_logo_battery_in.data = ImageAddrList[INDEX_img_logo_battery_in];
  img_logo_battery_out.data = ImageAddrList[INDEX_img_logo_battery_out];
  img_logo_ble.data = ImageAddrList[INDEX_img_logo_ble];
  img_logo_foot.data = ImageAddrList[INDEX_img_logo_foot];
  img_logo_gt_mute.data = ImageAddrList[INDEX_img_logo_gt_mute];
  img_logo_hp.data = ImageAddrList[INDEX_img_logo_hp];
  img_logo_linein.data = ImageAddrList[INDEX_img_logo_linein];
  img_logo_lineout.data = ImageAddrList[INDEX_img_logo_lineout];
  img_logo_music.data = ImageAddrList[INDEX_img_logo_music];
  img_logo_otg.data = ImageAddrList[INDEX_img_logo_otg];
  img_looper_btn_none.data = ImageAddrList[INDEX_img_looper_btn_none];
  img_looper_btn_select.data = ImageAddrList[INDEX_img_looper_btn_select];
  img_looper_circular.data = ImageAddrList[INDEX_img_looper_circular];
  img_main_bg1.data = ImageAddrList[INDEX_img_main_bg1];
  img_main_bg2.data = ImageAddrList[INDEX_img_main_bg2];
  img_main_btn_L.data = ImageAddrList[INDEX_img_main_btn_L];
  img_main_btn_L2.data = ImageAddrList[INDEX_img_main_btn_L2];
  img_main_btn_M.data = ImageAddrList[INDEX_img_main_btn_M];
  img_main_btn_M2.data = ImageAddrList[INDEX_img_main_btn_M2];
  img_main_btn_R.data = ImageAddrList[INDEX_img_main_btn_R];
  img_main_btn_R2.data = ImageAddrList[INDEX_img_main_btn_R2];
  img_preset_bg.data = ImageAddrList[INDEX_img_preset_bg];
  img_preset_roller_bg.data = ImageAddrList[INDEX_img_preset_roller_bg];
  img_tuner_btn_select.data = ImageAddrList[INDEX_img_tuner_btn_select];
  img_tuner_btn_none.data = ImageAddrList[INDEX_img_tuner_btn_none];
  img_tuner_guitar.data = ImageAddrList[INDEX_img_tuner_guitar];
  img_tuner_ok.data = ImageAddrList[INDEX_img_tuner_ok];
  img_tuner_PitchCent.data = ImageAddrList[INDEX_img_tuner_PitchCent];
  img_tuner_mask.data = ImageAddrList[INDEX_img_tuner_mask];
  img_tuner_down.data = ImageAddrList[INDEX_img_tuner_down];
  img_tuner_up.data = ImageAddrList[INDEX_img_tuner_up];
  img_tuner_ruler.data = ImageAddrList[INDEX_img_tuner_ruler];
  img_tuner_triangle.data = ImageAddrList[INDEX_img_tuner_triangle];
  img_tuner_triangle_green.data = ImageAddrList[INDEX_img_tuner_triangle_green];
  img_tuner_b.data = ImageAddrList[INDEX_img_tuner_b];
  img_tuner_ii.data = ImageAddrList[INDEX_img_tuner_ii];
  img_tuner_konb_L_check.data = ImageAddrList[INDEX_img_tuner_konb_L_check];
  img_tuner_konb_L_none.data = ImageAddrList[INDEX_img_tuner_konb_L_none];
  img_tuner_konb_L_ok.data = ImageAddrList[INDEX_img_tuner_konb_L_ok];
  img_tuner_konb_R_check.data = ImageAddrList[INDEX_img_tuner_konb_R_check];
  img_tuner_konb_R_none.data = ImageAddrList[INDEX_img_tuner_konb_R_none];
  img_tuner_konb_R_ok.data = ImageAddrList[INDEX_img_tuner_konb_R_ok];
  img_tuner_ruler_ok.data = ImageAddrList[INDEX_img_tuner_ruler_ok];
  img_tuner_large_ruler.data = ImageAddrList[INDEX_img_tuner_large_ruler];
  img_tuner_large_ruler_ok.data = ImageAddrList[INDEX_img_tuner_large_ruler_ok];

  /**setting页面**/
  img_set_ble.data = ImageAddrList[INDEX_img_set_ble];
  img_set_brightness.data = ImageAddrList[INDEX_img_set_brightness];
  img_set_hp.data = ImageAddrList[INDEX_img_set_hp];
  img_set_linein.data = ImageAddrList[INDEX_img_set_linein];
  img_set_lineout.data = ImageAddrList[INDEX_img_set_lineout];
  img_set_otg.data = ImageAddrList[INDEX_img_set_otg];
  img_set_u.data = ImageAddrList[INDEX_img_set_u];
  img_set_foot.data = ImageAddrList[INDEX_img_set_foot];
  img_set_u1.data = ImageAddrList[INDEX_img_set_u1];
  img_set_u2.data = ImageAddrList[INDEX_img_set_u2];
}

/*************************** End of file ****************************/
