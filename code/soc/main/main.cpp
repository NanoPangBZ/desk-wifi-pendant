#include "esp_log.h"
#include "freertos\FreeRTOS.h"
#include "freertos\task.h"

#include "lvgl_support.h"
#include "lvgl.h"

#define TAG "main"

extern "C" void app_main()
{
    lvgl_support_set_up();

    lv_obj_set_style_bg_color( lv_scr_act() , lv_color_make( 255 , 0 , 0 ) , LV_PART_MAIN );
    lv_obj_t* lable = lv_label_create( lv_scr_act() );
    lv_label_set_text( lable , "HelloWorld!" );

    uint16_t x = 0;

    while(1)
    {
        lv_obj_set_pos( lable , x , x );
        x++;
        if( x > 120 )
            x = 0;
        vTaskDelay( pdMS_TO_TICKS( 10 ) );
    }
}

