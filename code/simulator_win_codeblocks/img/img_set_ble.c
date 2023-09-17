#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif
#include "xBSP_Config.h"


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMG_SET_BLE
#define LV_ATTRIBUTE_IMG_IMG_SET_BLE
#endif

__attribute__((used)) ATTRIBUTE_IMAGE_SECTION const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_IMG_SET_BLE uint8_t img_set_ble_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Alpha 8 bit, Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x92, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xff, 0x24, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x49, 0xff, 0x92, 0xff, 0xff, 0xff, 0x49, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x49, 0xff, 0x00, 0xff, 0x49, 0xff, 0xff, 0xff, 0x92, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x24, 0xff, 0x6d, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x49, 0xff, 0x00, 0xff, 0x00, 0xff, 0x24, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0x24, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x24, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0x24, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x49, 0xff, 0x00, 0xff, 0x00, 0xff, 0x24, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0x24, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x92, 0xff, 0xff, 0xff, 0x49, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x49, 0xff, 0x00, 0xff, 0x49, 0xff, 0xff, 0xff, 0x92, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x49, 0xff, 0xff, 0xff, 0x92, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x49, 0xff, 0x92, 0xff, 0xff, 0xff, 0x49, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x24, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0x24, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xff, 0x24, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x92, 0xff, 0xff, 0xff, 0xff, 0xff, 0x92, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x92, 0xff, 0xff, 0xff, 0xff, 0xff, 0x92, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x24, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0x24, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xff, 0x24, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x49, 0xff, 0xff, 0xff, 0x92, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x49, 0xff, 0x92, 0xff, 0xff, 0xff, 0x49, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x92, 0xff, 0xff, 0xff, 0x49, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x49, 0xff, 0x00, 0xff, 0x49, 0xff, 0xff, 0xff, 0x92, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x24, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0x24, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x49, 0xff, 0x00, 0xff, 0x00, 0xff, 0x24, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0x24, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x24, 0xff, 0x6d, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x49, 0xff, 0x00, 0xff, 0x00, 0xff, 0x24, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0x24, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x49, 0xff, 0x00, 0xff, 0x49, 0xff, 0xff, 0xff, 0x92, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x49, 0xff, 0x92, 0xff, 0xff, 0xff, 0x49, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xff, 0x24, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x92, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x7d, 0xef, 0xff, 0x30, 0x84, 0xff, 0x20, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xde, 0xff, 0x18, 0xc6, 0xff, 0xc3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x39, 0xff, 0x10, 0x84, 0xff, 0x3d, 0xef, 0xff, 0x29, 0x4a, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x39, 0xff, 0x00, 0x00, 0xff, 0x28, 0x42, 0xff, 0x3d, 0xef, 0xff, 0x30, 0x84, 0xff, 0x20, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xa2, 0x10, 0xff, 0xec, 0x62, 0xff, 0x20, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x39, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xf8, 0xc5, 0xff, 0x18, 0xc6, 0xff, 0xa2, 0x10, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xa2, 0x10, 0xff, 0x18, 0xc6, 0xff, 0xf7, 0xbd, 0xff, 0xc3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x39, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xf8, 0xc5, 0xff, 0x18, 0xc6, 0xff, 0xa2, 0x10, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0x30, 0x84, 0xff, 0x3d, 0xef, 0xff, 0x28, 0x42, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x39, 0xff, 0x00, 0x00, 0xff, 0x28, 0x42, 0xff, 0x3d, 0xef, 0xff, 0x30, 0x84, 0xff, 0x20, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x29, 0x4a, 0xff, 0x3d, 0xef, 0xff, 0x10, 0x84, 0xff, 0x20, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x39, 0xff, 0x10, 0x84, 0xff, 0x5d, 0xef, 0xff, 0x29, 0x4a, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0x18, 0xc6, 0xff, 0x18, 0xc6, 0xff, 0xc3, 0x18, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xde, 0xff, 0x18, 0xc6, 0xff, 0xc3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0x30, 0x84, 0xff, 0x5d, 0xef, 0xff, 0xff, 0xff, 0xff, 0x92, 0x94, 0xff, 0x20, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0x30, 0x84, 0xff, 0x5d, 0xef, 0xff, 0xff, 0xff, 0xff, 0x92, 0x94, 0xff, 0x20, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0x18, 0xc6, 0xff, 0x18, 0xc6, 0xff, 0xc3, 0x18, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xde, 0xff, 0x18, 0xc6, 0xff, 0xc3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x29, 0x4a, 0xff, 0x3d, 0xef, 0xff, 0x10, 0x84, 0xff, 0x20, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x39, 0xff, 0x10, 0x84, 0xff, 0x5d, 0xef, 0xff, 0x29, 0x4a, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x20, 0x00, 0xff, 0x30, 0x84, 0xff, 0x3d, 0xef, 0xff, 0x28, 0x42, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x39, 0xff, 0x00, 0x00, 0xff, 0x28, 0x42, 0xff, 0x3d, 0xef, 0xff, 0x30, 0x84, 0xff, 0x20, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xa2, 0x10, 0xff, 0x18, 0xc6, 0xff, 0xf7, 0xbd, 0xff, 0xc3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x39, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xf8, 0xc5, 0xff, 0x18, 0xc6, 0xff, 0xa2, 0x10, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xa2, 0x10, 0xff, 0xeb, 0x5a, 0xff, 0x20, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x39, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xc3, 0x18, 0xff, 0xf8, 0xc5, 0xff, 0x18, 0xc6, 0xff, 0xa2, 0x10, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x39, 0xff, 0x00, 0x00, 0xff, 0x28, 0x42, 0xff, 0x3d, 0xef, 0xff, 0x30, 0x84, 0xff, 0x20, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x39, 0xff, 0x10, 0x84, 0xff, 0x3d, 0xef, 0xff, 0x29, 0x4a, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xde, 0xff, 0x18, 0xc6, 0xff, 0xc3, 0x18, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x7d, 0xef, 0xff, 0x30, 0x84, 0xff, 0x20, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xef, 0x7d, 0xff, 0x84, 0x30, 0xff, 0x00, 0x20, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xde, 0xfb, 0xff, 0xc6, 0x18, 0xff, 0x18, 0xc3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x39, 0xc7, 0xff, 0x84, 0x10, 0xff, 0xef, 0x3d, 0xff, 0x4a, 0x29, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x39, 0xc7, 0xff, 0x00, 0x00, 0xff, 0x42, 0x28, 0xff, 0xef, 0x3d, 0xff, 0x84, 0x30, 0xff, 0x00, 0x20, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x10, 0xa2, 0xff, 0x62, 0xec, 0xff, 0x00, 0x20, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x39, 0xc7, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0xc5, 0xf8, 0xff, 0xc6, 0x18, 0xff, 0x10, 0xa2, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x10, 0xa2, 0xff, 0xc6, 0x18, 0xff, 0xbd, 0xf7, 0xff, 0x18, 0xc3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x39, 0xc7, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0xc5, 0xf8, 0xff, 0xc6, 0x18, 0xff, 0x10, 0xa2, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x84, 0x30, 0xff, 0xef, 0x3d, 0xff, 0x42, 0x28, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x39, 0xc7, 0xff, 0x00, 0x00, 0xff, 0x42, 0x28, 0xff, 0xef, 0x3d, 0xff, 0x84, 0x30, 0xff, 0x00, 0x20, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x4a, 0x29, 0xff, 0xef, 0x3d, 0xff, 0x84, 0x10, 0xff, 0x00, 0x20, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x39, 0xc7, 0xff, 0x84, 0x10, 0xff, 0xef, 0x5d, 0xff, 0x4a, 0x29, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0xc6, 0x18, 0xff, 0xc6, 0x18, 0xff, 0x18, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xde, 0xfb, 0xff, 0xc6, 0x18, 0xff, 0x18, 0xc3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x84, 0x30, 0xff, 0xef, 0x5d, 0xff, 0xff, 0xff, 0xff, 0x94, 0x92, 0xff, 0x00, 0x20, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x84, 0x30, 0xff, 0xef, 0x5d, 0xff, 0xff, 0xff, 0xff, 0x94, 0x92, 0xff, 0x00, 0x20, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0xc6, 0x18, 0xff, 0xc6, 0x18, 0xff, 0x18, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xde, 0xfb, 0xff, 0xc6, 0x18, 0xff, 0x18, 0xc3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x4a, 0x29, 0xff, 0xef, 0x3d, 0xff, 0x84, 0x10, 0xff, 0x00, 0x20, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x39, 0xc7, 0xff, 0x84, 0x10, 0xff, 0xef, 0x5d, 0xff, 0x4a, 0x29, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x20, 0xff, 0x84, 0x30, 0xff, 0xef, 0x3d, 0xff, 0x42, 0x28, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x39, 0xc7, 0xff, 0x00, 0x00, 0xff, 0x42, 0x28, 0xff, 0xef, 0x3d, 0xff, 0x84, 0x30, 0xff, 0x00, 0x20, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x10, 0xa2, 0xff, 0xc6, 0x18, 0xff, 0xbd, 0xf7, 0xff, 0x18, 0xc3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x39, 0xc7, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0xc5, 0xf8, 0xff, 0xc6, 0x18, 0xff, 0x10, 0xa2, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x10, 0xa2, 0xff, 0x5a, 0xeb, 0xff, 0x00, 0x20, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x39, 0xc7, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x18, 0xc3, 0xff, 0xc5, 0xf8, 0xff, 0xc6, 0x18, 0xff, 0x10, 0xa2, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x39, 0xc7, 0xff, 0x00, 0x00, 0xff, 0x42, 0x28, 0xff, 0xef, 0x3d, 0xff, 0x84, 0x30, 0xff, 0x00, 0x20, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x39, 0xc7, 0xff, 0x84, 0x10, 0xff, 0xef, 0x3d, 0xff, 0x4a, 0x29, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xde, 0xfb, 0xff, 0xc6, 0x18, 0xff, 0x18, 0xc3, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xef, 0x7d, 0xff, 0x84, 0x30, 0xff, 0x00, 0x20, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 
#endif
#if LV_COLOR_DEPTH == 32
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xec, 0xec, 0xec, 0xff, 0x83, 0x83, 0x83, 0xff, 0x03, 0x03, 0x03, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdc, 0xdc, 0xdc, 0xff, 0xbf, 0xbf, 0xbf, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x81, 0x81, 0x81, 0xff, 0xe6, 0xe6, 0xe6, 0xff, 0x46, 0x46, 0x46, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x37, 0x37, 0x37, 0xff, 0x00, 0x00, 0x00, 0xff, 0x43, 0x43, 0x43, 0xff, 0xe5, 0xe5, 0xe5, 0xff, 0x83, 0x83, 0x83, 0xff, 0x03, 0x03, 0x03, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x14, 0x14, 0x14, 0xff, 0x5d, 0x5d, 0x5d, 0xff, 0x03, 0x03, 0x03, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x37, 0x37, 0x37, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x18, 0x18, 0x18, 0xff, 0xbd, 0xbd, 0xbd, 0xff, 0xc0, 0xc0, 0xc0, 0xff, 0x13, 0x13, 0x13, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x13, 0x13, 0x13, 0xff, 0xc0, 0xc0, 0xc0, 0xff, 0xbc, 0xbc, 0xbc, 0xff, 0x18, 0x18, 0x18, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x37, 0x37, 0x37, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x18, 0x18, 0x18, 0xff, 0xbd, 0xbd, 0xbd, 0xff, 0xc0, 0xc0, 0xc0, 0xff, 0x13, 0x13, 0x13, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x03, 0x03, 0x03, 0xff, 0x83, 0x83, 0x83, 0xff, 0xe5, 0xe5, 0xe5, 0xff, 0x43, 0x43, 0x43, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x37, 0x37, 0x37, 0xff, 0x00, 0x00, 0x00, 0xff, 0x43, 0x43, 0x43, 0xff, 0xe5, 0xe5, 0xe5, 0xff, 0x83, 0x83, 0x83, 0xff, 0x03, 0x03, 0x03, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x46, 0x46, 0x46, 0xff, 0xe6, 0xe6, 0xe6, 0xff, 0x81, 0x81, 0x81, 0xff, 0x03, 0x03, 0x03, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x81, 0x81, 0x81, 0xff, 0xe7, 0xe7, 0xe7, 0xff, 0x46, 0x46, 0x46, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0xc0, 0xc0, 0xc0, 0xff, 0xbf, 0xbf, 0xbf, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdc, 0xdc, 0xdc, 0xff, 0xc0, 0xc0, 0xc0, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x03, 0x03, 0x03, 0xff, 0x83, 0x83, 0x83, 0xff, 0xe7, 0xe7, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0x8f, 0x8f, 0xff, 0x03, 0x03, 0x03, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x03, 0x03, 0x03, 0xff, 0x83, 0x83, 0x83, 0xff, 0xe7, 0xe7, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0x8f, 0x8f, 0xff, 0x03, 0x03, 0x03, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0xc0, 0xc0, 0xc0, 0xff, 0xbf, 0xbf, 0xbf, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdc, 0xdc, 0xdc, 0xff, 0xc0, 0xc0, 0xc0, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x46, 0x46, 0x46, 0xff, 0xe6, 0xe6, 0xe6, 0xff, 0x81, 0x81, 0x81, 0xff, 0x03, 0x03, 0x03, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x81, 0x81, 0x81, 0xff, 0xe7, 0xe7, 0xe7, 0xff, 0x46, 0x46, 0x46, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x03, 0x03, 0x03, 0xff, 0x83, 0x83, 0x83, 0xff, 0xe5, 0xe5, 0xe5, 0xff, 0x43, 0x43, 0x43, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x37, 0x37, 0x37, 0xff, 0x00, 0x00, 0x00, 0xff, 0x43, 0x43, 0x43, 0xff, 0xe5, 0xe5, 0xe5, 0xff, 0x83, 0x83, 0x83, 0xff, 0x03, 0x03, 0x03, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x13, 0x13, 0x13, 0xff, 0xc0, 0xc0, 0xc0, 0xff, 0xbc, 0xbc, 0xbc, 0xff, 0x18, 0x18, 0x18, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x37, 0x37, 0x37, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x18, 0x18, 0x18, 0xff, 0xbd, 0xbd, 0xbd, 0xff, 0xc0, 0xc0, 0xc0, 0xff, 0x13, 0x13, 0x13, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x13, 0x13, 0x13, 0xff, 0x5c, 0x5c, 0x5c, 0xff, 0x03, 0x03, 0x03, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x37, 0x37, 0x37, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x18, 0x18, 0x18, 0xff, 0xbd, 0xbd, 0xbd, 0xff, 0xc0, 0xc0, 0xc0, 0xff, 0x13, 0x13, 0x13, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x37, 0x37, 0x37, 0xff, 0x00, 0x00, 0x00, 0xff, 0x43, 0x43, 0x43, 0xff, 0xe5, 0xe5, 0xe5, 0xff, 0x83, 0x83, 0x83, 0xff, 0x03, 0x03, 0x03, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x81, 0x81, 0x81, 0xff, 0xe6, 0xe6, 0xe6, 0xff, 0x46, 0x46, 0x46, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdc, 0xdc, 0xdc, 0xff, 0xbf, 0xbf, 0xbf, 0xff, 0x1a, 0x1a, 0x1a, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xec, 0xec, 0xec, 0xff, 0x83, 0x83, 0x83, 0xff, 0x03, 0x03, 0x03, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
#endif
};

// const lv_img_dsc_t img_set_ble = {
//   .header.always_zero = 0,
//   .header.w = 20,
//   .header.h = 20,
//   .data_size = 400 * LV_IMG_PX_SIZE_ALPHA_BYTE,
//   .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
//   .data = img_set_ble_map,
// };
