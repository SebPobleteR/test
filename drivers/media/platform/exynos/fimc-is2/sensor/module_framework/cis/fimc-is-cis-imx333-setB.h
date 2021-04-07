/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_CIS_IMX333_SET_B_H
#define FIMC_IS_CIS_IMX333_SET_B_H

#include "fimc-is-cis.h"
#include "fimc-is-cis-imx333.h"

const u32 sensor_imx333_setfile_B_Global[] = {
	0x0136,	0x1A,	0x01,
	0x0137,	0x00,	0x01,
	0x5E2A,	0x04,	0x01,
	0x5E2B,	0x01,	0x01,
	0x817C,	0xFF,	0x01,
	0x817D,	0x80,	0x01,
	0x9348,	0x96,	0x01,
	0x934B,	0x8C,	0x01,
	0x934C,	0x82,	0x01,
	0x9353,	0xAA,	0x01,
	0x9354,	0xAA,	0x01,
	0x9766,	0x01,	0x01,
	0x9767,	0xC2,	0x01,
	0x979F,	0xA5,	0x01,
	0xAD7E,	0x01,	0x01,
	0xAD7F,	0xC2,	0x01,
	0x9704,	0x03,	0x01,
	0x9705,	0xD8,	0x01,
	0x9706,	0x1B,	0x01,
	0x9707,	0xB0,	0x01,
	0x970E,	0x02,	0x01,
	0x970F,	0x58,	0x01,
	0xAD64,	0x03,	0x01,
	0xAD65,	0xD8,	0x01,
	0xAD66,	0x1B,	0x01,
	0xAD67,	0x80,	0x01,
	0xAD6E,	0x02,	0x01,
	0xAD6F,	0x58,	0x01,
	0x40B8,	0x02,	0x01,
	0x40B9,	0x01,	0x01,
	0x40BA,	0x03,	0x01,
	0x40BB,	0x00,	0x01,
};

/* EVT 2 */
/* Caustion: Mode 1: Use only with C3 */
/* 0: 8064 x 3024 @30 MIPI lane: 4, MIPI data rate(Mbps/lane): 2034.5, MIPI Mclk(Mhz): 26 */
/* 1: 8064 x 2268 @30 MIPI lane: 4, MIPI data rate(Mbps/lane): 2034.5, MIPI Mclk(Mhz): 26 */
/* 2: 6048 x 3024 @30 MIPI lane: 4, MIPI data rate(Mbps/lane): 2034.5, MIPI Mclk(Mhz): 26 */
/* 3: 8064 x 2268 @60 MIPI lane: 4, MIPI data rate(Mbps/lane): 2034.5, MIPI Mclk(Mhz): 26 */
/* 4: 2016 x 1134 @120 MIPI lane: 4, MIPI data rate(Mbps/lane): 1092, MIPI Mclk(Mhz): 26 */
/* 5: 2016 x 1134 @240 MIPI lane: 4, MIPI data rate(Mbps/lane): 1092, MIPI Mclk(Mhz): 26 */
/* 6: 1008 x 756 @120 MIPI lane: 4, MIPI data rate(Mbps/lane): 1800.5, MIPI Mclk(Mhz): 26 */
/* 7: 2016 x 1512 @30 MIPI lane: 4, MIPI data rate(Mbps/lane): 1092, MIPI Mclk(Mhz): 26 */
/* 8: 1504 x 1504 @30 MIPI lane: 4, MIPI data rate(Mbps/lane): 1092, MIPI Mclk(Mhz): 26 */
/* 9: 2016 x 1134 @30 MIPI lane: 4, MIPI data rate(Mbps/lane): 1800.5, MIPI Mclk(Mhz): 26 */

const u32 sensor_imx333_setfile_B_8064x3024_30fps[] = {
	0x9007,	0x83,	0x01,
};

const u32 sensor_imx333_setfile_B_8064x2268_30fps[] = {
	0x9007,	0x93,	0x01,
};

const u32 sensor_imx333_setfile_B_6048x3024_30fps[] = {
	0x9007,	0x00,	0x01,
	0x0112,	0x0A,	0x01,
	0x0113,	0x0A,	0x01,
	0x0114,	0x03,	0x01,
	0x0220,	0x61,	0x01,
	0x0221,	0x11,	0x01,
	0x0340,	0x0C,	0x01,
	0x0341,	0x80,	0x01,
	0x0342,	0x22,	0x01,
	0x0343,	0x00,	0x01,
	0x0381,	0x01,	0x01,
	0x0383,	0x01,	0x01,
	0x0385,	0x01,	0x01,
	0x0387,	0x01,	0x01,
	0x0900,	0x00,	0x01,
	0x0901,	0x11,	0x01,
	0x30F4,	0x02,	0x01,
	0x30F5,	0x1C,	0x01,
	0x30F6,	0x01,	0x01,
	0x30F7,	0x90,	0x01,
	0x31A0,	0x01,	0x01,
	0x31A5,	0x01,	0x01,
	0x31A6,	0x00,	0x01,
	0x560F,	0xE2,	0x01,
	0x58D0,	0x0E,	0x01,
	0x7928,	0x08,	0x01,
	0x7929,	0x08,	0x01,
	0x30DF,	0xFD,	0x01,
	0x30E1,	0xFB,	0x01,
	0x30E3,	0xFD,	0x01,
	0x30E4,	0x01,	0x01,
	0x30E6,	0x02,	0x01,
	0x30E7,	0x00,	0x01,
	0x30E8,	0x01,	0x01,
	0x8112,	0x00,	0x01,
	0x7441,	0x5A,	0x01,
	0xBC7B,	0x2C,	0x01,
	0x734A,	0x23,	0x01,
	0x734F,	0x64,	0x01,
	0x793F,	0x02,	0x01,
	0x7914,	0x02,	0x01,
	0x5856,	0x04,	0x01,
	0x0344,	0x01,	0x01,
	0x0345,	0xF8,	0x01,
	0x0346,	0x00,	0x01,
	0x0347,	0x00,	0x01,
	0x0348,	0x0D,	0x01,
	0x0349,	0xC7,	0x01,
	0x034A,	0x0B,	0x01,
	0x034B,	0xCF,	0x01,
	0x034C,	0x17,	0x01,
	0x034D,	0xA0,	0x01,
	0x034E,	0x0B,	0x01,
	0x034F,	0xD0,	0x01,
	0x0408,	0x00,	0x01,
	0x0409,	0x00,	0x01,
	0x040A,	0x00,	0x01,
	0x040B,	0x00,	0x01,
	0x040C,	0x0B,	0x01,
	0x040D,	0xD0,	0x01,
	0x040E,	0x0B,	0x01,
	0x040F,	0xD0,	0x01,
	0x0301,	0x03,	0x01,
	0x0303,	0x02,	0x01,
	0x0305,	0x04,	0x01,
	0x0306,	0x00,	0x01,
	0x0307,	0xC1,	0x01,
	0x0309,	0x0A,	0x01,
	0x030B,	0x01,	0x01,
	0x030D,	0x04,	0x01,
	0x030E,	0x01,	0x01,
	0x030F,	0x3C,	0x01,
	0x0310,	0x01,	0x01,
};

const u32 sensor_imx333_setfile_B_8064x1960_30fps[] = {
	0x9007,	0x00,	0x01,
	0x0112,	0x0A,	0x01,
	0x0113,	0x0A,	0x01,
	0x0114,	0x03,	0x01,
	0x0220,	0x61,	0x01,
	0x0221,	0x11,	0x01,
	0x0340,	0x0C,	0x01,
	0x0341,	0x80,	0x01,
	0x0342,	0x22,	0x01,
	0x0343,	0x00,	0x01,
	0x0381,	0x01,	0x01,
	0x0383,	0x01,	0x01,
	0x0385,	0x01,	0x01,
	0x0387,	0x01,	0x01,
	0x0900,	0x00,	0x01,
	0x0901,	0x11,	0x01,
	0x30F4,	0x01,	0x01,
	0x30F5,	0xA4,	0x01,
	0x30F6,	0x01,	0x01,
	0x30F7,	0x90,	0x01,
	0x31A0,	0x01,	0x01,
	0x31A5,	0x01,	0x01,
	0x31A6,	0x00,	0x01,
	0x560F,	0x42,	0x01,
	0x58D0,	0x0E,	0x01,
	0x7928,	0x08,	0x01,
	0x7929,	0x08,	0x01,
	0x30DF,	0xFD,	0x01,
	0x30E1,	0xFB,	0x01,
	0x30E3,	0xFD,	0x01,
	0x30E4,	0x01,	0x01,
	0x30E6,	0x02,	0x01,
	0x30E7,	0x00,	0x01,
	0x30E8,	0x01,	0x01,
	0x8112,	0x00,	0x01,
	0x7441,	0x5A,	0x01,
	0xBC7B,	0x2C,	0x01,
	0x734A,	0x23,	0x01,
	0x734F,	0x64,	0x01,
	0x793F,	0x02,	0x01,
	0x7914,	0x02,	0x01,
	0x5856,	0x04,	0x01,
	0x0344,	0x00,	0x01,
	0x0345,	0x00,	0x01,
	0x0346,	0x00,	0x01,
	0x0347,	0x00,	0x01,
	0x0348,	0x0F,	0x01,
	0x0349,	0xBF,	0x01,
	0x034A,	0x0B,	0x01,
	0x034B,	0xCF,	0x01,
	0x034C,	0x1F,	0x01,
	0x034D,	0x80,	0x01,
	0x034E,	0x07,	0x01,
	0x034F,	0xA8,	0x01,
	0x0408,	0x00,	0x01,
	0x0409,	0x00,	0x01,
	0x040A,	0x02,	0x01,
	0x040B,	0x14,	0x01,
	0x040C,	0x0F,	0x01,
	0x040D,	0xC0,	0x01,
	0x040E,	0x07,	0x01,
	0x040F,	0xA8,	0x01,
	0x0301,	0x03,	0x01,
	0x0303,	0x02,	0x01,
	0x0305,	0x04,	0x01,
	0x0306,	0x00,	0x01,
	0x0307,	0xC1,	0x01,
	0x0309,	0x0A,	0x01,
	0x030B,	0x01,	0x01,
	0x030D,	0x04,	0x01,
	0x030E,	0x01,	0x01,
	0x030F,	0x3C,	0x01,
	0x0310,	0x01,	0x01,
};

const u32 sensor_imx333_setfile_B_4032x2268_60fps[] = {
	0x9007,	0x00,	0x01,
	0x0112,	0x0A,	0x01,
	0x0113,	0x0A,	0x01,
	0x0114,	0x03,	0x01,
	0x0220,	0x61,	0x01,
	0x0221,	0x11,	0x01,
	0x0340,	0x0A,	0x01,
	0x0341,	0x40,	0x01,
	0x0342,	0x14,	0x01,
	0x0343,	0xB8,	0x01,
	0x0381,	0x01,	0x01,
	0x0383,	0x01,	0x01,
	0x0385,	0x01,	0x01,
	0x0387,	0x01,	0x01,
	0x0900,	0x00,	0x01,
	0x0901,	0x11,	0x01,
	0x30F4,	0x02,	0x01,
	0x30F5,	0xBC,	0x01,
	0x30F6,	0x01,	0x01,
	0x30F7,	0xB8,	0x01,
	0x31A0,	0x02,	0x01,
	0x31A5,	0x00,	0x01,
	0x31A6,	0x00,	0x01,
	0x560F,	0xC4,	0x01,
	0x58D0,	0x0E,	0x01,
	0x7928,	0x08,	0x01,
	0x7929,	0x08,	0x01,
	0x30DF,	0xFD,	0x01,
	0x30E1,	0xFB,	0x01,
	0x30E3,	0xFD,	0x01,
	0x30E4,	0x01,	0x01,
	0x30E6,	0x02,	0x01,
	0x30E7,	0x00,	0x01,
	0x30E8,	0x01,	0x01,
	0x8112,	0x00,	0x01,
	0x7441,	0x5A,	0x01,
	0xBC7B,	0x2C,	0x01,
	0x734A,	0x23,	0x01,
	0x734F,	0x64,	0x01,
	0x793F,	0x02,	0x01,
	0x7914,	0x02,	0x01,
	0x5856,	0x04,	0x01,
	0x0344,	0x00,	0x01,
	0x0345,	0x00,	0x01,
	0x0346,	0x01,	0x01,
	0x0347,	0x78,	0x01,
	0x0348,	0x0F,	0x01,
	0x0349,	0xBF,	0x01,
	0x034A,	0x0A,	0x01,
	0x034B,	0x57,	0x01,
	0x034C,	0x0F,	0x01,
	0x034D,	0xC0,	0x01,
	0x034E,	0x08,	0x01,
	0x034F,	0xDC,	0x01,
	0x0408,	0x00,	0x01,
	0x0409,	0x00,	0x01,
	0x040A,	0x00,	0x01,
	0x040B,	0x00,	0x01,
	0x040C,	0x0F,	0x01,
	0x040D,	0xC0,	0x01,
	0x040E,	0x08,	0x01,
	0x040F,	0xE0,	0x01,
	0x0301,	0x03,	0x01,
	0x0303,	0x02,	0x01,
	0x0305,	0x04,	0x01,
	0x0306,	0x00,	0x01,
	0x0307,	0xC1,	0x01,
	0x0309,	0x0A,	0x01,
	0x030B,	0x01,	0x01,
	0x030D,	0x04,	0x01,
	0x030E,	0x01,	0x01,
	0x030F,	0x3C,	0x01,
	0x0310,	0x01,	0x01,
};

const u32 sensor_imx333_setfile_B_2016x1134_120fps[] = {
	0x9007,	0x00,	0x01,
	0x0112,	0x0A,	0x01,
	0x0113,	0x0A,	0x01,
	0x0114,	0x03,	0x01,
	0x0220,	0x00,	0x01,
	0x0221,	0x11,	0x01,
	0x0340,	0x06,	0x01,
	0x0341,	0x40,	0x01,
	0x0342,	0x11,	0x01,
	0x0343,	0x00,	0x01,
	0x0381,	0x01,	0x01,
	0x0383,	0x01,	0x01,
	0x0385,	0x01,	0x01,
	0x0387,	0x01,	0x01,
	0x0900,	0x01,	0x01,
	0x0901,	0x22,	0x01,
	0x30F4,	0x00,	0x01,
	0x30F5,	0x14,	0x01,
	0x30F6,	0x00,	0x01,
	0x30F7,	0x14,	0x01,
	0x31A0,	0x02,	0x01,
	0x31A5,	0x00,	0x01,
	0x31A6,	0x01,	0x01,
	0x560F,	0x8C,	0x01,
	0x58D0,	0x0E,	0x01,
	0x7928,	0x08,	0x01,
	0x7929,	0x08,	0x01,
	0x30DF,	0xFD,	0x01,
	0x30E1,	0xFB,	0x01,
	0x30E3,	0xFD,	0x01,
	0x30E4,	0x01,	0x01,
	0x30E6,	0x02,	0x01,
	0x30E7,	0x00,	0x01,
	0x30E8,	0x01,	0x01,
	0x8112,	0x00,	0x01,
	0x7441,	0x5A,	0x01,
	0xBC7B,	0x2C,	0x01,
	0x734A,	0x23,	0x01,
	0x734F,	0x64,	0x01,
	0x793F,	0x02,	0x01,
	0x7914,	0x02,	0x01,
	0x5856,	0x04,	0x01,
	0x0344,	0x00,	0x01,
	0x0345,	0x00,	0x01,
	0x0346,	0x01,	0x01,
	0x0347,	0x78,	0x01,
	0x0348,	0x0F,	0x01,
	0x0349,	0xBF,	0x01,
	0x034A,	0x0A,	0x01,
	0x034B,	0x57,	0x01,
	0x034C,	0x07,	0x01,
	0x034D,	0xE0,	0x01,
	0x034E,	0x04,	0x01,
	0x034F,	0x6E,	0x01,
	0x0408,	0x00,	0x01,
	0x0409,	0x00,	0x01,
	0x040A,	0x00,	0x01,
	0x040B,	0x00,	0x01,
	0x040C,	0x07,	0x01,
	0x040D,	0xE0,	0x01,
	0x040E,	0x04,	0x01,
	0x040F,	0x70,	0x01,
	0x0301,	0x03,	0x01,
	0x0303,	0x02,	0x01,
	0x0305,	0x04,	0x01,
	0x0306,	0x00,	0x01,
	0x0307,	0xC1,	0x01,
	0x0309,	0x0A,	0x01,
	0x030B,	0x01,	0x01,
	0x030D,	0x04,	0x01,
	0x030E,	0x01,	0x01,
	0x030F,	0x3C,	0x01,
	0x0310,	0x01,	0x01,
};

const u32 sensor_imx333_setfile_B_2016x1134_240fps[] = {
	0x9007,	0x00,	0x01,
	0x0112,	0x0A,	0x01,
	0x0113,	0x0A,	0x01,
	0x0114,	0x03,	0x01,
	0x0220,	0x00,	0x01,
	0x0221,	0x11,	0x01,
	0x0340,	0x04,	0x01,
	0x0341,	0xE8,	0x01,
	0x0342,	0x0A,	0x01,
	0x0343,	0xD0,	0x01,
	0x0381,	0x01,	0x01,
	0x0383,	0x01,	0x01,
	0x0385,	0x01,	0x01,
	0x0387,	0x01,	0x01,
	0x0900,	0x01,	0x01,
	0x0901,	0x22,	0x01,
	0x30F4,	0x01,	0x01,
	0x30F5,	0xCC,	0x01,
	0x30F6,	0x01,	0x01,
	0x30F7,	0xEA,	0x01,
	0x31A0,	0x02,	0x01,
	0x31A5,	0x00,	0x01,
	0x31A6,	0x00,	0x01,
	0x560F,	0xA5,	0x01,
	0x58D0,	0x0E,	0x01,
	0x7928,	0x08,	0x01,
	0x7929,	0x08,	0x01,
	0x30DF,	0xFD,	0x01,
	0x30E1,	0xFB,	0x01,
	0x30E3,	0xFD,	0x01,
	0x30E4,	0x01,	0x01,
	0x30E6,	0x02,	0x01,
	0x30E7,	0x00,	0x01,
	0x30E8,	0x01,	0x01,
	0x8112,	0x00,	0x01,
	0x7441,	0x5A,	0x01,
	0xBC7B,	0x2C,	0x01,
	0x734A,	0x23,	0x01,
	0x734F,	0x64,	0x01,
	0x793F,	0x02,	0x01,
	0x7914,	0x02,	0x01,
	0x5856,	0x04,	0x01,
	0x0344,	0x00,	0x01,
	0x0345,	0x00,	0x01,
	0x0346,	0x01,	0x01,
	0x0347,	0x78,	0x01,
	0x0348,	0x0F,	0x01,
	0x0349,	0xBF,	0x01,
	0x034A,	0x0A,	0x01,
	0x034B,	0x57,	0x01,
	0x034C,	0x07,	0x01,
	0x034D,	0xE0,	0x01,
	0x034E,	0x04,	0x01,
	0x034F,	0x6E,	0x01,
	0x0408,	0x00,	0x01,
	0x0409,	0x00,	0x01,
	0x040A,	0x00,	0x01,
	0x040B,	0x00,	0x01,
	0x040C,	0x07,	0x01,
	0x040D,	0xE0,	0x01,
	0x040E,	0x04,	0x01,
	0x040F,	0x70,	0x01,
	0x0301,	0x03,	0x01,
	0x0303,	0x02,	0x01,
	0x0305,	0x04,	0x01,
	0x0306,	0x00,	0x01,
	0x0307,	0xC1,	0x01,
	0x0309,	0x0A,	0x01,
	0x030B,	0x01,	0x01,
	0x030D,	0x04,	0x01,
	0x030E,	0x01,	0x01,
	0x030F,	0x3C,	0x01,
	0x0310,	0x01,	0x01,
};

const u32 sensor_imx333_setfile_B_1008x756_120fps[] = {
	0x9007,	0xA3,	0x01,
};

const u32 sensor_imx333_setfile_B_2016x1512_30fps[] = {
	0x9007,	0x00,	0x01,
	0x0112,	0x0A,	0x01,
	0x0113,	0x0A,	0x01,
	0x0114,	0x03,	0x01,
	0x0220,	0x00,	0x01,
	0x0221,	0x11,	0x01,
	0x0340,	0x06,	0x01,
	0x0341,	0x48,	0x01,
	0x0342,	0x43,	0x01,
	0x0343,	0xA0,	0x01,
	0x0381,	0x01,	0x01,
	0x0383,	0x01,	0x01,
	0x0385,	0x01,	0x01,
	0x0387,	0x01,	0x01,
	0x0900,	0x01,	0x01,
	0x0901,	0x22,	0x01,
	0x30F4,	0x02,	0x01,
	0x30F5,	0x8A,	0x01,
	0x30F6,	0x00,	0x01,
	0x30F7,	0x14,	0x01,
	0x31A0,	0x02,	0x01,
	0x31A5,	0x00,	0x01,
	0x31A6,	0x00,	0x01,
	0x560F,	0xC4,	0x01,
	0x58D0,	0x0E,	0x01,
	0x7928,	0x08,	0x01,
	0x7929,	0x08,	0x01,
	0x30DF,	0xFD,	0x01,
	0x30E1,	0xFB,	0x01,
	0x30E3,	0xFD,	0x01,
	0x30E4,	0x01,	0x01,
	0x30E6,	0x02,	0x01,
	0x30E7,	0x00,	0x01,
	0x30E8,	0x01,	0x01,
	0x8112,	0x00,	0x01,
	0x7441,	0x5A,	0x01,
	0xBC7B,	0x2C,	0x01,
	0x734A,	0x23,	0x01,
	0x734F,	0x64,	0x01,
	0x793F,	0x02,	0x01,
	0x7914,	0x02,	0x01,
	0x5856,	0x04,	0x01,
	0x0344,	0x00,	0x01,
	0x0345,	0x00,	0x01,
	0x0346,	0x00,	0x01,
	0x0347,	0x00,	0x01,
	0x0348,	0x0F,	0x01,
	0x0349,	0xBF,	0x01,
	0x034A,	0x0B,	0x01,
	0x034B,	0xCF,	0x01,
	0x034C,	0x07,	0x01,
	0x034D,	0xE0,	0x01,
	0x034E,	0x05,	0x01,
	0x034F,	0xE8,	0x01,
	0x0408,	0x00,	0x01,
	0x0409,	0x00,	0x01,
	0x040A,	0x00,	0x01,
	0x040B,	0x00,	0x01,
	0x040C,	0x07,	0x01,
	0x040D,	0xE0,	0x01,
	0x040E,	0x05,	0x01,
	0x040F,	0xE8,	0x01,
	0x0301,	0x03,	0x01,
	0x0303,	0x02,	0x01,
	0x0305,	0x04,	0x01,
	0x0306,	0x00,	0x01,
	0x0307,	0xC1,	0x01,
	0x0309,	0x0A,	0x01,
	0x030B,	0x01,	0x01,
	0x030D,	0x04,	0x01,
	0x030E,	0x01,	0x01,
	0x030F,	0x3C,	0x01,
	0x0310,	0x01,	0x01,
};

const u32 sensor_imx333_setfile_B_1504x1504_30fps[] = {
	0x9007,	0x00,	0x01,
	0x0112,	0x0A,	0x01,
	0x0113,	0x0A,	0x01,
	0x0114,	0x03,	0x01,
	0x0220,	0x00,	0x01,
	0x0221,	0x11,	0x01,
	0x0340,	0x06,	0x01,
	0x0341,	0x40,	0x01,
	0x0342,	0x44,	0x01,
	0x0343,	0x00,	0x01,
	0x0381,	0x01,	0x01,
	0x0383,	0x01,	0x01,
	0x0385,	0x01,	0x01,
	0x0387,	0x01,	0x01,
	0x0900,	0x01,	0x01,
	0x0901,	0x22,	0x01,
	0x30F4,	0x02,	0x01,
	0x30F5,	0x44,	0x01,
	0x30F6,	0x00,	0x01,
	0x30F7,	0x14,	0x01,
	0x31A0,	0x02,	0x01,
	0x31A5,	0x00,	0x01,
	0x31A6,	0x00,	0x01,
	0x560F,	0xC4,	0x01,
	0x58D0,	0x0E,	0x01,
	0x7928,	0x08,	0x01,
	0x7929,	0x08,	0x01,
	0x30DF,	0xFD,	0x01,
	0x30E1,	0xFB,	0x01,
	0x30E3,	0xFD,	0x01,
	0x30E4,	0x01,	0x01,
	0x30E6,	0x02,	0x01,
	0x30E7,	0x00,	0x01,
	0x30E8,	0x01,	0x01,
	0x8112,	0x00,	0x01,
	0x7441,	0x5A,	0x01,
	0xBC7B,	0x2C,	0x01,
	0x734A,	0x23,	0x01,
	0x734F,	0x64,	0x01,
	0x793F,	0x02,	0x01,
	0x7914,	0x02,	0x01,
	0x5856,	0x04,	0x01,
	0x0344,	0x02,	0x01,
	0x0345,	0x00,	0x01,
	0x0346,	0x00,	0x01,
	0x0347,	0x00,	0x01,
	0x0348,	0x0D,	0x01,
	0x0349,	0xBF,	0x01,
	0x034A,	0x0B,	0x01,
	0x034B,	0xCF,	0x01,
	0x034C,	0x05,	0x01,
	0x034D,	0xE0,	0x01,
	0x034E,	0x05,	0x01,
	0x034F,	0xE0,	0x01,
	0x0408,	0x00,	0x01,
	0x0409,	0x00,	0x01,
	0x040A,	0x00,	0x01,
	0x040B,	0x04,	0x01,
	0x040C,	0x05,	0x01,
	0x040D,	0xE0,	0x01,
	0x040E,	0x05,	0x01,
	0x040F,	0xE0,	0x01,
	0x0301,	0x03,	0x01,
	0x0303,	0x02,	0x01,
	0x0305,	0x04,	0x01,
	0x0306,	0x00,	0x01,
	0x0307,	0xC1,	0x01,
	0x0309,	0x0A,	0x01,
	0x030B,	0x01,	0x01,
	0x030D,	0x04,	0x01,
	0x030E,	0x01,	0x01,
	0x030F,	0x3C,	0x01,
	0x0310,	0x01,	0x01,
};

const u32 sensor_imx333_setfile_B_2016x1134_30fps[] = {
	0x9007,	0x00,	0x01,
	0x0112,	0x0A,	0x01,
	0x0113,	0x0A,	0x01,
	0x0114,	0x03,	0x01,
	0x0220,	0x00,	0x01,
	0x0221,	0x11,	0x01,
	0x0340,	0x06,	0x01,
	0x0341,	0x40,	0x01,
	0x0342,	0x44,	0x01,
	0x0343,	0x00,	0x01,
	0x0381,	0x01,	0x01,
	0x0383,	0x01,	0x01,
	0x0385,	0x01,	0x01,
	0x0387,	0x01,	0x01,
	0x0900,	0x01,	0x01,
	0x0901,	0x22,	0x01,
	0x30F4,	0x02,	0x01,
	0x30F5,	0xE4,	0x01,
	0x30F6,	0x00,	0x01,
	0x30F7,	0x14,	0x01,
	0x31A0,	0x02,	0x01,
	0x31A5,	0x00,	0x01,
	0x31A6,	0x01,	0x01,
	0x560F,	0xB0,	0x01,
	0x58D0,	0x0E,	0x01,
	0x7928,	0x08,	0x01,
	0x7929,	0x08,	0x01,
	0x30DF,	0xFD,	0x01,
	0x30E1,	0xFB,	0x01,
	0x30E3,	0xFD,	0x01,
	0x30E4,	0x01,	0x01,
	0x30E6,	0x02,	0x01,
	0x30E7,	0x00,	0x01,
	0x30E8,	0x01,	0x01,
	0x8112,	0x00,	0x01,
	0x7441,	0x5A,	0x01,
	0xBC7B,	0x2C,	0x01,
	0x734A,	0x23,	0x01,
	0x734F,	0x64,	0x01,
	0x793F,	0x02,	0x01,
	0x7914,	0x02,	0x01,
	0x5856,	0x04,	0x01,
	0x0344,	0x00,	0x01,
	0x0345,	0x00,	0x01,
	0x0346,	0x01,	0x01,
	0x0347,	0x78,	0x01,
	0x0348,	0x0F,	0x01,
	0x0349,	0xBF,	0x01,
	0x034A,	0x0A,	0x01,
	0x034B,	0x57,	0x01,
	0x034C,	0x07,	0x01,
	0x034D,	0xE0,	0x01,
	0x034E,	0x04,	0x01,
	0x034F,	0x6E,	0x01,
	0x0408,	0x00,	0x01,
	0x0409,	0x00,	0x01,
	0x040A,	0x00,	0x01,
	0x040B,	0x00,	0x01,
	0x040C,	0x07,	0x01,
	0x040D,	0xE0,	0x01,
	0x040E,	0x04,	0x01,
	0x040F,	0x70,	0x01,
	0x0301,	0x03,	0x01,
	0x0303,	0x02,	0x01,
	0x0305,	0x04,	0x01,
	0x0306,	0x00,	0x01,
	0x0307,	0xC1,	0x01,
	0x0309,	0x0A,	0x01,
	0x030B,	0x01,	0x01,
	0x030D,	0x04,	0x01,
	0x030E,	0x01,	0x01,
	0x030F,	0x3C,	0x01,
	0x0310,	0x01,	0x01,
};

const struct sensor_pll_info_compact sensor_imx333_pllinfo_B_8064x3024_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000,
	836330000,
	3200,
	8704,
};

const struct sensor_pll_info_compact sensor_imx333_pllinfo_B_8064x2268_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000,
	836330000,
	3200,
	8704,
};

const struct sensor_pll_info_compact sensor_imx333_pllinfo_B_6048x3024_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000,
	836330000,
	3200,
	8704,
};

const struct sensor_pll_info_compact sensor_imx333_pllinfo_B_8064X1960_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000,
	836330000,
	3200,
	8704,
};

const struct sensor_pll_info_compact sensor_imx333_pllinfo_B_4032x2268_60fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000,
	836330000,
	2624,
	5304,
};

const struct sensor_pll_info_compact sensor_imx333_pllinfo_B_2016x1134_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000,
	836330000,
	1600,
	4352,
};

const struct sensor_pll_info_compact sensor_imx333_pllinfo_B_2016x1134_240fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000,
	836330000,
	1304,
	2664,
};

const struct sensor_pll_info_compact sensor_imx333_pllinfo_B_1008x756_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000,
	836330000,
	984,
	7040,
};

const struct sensor_pll_info_compact sensor_imx333_pllinfo_B_2016x1512_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000,
	836330000,
	1608,
	17312,
};

const struct sensor_pll_info_compact sensor_imx333_pllinfo_B_1504x1504_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000,
	836330000,
	1600,
	17408,
};

const struct sensor_pll_info_compact sensor_imx333_pllinfo_B_2016x1134_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000,
	836330000,
	1600,
	17408,
};

static const u32 *sensor_imx333_setfiles_B[] = {
	sensor_imx333_setfile_B_8064x3024_30fps,
	sensor_imx333_setfile_B_8064x2268_30fps,
	sensor_imx333_setfile_B_6048x3024_30fps,
	sensor_imx333_setfile_B_4032x2268_60fps,
	sensor_imx333_setfile_B_2016x1134_120fps,
	sensor_imx333_setfile_B_2016x1134_240fps,
	sensor_imx333_setfile_B_1008x756_120fps,
	sensor_imx333_setfile_B_2016x1512_30fps,
	sensor_imx333_setfile_B_1504x1504_30fps,
	sensor_imx333_setfile_B_2016x1134_30fps,
	sensor_imx333_setfile_B_8064x1960_30fps,
};

static const u32 sensor_imx333_setfile_B_sizes[] = {
	sizeof(sensor_imx333_setfile_B_8064x3024_30fps) / sizeof(sensor_imx333_setfile_B_8064x3024_30fps[0]),
	sizeof(sensor_imx333_setfile_B_8064x2268_30fps) / sizeof(sensor_imx333_setfile_B_8064x2268_30fps[0]),
	sizeof(sensor_imx333_setfile_B_6048x3024_30fps) / sizeof(sensor_imx333_setfile_B_6048x3024_30fps[0]),
	sizeof(sensor_imx333_setfile_B_4032x2268_60fps) / sizeof(sensor_imx333_setfile_B_4032x2268_60fps[0]),
	sizeof(sensor_imx333_setfile_B_2016x1134_120fps) / sizeof(sensor_imx333_setfile_B_2016x1134_120fps[0]),
	sizeof(sensor_imx333_setfile_B_2016x1134_240fps) / sizeof(sensor_imx333_setfile_B_2016x1134_240fps[0]),
	sizeof(sensor_imx333_setfile_B_1008x756_120fps) / sizeof(sensor_imx333_setfile_B_1008x756_120fps[0]),
	sizeof(sensor_imx333_setfile_B_2016x1512_30fps) / sizeof(sensor_imx333_setfile_B_2016x1512_30fps[0]),
	sizeof(sensor_imx333_setfile_B_1504x1504_30fps) / sizeof(sensor_imx333_setfile_B_1504x1504_30fps[0]),
	sizeof(sensor_imx333_setfile_B_2016x1134_30fps) / sizeof(sensor_imx333_setfile_B_2016x1134_30fps[0]),
	sizeof(sensor_imx333_setfile_B_8064x1960_30fps) / sizeof(sensor_imx333_setfile_B_8064x1960_30fps[0]),
};

static const struct sensor_pll_info_compact *sensor_imx333_pllinfos_B[] = {
	&sensor_imx333_pllinfo_B_8064x3024_30fps,
	&sensor_imx333_pllinfo_B_8064x2268_30fps,
	&sensor_imx333_pllinfo_B_6048x3024_30fps,
	&sensor_imx333_pllinfo_B_4032x2268_60fps,
	&sensor_imx333_pllinfo_B_2016x1134_120fps,
	&sensor_imx333_pllinfo_B_2016x1134_240fps,
	&sensor_imx333_pllinfo_B_1008x756_120fps,
	&sensor_imx333_pllinfo_B_2016x1512_30fps,
	&sensor_imx333_pllinfo_B_1504x1504_30fps,
	&sensor_imx333_pllinfo_B_2016x1134_30fps,
	&sensor_imx333_pllinfo_B_8064X1960_30fps,
};

#endif
