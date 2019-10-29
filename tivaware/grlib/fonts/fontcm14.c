//*****************************************************************************
//
// fontcm14.c - Font definition for the 14pt Cm font.
//
// Copyright (c) 2011-2017 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.1.4.178 of the Tiva Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Characters: 32 to 126 inclusive
//     Style: cm
//     Size: 14 point
//     Bold: no
//     Italic: no
//     Memory usage: 1828 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 14 point Cm font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cm14Data[1626] =
{
      5,   6,   0,  10,  64,  12,   2,   1,  17,  17,  17,  17,
     17,  17,  17,  81, 112,  14,   5,  82,  17,  33,  17,  33,
     17,  17,  33,  17, 240, 240, 224,  27,  10, 225,  33,  81,
     33,  97,  33,  97,  33,  57,  49,  33,  97,  33,  73,  49,
     33,  97,  17,  97,  33,  97,  33,  97,  33,  80,  28,   7,
     35,  49,  17,  17,  17,  33,  17,  17,  33,  17,  17,  33,
     67,  99,  65,  17,  18,  17,  17,  17,  33,  17,  36,  81,
    240,  32,  35,  12,  19,  65,  49,  38,  49,  49,  33,  65,
     49,  17,  81,  34,  17,  99,  17,  19,  99,  34,  81,  17,
     49,  65,  33,  49,  50,  33,  49,  49,  50,  18, 131, 240,
    176,  28,  11,  50, 129,  33, 113,  33, 113,  33, 113,  17,
    130,  51,  65,  65,  50,  17,  33,  49,  66,  66,  65,  33,
     37,  18, 240, 240,  80,   9,   3,  50,  33,  33,  17,  33,
    240, 176,  15,   4,  81,  49,  33,  49,  49,  49,  49,  49,
     49,  49,  65,  49,  65,  15,   4,  65,  65,  49,  65,  49,
     49,  49,  49,  49,  33,  49,  33, 112,  15,   6,  33,  49,
     17,  17,  35,  51,  33,  17,  17,  49,   0,   6,  48,  15,
     10, 240, 145, 145, 145, 145, 145,  89,  81, 145, 145, 145,
    240, 160,   8,   3, 240, 242,  33,  33,  17,  32,   7,   4,
    240, 240,  35, 240,  96,   5,   2, 240,  81, 112,  17,   6,
     65,  81,  65,  81,  81,  65,  81,  81,  65,  81,  81,  65,
     81,  81,  80,  20,   7, 244,  49,  33,  33,  65,  17,  65,
     17,  65,  17,  65,  17,  65,  33,  34,  36, 240, 128,  13,
      6, 195,  81,  81,  81,  81,  81,  81,  81,  53, 240,  64,
     15,   7, 244,  33,  50,  17,  65,  97,  81,  81,  66,  65,
    102, 240, 112,  16,   6, 211,  33,  49,  81,  35,  82,  81,
     17,  49,  17,  49,  35, 240,  80,  17,   7, 240,  49,  82,
     65,  17,  49,  33,  33,  49,  38,  81,  97,  83, 240, 112,
     17,   7, 244,  49,  97,  18,  50,  17, 113,  97,  18,  49,
     17,  65,  36, 240, 128,  21,   7, 240,  20,  33,  49,  17,
     19,  34,  34,  17,  65,  17,  65,  17,  65,  33,  34,  51,
    240, 128,  14,   7, 245,  17,  49,  81,  97,  81,  97,  97,
     97,  97, 240, 160,  19,   7, 244,  33,  65,  17,  65,  33,
     33,  51,  49,  50,  17,  65,  18,  49,  36, 240, 128,  19,
      7, 244,  33,  49,  33,  65,  17,  65,  17,  50,  35,  17,
     97,  17,  49,  36, 240, 144,   5,   2, 161, 145, 112,   7,
      2, 161, 145,  17,  17,  48,  11,   2, 129,  49,  17,  17,
     17,  17,  17,  17,  17,  10,  10,   0,   6,  41, 240, 105,
      0,   6,  48,  15,   5, 240, 113, 145,  65,  65,  49,  49,
     65,  33,  17,  33,  34,  32,  16,   5,  18,  33,  33,  17,
     33,  17,  33,  65,  49,  65,  65, 225, 240,  32,  32,  10,
     36,  82,  49,  68,  33,  33,  17,  33,  33,  18,  65,  17,
     18,  65,  17,  18,  65,  17,  17,  17,  34,  17,  36,  18,
     50,  81,  54, 240, 240,  32,  24,  10,  65, 130, 129,  17,
    113,  17,  97,  33,  97,  49,  85,  65,  65,  65,  81,  49,
     81,  35,  51, 240, 240,  16,  21,   8, 134,  49,  65,  33,
     65,  33,  49,  53,  49,  50,  33,  65,  33,  65,  33,  50,
     22, 240, 176,  22,   9, 179,  33,  34,  33,  17,  33,  66,
     17,  97,  17, 129, 129,  97,  33,  81,  34,  49,  68, 240,
    240,  22,   9, 150,  65,  65,  49,  65,  49,  81,  33,  81,
     33,  81,  33,  81,  33,  81,  33,  65,  38, 240, 240,  21,
     10, 168,  49,  81,  49, 145,  49,  85,  81,  49,  81,  97,
     33,  97,  33,  81,  40, 240, 240,  32,  18,   8, 135,  33,
     65,  33, 113,  33,  68,  65,  33,  65,  33,  65, 113,  99,
    240, 224,  21,  10, 196,  82,  50,  33,  97,  33, 145, 145,
     68,  17,  97,  49,  81,  50,  65,  84, 240, 240,  48,  23,
      9, 147,  35,  33,  65,  49,  65,  49,  65,  54,  49,  65,
     49,  65,  49,  65,  49,  65,  35,  35, 240, 208,  13,   4,
     67,  33,  49,  49,  49,  49,  49,  49,  49,  35, 208,  15,
      6, 131,  65,  81,  81,  81,  81,  81,  81,  33,  33,  35,
    240,  96,  25,  10, 163,  51,  33,  65,  65,  49,  81,  33,
     97,  18,  98,  17,  97,  49,  81,  65,  65,  66,  35,  51,
    240, 240,  16,  17,   8, 131,  97, 113, 113, 113, 113, 113,
     65,  33,  65,  33,  65,  22, 240, 176,  34,  11, 179,  82,
     34,  81,  50,  66,  49,  17,  33,  17,  49,  17,  33,  17,
     49,  17,  33,  17,  49,  34,  33,  49,  34,  33,  49,  34,
     33,  35,  67, 240, 240,  64,  29,  10, 162,  67,  34,  65,
     50,  65,  49,  17,  49,  49,  18,  33,  49,  33,  33,  49,
     49,  17,  49,  51,  49,  66,  34,  81, 240, 240,  32,  22,
      9, 180,  65,  65,  49,  65,  33,  97,  17,  97,  17,  97,
     17,  97,  33,  65,  50,  34,  68, 240, 240,  17,   8, 134,
     49,  65,  33,  65,  33,  65,  37,  49, 113, 113, 113,  99,
    240, 224,  26,   9, 195,  66,  49,  49,  81,  17,  97,  17,
     97,  17,  97,  17,  97,  33,  18,  17,  51,  17,  99, 129,
     17,  97,  17, 114,  24,  10, 166,  81,  65,  65,  65,  65,
     65,  69,  81,  49,  81,  49,  81,  49,  81,  65,  17,  19,
     51, 240, 240,  16,  23,   8, 148,  17,  18,  33,  17,  17,
     66,  17,  81,  35, 130,  33,  81,  17,  81,  18,  50,  17,
     20, 240, 176,  19,  10, 169,  17,  49,  49,  17,  49,  49,
     81, 145, 145, 145, 145, 145, 117, 240, 240,  48,  24,  10,
    163,  51,  33,  81,  49,  81,  49,  81,  49,  81,  49,  81,
     49,  81,  49,  81,  65,  49,  99, 240, 240,  64,  23,  10,
    163,  66,  33,  81,  49,  81,  65,  49,  81,  49,  97,  17,
    113,  17, 113,  17, 129, 145, 240, 240,  80,  32,  14, 227,
     35,  50,  33,  65,  65,  49,  65,  65,  65,  33,  17,  33,
     81,  33,  17,  33,  81,  33,  17,  33,  98,  50, 114,  50,
    114,  50,   0,   7,  64,  23,  10, 163,  50,  49,  65,  81,
     33, 113,  17, 129, 145, 114,  17,  97,  49,  65,  81,  34,
     67, 240, 240,  16,  20,  10, 163,  66,  33,  81,  65,  49,
     82,  33,  97,  17, 129, 145, 145, 145, 131, 240, 240,  64,
     17,   8, 135,  17,  65, 113,  97,  97,  97, 113,  97,  65,
     17,  81,  23, 240, 160,  16,   3,   2,  17,  33,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  33,  34,  13,   6, 113,
     33,  17,  33,  33,  33,  34,  18,   0,   6, 112,  16,   3,
      2,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
     33,  18,   8,   4,  81,  33,  17, 240, 240, 240,   5,   2,
     65, 240, 128,   8,   3,  65,  17,  33,  34, 240, 208,  16,
      8, 240, 240, 179,  66,  33,  68,  50,  33,  49,  49,  17,
     38, 240, 160,  19,   8, 130, 113, 113, 113, 113,  19,  50,
     34,  33,  65,  33,  65,  33,  50,  37, 240, 176,  14,   6,
    240, 240,  19,  34,  33,  17,  81,  82,  33,  35, 240,  80,
     19,   8, 240,  97, 113, 113,  51,  17,  34,  34,  33,  65,
     33,  65,  34,  49,  54, 240, 160,  14,   6, 240, 240,  19,
     33,  49,  21,  17,  81,  49,  35, 240,  80,  15,   5, 113,
     49,  17,  33,  65,  51,  49,  65,  65,  65,  51, 240,  32,
     18,   7, 240, 240, 101,  33,  33,  49,  33,  51,  65, 115,
     34,  49,  17,  65,  36,  32,  20,   8, 130, 113, 113, 113,
    113,  19,  50,  33,  49,  49,  49,  49,  49,  49,  35,  19,
    240, 160,  10,   4, 145, 177,  49,  49,  49,  49,  35, 208,
     14,   4, 161, 177,  49,  49,  49,  49,  49,  49,  17,  17,
     18,  32,  19,   7, 114,  97,  97,  97,  97,  33,  49,  17,
     67,  65,  33,  49,  33,  35,  18, 240, 112,  13,   4,  66,
     49,  49,  49,  49,  49,  49,  49,  49,  35, 208,  24,  11,
      0,   7,   1,  18,  19,  50,  33,  33,  49,  49,  33,  49,
     49,  33,  49,  49,  33,  35,  22, 240, 240,  64,  18,   8,
    240, 240, 177,  19,  50,  33,  49,  49,  49,  49,  49,  49,
     35,  19, 240, 160,  16,   7, 240, 240, 100,  34,  34,  17,
     65,  17,  65,  18,  34,  36, 240, 128,  19,   8, 240, 240,
    162,  19,  50,  34,  33,  65,  33,  65,  33,  50,  37,  49,
    113,  99,  80,  17,   8, 240, 240, 179,  66,  34,  33,  65,
     33,  65,  34,  49,  53, 113, 113,  99,  13,   6, 240, 240,
     17,  18,  34,  65,  81,  81,  67, 240,  96,  16,   6, 240,
    240,  18,  17,  17,  34,  18,  65,  19,  17,  49,  20, 240,
     80,  15,   6, 240,  65,  81,  69,  33,  81,  81,  33,  33,
     33,  50, 240,  80,  17,   8, 240, 240, 162,  34,  49,  49,
     49,  49,  49,  49,  49,  49,  54, 240, 160,  15,   7, 240,
    240,  82,  34,  33,  33,  49,  33,  66,  82, 240, 240,  16,
     23,  10,   0,   6,  34,  19,  18,  33,  33,  33,  49,  33,
     33,  49,  17,  18,  81,  34,  81,  49, 240, 240,  48,  16,
      8, 240, 240, 163,  34,  33,  33,  82,  98,  81,  34,  34,
     50, 240, 160,  19,   7, 240, 240,  82,  49,  33,  33,  49,
     33,  65,  17,  66,  97,  81,  65,  17,  66,  80,  12,   6,
    240, 245,  65,  65,  65,  65,  49,  21, 240,  64,   8,   7,
    240, 240, 198,   0,   6,  32,   8,  14,   0,  10,  77,   0,
     12,  48,  11,   5,  97,  17,  17,  17,  33,  17,   0,   6,
     64,   5,   5, 164,   0,   7,
};

//*****************************************************************************
//
// The font definition for the 14 point Cm font.
//
//*****************************************************************************
const tFont g_sFontCm14 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    12,

    //
    // The height of the font.
    //
    14,

    //
    // The baseline of the font.
    //
    11,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   17,   31,   58,   86,  121,  149,
         158,  173,  188,  203,  218,  226,  233,  238,
         255,  275,  288,  303,  319,  336,  353,  374,
         388,  407,  426,  431,  438,  449,  459,  474,
         490,  522,  546,  567,  589,  611,  632,  650,
         671,  694,  707,  722,  747,  764,  798,  827,
         849,  866,  892,  916,  939,  958,  982, 1005,
        1037, 1060, 1080, 1097, 1113, 1126, 1142, 1150,
        1155, 1163, 1179, 1198, 1212, 1231, 1245, 1260,
        1278, 1298, 1308, 1322, 1341, 1354, 1378, 1396,
        1412, 1431, 1448, 1461, 1477, 1492, 1509, 1524,
        1547, 1563, 1582, 1594, 1602, 1610, 1621,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cm14Data
};
