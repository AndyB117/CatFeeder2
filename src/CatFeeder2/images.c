/*
Различные графические ресурсы
*/
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


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_FEED_CAT_IMG
#define LV_ATTRIBUTE_IMG_FEED_CAT_IMG
#endif

#ifndef LV_ATTRIBUTE_IMG_STEP_ICON
#define LV_ATTRIBUTE_IMG_STEP_ICON
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_FEED_CAT_IMG uint8_t feed_cat_img_map[] = {
    0x01, 0x02, 0x06, 0x03, 	/*Color of index 0*/
  0x40, 0x90, 0xf6, 0xff, 	/*Color of index 1*/
  0x1b, 0x54, 0xad, 0xfa, 	/*Color of index 2*/
  0x3e, 0x03, 0xb2, 0xfd, 	/*Color of index 3*/

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xaa, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xaa, 0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x55, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x55, 0x6a, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa9, 0x55, 0x5a, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa9, 0x55, 0x56, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa5, 0x55, 0x55, 0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa5, 0x55, 0x55, 0x6a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xa5, 0x55, 0x55, 0x5a, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x6a, 0x95, 0x55, 0x55, 0x5a, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0xaa, 0x95, 0x55, 0x55, 0x56, 0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x08, 0x80, 0x02, 0xaa, 0x55, 0x95, 0x55, 0x55, 0x55, 0xa9, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0x9a, 0xa6, 0x6a, 0xa5, 0x55, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x2a, 0xaa, 0xaa, 0xaa, 0x95, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x6a, 0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x2a, 0x55, 0x55, 0x69, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x29, 0x55, 0x55, 0x65, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x6a, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x29, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x2a, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x6a, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x06, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x0a, 0x95, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xa9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0x95, 0x55, 0x55, 0x55, 0x56, 0x65, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5a, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x02, 0xa5, 0x55, 0x55, 0x55, 0x56, 0x69, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0xa4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xa9, 0x55, 0x55, 0x65, 0x56, 0x99, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x2a, 0x55, 0x56, 0x65, 0x55, 0xa5, 0x56, 0xaa, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5a, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x06, 0x95, 0x56, 0x65, 0x55, 0x55, 0x6a, 0x9a, 0x95, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x95, 0x56, 0x65, 0x55, 0x55, 0xa5, 0x55, 0xa5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xa4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x95, 0x56, 0x55, 0x55, 0x55, 0x95, 0x55, 0x59, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x6a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x95, 0x55, 0x55, 0x55, 0x56, 0x55, 0x55, 0x5a, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x6a, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0xa5, 0x5a, 0xa5, 0x55, 0x56, 0x55, 0x55, 0x56, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x6a, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0xa5, 0xaa, 0xaa, 0x55, 0x59, 0x55, 0x55, 0x5a, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xa4, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x66, 0x95, 0x56, 0x95, 0x56, 0x55, 0x55, 0x56, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5a, 0xaa, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xaa, 0x55, 0x55, 0x95, 0x56, 0x55, 0x69, 0x5a, 0x55, 0x55, 0x55, 0x55, 0x55, 0x6a, 0xaa, 0x5a, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x19, 0x55, 0x55, 0x65, 0x56, 0x95, 0xaa, 0x59, 0x55, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xa9, 0x56, 0xa0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x29, 0x55, 0x55, 0x65, 0x55, 0x96, 0xaa, 0x69, 0x55, 0x55, 0x55, 0x55, 0x56, 0xaa, 0xa5, 0x56, 0xa8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x29, 0x55, 0x55, 0x65, 0x55, 0x6a, 0xaa, 0xa5, 0x55, 0x55, 0x55, 0x55, 0x56, 0xaa, 0x95, 0x56, 0xa8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x29, 0x55, 0x55, 0x65, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0xaa, 0x55, 0x5a, 0xaa, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x2a, 0x56, 0xa5, 0x6a, 0xaa, 0xa5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x65, 0x55, 0x6a, 0xaa, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0a, 0x5a, 0xaa, 0xaa, 0x56, 0xa5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xa0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xaa, 0xaa, 0xa9, 0x6a, 0x95, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0xaa, 0xa6, 0xa0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xaa, 0xa9, 0x6a, 0xaa, 0x95, 0x56, 0x99, 0x95, 0x95, 0x55, 0x55, 0x55, 0x55, 0x6a, 0xaa, 0xa5, 0xa8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1a, 0x95, 0x56, 0xaa, 0x55, 0x55, 0x55, 0x9a, 0xa9, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0x95, 0x6a, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x95, 0x55, 0x5a, 0x55, 0x56, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xa9, 0x55, 0x69, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0xa5, 0x95, 0x56, 0x95, 0x55, 0xa9, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0xaa, 0xa5, 0x55, 0x6a, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xa6, 0x95, 0x55, 0xa9, 0x55, 0x56, 0xa5, 0x55, 0x55, 0x55, 0x55, 0x55, 0xaa, 0x55, 0x55, 0xaa, 0x40, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x55, 0x56, 0x9a, 0xa5, 0x55, 0x5a, 0xa5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0xaa, 0xa0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x69, 0x56, 0x55, 0x55, 0x55, 0x55, 0x65, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5a, 0xaa, 0x90, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x65, 0x56, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xa9, 0xa8, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x95, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0xaa, 0xa5, 0x64, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x95, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5a, 0xaa, 0x95, 0x6a, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x95, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5a, 0xaa, 0x55, 0x59, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x95, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0x95, 0x55, 0x5a, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xa5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0x40, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xa5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0xa0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xa0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x90, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa9, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xa8, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa9, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x68, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x68, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa9, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x64, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x6a, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa9, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x6a, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xba, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5a, 0x00, 
  0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5a, 0x00, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x65, 0x5a, 0x00, 
  0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xa5, 0x59, 0x00, 
  0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x95, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x95, 0x5a, 0x00, 
  0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0x95, 0x59, 0x00, 
  0x00, 0x3f, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xe5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5a, 0x55, 0x5a, 0x00, 
  0x00, 0x3f, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5a, 0x55, 0x5a, 0x00, 
  0x00, 0x3f, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xbf, 0xf5, 0x55, 0x59, 0x55, 0x55, 0x55, 0x55, 0x55, 0x69, 0x55, 0x6a, 0x00, 
  0x00, 0x3f, 0xff, 0xa6, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x67, 0xff, 0xf9, 0x55, 0x69, 0x55, 0x55, 0x55, 0x55, 0x55, 0xa5, 0x55, 0x6a, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xa6, 0x66, 0x6a, 0xaa, 0x99, 0x9a, 0xff, 0xff, 0xfd, 0x55, 0x69, 0x55, 0x55, 0x55, 0x55, 0x5a, 0x95, 0x55, 0x68, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xa9, 0xaa, 0x7b, 0xff, 0xff, 0xff, 0xfd, 0x55, 0x65, 0x55, 0x55, 0x55, 0x55, 0x6a, 0x55, 0x55, 0x68, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x55, 0xa5, 0x55, 0x55, 0x55, 0x5a, 0xa5, 0x55, 0x55, 0xa8, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x55, 0xa5, 0x55, 0x55, 0x5a, 0xaa, 0x55, 0x55, 0x55, 0x90, 0x00, 
  0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x56, 0x96, 0x6a, 0xaa, 0xaa, 0x95, 0x55, 0x55, 0x56, 0xa0, 0x00, 
  0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9a, 0xaa, 0xaa, 0xa6, 0x55, 0x55, 0x55, 0x55, 0x56, 0x40, 0x00, 
  0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xaa, 0x95, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5a, 0x80, 0x00, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xa5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x6a, 0x00, 0x00, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xa8, 0x00, 0x00, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0x90, 0x00, 0x00, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe9, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5a, 0xb0, 0x00, 0x00, 
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe9, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xaa, 0x00, 0x00, 0x00, 
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0xa8, 0xcc, 0xcc, 0x00, 
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe9, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xa0, 0x00, 0x00, 0xc0, 
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe9, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5a, 0xaa, 0x03, 0x33, 0x30, 0x00, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x55, 0x55, 0x55, 0x55, 0x56, 0xaa, 0xa0, 0x30, 0x00, 0x00, 0x00, 
  0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xa5, 0x55, 0x55, 0x5a, 0xaa, 0xa8, 0x03, 0x03, 0x30, 0x00, 0x00, 
  0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x83, 0x30, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xea, 0xaa, 0xaa, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x88, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0c, 0xcf, 0xff, 0xff, 0xfc, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t feed_cat_img = {LV_IMG_CF_INDEXED_2BIT,0,0,95,95,2296,feed_cat_img_map,};

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_STEP_ICON uint8_t step_icon_map[] = {
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 0*/
  0x29, 0xb4, 0xeb, 0xfd, 	/*Color of index 1*/
  0xd6, 0xc2, 0x70, 0x4c, 	/*Color of index 2*/
  0xe9, 0xac, 0x45, 0xfd, 	/*Color of index 3*/

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x25, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0a, 0x55, 0x55, 0xa0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x2f, 0xff, 0xd5, 0x55, 0x55, 0x57, 0xff, 0xf8, 0x00, 0x00, 
  0x00, 0x00, 0xbf, 0xff, 0x55, 0x55, 0x55, 0x55, 0xff, 0xfe, 0x00, 0x00, 
  0x00, 0x00, 0xbf, 0xfd, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xfe, 0x00, 0x00, 
  0x00, 0x00, 0xbf, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xfe, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0x00, 0x00, 
  0x00, 0x02, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0x80, 0x00, 
  0x00, 0x02, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0x80, 0x00, 
  0x00, 0x02, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0x80, 0x00, 
  0x00, 0x02, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0x80, 0x00, 
  0x00, 0x03, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xc0, 0x00, 
  0x00, 0x03, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xc0, 0x00, 
  0x00, 0x0b, 0xff, 0xff, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0xe0, 0x00, 
  0x00, 0x0b, 0xff, 0xff, 0xf5, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xe0, 0x00, 
  0x00, 0x0b, 0xff, 0xff, 0xff, 0x55, 0x57, 0xff, 0xff, 0xff, 0xe0, 0x00, 
  0x00, 0x0b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 
  0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 
  0x00, 0x0b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 
  0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t step_icon = {LV_IMG_CF_INDEXED_2BIT,0,0,48,48,592,step_icon_map,};
