#include <stdint.h>
#include "xLV_Reseal.h"

#define X_MAIN_BG1 9
#define Y_MAIN_BG1 24
#define X_MAIN_BG2 171
#define Y_MAIN_BG2 24
#define X_MAIN_BTN_L 9
#define Y_MAIN_BTN_L 156
#define X_MAIN_BTN_M 109
#define Y_MAIN_BTN_M 155
#define X_MAIN_BTN_R 210
#define Y_MAIN_BTN_R 155

#define lv_font_arial_18 lv_font_montserrat_18

extern const lv_img_dsc_t img_main_btn_L2;
extern const lv_img_dsc_t img_main_btn_M;
extern const lv_img_dsc_t img_main_btn_R;

static lv_obj_t* obj_lp_btn_L;
static lv_obj_t* obj_lp_btn_M;
static lv_obj_t* obj_lp_btn_R;

static lv_label_t *label_obj1;
static lv_label_t *label_obj2;
static lv_label_t *label_obj3;

void three_btn(void)
{
    lv_obj_t *obj_looper = lv_img_create( lv_scr_act() );

    //lv_img_set_src(obj_looper,&img_main_btn_R);

    #if 1
    // 三个切换页面按键
	ImgBtnTypedef ImgBtn_L = {
		.parent = obj_looper,
		.src = &img_main_btn_L2,

		.align = LV_ALIGN_TOP_LEFT,
		.x_ofs = X_MAIN_BTN_L,
		.y_ofs = Y_MAIN_BTN_L,

		.event_cb = NULL,
		.filter = LV_EVENT_PRESSED,

		.text = "Back",
		.label_obj = &label_obj1,
		.lable_color = lv_color_hex(0x000000),
		.font = &lv_font_arial_18,
	};
	xLV_Reseal_imgbtn_Create(&obj_lp_btn_L, &ImgBtn_L);

	#endif
}
