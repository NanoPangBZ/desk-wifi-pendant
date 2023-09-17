/**************************************************START OF FILE*****************************************************/

#ifndef HH__XLV_RESEAL__HH
#define HH__XLV_RESEAL__HH

/*------------------------------------------------------------------------------------------------------------------
Includes
*/
#include "lvgl.h"

/*------------------------------------------------------------------------------------------------------------------
macro definition
*/

/**按钮图片参数类型**/
typedef struct
{
	lv_obj_t *parent;
	const void *src; //图片数据指针

	lv_align_t align; //按钮图片对齐方式
	lv_coord_t x_ofs; //
	lv_coord_t y_ofs;

	lv_event_cb_t event_cb; //事件回调函数
	lv_event_code_t filter; //事件类型

	//字符串
	lv_obj_t **label_obj;
	const char *text;		 //按键字符串；为NULL时，无字符串，
	lv_color_t lable_color; //为NULL时，使用默认颜色；非NULL时，使能重新着色；如："FF0000"为红色；"0000FF"为蓝色
	const lv_font_t * font;//字体；为NULL时，使用默认字体，
} ImgBtnTypedef;

typedef struct
{
	lv_obj_t *parent;
	const void *src; //图片数据指针

	lv_align_t align; //按钮图片对齐方式
	lv_coord_t x_ofs; //
	lv_coord_t y_ofs;

	lv_event_cb_t event_cb; //事件回调函数
	lv_event_code_t filter; //事件类型

	//字符串
	lv_obj_t **label_obj[3];
	const char *text[3]; //按键字符串；为NULL时，无字符串，
	lv_coord_t lable_y_ofs[3];
	lv_color_t lable_color[3]; //为NULL时，使用默认颜色；非NULL时，使能重新着色；如："FF0000"为红色；"0000FF"为蓝色
	const lv_font_t * font;//字体；为NULL时，使用默认字体，
} ImgBtnTypedefN;

/**圆参数类型**/
typedef struct
{
	lv_obj_t *parent;

	int width;		  //直径
	lv_color_t color; //颜色

	lv_align_t align; //按钮图片对齐方式
	lv_coord_t x_ofs; //
	lv_coord_t y_ofs;

	//字符串
	lv_obj_t **label_obj;
	const char *text;		 //按键字符串；为NULL时，无字符串，
	lv_color_t lable_color; //为NULL时，使用默认颜色；非NULL时，使能重新着色；如："FF0000"为红色；"0000FF"为蓝色
	const lv_font_t * font;//字体；为NULL时，使用默认字体，
} CircleTypedef;

/**矩形参数类型**/
typedef struct
{
	lv_obj_t *parent;

	int width;		   //矩形直径
	int hight;		   //直径
	lv_coord_t radius; //圆角半径
	lv_color_t color;  //颜色

	lv_align_t align; //对齐方式
	lv_coord_t x_ofs;
	lv_coord_t y_ofs;

	//字符串
	lv_obj_t **label_obj;
	const char *text;		 //按键字符串；为NULL时，无字符串，
	lv_color_t lable_color; //为NULL时，使用默认颜色；非NULL时，使能重新着色；如："FF0000"为红色；"0000FF"为蓝色
	const lv_font_t * font;//字体；为NULL时，使用默认字体，
} RectTypedef;

/*------------------------------------------------------------------------------------------------------------------
Function declaration
*/
void xLV_Reseal_ImgBtn_StyleInit(void);
void xLV_Reseal_imgbtn_Create(lv_obj_t **obj, ImgBtnTypedef *ImgBtnStyle);
void xLV_Reseal_imgbtn_CreateN(lv_obj_t **obj, ImgBtnTypedefN *ImgBtnStyle);
void xLV_Reseal_draw_circle(lv_obj_t **obj, CircleTypedef *CircleParm);
void xLV_Reseal_draw_rect(lv_obj_t **obj, RectTypedef *CircleParm);

#endif

/****************************************************END OF FILE*****************************************************/
