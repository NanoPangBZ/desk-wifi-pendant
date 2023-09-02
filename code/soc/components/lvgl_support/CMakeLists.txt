idf_component_register(SRCS "lvgl_support.c"
                    INCLUDE_DIRS "include"
                    REQUIRES "driver" "esp_lcd" "lvgl" "esp_lcd_gc9a01" "esp_timer")
