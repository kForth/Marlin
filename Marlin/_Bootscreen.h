/*
 * _Bootscreen.h
 *
 *  Created on: 2017年7月11日
 *      Author: CreatBot-SW
 */

#ifndef MARLIN__BOOTSCREEN_H_
#define MARLIN__BOOTSCREEN_H_


#define BOOT_BMPWIDTH      128
#define BOOT_BMPHEIGHT      64
#define BOOT_BMPBYTEWIDTH   16
#define BOOT_BMPBYTES     1024 // BOOT_BMPWIDTH * BOOT_BMPHEIGHT / 8

#if LANGUAGE_NUM == 1
  const unsigned char boot_start_bmp[BOOT_BMPBYTES] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x02, 0xE8, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x02, 0xA8, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x02, 0xC8, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x01, 0xB0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xE0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF0, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xF0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xF8, 0x00, 0x00,
    0x00, 0x07, 0xFE, 0x07, 0x80, 0x00, 0x00, 0x00, 0x1C, 0x0F, 0xC0, 0x3F, 0xFF, 0x81, 0x80, 0x00,
    0x00, 0x0F, 0xFE, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x0F, 0xFC, 0x0F, 0xF8, 0x03, 0x80, 0x00,
    0x00, 0x1F, 0xFE, 0x30, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x0F, 0xFF, 0x03, 0xC0, 0x03, 0x80, 0x00,
    0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x0E, 0x03, 0xC0, 0x00, 0x03, 0x80, 0x00,
    0x00, 0x3C, 0x00, 0x1F, 0xC0, 0xFF, 0x1F, 0xF0, 0xFF, 0x8E, 0x01, 0xE0, 0x3C, 0x1F, 0xF0, 0x00,
    0x00, 0x78, 0x00, 0x3F, 0xE1, 0xFF, 0x1F, 0xFC, 0xFF, 0x8E, 0x01, 0xE1, 0xFF, 0x1F, 0xF0, 0x00,
    0x00, 0x78, 0x00, 0x3F, 0xF3, 0xFF, 0x1F, 0xFE, 0xFF, 0x8E, 0x03, 0xC3, 0xFF, 0x9F, 0xF0, 0x00,
    0x00, 0x78, 0x00, 0x38, 0xF3, 0x80, 0x00, 0x0E, 0x1C, 0x0F, 0xFF, 0xC3, 0x83, 0x83, 0x80, 0x00,
    0x00, 0x78, 0x00, 0x38, 0x77, 0x80, 0x00, 0x0E, 0x1C, 0x0F, 0xFF, 0x07, 0x01, 0xC3, 0x80, 0x00,
    0x00, 0x78, 0x00, 0x38, 0x77, 0xFF, 0x0F, 0xFE, 0x1C, 0x0F, 0xFF, 0xC7, 0x01, 0xC3, 0x80, 0x00,
    0x00, 0x78, 0x00, 0x38, 0x07, 0xFF, 0x1F, 0xFE, 0x1C, 0x0E, 0x03, 0xE7, 0x01, 0xC3, 0x80, 0x00,
    0x00, 0x78, 0x00, 0x38, 0x07, 0xFF, 0x3F, 0xFE, 0x1C, 0x0E, 0x01, 0xE7, 0x01, 0xC3, 0x80, 0x00,
    0x00, 0x3C, 0x00, 0x38, 0x07, 0x80, 0x38, 0x0E, 0x1C, 0x0E, 0x01, 0xE7, 0x01, 0xC3, 0x80, 0x00,
    0x00, 0x3E, 0x00, 0x38, 0x03, 0x80, 0x38, 0x0E, 0x1C, 0x0E, 0x03, 0xE3, 0x83, 0x83, 0x80, 0x00,
    0x00, 0x1F, 0xFE, 0x38, 0x03, 0xFF, 0x3F, 0xFE, 0x1F, 0x8F, 0xFF, 0xE3, 0xFF, 0x83, 0xF0, 0x00,
    0x00, 0x1F, 0xFE, 0x38, 0x01, 0xFF, 0x1F, 0xFE, 0x0F, 0x8F, 0xFF, 0xC1, 0xFF, 0x01, 0xF0, 0x00,
    0x00, 0x07, 0xFE, 0x38, 0x00, 0xFF, 0x0F, 0xFE, 0x07, 0x8F, 0xFF, 0x80, 0x7C, 0x00, 0xF0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x40, 0x08, 0x10, 0x80, 0x00, 0x10, 0x00, 0xC0, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x72, 0x47, 0x49, 0x10, 0x80, 0x00, 0x13, 0xF7, 0x1F, 0x13, 0xC0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x11, 0x42, 0x49, 0x53, 0xE3, 0x9E, 0x10, 0x44, 0x11, 0x12, 0x40, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x10, 0x42, 0x7F, 0x78, 0x84, 0x49, 0x7C, 0x44, 0x11, 0x7A, 0x40, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x7E, 0x42, 0x00, 0x57, 0xF0, 0x49, 0x10, 0x47, 0xD1, 0x12, 0x40, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x11, 0x47, 0x7F, 0x10, 0x41, 0x89, 0x10, 0x44, 0x11, 0x3A, 0x40, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x38, 0x42, 0x08, 0x1B, 0xF0, 0x49, 0x1C, 0x44, 0x11, 0x36, 0x40, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x34, 0x72, 0x7F, 0x70, 0x40, 0x49, 0x70, 0x44, 0x51, 0x52, 0x40, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x53, 0xC2, 0x55, 0x12, 0x44, 0x49, 0x10, 0x45, 0x91, 0x12, 0x40, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x10, 0x43, 0x55, 0x11, 0x43, 0x9E, 0x10, 0x46, 0x17, 0x12, 0x50, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x10, 0x46, 0x55, 0x10, 0x40, 0x00, 0x10, 0x40, 0x10, 0x14, 0x50, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x10, 0x40, 0x43, 0x11, 0xC0, 0x00, 0x31, 0xC0, 0x10, 0x18, 0x30, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  };
#else	// LANGUAGE_NUM
  const unsigned char boot_start_bmp[BOOT_BMPBYTES] PROGMEM = {
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x10,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xF0,0x00,0x00,0x00,0x02,0xE8,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x02,0xA8,0x00,
    0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x02,0xC8,0x00,
    0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x01,0xB0,0x00,
    0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xE0,0x00,
    0x00,0x00,0x00,0x00,0x03,0xFF,0xF0,0x00,0x01,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x0F,0xFC,0x00,0x00,0x00,0x07,0xFF,0xFF,0xFC,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x7F,0xFF,0xFF,0x80,0x00,0x00,
    0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0xF0,0x00,0x00,
    0x00,0x00,0x00,0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xF8,0x00,0x00,
    0x00,0x07,0xFE,0x07,0x80,0x00,0x00,0x00,0x1C,0x0F,0xC0,0x3F,0xFF,0x81,0x80,0x00,
    0x00,0x0F,0xFE,0x0E,0x00,0x00,0x00,0x00,0x1C,0x0F,0xFC,0x0F,0xF8,0x03,0x80,0x00,
    0x00,0x1F,0xFE,0x30,0x00,0x00,0x00,0x00,0x1C,0x0F,0xFF,0x03,0xC0,0x03,0x80,0x00,
    0x00,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x0E,0x03,0xC0,0x00,0x03,0x80,0x00,
    0x00,0x3C,0x00,0x1F,0xC0,0xFF,0x1F,0xF0,0xFF,0x8E,0x01,0xE0,0x3C,0x1F,0xF0,0x00,
    0x00,0x78,0x00,0x3F,0xE1,0xFF,0x1F,0xFC,0xFF,0x8E,0x01,0xE1,0xFF,0x1F,0xF0,0x00,
    0x00,0x78,0x00,0x3F,0xF3,0xFF,0x1F,0xFE,0xFF,0x8E,0x03,0xC3,0xFF,0x9F,0xF0,0x00,
    0x00,0x78,0x00,0x38,0xF3,0x80,0x00,0x0E,0x1C,0x0F,0xFF,0xC3,0x83,0x83,0x80,0x00,
    0x00,0x78,0x00,0x38,0x77,0x80,0x00,0x0E,0x1C,0x0F,0xFF,0x07,0x01,0xC3,0x80,0x00,
    0x00,0x78,0x00,0x38,0x77,0xFF,0x0F,0xFE,0x1C,0x0F,0xFF,0xC7,0x01,0xC3,0x80,0x00,
    0x00,0x78,0x00,0x38,0x07,0xFF,0x1F,0xFE,0x1C,0x0E,0x03,0xE7,0x01,0xC3,0x80,0x00,
    0x00,0x78,0x00,0x38,0x07,0xFF,0x3F,0xFE,0x1C,0x0E,0x01,0xE7,0x01,0xC3,0x80,0x00,
    0x00,0x3C,0x00,0x38,0x07,0x80,0x38,0x0E,0x1C,0x0E,0x01,0xE7,0x01,0xC3,0x80,0x00,
    0x00,0x3E,0x00,0x38,0x03,0x80,0x38,0x0E,0x1C,0x0E,0x03,0xE3,0x83,0x83,0x80,0x00,
    0x00,0x1F,0xFE,0x38,0x03,0xFF,0x3F,0xFE,0x1F,0x8F,0xFF,0xE3,0xFF,0x83,0xF0,0x00,
    0x00,0x1F,0xFE,0x38,0x01,0xFF,0x1F,0xFE,0x0F,0x8F,0xFF,0xC1,0xFF,0x01,0xF0,0x00,
    0x00,0x07,0xFE,0x38,0x00,0xFF,0x0F,0xFE,0x07,0x8F,0xFF,0x80,0x7C,0x00,0xF0,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x01,0xE3,0xC0,0x03,0xE0,0x00,0xC0,0x01,0x80,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x03,0x33,0x60,0x03,0x30,0x00,0x00,0x01,0x80,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x03,0x33,0x30,0x03,0x33,0x33,0xC3,0xE3,0xF1,0xE3,0x30,0x00,
    0x00,0x00,0x00,0x00,0x00,0x33,0x30,0x03,0x33,0x70,0xC3,0x31,0x83,0x33,0x70,0x00,
    0x00,0x00,0x00,0x00,0x00,0xE3,0x30,0x03,0xE3,0x80,0xC3,0x31,0x83,0x33,0x80,0x00,
    0x00,0x00,0x00,0x00,0x00,0x33,0x30,0x03,0x03,0x00,0xC3,0x31,0x83,0xF3,0x00,0x00,
    0x00,0x00,0x00,0x00,0x03,0x33,0x30,0x03,0x03,0x00,0xC3,0x31,0x83,0x03,0x00,0x00,
    0x00,0x00,0x00,0x00,0x03,0x33,0x60,0x03,0x03,0x00,0xC3,0x31,0x83,0x03,0x00,0x00,
    0x00,0x00,0x00,0x00,0x01,0xE3,0xC0,0x03,0x03,0x03,0xF3,0x30,0xF1,0xE3,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x18,0xC0,0x00,0x1E,0x18,0x00,0x0C,0x63,0x01,0x80,0xE0,0x00,
    0x00,0x00,0x00,0x00,0x18,0xC0,0x00,0x06,0x00,0x00,0x0C,0x63,0x01,0x80,0xE0,0x00,
    0x00,0x00,0x00,0x00,0x1D,0xC7,0x8C,0xC6,0x78,0x7C,0x0C,0x67,0x03,0x81,0x80,0x00,
    0x00,0x00,0x00,0x00,0x1F,0xC0,0xCD,0xC6,0x18,0x66,0x0C,0x63,0x01,0x83,0x00,0x00,
    0x00,0x00,0x00,0x00,0x1F,0xC0,0xCE,0x06,0x18,0x66,0x0E,0xE3,0x01,0x83,0xE0,0x00,
    0x00,0x00,0x00,0x00,0x1A,0xCF,0xCC,0x06,0x18,0x66,0x07,0xC3,0x01,0x83,0x10,0x00,
    0x00,0x00,0x00,0x00,0x18,0xCC,0xCC,0x06,0x18,0x66,0x03,0x83,0x01,0x83,0x10,0x00,
    0x00,0x00,0x00,0x00,0x18,0xCC,0xCC,0x06,0x18,0x66,0x03,0x83,0x01,0x83,0x10,0x00,
    0x00,0x00,0x00,0x00,0x18,0xC7,0xCC,0x06,0x7E,0x66,0x01,0x0F,0xD7,0xE9,0xE0,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
  };
#endif	// LANGUAGE_NUM

#endif /* MARLIN__BOOTSCREEN_H_ */