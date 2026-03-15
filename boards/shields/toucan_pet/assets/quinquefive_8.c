/*******************************************************************************
 * Size: 8 px
 * Bpp: 1
 * Opts: --bpp 1 --size 8 --no-compress --stride 1 --align 1 --font Quinquefive-8OV1g.ttf --range 32-127 --format lvgl -o quinquefive_8.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include <lvgl.h>
#endif


#ifndef QUINQUEFIVE_8
#define QUINQUEFIVE_8 1
#endif

#if QUINQUEFIVE_8

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap_8[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xc3, 0xc0,

    /* U+0022 "\"" */
    0xde, 0xf6,

    /* U+0023 "#" */
    0x6c, 0x6c, 0xff, 0xff, 0x6c, 0xff, 0xff, 0x6c,
    0x6c,

    /* U+0024 "$" */
    0x3f, 0x3f, 0xd8, 0xd8, 0x3c, 0x1b, 0x1b, 0xfc,
    0xfc,

    /* U+0025 "%" */
    0xc1, 0xc1, 0x6, 0x6, 0x18, 0x20, 0x20, 0xc1,
    0xc1,

    /* U+0026 "&" */
    0x38, 0x38, 0xc0, 0xc0, 0x39, 0xc6, 0xc6, 0x39,
    0x39,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x39, 0xf1, 0x8c, 0x63, 0x7, 0x38,

    /* U+0029 ")" */
    0xe7, 0x6, 0x31, 0x8c, 0x7c, 0xe0,

    /* U+002A "*" */
    0xcf, 0x32, 0x8, 0xcf, 0x30,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18,
    0x18,

    /* U+002C "," */
    0x27, 0x60,

    /* U+002D "-" */
    0xff, 0xff,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x1, 0x1, 0x6, 0x6, 0x18, 0x20, 0x20, 0xc0,
    0xc0,

    /* U+0030 "0" */
    0xff, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff,
    0xff,

    /* U+0031 "1" */
    0x38, 0x38, 0xd8, 0xd8, 0x18, 0x18, 0x18, 0xff,
    0xff,

    /* U+0032 "2" */
    0xfc, 0xfc, 0x3, 0x3, 0x1c, 0x60, 0x60, 0xff,
    0xff,

    /* U+0033 "3" */
    0xff, 0xff, 0xc0, 0x60, 0x33, 0xf9, 0xfc, 0x7,
    0xff, 0xff, 0x80,

    /* U+0034 "4" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0x3, 0x3,
    0x3,

    /* U+0035 "5" */
    0xff, 0xff, 0xc0, 0xc0, 0xff, 0xff, 0x3, 0xff,
    0xff,

    /* U+0036 "6" */
    0xff, 0xff, 0xc0, 0xc0, 0xff, 0xff, 0xc3, 0xff,
    0xff,

    /* U+0037 "7" */
    0xff, 0xff, 0xc0, 0x60, 0x30, 0x60, 0x40, 0x20,
    0x60, 0x30, 0x0,

    /* U+0038 "8" */
    0xff, 0xff, 0xc3, 0xc3, 0xff, 0xff, 0xc3, 0xff,
    0xff,

    /* U+0039 "9" */
    0xff, 0xff, 0xc3, 0xc3, 0xff, 0xff, 0x3, 0xff,
    0xff,

    /* U+003A ":" */
    0xf3, 0xc0,

    /* U+003B ";" */
    0x24, 0x13, 0xb0,

    /* U+003C "<" */
    0x7, 0x7, 0x38, 0x38, 0xc0, 0x38, 0x38, 0x7,
    0x7,

    /* U+003D "=" */
    0xff, 0xff, 0x0, 0xff, 0xff,

    /* U+003E ">" */
    0xe0, 0xe0, 0x1c, 0x1c, 0x3, 0x1c, 0x1c, 0xe0,
    0xe0,

    /* U+003F "?" */
    0xff, 0xc2, 0x13, 0x18, 0x6, 0x30,

    /* U+0040 "@" */
    0x3e, 0x3e, 0xc1, 0xc1, 0xd9, 0xc7, 0xc7, 0x20,
    0x20,

    /* U+0041 "A" */
    0x3c, 0x3c, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xc3,
    0xc3,

    /* U+0042 "B" */
    0xfc, 0xfc, 0xc3, 0xc3, 0xfc, 0xc3, 0xc3, 0xfc,
    0xfc,

    /* U+0043 "C" */
    0x3f, 0x3f, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x3f,
    0x3f,

    /* U+0044 "D" */
    0xfc, 0xfc, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xfc,
    0xfc,

    /* U+0045 "E" */
    0xff, 0xff, 0xc0, 0xc0, 0xfe, 0xfe, 0xc0, 0xff,
    0xff,

    /* U+0046 "F" */
    0xff, 0xff, 0xc0, 0xc0, 0xfe, 0xfe, 0xc0, 0xc0,
    0xc0,

    /* U+0047 "G" */
    0x3f, 0x3f, 0xc0, 0xc0, 0xdf, 0xdf, 0xc3, 0x3f,
    0x3f,

    /* U+0048 "H" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xc3, 0xc3,
    0xc3,

    /* U+0049 "I" */
    0xff, 0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0xff,
    0xff,

    /* U+004A "J" */
    0x3, 0x3, 0x3, 0x3, 0xc3, 0xc3, 0xc3, 0x3c,
    0x3c,

    /* U+004B "K" */
    0xc1, 0xc1, 0xc6, 0xc6, 0xf8, 0xc6, 0xc6, 0xc1,
    0xc1,

    /* U+004C "L" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xff,
    0xff,

    /* U+004D "M" */
    0xc3, 0xc3, 0xe7, 0xe7, 0xdb, 0xdb, 0xdb, 0xc3,
    0xc3,

    /* U+004E "N" */
    0xc3, 0xc3, 0xe3, 0xe3, 0xdb, 0xc7, 0xc7, 0xc3,
    0xc3,

    /* U+004F "O" */
    0x3c, 0x3c, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x3c,
    0x3c,

    /* U+0050 "P" */
    0xfc, 0xfc, 0xc3, 0xc3, 0xfc, 0xfc, 0xc0, 0xc0,
    0xc0,

    /* U+0051 "Q" */
    0x3e, 0x3e, 0xc1, 0xc1, 0xc1, 0xc6, 0xc6, 0x39,
    0x39,

    /* U+0052 "R" */
    0xfe, 0xfe, 0xc1, 0xc1, 0xfe, 0xfe, 0xc6, 0xc1,
    0xc1,

    /* U+0053 "S" */
    0x3f, 0x3f, 0xc0, 0xc0, 0x3c, 0x3, 0x3, 0xfc,
    0xfc,

    /* U+0054 "T" */
    0xff, 0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18,

    /* U+0055 "U" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x3c,
    0x3c,

    /* U+0056 "V" */
    0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0x26, 0x26, 0x18,
    0x18,

    /* U+0057 "W" */
    0xc3, 0xc3, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0x3c,
    0x3c,

    /* U+0058 "X" */
    0xc1, 0xc1, 0x26, 0x26, 0x18, 0x26, 0x26, 0xc1,
    0xc1,

    /* U+0059 "Y" */
    0xc3, 0xc3, 0xc3, 0x0, 0x3c, 0x3c, 0x18, 0x18,
    0x18,

    /* U+005A "Z" */
    0xff, 0xff, 0x6, 0x6, 0x18, 0x60, 0x60, 0xff,
    0xff,

    /* U+005B "[" */
    0xff, 0xf1, 0x8c, 0x63, 0x1f, 0xf8,

    /* U+005C "\\" */
    0xc0, 0xc0, 0x20, 0x20, 0x18, 0x6, 0x6, 0x1,
    0x1,

    /* U+005D "]" */
    0xff, 0xc6, 0x31, 0x8c, 0x7f, 0xf8,

    /* U+005E "^" */
    0x20, 0x8c, 0xf3,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0xd8, 0x90,

    /* U+0061 "a" */
    0x3c, 0x3c, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xc3,
    0xc3,

    /* U+0062 "b" */
    0xfc, 0xfc, 0xc3, 0xc3, 0xfc, 0xc3, 0xc3, 0xfc,
    0xfc,

    /* U+0063 "c" */
    0x3f, 0x3f, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x3f,
    0x3f,

    /* U+0064 "d" */
    0xfc, 0xfc, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xfc,
    0xfc,

    /* U+0065 "e" */
    0xff, 0xff, 0xc0, 0xc0, 0xfe, 0xfe, 0xc0, 0xff,
    0xff,

    /* U+0066 "f" */
    0xff, 0xff, 0xc0, 0xc0, 0xfe, 0xfe, 0xc0, 0xc0,
    0xc0,

    /* U+0067 "g" */
    0x3f, 0x3f, 0xc0, 0xc0, 0xdf, 0xdf, 0xc3, 0x3f,
    0x3f,

    /* U+0068 "h" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xc3, 0xc3,
    0xc3,

    /* U+0069 "i" */
    0xff, 0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0xff,
    0xff,

    /* U+006A "j" */
    0x3, 0x3, 0x3, 0x3, 0xc3, 0xc3, 0xc3, 0x3c,
    0x3c,

    /* U+006B "k" */
    0xc1, 0xc1, 0xc6, 0xc6, 0xf8, 0xc6, 0xc6, 0xc1,
    0xc1,

    /* U+006C "l" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xff,
    0xff,

    /* U+006D "m" */
    0xc3, 0xc3, 0xe7, 0xe7, 0xdb, 0xdb, 0xdb, 0xc3,
    0xc3,

    /* U+006E "n" */
    0xc3, 0xc3, 0xe3, 0xe3, 0xdb, 0xc7, 0xc7, 0xc3,
    0xc3,

    /* U+006F "o" */
    0x3c, 0x3c, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x3c,
    0x3c,

    /* U+0070 "p" */
    0xfc, 0xfc, 0xc3, 0xc3, 0xfc, 0xfc, 0xc0, 0xc0,
    0xc0,

    /* U+0071 "q" */
    0x3e, 0x3e, 0xc1, 0xc1, 0xc1, 0xc6, 0xc6, 0x39,
    0x39,

    /* U+0072 "r" */
    0xfe, 0xfe, 0xc1, 0xc1, 0xfe, 0xfe, 0xc6, 0xc1,
    0xc1,

    /* U+0073 "s" */
    0x3f, 0x3f, 0xc0, 0xc0, 0x3c, 0x3, 0x3, 0xfc,
    0xfc,

    /* U+0074 "t" */
    0xff, 0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18,

    /* U+0075 "u" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x3c,
    0x3c,

    /* U+0076 "v" */
    0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0x26, 0x26, 0x18,
    0x18,

    /* U+0077 "w" */
    0xc3, 0xc3, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0x3c,
    0x3c,

    /* U+0078 "x" */
    0xc1, 0xc1, 0x26, 0x26, 0x18, 0x26, 0x26, 0xc1,
    0xc1,

    /* U+0079 "y" */
    0xc3, 0xc3, 0xc3, 0x0, 0x3c, 0x3c, 0x18, 0x18,
    0x18,

    /* U+007A "z" */
    0xff, 0xff, 0x6, 0x6, 0x18, 0x60, 0x60, 0xff,
    0xff,

    /* U+007B "{" */
    0x3e, 0x7c, 0xc1, 0x8f, 0x1e, 0xc, 0x1f, 0x3e,

    /* U+007C "|" */
    0xff, 0xff, 0xc0,

    /* U+007D "}" */
    0xfb, 0xe1, 0x86, 0x1c, 0x71, 0xbe, 0xf8,

    /* U+007E "~" */
    0x20, 0xd9, 0xd9, 0x6, 0x6
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc_8[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 154, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 154, .box_w = 2, .box_h = 9, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 4, .adv_w = 154, .box_w = 5, .box_h = 3, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 6, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 15, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 24, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 33, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 42, .adv_w = 154, .box_w = 2, .box_h = 3, .ofs_x = 3, .ofs_y = 4},
    {.bitmap_index = 43, .adv_w = 154, .box_w = 5, .box_h = 9, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 49, .adv_w = 154, .box_w = 5, .box_h = 9, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 55, .adv_w = 154, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 60, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 69, .adv_w = 154, .box_w = 3, .box_h = 4, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 71, .adv_w = 154, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 73, .adv_w = 154, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 74, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 83, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 92, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 101, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 110, .adv_w = 154, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 121, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 130, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 139, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 148, .adv_w = 154, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 159, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 168, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 177, .adv_w = 154, .box_w = 2, .box_h = 5, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 154, .box_w = 3, .box_h = 7, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 182, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 191, .adv_w = 154, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 205, .adv_w = 154, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 211, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 220, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 229, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 238, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 247, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 256, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 265, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 274, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 283, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 292, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 301, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 310, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 319, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 328, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 337, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 346, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 355, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 364, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 373, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 382, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 391, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 400, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 409, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 418, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 427, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 436, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 445, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 454, .adv_w = 154, .box_w = 5, .box_h = 9, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 460, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 469, .adv_w = 154, .box_w = 5, .box_h = 9, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 475, .adv_w = 154, .box_w = 6, .box_h = 4, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 478, .adv_w = 154, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 480, .adv_w = 154, .box_w = 3, .box_h = 4, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 482, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 491, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 500, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 509, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 518, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 527, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 536, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 545, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 554, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 563, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 572, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 581, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 590, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 599, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 608, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 617, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 626, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 635, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 644, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 653, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 662, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 671, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 680, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 689, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 698, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 707, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 716, .adv_w = 154, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 724, .adv_w = 154, .box_w = 2, .box_h = 9, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 727, .adv_w = 154, .box_w = 6, .box_h = 9, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 734, .adv_w = 154, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps_8[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc_8 = {
#else
static lv_font_fmt_txt_dsc_t font_dsc_8 = {
#endif
    .glyph_bitmap = glyph_bitmap_8,
    .glyph_dsc = glyph_dsc_8,
    .cmaps = cmaps_8,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif

};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t quinquefive_8 = {
#else
lv_font_t quinquefive_8 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 10,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc_8,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if QUINQUEFIVE_8*/
