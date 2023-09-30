#include "gui_thread.h"
#include "lvgl/lvgl.h"
#include "lv_demos/src/lv_demo_widgets/lv_demo_widgets.h"
#include "lv_drivers/win32drv/win32drv.h"
#include "stdbool.h"

#include <pthread.h>

static HINSTANCE _hInstance;
static pthread_t _gui_thread = NULL;
static int lv_init_flag = 0;

static void* gui_thread(void*args)
{
    lv_init();
    lv_win32_init(_hInstance, SW_SHOWNORMAL, 240, 240, NULL);

    lv_obj_t* root_obj = lv_obj_create( NULL );
    lv_obj_set_size( root_obj , 240 , 240 );
    lv_obj_set_style_bg_color( root_obj , lv_color_make( 0 , 255 , 0 ) , LV_PART_MAIN );

    lv_scr_load( root_obj );
    lv_init_flag = 1;

    while(!lv_win32_quit_signal) {
        /* Periodically call the lv_task handler.
         * It could be done in a timer interrupt or an OS task too.*/
        lv_task_handler();
        usleep(10000);       /*Just to let the system breath*/
    }
    return (void*)0;
}

void gui_thread_start(HINSTANCE hInstance)
{
    _hInstance = hInstance;

    pthread_create( &_gui_thread , NULL , gui_thread , NULL); //创建线程
    pthread_detach( _gui_thread  );     //分离子线程

    while( !lv_init_flag );
}

