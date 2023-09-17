#include "lvgl.h"
#include "xGUI_Value.h"

// tuner-琴头页面
#define X_TUNER_GT (65)
#define Y_TUNER_GT (53)

// 6个圆
extern const int tuner_point_position[6][2];
#define X_TUNER_C(index) (tuner_point_position[index][0])
#define Y_TUNER_C(index) (tuner_point_position[index][1])
#define D_TUNER_GT_CIR (22) // 圆直径

// 6个琴头旋钮
extern const int tuner_konb_position[6][2];
#define X_TUNER_KONB(index) (tuner_konb_position[index][0])
#define Y_TUNER_KONB(index) (tuner_konb_position[index][1])

extern const lv_img_dsc_t img_tuner_guitar;

void xGUI_PageTuner_GT_Init(void)
{



}

#if 0
lv_obj_t *obj_tuner_large_ruler;
lv_obj_t *obj_tuner_A_slider;

#define W_TUNER_A_SLIDER ( img_tuner_large_ruler.header.w )

extern  const lv_img_dsc_t img_tuner_large_ruler;
extern  const lv_img_dsc_t img_tuner_triangle;

#include <stdio.h>
static void lv_event(lv_event_t * e)
{
    printf("%d\n",lv_slider_get_value(e->current_target));
}

void test_demo()
{
    lv_obj_set_style_bg_color( lv_scr_act() , lv_color_make(0,0,0) , LV_PART_MAIN );
    //���
	lv_obj_t *obj_tuner_large_ruler = lv_img_create( lv_scr_act() );
	lv_obj_align( obj_tuner_large_ruler , LV_ALIGN_CENTER , 0 , 0);
	lv_img_set_src( obj_tuner_large_ruler , &img_tuner_large_ruler );
	lv_obj_add_flag( obj_tuner_large_ruler , LV_OBJ_FLAG_OVERFLOW_VISIBLE );	//�����Ӷ��󳬳�
	//������ -> ����α�
	obj_tuner_A_slider =  lv_slider_create(obj_tuner_large_ruler);
	lv_obj_remove_style( obj_tuner_A_slider , NULL , LV_PART_MAIN );
	lv_obj_remove_style( obj_tuner_A_slider , NULL , LV_PART_INDICATOR );
	lv_obj_set_style_bg_opa( obj_tuner_A_slider , LV_OPA_0 , LV_PART_KNOB );
	lv_obj_set_style_bg_img_src( obj_tuner_A_slider , &img_tuner_triangle , LV_PART_KNOB );
	lv_obj_set_width( obj_tuner_A_slider , W_TUNER_A_SLIDER );
	lv_slider_set_range( obj_tuner_A_slider , 0 , W_TUNER_A_SLIDER );
	lv_slider_set_value( obj_tuner_A_slider , W_TUNER_A_SLIDER/2 , LV_ANIM_ON );	//����λ�ü���ͼ�����/2
	lv_obj_set_pos( obj_tuner_A_slider , 0 , -13 );

	lv_obj_add_event_cb( obj_tuner_A_slider , lv_event , LV_EVENT_RELEASED , NULL );
}
#endif


#if 0

extern  const lv_img_dsc_t img_preset_bg;
extern  const lv_img_dsc_t img_preset_roller_bg;

#define X_PRESET_BG (19 - 5)
#define Y_PRESET_BG 42
#define X_PRESET_CONFIRM 16
#define Y_PRESET_CONFIRM 109
#define X_PRESET_BACK 100
#define Y_PRESET_BACK 109

#define X_PRESET_BTN_P1 (212 - 5)
#define Y_PRESET_BTN_P1 30

//const char *pPresetName[3 + 1] = {"Acous", "Boom", "Singer", "Up Down"};

void test_demo()
{
    obj_preset = lv_img_create( lv_scr_act() );
    lv_obj_set_size(obj_preset, 320, 240 - 40);
    lv_obj_set_pos(obj_preset, 0, 40);

    //����ͼƬ
    obj_preset_bg = lv_img_create(obj_preset);
    lv_img_set_src(obj_preset_bg, &img_preset_bg);
    lv_obj_set_pos(obj_preset_bg, X_PRESET_BG, Y_PRESET_BG);


    obj_preset_label_bank = lv_label_create(obj_preset_bg);
    lv_label_set_text(obj_preset_label_bank, pPresetName[0]);
    lv_obj_align(obj_preset_label_bank, LV_ALIGN_CENTER, 0, -25);
	lv_obj_set_style_text_font(obj_preset_label_bank, &lv_font_montserrat_24, LV_PART_MAIN);

    //����confirm
    lv_obj_t *btnConfirm = lv_btn_create(obj_preset);
    lv_obj_set_style_border_opa(btnConfirm, LV_OPA_0, LV_STATE_DEFAULT); // ���ñ߿�͸���� ��ȫ͸��
    lv_obj_set_style_shadow_width(btnConfirm, 0, LV_STATE_DEFAULT);      // ��Ӱ����
    lv_obj_set_style_bg_opa(btnConfirm, LV_OPA_0, 0);                    // ������ʽ�����Ĳ�͸���� ��ȫ͸��
    lv_obj_set_size(btnConfirm, 82, 50);                                 // ���ð�ť����Ŀ��Ⱥ͸߶�
    lv_obj_align(btnConfirm, LV_ALIGN_TOP_LEFT, X_PRESET_CONFIRM, Y_PRESET_CONFIRM);
    //lv_obj_add_event_cb(btnConfirm, xGUI_PagePreset_event_cb_Confirm, LV_EVENT_PRESSED, NULL);
    lv_obj_t *labelConfirm = lv_label_create(btnConfirm);
    lv_label_set_text(labelConfirm, "Confirm");
    lv_obj_center(labelConfirm);
	lv_obj_set_style_text_font(labelConfirm, &lv_font_montserrat_18, LV_PART_MAIN);

    //����back
    lv_obj_t *btnBack = lv_btn_create(obj_preset);
    lv_obj_set_style_border_opa(btnBack, LV_OPA_0, LV_STATE_DEFAULT); // ���ñ߿�͸���� ��ȫ͸��
    lv_obj_set_style_shadow_width(btnBack, 0, LV_STATE_DEFAULT);      // ��Ӱ����
    lv_obj_set_style_bg_opa(btnBack, LV_OPA_0, 0);                    // ������ʽ�����Ĳ�͸���� ��ȫ͸��
    lv_obj_set_size(btnBack, 82, 50);                                 // ���ð�ť����Ŀ��Ⱥ͸߶�
    lv_obj_align(btnBack, LV_ALIGN_TOP_LEFT, X_PRESET_BACK, Y_PRESET_BACK);
    //lv_obj_add_event_cb(btnBack, xGUI_PagePreset_event_cb_cancle, LV_EVENT_PRESSED, NULL);
    lv_obj_t *labelBack = lv_label_create(btnBack);
    lv_label_set_text(labelBack, "Cancle");
    lv_obj_center(labelBack);
	lv_obj_set_style_text_font(labelBack, &lv_font_montserrat_18, LV_PART_MAIN);

    //preset ����
    obj_preset_roller_bg = lv_img_create(obj_preset);
    lv_obj_clear_flag(obj_preset_roller_bg, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_size(obj_preset_roller_bg,100,120);
	lv_obj_set_pos(obj_preset_roller_bg,205, 40);

    obj_preset_roller = lv_roller_create(obj_preset_roller_bg);
    lv_obj_set_align(obj_preset_roller, LV_ALIGN_CENTER);
    lv_obj_set_style_text_font(obj_preset_roller, &lv_font_montserrat_18, 0);  //�޸������С
    lv_obj_set_style_text_font(obj_preset_roller, &lv_font_montserrat_18, LV_PART_SELECTED);
    lv_roller_set_options(obj_preset_roller,
                        "Preset 1\n"
                        "Preset 2\n"
                        "Preset 3\n"
                        "Preset 4\n"
                        "Preset 5\n"
                        "Preset 6\n"
                        "Preset 7\n"
                        "Preset 8\n"
                        "Preset 9\n"
                        "Preset 10\n"
                        "Preset 11\n"
                        "Preset 12\n"
                        "Preset 13\n"
                        "Preset 14\n"
                        "Preset 15\n"
                        "Preset 16\n"
                        "Preset 17\n"
                        "Preset 18\n"
                        "Preset 19\n"
                        "Preset 20",
                        LV_ROLLER_MODE_NORMAL);
    lv_roller_set_visible_row_count(obj_preset_roller, 3);
	lv_obj_set_style_text_color(obj_preset_roller, lv_color_make(0,0,0), LV_PART_SELECTED);
    lv_obj_set_style_text_color(obj_preset_roller, lv_color_make(255,255,255), LV_PART_MAIN);
    //lv_obj_add_event_cb(obj_preset_roller, xGUI_PagePreset_event_cb_roller, LV_EVENT_VALUE_CHANGED, NULL);

    // static lv_style_t preset_roller_bg_style;	  //���ֱ�������ʽ
	// lv_style_init(&preset_roller_bg_style);
	// lv_style_set_bg_opa(&preset_roller_bg_style,0);
	// lv_style_set_border_opa(&preset_roller_bg_style,0);
	// lv_obj_add_style(obj_preset_roller, &preset_roller_bg_style, LV_PART_MAIN);
	// lv_obj_add_style(obj_preset_roller, &preset_roller_bg_style, LV_PART_SELECTED);
    lv_obj_set_style_bg_opa( obj_preset_roller , LV_OPA_0 , LV_PART_MAIN );
    lv_obj_set_style_bg_opa( obj_preset_roller , LV_OPA_0 , LV_PART_SELECTED );
    lv_obj_set_style_border_opa( obj_preset_roller , LV_OPA_0 , LV_PART_MAIN );
    lv_obj_set_style_border_opa( obj_preset_roller , LV_OPA_0 , LV_PART_SELECTED );
    lv_img_set_src(obj_preset_roller_bg, &img_preset_roller_bg);
}

#endif // 1

#if 0

#include <stdint.h>

extern const lv_img_dsc_t img_set_hp;
extern const lv_img_dsc_t img_set_foot;
extern const lv_img_dsc_t img_set_u1;
extern const lv_img_dsc_t img_set_u2;

lv_obj_t *obj_set_slider[7];
lv_obj_t *obj_set_img[7];
lv_obj_t *obj_set_slider_label[7];
lv_obj_t *obj_set_sw_foot;
lv_obj_t *obj_set_img_foot;
lv_obj_t *obj_set_btn_label_clear;

lv_obj_t *obj_set_btn_u1;
lv_obj_t *obj_set_img_u1;
lv_obj_t *obj_set_label_u1;

lv_obj_t *obj_set_btn_u2;
lv_obj_t *obj_set_img_u2;
lv_obj_t *obj_set_label_u2;

void test_demo(void)
{
    uint16_t y_ind = 0;

    lv_obj_t *setting_option = lv_obj_create( lv_scr_act() );
	lv_obj_set_size(setting_option, 320, 152);
	lv_obj_set_style_bg_opa( setting_option , LV_OPA_0 , LV_PART_MAIN );
	lv_obj_set_style_bg_opa(setting_option, LV_OPA_0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);	// 设置样式将obj滚动条的颜色默认为透明，
	lv_obj_set_style_bg_opa(setting_option, LV_OPA_0, LV_PART_SCROLLBAR | LV_STATE_SCROLLED); // 设置样式将obj滚动条滚动时的颜色也设置为透明
	lv_obj_clear_flag(setting_option, LV_OBJ_FLAG_SCROLL_CHAIN);								// 禁用将滚动传递到父对象
	lv_obj_set_scroll_dir(setting_option, LV_DIR_VER  );                                        //仅允许竖直滑动
	lv_obj_set_style_border_width(setting_option, 0, 0);										// 边框宽度

	static lv_style_t slider_bg_style;	  // 背景的样式
	static lv_style_t slider_indic_style; // 指示器的样式

	lv_style_init(&slider_indic_style);
	lv_style_init(&slider_bg_style);

	lv_style_set_bg_color(&slider_indic_style, lv_color_hex(0x00FFFF)); // lv_palette_main(LV_PALETTE_RED));//最大值颜色
	lv_style_set_bg_color(&slider_bg_style, lv_color_hex(0xFF7DBE));
	lv_style_set_bg_opa(&slider_bg_style, 255);

	//七个slider
    for(uint8_t temp = 0; temp < 7 ; temp ++)
    {
		// 滑动条
		obj_set_slider[temp] = lv_slider_create(setting_option);
		lv_obj_align(obj_set_slider[temp], LV_ALIGN_TOP_LEFT, 20 , y_ind );
		//lv_obj_add_event_cb(obj_set_slider[temp], xGUI_silder_even_cb_list[temp], LV_EVENT_VALUE_CHANGED, NULL);
		lv_obj_clear_flag(obj_set_slider[temp], LV_OBJ_FLAG_SCROLL_CHAIN); // 禁用将滚动传递到父对象
		lv_obj_set_size(obj_set_slider[temp], 225, 24);
        lv_obj_clear_flag(obj_set_slider[temp], LV_OBJ_FLAG_SCROLL_CHAIN);								// 禁用将滚动传递到父对象
		lv_obj_remove_style(obj_set_slider[temp], NULL, LV_PART_KNOB);
		lv_obj_add_style(obj_set_slider[temp], &slider_indic_style, LV_PART_INDICATOR);
		lv_obj_add_style(obj_set_slider[temp], &slider_bg_style, LV_PART_MAIN);

		// 滑动条字符串 -745 416
		obj_set_slider_label[temp] = lv_label_create(setting_option);
		lv_label_set_text(obj_set_slider_label[temp], "0%");
		lv_obj_set_style_text_color(obj_set_slider_label[temp], lv_color_hex(0x000000), 0);
		lv_obj_align_to(obj_set_slider_label[temp], obj_set_slider[temp], LV_ALIGN_RIGHT_MID, 0, 0);

		// 图案
		lv_obj_t *obj2 = lv_img_create(setting_option);
		obj_set_img[temp] = lv_img_create(obj2);
		lv_img_set_src(obj_set_img[temp], &img_set_hp );
		lv_obj_set_pos(obj_set_img[temp], 262 , y_ind );

		y_ind += 48;
    }

    lv_obj_t *btn[3];
	lv_obj_t *label[3];
	//生成三个按键
	for(uint8_t temp = 0 ;temp < 3 ; temp ++)
	{
		btn[temp] = lv_btn_create( setting_option );
		lv_obj_set_size( btn[temp] , 69 , 22 );
		lv_obj_set_style_line_rounded( btn[temp] , true, LV_PART_MAIN );	//圆角
		lv_obj_set_style_line_width( btn[temp] , lv_obj_get_height(btn[temp]) , LV_PART_MAIN);
		label[temp] = lv_label_create( btn[temp] );
		lv_obj_set_align(label[temp] , LV_ALIGN_CENTER);
	}
	lv_obj_set_pos( btn[0] , 23 , y_ind );
	lv_obj_set_pos( btn[1] , 100 , y_ind );
	lv_obj_set_pos( btn[2] , 23 , y_ind + 48 );



}

#endif // 1
