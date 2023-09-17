/**************************************************START OF FILE*****************************************************/
/**************************************************************************************************************************************************************
@文 件 名: xLV_Reseal.c
@文件备注: 通用绘制显示函数重新封装
@         不参与项目逻辑
@作者:WZB
**************************************************************************************************************************************************************/

/*------------------------------------------------------------------------------------------------------------------
Includes
*/
#include "xLV_Reseal.h"

/*------------------------------------------------------------------------------------------------------------------
macro definition
*/

/*------------------------------------------------------------------------------------------------------------------
Variables
*/
static lv_style_t Btn_Press_style; // 按键按下效果类型
static lv_style_t style_def;	   // 黑色字体
static lv_style_t style_def_white; // 白色字体
static lv_style_prop_t tr_prop[] = {LV_STYLE_TRANSFORM_WIDTH, LV_STYLE_IMG_RECOLOR_OPA, 0};
static lv_style_transition_dsc_t tr;

/*------------------------------------------------------------------------------------------------------------------
Function declaration
*/

/*
*********************************************************************************************************************
@ Brief  : 图片按键类型初始化

@ Param  : NONE

@ Return : NONE

@ Author : WZB

@ Data   : 2022-11-25 16:41
*********************************************************************************************************************
*/
void xLV_Reseal_ImgBtn_StyleInit(void)
{
	/*Create a transition animation on width transformation and recolor.*/
	lv_style_transition_dsc_init(&tr, tr_prop, lv_anim_path_linear, 100, 0, NULL);

	// 黑色字体类型
	lv_style_init(&style_def);
	lv_style_set_text_color(&style_def, lv_color_black());
	lv_style_set_transition(&style_def, &tr);

	// 白色字体类型
	lv_style_init(&style_def_white);
	lv_style_set_text_color(&style_def_white, lv_color_white());
	lv_style_set_transition(&style_def_white, &tr);

	/*Darken the button when pressed and make it wider*/
	lv_style_init(&Btn_Press_style);
	lv_style_set_img_recolor_opa(&Btn_Press_style, LV_OPA_30); // 透明度设置
	lv_style_set_img_recolor(&Btn_Press_style, lv_color_black());
	lv_style_set_transform_width(&Btn_Press_style, 0); // 按压状态变化增加幅度
}

/*
*********************************************************************************************************************
@ Brief  : 创建图片按键

@ Param  : lv_obj_t ** obj,
@          ImgBtnTypedef* ImgBtnStyle

@ Return : NONE

@ Author : WZB

@ Data   : 2022-11-25 16:42
*********************************************************************************************************************
*/
void xLV_Reseal_imgbtn_Create(lv_obj_t **obj, ImgBtnTypedef *ImgBtnStyle)
{
	/*Create an image button*/
	*obj = lv_imgbtn_create(ImgBtnStyle->parent);
	lv_imgbtn_set_src(*obj, LV_IMGBTN_STATE_RELEASED, ImgBtnStyle->src, ImgBtnStyle->src, ImgBtnStyle->src);
	lv_obj_add_style(*obj, &style_def, 0);
	lv_obj_add_style(*obj, &Btn_Press_style, LV_STATE_PRESSED);

	// 位置
	lv_obj_align(*obj, ImgBtnStyle->align, ImgBtnStyle->x_ofs, ImgBtnStyle->y_ofs);

	/*Create a label on the image button*/
	if (ImgBtnStyle->text != NULL)
	{
		if (ImgBtnStyle->label_obj == NULL)
		{
			lv_obj_t *label;
			*(ImgBtnStyle->label_obj) = label;
		}

		*(ImgBtnStyle->label_obj) = lv_label_create(*obj);
		lv_obj_set_style_text_color(*(ImgBtnStyle->label_obj), ImgBtnStyle->lable_color, 0);
		lv_label_set_text(*(ImgBtnStyle->label_obj), ImgBtnStyle->text);
		lv_obj_align(*(ImgBtnStyle->label_obj), LV_ALIGN_CENTER, 0, 0);

		if (ImgBtnStyle->font != NULL)
		{
			lv_obj_set_style_text_font(*(ImgBtnStyle->label_obj), ImgBtnStyle->font, LV_PART_MAIN);
		}
	}

	lv_obj_add_event_cb(*obj, ImgBtnStyle->event_cb, ImgBtnStyle->filter, NULL);
}

/*
*********************************************************************************************************************
@ Brief  : 创建图片按键，有N个字符串

@ Param  : lv_obj_t ** obj,
@          ImgBtnTypedef* ImgBtnStyle

@ Return : NONE

@ Author : WZB

@ Data   : 2022-11-25 16:42
*********************************************************************************************************************
*/
void xLV_Reseal_imgbtn_CreateN(lv_obj_t **obj, ImgBtnTypedefN *ImgBtnStyle)
{
	/*Create an image button*/
	*obj = lv_imgbtn_create(ImgBtnStyle->parent);
	lv_imgbtn_set_src(*obj, LV_IMGBTN_STATE_RELEASED, ImgBtnStyle->src, ImgBtnStyle->src, ImgBtnStyle->src);
	lv_obj_add_style(*obj, &style_def_white, 0);
	lv_obj_add_style(*obj, &Btn_Press_style, LV_STATE_PRESSED);

	// 位置
	lv_obj_align(*obj, ImgBtnStyle->align, ImgBtnStyle->x_ofs, ImgBtnStyle->y_ofs);

	/*Create a label on the image button*/
	for (int i = 0; i < 3; i++)
	{
		if (ImgBtnStyle->text[i] != NULL && ImgBtnStyle->label_obj[i] != NULL)
		{
			*(ImgBtnStyle->label_obj[i]) = lv_label_create(*obj);
			lv_obj_set_style_text_color(*(ImgBtnStyle->label_obj[i]), ImgBtnStyle->lable_color[i], 0);
			lv_label_set_text(*(ImgBtnStyle->label_obj[i]), ImgBtnStyle->text[i]);
			lv_obj_align(*(ImgBtnStyle->label_obj[i]), LV_ALIGN_CENTER, 0, ImgBtnStyle->lable_y_ofs[i]);
			if (ImgBtnStyle->font != NULL)
			{
				lv_obj_set_style_text_font(*(ImgBtnStyle->label_obj[i]), ImgBtnStyle->font, LV_PART_MAIN);
			}
		}
	}

	lv_obj_add_event_cb(*obj, ImgBtnStyle->event_cb, ImgBtnStyle->filter, NULL);
}

/*
*********************************************************************************************************************
@ Brief  : 绘制实心圆点

@ Param  : lv_obj_t ** obj,
@          CircleTypedef *CircleParm

@ Return : NONE

@ Author : WZB

@ Data   : 2022-11-30 18:25
*********************************************************************************************************************
*/
void xLV_Reseal_draw_circle(lv_obj_t **obj, CircleTypedef *CircleParm)
{
	*obj = lv_obj_create(CircleParm->parent);
	lv_obj_set_scrollbar_mode(*obj, LV_SCROLLBAR_MODE_OFF);
	lv_obj_set_size(*obj, CircleParm->width, CircleParm->width);
	lv_obj_set_style_border_width(*obj, 0, 0);
	lv_obj_set_style_bg_color(*obj, CircleParm->color, 0);
	lv_obj_set_style_radius(*obj, LV_RADIUS_CIRCLE, 0);
	lv_obj_align(*obj, CircleParm->align, CircleParm->x_ofs, CircleParm->y_ofs);
	lv_obj_clear_flag(*obj, LV_OBJ_FLAG_SCROLLABLE); // 禁用滚动条

	if (CircleParm->text != NULL)
	{
		if (CircleParm->label_obj == NULL)
		{
			lv_obj_t *label;
			*(CircleParm->label_obj) = label;
		}

		*(CircleParm->label_obj) = lv_label_create(*obj);
		lv_obj_set_style_text_color(*(CircleParm->label_obj), CircleParm->lable_color, 0);
		lv_label_set_text(*(CircleParm->label_obj), CircleParm->text);
		lv_obj_align(*(CircleParm->label_obj), LV_ALIGN_CENTER, 0, 0);

		if (CircleParm->font != NULL)
		{
			lv_obj_set_style_text_font(*(CircleParm->label_obj), CircleParm->font, LV_PART_MAIN);
		}
	}
}

/*
*********************************************************************************************************************
@ Brief  : 绘制矩形

@ Param  : NONE

@ Return : NONE

@ Author : WZB

@ Data   : 2022-12-01 10:41
*********************************************************************************************************************
*/
void xLV_Reseal_draw_rect(lv_obj_t **obj, RectTypedef *RectParm)
{
	*obj = lv_obj_create(RectParm->parent);
	lv_obj_set_scrollbar_mode(*obj, LV_SCROLLBAR_MODE_OFF);
	lv_obj_set_size(*obj, RectParm->width, RectParm->hight);
	lv_obj_set_style_border_width(*obj, 0, 0);
	lv_obj_set_style_bg_color(*obj, RectParm->color, 0);
	lv_obj_set_style_radius(*obj, RectParm->radius, 0);
	lv_obj_align(*obj, RectParm->align, RectParm->x_ofs, RectParm->y_ofs);
	lv_obj_clear_flag(*obj, LV_OBJ_FLAG_SCROLLABLE); // 禁用滚动条

	if (RectParm->text != NULL)
	{
		if (RectParm->label_obj == NULL)
		{
			lv_obj_t *label;
			*(RectParm->label_obj) = label;
		}

		*(RectParm->label_obj) = lv_label_create(*obj);
		lv_obj_set_style_text_color(*(RectParm->label_obj), RectParm->lable_color, 0);
		lv_label_set_text(*(RectParm->label_obj), RectParm->text);
		lv_obj_align(*(RectParm->label_obj), LV_ALIGN_CENTER, 0, 0);

		if (RectParm->font != NULL)
		{
			lv_obj_set_style_text_font(*(RectParm->label_obj), RectParm->font, LV_PART_MAIN);
		}
	}
}
/****************************************************END OF FILE*****************************************************/
