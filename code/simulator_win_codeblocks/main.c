
/**
 * @file main
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include "lv_drivers/win32drv/win32drv.h"

#include "gui_thread.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void hal_init(void);
static int tick_thread(void *data);

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int nCmdShow)
{
    gui_thread_start(hInstance);

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
        Sleep(10);
    }

    while(1);
    return 0;
}
