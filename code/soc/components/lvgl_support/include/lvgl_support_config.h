#pragma once

#define LCD_SPI_HOST    (SPI2_HOST)
#define LCD_MOSI        (4)
#define LCD_SCL         (16)
#define LCD_CS          (6)
#define LCD_DC          (15)
#define LCD_RST         (5)
#define LCD_BLK         (7)
#define LCD_PORT_FRE    ( 60 * 1000 * 1000 )    //20MHz

#define LCD_BLK_ENABKE_LEVEL    (1)

#define LCD_VER (240)
#define LCD_HER (240)

#define LVGL_TICK               (1)
#define LVGL_HANDLER_CYCLE      (5)