/*******************************************************************************
 * Size: 60 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "../../lvgl.h"
#endif

#ifndef DIGITAL60
#define DIGITAL60 1
#endif

#if DIGITAL60

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x67, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf7, 0x10, 0x0, 0x3,
    0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd,
    0xc4, 0x0, 0x8, 0xef, 0xb8, 0x80,

    /* U+0022 "\"" */
    0x0, 0x3, 0x83, 0xbe, 0x3f, 0xf1, 0xff, 0x8f,
    0xfc, 0x7f, 0xe3, 0xff, 0x1f, 0xf8, 0xff, 0xc7,
    0xfe, 0x3f, 0xf1, 0xff, 0x8f, 0xf8, 0x78, 0x80,
    0x80,

    /* U+0023 "#" */
    0x0, 0x1, 0x80, 0x18, 0x0, 0x0, 0x1e, 0x1,
    0xe0, 0x0, 0x0, 0xf0, 0x1f, 0x0, 0x0, 0xf,
    0x80, 0xf8, 0x0, 0x0, 0x7c, 0x7, 0xc0, 0x0,
    0x3, 0xe0, 0x3e, 0x0, 0x0, 0x1f, 0x1, 0xf0,
    0x0, 0x0, 0xf8, 0x1f, 0x0, 0x0, 0x7, 0x80,
    0xf8, 0x0, 0x0, 0x7c, 0x7, 0xc0, 0x0, 0x3,
    0xe0, 0x3e, 0x0, 0x0, 0x1f, 0x1, 0xf0, 0x0,
    0x0, 0xf8, 0xf, 0x0, 0x7, 0xf3, 0x3f, 0x33,
    0xf8, 0x7f, 0xc3, 0xfd, 0x3f, 0xe7, 0xff, 0x3f,
    0xf3, 0xff, 0x1f, 0xf5, 0xff, 0x1f, 0xf0, 0x7e,
    0x77, 0xe6, 0x7f, 0x0, 0x7, 0xc0, 0x78, 0x0,
    0x0, 0x3c, 0x7, 0xc0, 0x0, 0x3, 0xe0, 0x3e,
    0x0, 0x0, 0x1f, 0x1, 0xf0, 0x0, 0x0, 0xf8,
    0xf, 0x80, 0x0, 0x7, 0xc0, 0x7c, 0x0, 0x0,
    0x3c, 0x3, 0xc0, 0x1, 0xfc, 0xcf, 0xc8, 0xfe,
    0x1f, 0xf0, 0xff, 0xf, 0xf1, 0xff, 0x9f, 0xf9,
    0xff, 0xc7, 0xf8, 0x7f, 0x87, 0xfc, 0x3f, 0x99,
    0xf9, 0x9f, 0xc0, 0x1, 0xe0, 0x1e, 0x0, 0x0,
    0x1f, 0x1, 0xf0, 0x0, 0x0, 0xf8, 0xf, 0x80,
    0x0, 0x7, 0xc0, 0x7c, 0x0, 0x0, 0x3e, 0x3,
    0xe0, 0x0, 0x1, 0xf0, 0x1e, 0x0, 0x0, 0xf,
    0x1, 0xf0, 0x0, 0x0, 0xf8, 0xf, 0x80, 0x0,
    0x7, 0xc0, 0x7c, 0x0, 0x0, 0x3e, 0x3, 0xe0,
    0x0, 0x1, 0xe0, 0x1e, 0x0, 0x0, 0x6, 0x0,
    0x60, 0x0, 0x0,

    /* U+0024 "$" */
    0x0, 0xe, 0x0, 0x0, 0x1, 0xf0, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0xf0, 0xf, 0xff, 0xff, 0x81,
    0xff, 0xff, 0xfc, 0xf, 0xff, 0xff, 0x82, 0x7f,
    0xff, 0xf0, 0x70, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x0, 0xf8, 0x0, 0x0, 0xf, 0x80, 0x0, 0x0,
    0xf8, 0x0, 0x0, 0xf, 0x80, 0x0, 0x0, 0xf8,
    0x0, 0x0, 0xf, 0x80, 0x0, 0x0, 0xf8, 0x0,
    0x0, 0xf, 0x80, 0x0, 0x0, 0xf8, 0x0, 0x0,
    0xf, 0x80, 0x0, 0x0, 0xf8, 0x0, 0x0, 0xf,
    0x80, 0x0, 0x0, 0xf8, 0x0, 0x0, 0xf, 0x0,
    0x0, 0x0, 0x27, 0xff, 0xfc, 0x0, 0xff, 0xff,
    0xe0, 0x1f, 0xff, 0xff, 0x0, 0xff, 0xff, 0xf0,
    0x7, 0xff, 0xfe, 0x40, 0x0, 0x0, 0x1e, 0x0,
    0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f, 0x0, 0x0,
    0x1, 0xf0, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1,
    0xf0, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0,
    0x0, 0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x0, 0xe3, 0xff, 0xff, 0xe4, 0x7f,
    0xff, 0xff, 0xf, 0xff, 0xff, 0xf0, 0x7f, 0xff,
    0xfe, 0x3, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f, 0x0, 0x0,
    0x1, 0xf0, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1,
    0xf0, 0x0, 0x0, 0xe, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+0025 "%" */
    0x7, 0xfc, 0x0, 0x0, 0x20, 0x1, 0xff, 0xc0,
    0x0, 0x1e, 0x0, 0x7f, 0xfc, 0x0, 0x7, 0xc0,
    0x7, 0xff, 0x0, 0x0, 0xf8, 0x2, 0x7f, 0xc4,
    0x0, 0x3e, 0x0, 0xe0, 0x1, 0xc0, 0xf, 0xc0,
    0x3e, 0x0, 0x7c, 0x1, 0xf0, 0x7, 0xc0, 0xf,
    0x80, 0x7e, 0x0, 0xf8, 0x1, 0xf0, 0xf, 0x80,
    0x1f, 0x0, 0x3e, 0x3, 0xf0, 0x3, 0xe0, 0x7,
    0xc0, 0x7c, 0x0, 0x7c, 0x0, 0xf8, 0x1f, 0x0,
    0xf, 0x80, 0x1f, 0x7, 0xe0, 0x1, 0xf0, 0x3,
    0xe0, 0xf8, 0x0, 0x1c, 0x0, 0x38, 0x3f, 0x0,
    0x1, 0x3f, 0xe2, 0x7, 0xc0, 0x0, 0xf, 0xfe,
    0x1, 0xf8, 0x0, 0x3, 0xff, 0xe0, 0x7e, 0x0,
    0x0, 0x3f, 0xf8, 0x7, 0x80, 0x0, 0x3, 0xfe,
    0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x18, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x60, 0x0,
    0x0, 0x0, 0x0, 0x3e, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xc0, 0x0, 0x0, 0x0, 0x1, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x3e, 0x3, 0xfe, 0x0, 0x0,
    0xf, 0xc0, 0xff, 0xc0, 0x0, 0x3, 0xf0, 0x3f,
    0xfc, 0x0, 0x0, 0x7c, 0x3, 0xff, 0x80, 0x0,
    0x1f, 0x81, 0x3f, 0xe4, 0x0, 0x7, 0xe0, 0x70,
    0x1, 0xc0, 0x0, 0xfc, 0x1f, 0x0, 0x7c, 0x0,
    0x3f, 0x3, 0xe0, 0xf, 0x80, 0x7, 0xc0, 0x7c,
    0x1, 0xf0, 0x1, 0xf8, 0xf, 0x80, 0x3e, 0x0,
    0x7e, 0x1, 0xf0, 0x7, 0xc0, 0xf, 0xc0, 0x3e,
    0x0, 0xf8, 0x3, 0xf0, 0x7, 0xc0, 0x1f, 0x0,
    0x7c, 0x0, 0xf8, 0x3, 0xe0, 0x1f, 0x80, 0xe,
    0x0, 0x38, 0x7, 0xe0, 0x0, 0x9f, 0xf2, 0x0,
    0xf8, 0x0, 0x7, 0xfe, 0x0, 0x1f, 0x0, 0x1,
    0xff, 0xe0, 0x3, 0xc0, 0x0, 0x1f, 0xf8, 0x0,
    0x20, 0x0, 0x1, 0xff, 0x0,

    /* U+0026 "&" */
    0x7, 0xff, 0xfe, 0x0, 0x3, 0xff, 0xff, 0x80,
    0x1, 0xff, 0xff, 0xf0, 0x0, 0x3f, 0xff, 0xfc,
    0x0, 0x27, 0xff, 0xfe, 0x0, 0x1c, 0x0, 0x0,
    0x0, 0xf, 0x80, 0x0, 0x0, 0x3, 0xe0, 0x0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x0, 0x3e, 0x0,
    0x0, 0x0, 0xf, 0x80, 0x0, 0x0, 0x3, 0xe0,
    0x0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0x0, 0xf, 0x80, 0x0, 0x4, 0x3,
    0xe0, 0x0, 0x3, 0x80, 0xf8, 0x0, 0x1, 0xf0,
    0x3e, 0x0, 0x0, 0x7c, 0xf, 0x80, 0x0, 0x1f,
    0x3, 0xe0, 0x0, 0x7, 0xc0, 0xf0, 0x0, 0x1,
    0xe0, 0x19, 0xff, 0xff, 0xb3, 0xc0, 0xff, 0xff,
    0xe0, 0xf8, 0x7f, 0xff, 0xfc, 0x7f, 0xf, 0xff,
    0xff, 0x1f, 0x99, 0xff, 0xff, 0xb3, 0xcf, 0x0,
    0x0, 0x1e, 0x3, 0xe0, 0x0, 0x7, 0xc0, 0xf8,
    0x0, 0x1, 0xf0, 0x3e, 0x0, 0x0, 0x7c, 0xf,
    0x80, 0x0, 0x1f, 0x3, 0xe0, 0x0, 0x7, 0xc0,
    0xf8, 0x0, 0x1, 0xf0, 0x3e, 0x0, 0x0, 0x7c,
    0xf, 0x80, 0x0, 0x1f, 0x3, 0xe0, 0x0, 0x7,
    0xc0, 0xf8, 0x0, 0x1, 0xf0, 0x3e, 0x0, 0x0,
    0x7c, 0xf, 0x80, 0x0, 0x1f, 0x3, 0xe0, 0x0,
    0x7, 0xc0, 0xf8, 0x0, 0x1, 0xf0, 0x1c, 0x0,
    0x0, 0x38, 0x2, 0x7f, 0xff, 0xe4, 0x0, 0x3f,
    0xff, 0xf8, 0x0, 0x1f, 0xff, 0xff, 0x0, 0x3,
    0xff, 0xff, 0x80, 0x0, 0x7f, 0xff, 0xe0, 0x0,

    /* U+0027 "'" */
    0x3, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf8, 0x80,

    /* U+0028 "(" */
    0x7, 0xe0, 0x7f, 0x87, 0xfc, 0x1f, 0xe2, 0x7e,
    0x38, 0x3, 0xe0, 0x1f, 0x0, 0xf8, 0x7, 0xc0,
    0x3e, 0x1, 0xf0, 0xf, 0x80, 0x7c, 0x3, 0xe0,
    0x1f, 0x0, 0xf8, 0x7, 0xc0, 0x3e, 0x1, 0xf0,
    0xf, 0x80, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0x0, 0x3c, 0x1, 0xf0, 0xf, 0x80, 0x7c,
    0x3, 0xe0, 0x1f, 0x0, 0xf8, 0x7, 0xc0, 0x3e,
    0x1, 0xf0, 0xf, 0x80, 0x7c, 0x3, 0xe0, 0x1f,
    0x0, 0xf8, 0x3, 0x80, 0x9, 0xf8, 0x1f, 0xe1,
    0xff, 0x7, 0xf8, 0x1f, 0x80,

    /* U+0029 ")" */
    0x3f, 0x3, 0xfc, 0x1f, 0xf0, 0xff, 0x3, 0xf2,
    0x0, 0x38, 0x3, 0xe0, 0x1f, 0x0, 0xf8, 0x7,
    0xc0, 0x3e, 0x1, 0xf0, 0xf, 0x80, 0x7c, 0x3,
    0xe0, 0x1f, 0x0, 0xf8, 0x7, 0xc0, 0x3e, 0x1,
    0xf0, 0xf, 0x80, 0x38, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0x0, 0x1e, 0x1, 0xf0, 0xf, 0x80,
    0x7c, 0x3, 0xe0, 0x1f, 0x0, 0xf8, 0x7, 0xc0,
    0x3e, 0x1, 0xf0, 0xf, 0x80, 0x7c, 0x3, 0xe0,
    0x1f, 0x0, 0xf8, 0x3, 0x8f, 0xc8, 0xff, 0x7,
    0xfc, 0x3f, 0xc0, 0xfc, 0x0,

    /* U+002A "*" */
    0xf0, 0x3f, 0xe1, 0xff, 0xcf, 0xff, 0x3f, 0x7c,
    0xf8, 0xf3, 0xc0, 0x0, 0xf, 0x3c, 0x7c, 0xfb,
    0xf3, 0xff, 0xcf, 0xfe, 0x1f, 0xf0, 0x3c,

    /* U+002B "+" */
    0x0, 0x8, 0x0, 0x0, 0x7, 0x0, 0x0, 0x3,
    0xe0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x3e, 0x0,
    0x0, 0xf, 0x80, 0x0, 0x3, 0xe0, 0x0, 0x0,
    0xf8, 0x0, 0x0, 0x3e, 0x0, 0x0, 0xf, 0x80,
    0x0, 0x3, 0xc0, 0x1, 0xff, 0x27, 0xfc, 0x7f,
    0xe3, 0xff, 0xbf, 0xfd, 0xff, 0xef, 0xfe, 0x3f,
    0xf9, 0xff, 0x67, 0xfc, 0x0, 0x3e, 0x0, 0x0,
    0xf, 0x80, 0x0, 0x3, 0xe0, 0x0, 0x0, 0xf8,
    0x0, 0x0, 0x3e, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x3, 0xe0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0x6, 0x0, 0x0,

    /* U+002C "," */
    0x1e, 0x7c, 0xfb, 0xef, 0xdf, 0x3c, 0x78,

    /* U+002D "-" */
    0x3f, 0xff, 0xe3, 0xff, 0xff, 0xbf, 0xff, 0xfe,
    0xff, 0xff, 0xe3, 0xff, 0xfe, 0x0,

    /* U+002E "." */
    0x10, 0x71, 0xf7, 0xf7, 0xc7, 0x4, 0x0,

    /* U+002F "/" */
    0x0, 0x0, 0x0, 0x78, 0x0, 0x0, 0x1, 0xe0,
    0x0, 0x0, 0xf, 0xc0, 0x0, 0x0, 0x3e, 0x0,
    0x0, 0x1, 0xf8, 0x0, 0x0, 0xf, 0xc0, 0x0,
    0x0, 0x3f, 0x0, 0x0, 0x1, 0xf8, 0x0, 0x0,
    0x7, 0xc0, 0x0, 0x0, 0x3f, 0x0, 0x0, 0x1,
    0xf8, 0x0, 0x0, 0x7, 0xe0, 0x0, 0x0, 0x3f,
    0x0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x7, 0xe0,
    0x0, 0x0, 0x3f, 0x0, 0x0, 0x0, 0xfc, 0x0,
    0x0, 0x7, 0xe0, 0x0, 0x0, 0xf, 0x0, 0x0,
    0x0, 0x3c, 0x0, 0x0, 0x0, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0x80, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x0, 0x7c,
    0x0, 0x0, 0x3, 0xf0, 0x0, 0x0, 0x1f, 0x80,
    0x0, 0x0, 0x7e, 0x0, 0x0, 0x3, 0xf0, 0x0,
    0x0, 0xf, 0x80, 0x0, 0x0, 0x7e, 0x0, 0x0,
    0x3, 0xf0, 0x0, 0x0, 0xf, 0xc0, 0x0, 0x0,
    0x7e, 0x0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0xf,
    0xc0, 0x0, 0x0, 0x7e, 0x0, 0x0, 0x1, 0xf8,
    0x0, 0x0, 0xf, 0xc0, 0x0, 0x0, 0x3e, 0x0,
    0x0, 0x1, 0xf8, 0x0, 0x0, 0x7, 0xc0, 0x0,
    0x0, 0x3f, 0x0, 0x0, 0x0, 0xf8, 0x0, 0x0,
    0x1, 0xc0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0,
    0x0,

    /* U+0030 "0" */
    0x7, 0xff, 0xfe, 0x0, 0xff, 0xff, 0xe0, 0x1f,
    0xff, 0xff, 0x0, 0xff, 0xff, 0xf0, 0x27, 0xff,
    0xfe, 0x47, 0x0, 0x0, 0xe, 0xf8, 0x0, 0x1,
    0xff, 0x80, 0x0, 0x1f, 0xf8, 0x0, 0x1, 0xff,
    0x80, 0x0, 0x1f, 0xf8, 0x0, 0x1, 0xff, 0x80,
    0x0, 0x1f, 0xf8, 0x0, 0x1, 0xff, 0x80, 0x0,
    0x1f, 0xf8, 0x0, 0x1, 0xff, 0x80, 0x0, 0x1f,
    0xf8, 0x0, 0x1, 0xff, 0x80, 0x0, 0x1f, 0xf8,
    0x0, 0x1, 0xff, 0x80, 0x0, 0x1f, 0xf8, 0x0,
    0x1, 0xf6, 0x0, 0x0, 0xc, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6,
    0x0, 0x0, 0xc, 0xf0, 0x0, 0x1, 0xef, 0x80,
    0x0, 0x1f, 0xf8, 0x0, 0x1, 0xff, 0x80, 0x0,
    0x1f, 0xf8, 0x0, 0x1, 0xff, 0x80, 0x0, 0x1f,
    0xf8, 0x0, 0x1, 0xff, 0x80, 0x0, 0x1f, 0xf8,
    0x0, 0x1, 0xff, 0x80, 0x0, 0x1f, 0xf8, 0x0,
    0x1, 0xff, 0x80, 0x0, 0x1f, 0xf8, 0x0, 0x1,
    0xff, 0x80, 0x0, 0x1f, 0xf8, 0x0, 0x1, 0xf7,
    0x0, 0x0, 0xe, 0x27, 0xff, 0xfe, 0x40, 0xff,
    0xff, 0xe0, 0x1f, 0xff, 0xff, 0x0, 0xff, 0xff,
    0xe0, 0x7, 0xff, 0xfe, 0x0,

    /* U+0031 "1" */
    0x7f, 0xdf, 0xf3, 0xfc, 0xff, 0x37, 0xce, 0x3,
    0xc0, 0xf8, 0x1f, 0x3, 0xe0, 0x7c, 0xf, 0x81,
    0xf0, 0x3e, 0x7, 0xc0, 0xf8, 0x1f, 0x3, 0xe0,
    0x7c, 0xf, 0x81, 0xf0, 0x3e, 0x3, 0x80, 0x20,
    0x0, 0x0, 0x0, 0x10, 0x7, 0x1, 0xf0, 0x3e,
    0x7, 0xc0, 0xf8, 0x1f, 0x3, 0xe0, 0x7c, 0xf,
    0x81, 0xf0, 0x3e, 0x7, 0xc0, 0xf8, 0x1f, 0x3,
    0xe0, 0x7c, 0xf, 0x81, 0xf0, 0x3e, 0x7, 0xc0,
    0x70, 0x4,

    /* U+0032 "2" */
    0x7, 0xff, 0xfe, 0x0, 0xff, 0xff, 0xe0, 0x1f,
    0xff, 0xff, 0x0, 0xff, 0xff, 0xf0, 0x7, 0xff,
    0xfe, 0x40, 0x0, 0x0, 0xe, 0x0, 0x0, 0x1,
    0xf0, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0,
    0x0, 0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f, 0x0,
    0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f, 0x0, 0x0,
    0x1, 0xe0, 0x7f, 0xff, 0xec, 0xf, 0xff, 0xfe,
    0x1, 0xff, 0xff, 0xf0, 0xf, 0xff, 0xff, 0x6,
    0x7f, 0xff, 0xe0, 0xf0, 0x0, 0x0, 0xf, 0x80,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x0, 0xf8, 0x0, 0x0, 0xf, 0x80, 0x0, 0x0,
    0xf8, 0x0, 0x0, 0xf, 0x80, 0x0, 0x0, 0xf8,
    0x0, 0x0, 0xf, 0x80, 0x0, 0x0, 0xf8, 0x0,
    0x0, 0xf, 0x80, 0x0, 0x0, 0xf8, 0x0, 0x0,
    0xf, 0x80, 0x0, 0x0, 0xf8, 0x0, 0x0, 0xf,
    0x0, 0x0, 0x0, 0xe7, 0xff, 0xfe, 0xc, 0xff,
    0xff, 0xe0, 0x9f, 0xff, 0xff, 0x3, 0xff, 0xff,
    0xe0, 0x7f, 0xff, 0xfe, 0x0,

    /* U+0033 "3" */
    0x3f, 0xff, 0xe0, 0x3f, 0xff, 0xf8, 0x3f, 0xff,
    0xfe, 0xf, 0xff, 0xfe, 0x3, 0xff, 0xff, 0x20,
    0x0, 0x0, 0x38, 0x0, 0x0, 0x3e, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0xf, 0x80, 0x0, 0x7, 0xc0,
    0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0, 0x0, 0x0,
    0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0, 0x3e, 0x0,
    0x0, 0x1f, 0x0, 0x0, 0xf, 0x80, 0x0, 0x7,
    0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1, 0xf0, 0x0,
    0x0, 0xf1, 0xff, 0xff, 0x31, 0xff, 0xff, 0xc1,
    0xff, 0xff, 0xf0, 0x7f, 0xff, 0xf0, 0x1f, 0xff,
    0xf9, 0x0, 0x0, 0x3, 0xc0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0, 0x0,
    0x3e, 0x0, 0x0, 0x1f, 0x0, 0x0, 0xf, 0x80,
    0x0, 0x7, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x1,
    0xf0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x7c, 0x0,
    0x0, 0x3e, 0x0, 0x0, 0x1f, 0x0, 0x0, 0xf,
    0x80, 0x0, 0x3, 0x8f, 0xff, 0xfc, 0x8f, 0xff,
    0xfe, 0xf, 0xff, 0xff, 0x83, 0xff, 0xff, 0x80,
    0xff, 0xff, 0x80,

    /* U+0034 "4" */
    0x20, 0x0, 0x0, 0x4f, 0x0, 0x0, 0x1e, 0xf8,
    0x0, 0x1, 0xff, 0x80, 0x0, 0x1f, 0xf8, 0x0,
    0x1, 0xff, 0x80, 0x0, 0x1f, 0xf8, 0x0, 0x1,
    0xff, 0x80, 0x0, 0x1f, 0xf8, 0x0, 0x1, 0xff,
    0x80, 0x0, 0x1f, 0xf8, 0x0, 0x1, 0xff, 0x80,
    0x0, 0x1f, 0xf8, 0x0, 0x1, 0xff, 0x80, 0x0,
    0x1f, 0xf8, 0x0, 0x1, 0xff, 0x80, 0x0, 0x1f,
    0xf8, 0x0, 0x1, 0xff, 0x80, 0x0, 0x1f, 0xf8,
    0x0, 0x1, 0xff, 0x80, 0x0, 0x1f, 0xf0, 0x0,
    0x1, 0xe6, 0x7f, 0xff, 0xec, 0xf, 0xff, 0xfe,
    0x1, 0xff, 0xff, 0xf0, 0xf, 0xff, 0xff, 0x0,
    0x7f, 0xff, 0xec, 0x0, 0x0, 0x1, 0xe0, 0x0,
    0x0, 0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f, 0x0,
    0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f, 0x0, 0x0,
    0x1, 0xf0, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1,
    0xf0, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0,
    0x0, 0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0, 0x0,
    0x1e, 0x0, 0x0, 0x0, 0x40,

    /* U+0035 "5" */
    0x7f, 0xff, 0xfe, 0x3, 0xff, 0xff, 0xe0, 0x9f,
    0xff, 0xff, 0xc, 0xff, 0xff, 0xf0, 0xe7, 0xff,
    0xfe, 0xf, 0x0, 0x0, 0x0, 0xf8, 0x0, 0x0,
    0xf, 0x80, 0x0, 0x0, 0xf8, 0x0, 0x0, 0xf,
    0x80, 0x0, 0x0, 0xf8, 0x0, 0x0, 0xf, 0x80,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x0, 0xf8, 0x0, 0x0, 0xf, 0x80, 0x0, 0x0,
    0xf8, 0x0, 0x0, 0xf, 0x80, 0x0, 0x0, 0xf8,
    0x0, 0x0, 0xf, 0x80, 0x0, 0x0, 0x70, 0x0,
    0x0, 0x2, 0x7f, 0xff, 0xe0, 0xf, 0xff, 0xff,
    0x1, 0xff, 0xff, 0xf0, 0xf, 0xff, 0xfe, 0x0,
    0x7f, 0xff, 0xe4, 0x0, 0x0, 0x1, 0xe0, 0x0,
    0x0, 0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f, 0x0,
    0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f, 0x0, 0x0,
    0x1, 0xf0, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1,
    0xf0, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0xe, 0x7, 0xff, 0xfe, 0x40, 0xff,
    0xff, 0xf0, 0x1f, 0xff, 0xff, 0x0, 0xff, 0xff,
    0xe0, 0x7, 0xff, 0xfe, 0x0,

    /* U+0036 "6" */
    0x7, 0xff, 0xfe, 0x0, 0xff, 0xff, 0xe0, 0x1f,
    0xff, 0xff, 0x0, 0xff, 0xff, 0xf0, 0x27, 0xff,
    0xfe, 0x7, 0x0, 0x0, 0x0, 0xf8, 0x0, 0x0,
    0xf, 0x80, 0x0, 0x0, 0xf8, 0x0, 0x0, 0xf,
    0x80, 0x0, 0x0, 0xf8, 0x0, 0x0, 0xf, 0x80,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x0, 0xf8, 0x0, 0x0, 0xf, 0x80, 0x0, 0x0,
    0xf8, 0x0, 0x0, 0xf, 0x80, 0x0, 0x0, 0xf8,
    0x0, 0x0, 0xf, 0x80, 0x0, 0x0, 0xf0, 0x0,
    0x0, 0x6, 0x7f, 0xff, 0xe0, 0xf, 0xff, 0xfe,
    0x1, 0xff, 0xff, 0xf0, 0xf, 0xff, 0xff, 0x6,
    0x7f, 0xff, 0xec, 0xf0, 0x0, 0x1, 0xef, 0x80,
    0x0, 0x1f, 0xf8, 0x0, 0x1, 0xff, 0x80, 0x0,
    0x1f, 0xf8, 0x0, 0x1, 0xff, 0x80, 0x0, 0x1f,
    0xf8, 0x0, 0x1, 0xff, 0x80, 0x0, 0x1f, 0xf8,
    0x0, 0x1, 0xff, 0x80, 0x0, 0x1f, 0xf8, 0x0,
    0x1, 0xff, 0x80, 0x0, 0x1f, 0xf8, 0x0, 0x1,
    0xff, 0x80, 0x0, 0x1f, 0xf8, 0x0, 0x1, 0xf7,
    0x0, 0x0, 0xe, 0x27, 0xff, 0xfe, 0x40, 0xff,
    0xff, 0xe0, 0x1f, 0xff, 0xff, 0x0, 0xff, 0xff,
    0xe0, 0x7, 0xff, 0xfe, 0x0,

    /* U+0037 "7" */
    0x7f, 0xff, 0xfe, 0x7f, 0xff, 0xfc, 0xff, 0xff,
    0xf9, 0xff, 0xff, 0xf3, 0x7f, 0xff, 0xe7, 0x0,
    0x0, 0xf, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f, 0x0,
    0x0, 0x1f, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f, 0x0,
    0x0, 0xe, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0x0, 0x0,
    0xe, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f, 0x0,
    0x0, 0x1f, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f, 0x0,
    0x0, 0x1f, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f, 0x0,
    0x0, 0x1f, 0x0, 0x0, 0xe, 0x0, 0x0, 0x0,

    /* U+0038 "8" */
    0x7, 0xff, 0xfc, 0x0, 0xff, 0xff, 0xe0, 0x1f,
    0xff, 0xff, 0x0, 0xff, 0xff, 0xf0, 0x27, 0xff,
    0xfe, 0x47, 0x0, 0x0, 0xe, 0xf8, 0x0, 0x1,
    0xff, 0x80, 0x0, 0x1f, 0xf8, 0x0, 0x1, 0xff,
    0x80, 0x0, 0x1f, 0xf8, 0x0, 0x1, 0xff, 0x80,
    0x0, 0x1f, 0xf8, 0x0, 0x1, 0xff, 0x80, 0x0,
    0x1f, 0xf8, 0x0, 0x1, 0xff, 0x80, 0x0, 0x1f,
    0xf8, 0x0, 0x1, 0xff, 0x80, 0x0, 0x1f, 0xf8,
    0x0, 0x1, 0xff, 0x80, 0x0, 0x1f, 0xf0, 0x0,
    0x1, 0xe6, 0x7f, 0xff, 0xec, 0xf, 0xff, 0xfe,
    0x1, 0xff, 0xff, 0xf0, 0xf, 0xff, 0xff, 0x6,
    0x7f, 0xff, 0xec, 0xf0, 0x0, 0x1, 0xef, 0x80,
    0x0, 0x1f, 0xf8, 0x0, 0x1, 0xff, 0x80, 0x0,
    0x1f, 0xf8, 0x0, 0x1, 0xff, 0x80, 0x0, 0x1f,
    0xf8, 0x0, 0x1, 0xff, 0x80, 0x0, 0x1f, 0xf8,
    0x0, 0x1, 0xff, 0x80, 0x0, 0x1f, 0xf8, 0x0,
    0x1, 0xff, 0x80, 0x0, 0x1f, 0xf8, 0x0, 0x1,
    0xff, 0x80, 0x0, 0x1f, 0xf8, 0x0, 0x1, 0xf7,
    0x0, 0x0, 0xe, 0x27, 0xff, 0xfe, 0x40, 0xff,
    0xff, 0xe0, 0x1f, 0xff, 0xff, 0x0, 0xff, 0xff,
    0xe0, 0x7, 0xff, 0xfe, 0x0,

    /* U+0039 "9" */
    0x7, 0xff, 0xfe, 0x0, 0xff, 0xff, 0xe0, 0x1f,
    0xff, 0xff, 0x0, 0xff, 0xff, 0xf0, 0x27, 0xff,
    0xfe, 0x47, 0x0, 0x0, 0xe, 0xf8, 0x0, 0x1,
    0xff, 0x80, 0x0, 0x1f, 0xf8, 0x0, 0x1, 0xff,
    0x80, 0x0, 0x1f, 0xf8, 0x0, 0x1, 0xff, 0x80,
    0x0, 0x1f, 0xf8, 0x0, 0x1, 0xff, 0x80, 0x0,
    0x1f, 0xf8, 0x0, 0x1, 0xff, 0x80, 0x0, 0x1f,
    0xf8, 0x0, 0x1, 0xff, 0x80, 0x0, 0x1f, 0xf8,
    0x0, 0x1, 0xff, 0x80, 0x0, 0x1f, 0xf0, 0x0,
    0x1, 0xe6, 0x7f, 0xff, 0xec, 0xf, 0xff, 0xfe,
    0x1, 0xff, 0xff, 0xf0, 0xf, 0xff, 0xff, 0x0,
    0x7f, 0xff, 0xec, 0x0, 0x0, 0x1, 0xe0, 0x0,
    0x0, 0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f, 0x0,
    0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f, 0x0, 0x0,
    0x1, 0xf0, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1,
    0xf0, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0xe, 0x7, 0xff, 0xfe, 0x40, 0xff,
    0xff, 0xe0, 0x1f, 0xff, 0xff, 0x0, 0xff, 0xff,
    0xe0, 0x7, 0xff, 0xfe, 0x0,

    /* U+003A ":" */
    0x10, 0x71, 0xf7, 0xe7, 0x86, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x4, 0x1c, 0x7d, 0xfd, 0xf1,
    0xc1, 0x0,

    /* U+003B ";" */
    0x8, 0x1c, 0x3e, 0x7f, 0x3e, 0x1c, 0x8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1e,
    0x3e, 0x3e, 0x7c, 0xfc, 0xf8, 0xf0, 0xf0,

    /* U+003C "<" */
    0x0, 0x0, 0x1e, 0x0, 0x0, 0xfc, 0x0, 0xf,
    0xf8, 0x0, 0x7f, 0xf0, 0x3, 0xff, 0x80, 0x1f,
    0xf8, 0x0, 0xff, 0xc0, 0x7, 0xfe, 0x0, 0x3f,
    0xf0, 0x1, 0xff, 0x80, 0x3, 0xfc, 0x0, 0x7,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7e, 0x0, 0x0, 0xff, 0x0,
    0x1, 0xff, 0x80, 0x0, 0xff, 0xc0, 0x0, 0x7f,
    0xe0, 0x0, 0x3f, 0xf0, 0x0, 0x1f, 0xf8, 0x0,
    0xf, 0xfe, 0x0, 0x7, 0xff, 0x0, 0x3, 0xfe,
    0x0, 0x0, 0xfc, 0x0, 0x0, 0x78,

    /* U+003D "=" */
    0x3f, 0xff, 0xe3, 0xff, 0xff, 0xbf, 0xff, 0xfe,
    0xff, 0xff, 0xe3, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xf8, 0xff, 0xff, 0xef,
    0xff, 0xff, 0xbf, 0xff, 0xf8, 0xff, 0xff, 0x80,

    /* U+003E ">" */
    0xf0, 0x0, 0x1, 0xf8, 0x0, 0x3, 0xfe, 0x0,
    0x7, 0xff, 0x0, 0x3, 0xff, 0x80, 0x0, 0xff,
    0xc0, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0, 0x0,
    0x1f, 0xf8, 0x0, 0xf, 0xfc, 0x0, 0x7, 0xf8,
    0x0, 0x1, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1f, 0x0, 0x1,
    0xfe, 0x0, 0xf, 0xfc, 0x0, 0x7f, 0xe0, 0x3,
    0xff, 0x0, 0x1f, 0xf8, 0x0, 0xff, 0xc0, 0xf,
    0xfe, 0x0, 0x7f, 0xf0, 0x0, 0xff, 0x80, 0x1,
    0xf8, 0x0, 0x3, 0xc0, 0x0, 0x0,

    /* U+003F "?" */
    0x7, 0xff, 0xfe, 0x0, 0xff, 0xff, 0xe0, 0x1f,
    0xff, 0xff, 0x0, 0xff, 0xff, 0xf0, 0x7, 0xff,
    0xfe, 0x40, 0x0, 0x0, 0xe, 0x0, 0x0, 0x1,
    0xf0, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1, 0xf0,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0,
    0x0, 0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f, 0x0,
    0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f, 0x0, 0x0,
    0x1, 0xe0, 0x7f, 0xff, 0xec, 0xf, 0xff, 0xfe,
    0x1, 0xff, 0xff, 0xf0, 0xf, 0xff, 0xff, 0x6,
    0x7f, 0xff, 0xe0, 0xf0, 0x0, 0x0, 0xf, 0x80,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x0, 0xf8, 0x0, 0x0, 0xf, 0x80, 0x0, 0x0,
    0xf8, 0x0, 0x0, 0xf, 0x80, 0x0, 0x0, 0xf8,
    0x0, 0x0, 0xf, 0x80, 0x0, 0x0, 0xf8, 0x0,
    0x0, 0xf, 0x80, 0x0, 0x0, 0x70, 0x0, 0x0,
    0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0x0,
    0x0, 0x0, 0x78, 0x0, 0x0, 0xf, 0x0, 0x0,
    0x0, 0x20, 0x0, 0x0, 0x0,

    /* U+0040 "@" */
    0x0, 0x0, 0x7f, 0xc0, 0x0, 0x0, 0x0, 0xff,
    0xff, 0x0, 0x0, 0x0, 0xff, 0xff, 0xf0, 0x0,
    0x0, 0xfe, 0x0, 0xff, 0x0, 0x0, 0xfc, 0x0,
    0x3, 0xe0, 0x0, 0x7c, 0x0, 0x0, 0x3e, 0x0,
    0x3e, 0x0, 0x0, 0x7, 0xc0, 0x1e, 0x0, 0x0,
    0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x1e, 0x3,
    0x80, 0x0, 0x0, 0x3, 0xc1, 0xe0, 0x0, 0x0,
    0x0, 0x70, 0x70, 0x0, 0x0, 0x0, 0xe, 0x38,
    0x0, 0x3f, 0x1f, 0x83, 0x8e, 0x0, 0x3c, 0x67,
    0xc0, 0xf7, 0x0, 0x3e, 0xd, 0xf0, 0x1d, 0xc0,
    0x1f, 0x1, 0xfc, 0x7, 0x70, 0xf, 0x80, 0x7f,
    0x1, 0xf8, 0x7, 0xc0, 0x1f, 0x80, 0x7e, 0x3,
    0xf0, 0x7, 0xe0, 0x1f, 0x81, 0xf8, 0x1, 0xf8,
    0x7, 0xe0, 0x7e, 0x0, 0x7c, 0x1, 0xf8, 0x1f,
    0x0, 0x1f, 0x0, 0x6e, 0xf, 0xc0, 0x7, 0xc0,
    0x3b, 0x83, 0xf0, 0x3, 0xf0, 0xe, 0xe0, 0xf8,
    0x0, 0xf8, 0x3, 0x38, 0x3e, 0x0, 0x3e, 0x1,
    0xcf, 0xf, 0x80, 0x1f, 0x80, 0x61, 0xc3, 0xe0,
    0x7, 0xe0, 0x38, 0x70, 0x78, 0x3, 0xf0, 0xc,
    0x1e, 0x1e, 0x0, 0xfc, 0x6, 0x3, 0x83, 0x80,
    0x7f, 0x3, 0x0, 0xf0, 0xf0, 0x33, 0xc1, 0x80,
    0x1c, 0x1e, 0x18, 0xf1, 0x80, 0x7, 0x81, 0xf8,
    0xf, 0x80, 0xf0, 0xf0, 0x0, 0x0, 0x0, 0x78,
    0x1e, 0x0, 0x0, 0x0, 0x3c, 0x7, 0xc0, 0x0,
    0x0, 0x1e, 0x0, 0xf8, 0x0, 0x0, 0xf, 0x80,
    0x1f, 0x80, 0x0, 0x7, 0xc0, 0x1, 0xf8, 0x0,
    0xf, 0xc0, 0x0, 0x3f, 0xc0, 0x1f, 0xe0, 0x0,
    0x3, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x3f, 0xff,
    0xe0, 0x0, 0x0, 0x1, 0xff, 0xc0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 193, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 217, .box_w = 5, .box_h = 47, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 298, .box_w = 13, .box_h = 15, .ofs_x = 3, .ofs_y = 33},
    {.bitmap_index = 56, .adv_w = 690, .box_w = 37, .box_h = 42, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 537, .box_w = 28, .box_h = 62, .ofs_x = 3, .ofs_y = -8},
    {.bitmap_index = 468, .adv_w = 780, .box_w = 43, .box_h = 47, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 639, .box_w = 34, .box_h = 47, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 921, .adv_w = 172, .box_w = 5, .box_h = 15, .ofs_x = 3, .ofs_y = 33},
    {.bitmap_index = 931, .adv_w = 296, .box_w = 13, .box_h = 47, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1008, .adv_w = 292, .box_w = 13, .box_h = 47, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1085, .adv_w = 319, .box_w = 14, .box_h = 13, .ofs_x = 3, .ofs_y = 34},
    {.bitmap_index = 1108, .adv_w = 507, .box_w = 26, .box_h = 26, .ofs_x = 3, .ofs_y = 7},
    {.bitmap_index = 1193, .adv_w = 192, .box_w = 7, .box_h = 8, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 1200, .adv_w = 434, .box_w = 21, .box_h = 5, .ofs_x = 3, .ofs_y = 16},
    {.bitmap_index = 1214, .adv_w = 203, .box_w = 7, .box_h = 7, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1221, .adv_w = 566, .box_w = 30, .box_h = 47, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1398, .adv_w = 538, .box_w = 28, .box_h = 47, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1563, .adv_w = 278, .box_w = 11, .box_h = 48, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 1629, .adv_w = 538, .box_w = 28, .box_h = 47, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1794, .adv_w = 486, .box_w = 25, .box_h = 47, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1941, .adv_w = 538, .box_w = 28, .box_h = 47, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2106, .adv_w = 538, .box_w = 28, .box_h = 47, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2271, .adv_w = 534, .box_w = 28, .box_h = 47, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2436, .adv_w = 481, .box_w = 24, .box_h = 48, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 2580, .adv_w = 534, .box_w = 28, .box_h = 47, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2745, .adv_w = 538, .box_w = 28, .box_h = 47, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2910, .adv_w = 203, .box_w = 7, .box_h = 29, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2936, .adv_w = 222, .box_w = 8, .box_h = 31, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 2967, .adv_w = 456, .box_w = 23, .box_h = 27, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 3045, .adv_w = 434, .box_w = 21, .box_h = 15, .ofs_x = 3, .ofs_y = 11},
    {.bitmap_index = 3085, .adv_w = 459, .box_w = 23, .box_h = 27, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 3163, .adv_w = 538, .box_w = 28, .box_h = 47, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 3328, .adv_w = 749, .box_w = 42, .box_h = 44, .ofs_x = 2, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 33, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR >= 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR >= 8
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t digital60 = {
#else
lv_font_t digital60 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 62,          /*The maximum line height required by the font*/
    .base_line = 8,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -7,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
    .fallback = NULL,
    .user_data = NULL
};



#endif /*#if DIGITAL60*/

