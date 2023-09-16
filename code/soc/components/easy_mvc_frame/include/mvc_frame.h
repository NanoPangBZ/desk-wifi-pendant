#pragma once

#ifdef __cplusplus
extern "C"
{
#endif  //__cplusplus

typedef struct
{
    int (*input)(void* info);
    
}mvc_model_t;


int mvc_init();

#ifdef __cplusplus
}
#endif  //__cplusplus

