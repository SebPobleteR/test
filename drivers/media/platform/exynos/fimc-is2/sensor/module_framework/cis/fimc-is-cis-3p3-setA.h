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

#ifndef FIMC_IS_CIS_3P3_SET_A_H
#define FIMC_IS_CIS_3P3_SET_A_H

#include "fimc-is-cis.h"
#include "fimc-is-cis-3p3.h"

/* 4:3 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_3p3_setfile_A_4624x3466_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6010, 0x0001, 0x02,

	0x6214, 0x7971, 0x02,
	0x6218, 0x0100, 0x02,
	0x3E58, 0x004B, 0x02,
	0x3D7C, 0x1110, 0x02,
	0x3D88, 0x0064, 0x02,
	0x3D8A, 0x0068, 0x02,
	0x6028, 0x4000, 0x02,
	0x602A, 0xF408, 0x02,
	0x6F12, 0x0048, 0x02,
	0x602A, 0xF40C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AA, 0x02,
	0x6F12, 0x0060, 0x02,
	0x602A, 0xF442, 0x02,
	0x6F12, 0x0800, 0x02,
	0x602A, 0xF43E, 0x02,
	0x6F12, 0x2020, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AC, 0x02,
	0x6F12, 0x004B, 0x02,
	0x602A, 0xF492, 0x02,
	0x6F12, 0x0016, 0x02,
	0x602A, 0xF480, 0x02,
	0x6F12, 0x0040, 0x02,
	0x602A, 0xF4A4, 0x02,
	0x6F12, 0x0010, 0x02,
	0x3A38, 0x006C, 0x02,
	0x3CD6, 0x0100, 0x02,
	0x3CD8, 0x017F, 0x02,
	0x3CDA, 0x1000, 0x02,
	0x3CDC, 0x104F, 0x02,
	0x3CDE, 0x0180, 0x02,
	0x3CE0, 0x01FF, 0x02,
	0x3CE2, 0x104F, 0x02,
	0x3CE4, 0x104F, 0x02,
	0x3CE6, 0x0200, 0x02,
	0x3CE8, 0x03FF, 0x02,
	0x3CEA, 0x104F, 0x02,
	0x3CEC, 0x1058, 0x02,
	0x3CEE, 0x0400, 0x02,
	0x3CF0, 0x07FF, 0x02,
	0x3CF2, 0x1057, 0x02,
	0x3CF4, 0x1073, 0x02,
	0x3CF6, 0x0800, 0x02,
	0x3CF8, 0x1000, 0x02,
	0x3CFA, 0x1073, 0x02,
	0x3CFC, 0x10A2, 0x02,
	0x3D16, 0x0100, 0x02,
	0x3D18, 0x017F, 0x02,
	0x3D1A, 0x1000, 0x02,
	0x3D1C, 0x104F, 0x02,
	0x3D1E, 0x0180, 0x02,
	0x3D20, 0x01FF, 0x02,
	0x3D22, 0x104F, 0x02,
	0x3D24, 0x104F, 0x02,
	0x3D26, 0x0200, 0x02,
	0x3D28, 0x03FF, 0x02,
	0x3D2A, 0x104F, 0x02,
	0x3D2C, 0x1058, 0x02,
	0x3D2E, 0x0400, 0x02,
	0x3D30, 0x07FF, 0x02,
	0x3D32, 0x1057, 0x02,
	0x3D34, 0x1073, 0x02,
	0x3D36, 0x0800, 0x02,
	0x3D38, 0x1000, 0x02,
	0x3D3A, 0x1073, 0x02,
	0x3D3C, 0x10A2, 0x02,
	0x3002, 0x0001, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x0081, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x006B, 0x02,
	0x0302, 0x0001, 0x02,
	0x0300, 0x0004, 0x02,
	0x030A, 0x0001, 0x02,
	0x0308, 0x0008, 0x02,
	0x0216, 0x0101, 0x02,
	0x021A, 0x0100, 0x02,
	0x0202, 0x0100, 0x02,
	0x0200, 0x0200, 0x02,
	0x021E, 0x0100, 0x02,
	0x021C, 0x0200, 0x02,
	0x0344, 0x0000, 0x02,
	0x0348, 0x120F, 0x02,
	0x0346, 0x0010, 0x02,
	0x034A, 0x0D99, 0x02,
	0x034C, 0x1210, 0x02,
	0x034E, 0x0D8A, 0x02,
	0x0342, 0x141C, 0x02,
	0x0340, 0x0E23, 0x02,
	0x3552, 0x00D0, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3072, 0x03C0, 0x02,
	0x6214, 0x7970, 0x02,
};

/* 4:3 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_3p3_setfile_A_4624x3466_24fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6010, 0x0001, 0x02,

	0x6214, 0x7971, 0x02,
	0x6218, 0x0100, 0x02,
	0x3E58, 0x004B, 0x02,
	0x3D7C, 0x1110, 0x02,
	0x3D88, 0x0064, 0x02,
	0x3D8A, 0x0068, 0x02,
	0x6028, 0x4000, 0x02,
	0x602A, 0xF408, 0x02,
	0x6F12, 0x0048, 0x02,
	0x602A, 0xF40C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AA, 0x02,
	0x6F12, 0x0060, 0x02,
	0x602A, 0xF442, 0x02,
	0x6F12, 0x0800, 0x02,
	0x602A, 0xF43E, 0x02,
	0x6F12, 0x2020, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AC, 0x02,
	0x6F12, 0x004B, 0x02,
	0x602A, 0xF492, 0x02,
	0x6F12, 0x0016, 0x02,
	0x602A, 0xF480, 0x02,
	0x6F12, 0x0040, 0x02,
	0x602A, 0xF4A4, 0x02,
	0x6F12, 0x0010, 0x02,
	0x3A38, 0x006C, 0x02,
	0x3CD6, 0x0100, 0x02,
	0x3CD8, 0x017F, 0x02,
	0x3CDA, 0x1000, 0x02,
	0x3CDC, 0x104F, 0x02,
	0x3CDE, 0x0180, 0x02,
	0x3CE0, 0x01FF, 0x02,
	0x3CE2, 0x104F, 0x02,
	0x3CE4, 0x104F, 0x02,
	0x3CE6, 0x0200, 0x02,
	0x3CE8, 0x03FF, 0x02,
	0x3CEA, 0x104F, 0x02,
	0x3CEC, 0x1058, 0x02,
	0x3CEE, 0x0400, 0x02,
	0x3CF0, 0x07FF, 0x02,
	0x3CF2, 0x1057, 0x02,
	0x3CF4, 0x1073, 0x02,
	0x3CF6, 0x0800, 0x02,
	0x3CF8, 0x1000, 0x02,
	0x3CFA, 0x1073, 0x02,
	0x3CFC, 0x10A2, 0x02,
	0x3D16, 0x0100, 0x02,
	0x3D18, 0x017F, 0x02,
	0x3D1A, 0x1000, 0x02,
	0x3D1C, 0x104F, 0x02,
	0x3D1E, 0x0180, 0x02,
	0x3D20, 0x01FF, 0x02,
	0x3D22, 0x104F, 0x02,
	0x3D24, 0x104F, 0x02,
	0x3D26, 0x0200, 0x02,
	0x3D28, 0x03FF, 0x02,
	0x3D2A, 0x104F, 0x02,
	0x3D2C, 0x1058, 0x02,
	0x3D2E, 0x0400, 0x02,
	0x3D30, 0x07FF, 0x02,
	0x3D32, 0x1057, 0x02,
	0x3D34, 0x1073, 0x02,
	0x3D36, 0x0800, 0x02,
	0x3D38, 0x1000, 0x02,
	0x3D3A, 0x1073, 0x02,
	0x3D3C, 0x10A2, 0x02,
	0x3002, 0x0001, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x0081, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x006B, 0x02,
	0x0302, 0x0001, 0x02,
	0x0300, 0x0004, 0x02,
	0x030A, 0x0001, 0x02,
	0x0308, 0x0008, 0x02,
	0x0216, 0x0101, 0x02,
	0x021A, 0x0100, 0x02,
	0x0202, 0x0100, 0x02,
	0x0200, 0x0200, 0x02,
	0x021E, 0x0100, 0x02,
	0x021C, 0x0200, 0x02,
	0x0344, 0x0000, 0x02,
	0x0348, 0x120F, 0x02,
	0x0346, 0x0010, 0x02,
	0x034A, 0x0D99, 0x02,
	0x034C, 0x1210, 0x02,
	0x034E, 0x0D8A, 0x02,
	0x0342, 0x141C, 0x02,
	0x0340, 0x11AC, 0x02,
	0x3552, 0x00D0, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3072, 0x03C0, 0x02,
	0x6214, 0x7970, 0x02,
};

/* 16:9 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_3p3_setfile_A_4624x2602_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6010, 0x0001, 0x02,

	0x6214, 0x7971, 0x02,
	0x6218, 0x0100, 0x02,
	0x3E58, 0x004B, 0x02,
	0x3D7C, 0x1110, 0x02,
	0x3D88, 0x0064, 0x02,
	0x3D8A, 0x0068, 0x02,
	0x6028, 0x4000, 0x02,
	0x602A, 0xF408, 0x02,
	0x6F12, 0x0048, 0x02,
	0x602A, 0xF40C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AA, 0x02,
	0x6F12, 0x0060, 0x02,
	0x602A, 0xF442, 0x02,
	0x6F12, 0x0800, 0x02,
	0x602A, 0xF43E, 0x02,
	0x6F12, 0x2020, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AC, 0x02,
	0x6F12, 0x004B, 0x02,
	0x602A, 0xF492, 0x02,
	0x6F12, 0x0016, 0x02,
	0x602A, 0xF480, 0x02,
	0x6F12, 0x0040, 0x02,
	0x602A, 0xF4A4, 0x02,
	0x6F12, 0x0010, 0x02,
	0x3A38, 0x006C, 0x02,
	0x3CD6, 0x0100, 0x02,
	0x3CD8, 0x017F, 0x02,
	0x3CDA, 0x1000, 0x02,
	0x3CDC, 0x104F, 0x02,
	0x3CDE, 0x0180, 0x02,
	0x3CE0, 0x01FF, 0x02,
	0x3CE2, 0x104F, 0x02,
	0x3CE4, 0x104F, 0x02,
	0x3CE6, 0x0200, 0x02,
	0x3CE8, 0x03FF, 0x02,
	0x3CEA, 0x104F, 0x02,
	0x3CEC, 0x1058, 0x02,
	0x3CEE, 0x0400, 0x02,
	0x3CF0, 0x07FF, 0x02,
	0x3CF2, 0x1057, 0x02,
	0x3CF4, 0x1073, 0x02,
	0x3CF6, 0x0800, 0x02,
	0x3CF8, 0x1000, 0x02,
	0x3CFA, 0x1073, 0x02,
	0x3CFC, 0x10A2, 0x02,
	0x3D16, 0x0100, 0x02,
	0x3D18, 0x017F, 0x02,
	0x3D1A, 0x1000, 0x02,
	0x3D1C, 0x104F, 0x02,
	0x3D1E, 0x0180, 0x02,
	0x3D20, 0x01FF, 0x02,
	0x3D22, 0x104F, 0x02,
	0x3D24, 0x104F, 0x02,
	0x3D26, 0x0200, 0x02,
	0x3D28, 0x03FF, 0x02,
	0x3D2A, 0x104F, 0x02,
	0x3D2C, 0x1058, 0x02,
	0x3D2E, 0x0400, 0x02,
	0x3D30, 0x07FF, 0x02,
	0x3D32, 0x1057, 0x02,
	0x3D34, 0x1073, 0x02,
	0x3D36, 0x0800, 0x02,
	0x3D38, 0x1000, 0x02,
	0x3D3A, 0x1073, 0x02,
	0x3D3C, 0x10A2, 0x02,
	0x3002, 0x0001, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x0081, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x006B, 0x02,
	0x0302, 0x0001, 0x02,
	0x0300, 0x0004, 0x02,
	0x030A, 0x0001, 0x02,
	0x0308, 0x0008, 0x02,
	0x0216, 0x0101, 0x02,
	0x021A, 0x0100, 0x02,
	0x0202, 0x0100, 0x02,
	0x0200, 0x0200, 0x02,
	0x021E, 0x0100, 0x02,
	0x021C, 0x0200, 0x02,
	0x0344, 0x0000, 0x02,
	0x0348, 0x120F, 0x02,
	0x0346, 0x01C0, 0x02,
	0x034A, 0x0BE9, 0x02,
	0x034C, 0x1210, 0x02,
	0x034E, 0x0A2A, 0x02,
	0x0342, 0x141C, 0x02,
	0x0340, 0x0E23, 0x02,
	0x3552, 0x00D0, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3072, 0x03C0, 0x02,
	0x6214, 0x7970, 0x02,
};

/* 16:9 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_3p3_setfile_A_4624x2602_24fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6010, 0x0001, 0x02,

	0x6214, 0x7971, 0x02,
	0x6218, 0x0100, 0x02,
	0x3E58, 0x004B, 0x02,
	0x3D7C, 0x1110, 0x02,
	0x3D88, 0x0064, 0x02,
	0x3D8A, 0x0068, 0x02,
	0x6028, 0x4000, 0x02,
	0x602A, 0xF408, 0x02,
	0x6F12, 0x0048, 0x02,
	0x602A, 0xF40C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AA, 0x02,
	0x6F12, 0x0060, 0x02,
	0x602A, 0xF442, 0x02,
	0x6F12, 0x0800, 0x02,
	0x602A, 0xF43E, 0x02,
	0x6F12, 0x2020, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AC, 0x02,
	0x6F12, 0x004B, 0x02,
	0x602A, 0xF492, 0x02,
	0x6F12, 0x0016, 0x02,
	0x602A, 0xF480, 0x02,
	0x6F12, 0x0040, 0x02,
	0x602A, 0xF4A4, 0x02,
	0x6F12, 0x0010, 0x02,
	0x3A38, 0x006C, 0x02,
	0x3CD6, 0x0100, 0x02,
	0x3CD8, 0x017F, 0x02,
	0x3CDA, 0x1000, 0x02,
	0x3CDC, 0x104F, 0x02,
	0x3CDE, 0x0180, 0x02,
	0x3CE0, 0x01FF, 0x02,
	0x3CE2, 0x104F, 0x02,
	0x3CE4, 0x104F, 0x02,
	0x3CE6, 0x0200, 0x02,
	0x3CE8, 0x03FF, 0x02,
	0x3CEA, 0x104F, 0x02,
	0x3CEC, 0x1058, 0x02,
	0x3CEE, 0x0400, 0x02,
	0x3CF0, 0x07FF, 0x02,
	0x3CF2, 0x1057, 0x02,
	0x3CF4, 0x1073, 0x02,
	0x3CF6, 0x0800, 0x02,
	0x3CF8, 0x1000, 0x02,
	0x3CFA, 0x1073, 0x02,
	0x3CFC, 0x10A2, 0x02,
	0x3D16, 0x0100, 0x02,
	0x3D18, 0x017F, 0x02,
	0x3D1A, 0x1000, 0x02,
	0x3D1C, 0x104F, 0x02,
	0x3D1E, 0x0180, 0x02,
	0x3D20, 0x01FF, 0x02,
	0x3D22, 0x104F, 0x02,
	0x3D24, 0x104F, 0x02,
	0x3D26, 0x0200, 0x02,
	0x3D28, 0x03FF, 0x02,
	0x3D2A, 0x104F, 0x02,
	0x3D2C, 0x1058, 0x02,
	0x3D2E, 0x0400, 0x02,
	0x3D30, 0x07FF, 0x02,
	0x3D32, 0x1057, 0x02,
	0x3D34, 0x1073, 0x02,
	0x3D36, 0x0800, 0x02,
	0x3D38, 0x1000, 0x02,
	0x3D3A, 0x1073, 0x02,
	0x3D3C, 0x10A2, 0x02,
	0x3002, 0x0001, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x0081, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x006B, 0x02,
	0x0302, 0x0001, 0x02,
	0x0300, 0x0004, 0x02,
	0x030A, 0x0001, 0x02,
	0x0308, 0x0008, 0x02,
	0x0216, 0x0101, 0x02,
	0x021A, 0x0100, 0x02,
	0x0202, 0x0100, 0x02,
	0x0200, 0x0200, 0x02,
	0x021E, 0x0100, 0x02,
	0x021C, 0x0200, 0x02,
	0x0344, 0x0000, 0x02,
	0x0348, 0x120F, 0x02,
	0x0346, 0x01C0, 0x02,
	0x034A, 0x0BE9, 0x02,
	0x034C, 0x1210, 0x02,
	0x034E, 0x0A2A, 0x02,
	0x0342, 0x141C, 0x02,
	0x0340, 0x11AC, 0x02,
	0x3552, 0x00D0, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3072, 0x03C0, 0x02,
	0x6214, 0x7970, 0x02,
};

/* 11:9 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_3p3_setfile_A_4240x3466_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6010, 0x0001, 0x02,

	0x6214, 0x7971, 0x02,
	0x6218, 0x0100, 0x02,
	0x3E58, 0x004B, 0x02,
	0x3D7C, 0x1110, 0x02,
	0x3D88, 0x0064, 0x02,
	0x3D8A, 0x0068, 0x02,
	0x6028, 0x4000, 0x02,
	0x602A, 0xF408, 0x02,
	0x6F12, 0x0048, 0x02,
	0x602A, 0xF40C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AA, 0x02,
	0x6F12, 0x0060, 0x02,
	0x602A, 0xF442, 0x02,
	0x6F12, 0x0800, 0x02,
	0x602A, 0xF43E, 0x02,
	0x6F12, 0x2020, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AC, 0x02,
	0x6F12, 0x004B, 0x02,
	0x602A, 0xF492, 0x02,
	0x6F12, 0x0016, 0x02,
	0x602A, 0xF480, 0x02,
	0x6F12, 0x0040, 0x02,
	0x602A, 0xF4A4, 0x02,
	0x6F12, 0x0010, 0x02,
	0x3A38, 0x006C, 0x02,
	0x3CD6, 0x0100, 0x02,
	0x3CD8, 0x017F, 0x02,
	0x3CDA, 0x1000, 0x02,
	0x3CDC, 0x104F, 0x02,
	0x3CDE, 0x0180, 0x02,
	0x3CE0, 0x01FF, 0x02,
	0x3CE2, 0x104F, 0x02,
	0x3CE4, 0x104F, 0x02,
	0x3CE6, 0x0200, 0x02,
	0x3CE8, 0x03FF, 0x02,
	0x3CEA, 0x104F, 0x02,
	0x3CEC, 0x1058, 0x02,
	0x3CEE, 0x0400, 0x02,
	0x3CF0, 0x07FF, 0x02,
	0x3CF2, 0x1057, 0x02,
	0x3CF4, 0x1073, 0x02,
	0x3CF6, 0x0800, 0x02,
	0x3CF8, 0x1000, 0x02,
	0x3CFA, 0x1073, 0x02,
	0x3CFC, 0x10A2, 0x02,
	0x3D16, 0x0100, 0x02,
	0x3D18, 0x017F, 0x02,
	0x3D1A, 0x1000, 0x02,
	0x3D1C, 0x104F, 0x02,
	0x3D1E, 0x0180, 0x02,
	0x3D20, 0x01FF, 0x02,
	0x3D22, 0x104F, 0x02,
	0x3D24, 0x104F, 0x02,
	0x3D26, 0x0200, 0x02,
	0x3D28, 0x03FF, 0x02,
	0x3D2A, 0x104F, 0x02,
	0x3D2C, 0x1058, 0x02,
	0x3D2E, 0x0400, 0x02,
	0x3D30, 0x07FF, 0x02,
	0x3D32, 0x1057, 0x02,
	0x3D34, 0x1073, 0x02,
	0x3D36, 0x0800, 0x02,
	0x3D38, 0x1000, 0x02,
	0x3D3A, 0x1073, 0x02,
	0x3D3C, 0x10A2, 0x02,
	0x3002, 0x0001, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x0081, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x006B, 0x02,
	0x0302, 0x0001, 0x02,
	0x0300, 0x0004, 0x02,
	0x030A, 0x0001, 0x02,
	0x0308, 0x0008, 0x02,
	0x0216, 0x0101, 0x02,
	0x021A, 0x0100, 0x02,
	0x0202, 0x0100, 0x02,
	0x0200, 0x0200, 0x02,
	0x021E, 0x0100, 0x02,
	0x021C, 0x0200, 0x02,
	0x0344, 0x00C0, 0x02,
	0x0348, 0x114F, 0x02,
	0x0346, 0x0010, 0x02,
	0x034A, 0x0D99, 0x02,
	0x034C, 0x1090, 0x02,
	0x034E, 0x0D8A, 0x02,
	0x0342, 0x141C, 0x02,
	0x0340, 0x0E23, 0x02,
	0x3552, 0x00D0, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3072, 0x03C0, 0x02,
	0x6214, 0x7970, 0x02,

};

/* 3:2 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_3p3_setfile_A_4624x3082_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6010, 0x0001, 0x02,

	0x6214, 0x7971, 0x02,
	0x6218, 0x0100, 0x02,
	0x3E58, 0x004B, 0x02,
	0x3D7C, 0x1110, 0x02,
	0x3D88, 0x0064, 0x02,
	0x3D8A, 0x0068, 0x02,
	0x6028, 0x4000, 0x02,
	0x602A, 0xF408, 0x02,
	0x6F12, 0x0048, 0x02,
	0x602A, 0xF40C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AA, 0x02,
	0x6F12, 0x0060, 0x02,
	0x602A, 0xF442, 0x02,
	0x6F12, 0x0800, 0x02,
	0x602A, 0xF43E, 0x02,
	0x6F12, 0x2020, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AC, 0x02,
	0x6F12, 0x004B, 0x02,
	0x602A, 0xF492, 0x02,
	0x6F12, 0x0016, 0x02,
	0x602A, 0xF480, 0x02,
	0x6F12, 0x0040, 0x02,
	0x602A, 0xF4A4, 0x02,
	0x6F12, 0x0010, 0x02,
	0x3A38, 0x006C, 0x02,
	0x3CD6, 0x0100, 0x02,
	0x3CD8, 0x017F, 0x02,
	0x3CDA, 0x1000, 0x02,
	0x3CDC, 0x104F, 0x02,
	0x3CDE, 0x0180, 0x02,
	0x3CE0, 0x01FF, 0x02,
	0x3CE2, 0x104F, 0x02,
	0x3CE4, 0x104F, 0x02,
	0x3CE6, 0x0200, 0x02,
	0x3CE8, 0x03FF, 0x02,
	0x3CEA, 0x104F, 0x02,
	0x3CEC, 0x1058, 0x02,
	0x3CEE, 0x0400, 0x02,
	0x3CF0, 0x07FF, 0x02,
	0x3CF2, 0x1057, 0x02,
	0x3CF4, 0x1073, 0x02,
	0x3CF6, 0x0800, 0x02,
	0x3CF8, 0x1000, 0x02,
	0x3CFA, 0x1073, 0x02,
	0x3CFC, 0x10A2, 0x02,
	0x3D16, 0x0100, 0x02,
	0x3D18, 0x017F, 0x02,
	0x3D1A, 0x1000, 0x02,
	0x3D1C, 0x104F, 0x02,
	0x3D1E, 0x0180, 0x02,
	0x3D20, 0x01FF, 0x02,
	0x3D22, 0x104F, 0x02,
	0x3D24, 0x104F, 0x02,
	0x3D26, 0x0200, 0x02,
	0x3D28, 0x03FF, 0x02,
	0x3D2A, 0x104F, 0x02,
	0x3D2C, 0x1058, 0x02,
	0x3D2E, 0x0400, 0x02,
	0x3D30, 0x07FF, 0x02,
	0x3D32, 0x1057, 0x02,
	0x3D34, 0x1073, 0x02,
	0x3D36, 0x0800, 0x02,
	0x3D38, 0x1000, 0x02,
	0x3D3A, 0x1073, 0x02,
	0x3D3C, 0x10A2, 0x02,
	0x3002, 0x0001, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x0081, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x006B, 0x02,
	0x0302, 0x0001, 0x02,
	0x0300, 0x0004, 0x02,
	0x030A, 0x0001, 0x02,
	0x0308, 0x0008, 0x02,
	0x0216, 0x0101, 0x02,
	0x021A, 0x0100, 0x02,
	0x0202, 0x0100, 0x02,
	0x0200, 0x0200, 0x02,
	0x021E, 0x0100, 0x02,
	0x021C, 0x0200, 0x02,
	0x0344, 0x0000, 0x02,
	0x0348, 0x120F, 0x02,
	0x0346, 0x00D0, 0x02,
	0x034A, 0x0CD9, 0x02,
	0x034C, 0x1210, 0x02,
	0x034E, 0x0C0A, 0x02,
	0x0342, 0x141C, 0x02,
	0x0340, 0x0E23, 0x02,
	0x3552, 0x00D0, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3072, 0x03C0, 0x02,
	0x6214, 0x7970, 0x02,
};

/* 5:4 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_3p3_setfile_A_4336x3466_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6010, 0x0001, 0x02,

	0x6214, 0x7971, 0x02,
	0x6218, 0x0100, 0x02,
	0x3E58, 0x004B, 0x02,
	0x3D7C, 0x1110, 0x02,
	0x3D88, 0x0064, 0x02,
	0x3D8A, 0x0068, 0x02,
	0x6028, 0x4000, 0x02,
	0x602A, 0xF408, 0x02,
	0x6F12, 0x0048, 0x02,
	0x602A, 0xF40C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AA, 0x02,
	0x6F12, 0x0060, 0x02,
	0x602A, 0xF442, 0x02,
	0x6F12, 0x0800, 0x02,
	0x602A, 0xF43E, 0x02,
	0x6F12, 0x2020, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AC, 0x02,
	0x6F12, 0x004B, 0x02,
	0x602A, 0xF492, 0x02,
	0x6F12, 0x0016, 0x02,
	0x602A, 0xF480, 0x02,
	0x6F12, 0x0040, 0x02,
	0x602A, 0xF4A4, 0x02,
	0x6F12, 0x0010, 0x02,
	0x3A38, 0x006C, 0x02,
	0x3CD6, 0x0100, 0x02,
	0x3CD8, 0x017F, 0x02,
	0x3CDA, 0x1000, 0x02,
	0x3CDC, 0x104F, 0x02,
	0x3CDE, 0x0180, 0x02,
	0x3CE0, 0x01FF, 0x02,
	0x3CE2, 0x104F, 0x02,
	0x3CE4, 0x104F, 0x02,
	0x3CE6, 0x0200, 0x02,
	0x3CE8, 0x03FF, 0x02,
	0x3CEA, 0x104F, 0x02,
	0x3CEC, 0x1058, 0x02,
	0x3CEE, 0x0400, 0x02,
	0x3CF0, 0x07FF, 0x02,
	0x3CF2, 0x1057, 0x02,
	0x3CF4, 0x1073, 0x02,
	0x3CF6, 0x0800, 0x02,
	0x3CF8, 0x1000, 0x02,
	0x3CFA, 0x1073, 0x02,
	0x3CFC, 0x10A2, 0x02,
	0x3D16, 0x0100, 0x02,
	0x3D18, 0x017F, 0x02,
	0x3D1A, 0x1000, 0x02,
	0x3D1C, 0x104F, 0x02,
	0x3D1E, 0x0180, 0x02,
	0x3D20, 0x01FF, 0x02,
	0x3D22, 0x104F, 0x02,
	0x3D24, 0x104F, 0x02,
	0x3D26, 0x0200, 0x02,
	0x3D28, 0x03FF, 0x02,
	0x3D2A, 0x104F, 0x02,
	0x3D2C, 0x1058, 0x02,
	0x3D2E, 0x0400, 0x02,
	0x3D30, 0x07FF, 0x02,
	0x3D32, 0x1057, 0x02,
	0x3D34, 0x1073, 0x02,
	0x3D36, 0x0800, 0x02,
	0x3D38, 0x1000, 0x02,
	0x3D3A, 0x1073, 0x02,
	0x3D3C, 0x10A2, 0x02,
	0x3002, 0x0001, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x0081, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x006B, 0x02,
	0x0302, 0x0001, 0x02,
	0x0300, 0x0004, 0x02,
	0x030A, 0x0001, 0x02,
	0x0308, 0x0008, 0x02,
	0x0216, 0x0101, 0x02,
	0x021A, 0x0100, 0x02,
	0x0202, 0x0100, 0x02,
	0x0200, 0x0200, 0x02,
	0x021E, 0x0100, 0x02,
	0x021C, 0x0200, 0x02,
	0x0344, 0x0090, 0x02,
	0x0348, 0x117F, 0x02,
	0x0346, 0x0010, 0x02,
	0x034A, 0x0D99, 0x02,
	0x034C, 0x10F0, 0x02,
	0x034E, 0x0D8A, 0x02,
	0x0342, 0x141C, 0x02,
	0x0340, 0x0E23, 0x02,
	0x3552, 0x00D0, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3072, 0x03C0, 0x02,
	0x6214, 0x7970, 0x02,
};

/* 5:3 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_3p3_setfile_A_4624x2778_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6010, 0x0001, 0x02,

	0x6214, 0x7971, 0x02,
	0x6218, 0x0100, 0x02,
	0x3E58, 0x004B, 0x02,
	0x3D7C, 0x1110, 0x02,
	0x3D88, 0x0064, 0x02,
	0x3D8A, 0x0068, 0x02,
	0x6028, 0x4000, 0x02,
	0x602A, 0xF408, 0x02,
	0x6F12, 0x0048, 0x02,
	0x602A, 0xF40C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AA, 0x02,
	0x6F12, 0x0060, 0x02,
	0x602A, 0xF442, 0x02,
	0x6F12, 0x0800, 0x02,
	0x602A, 0xF43E, 0x02,
	0x6F12, 0x2020, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AC, 0x02,
	0x6F12, 0x004B, 0x02,
	0x602A, 0xF492, 0x02,
	0x6F12, 0x0016, 0x02,
	0x602A, 0xF480, 0x02,
	0x6F12, 0x0040, 0x02,
	0x602A, 0xF4A4, 0x02,
	0x6F12, 0x0010, 0x02,
	0x3A38, 0x006C, 0x02,
	0x3CD6, 0x0100, 0x02,
	0x3CD8, 0x017F, 0x02,
	0x3CDA, 0x1000, 0x02,
	0x3CDC, 0x104F, 0x02,
	0x3CDE, 0x0180, 0x02,
	0x3CE0, 0x01FF, 0x02,
	0x3CE2, 0x104F, 0x02,
	0x3CE4, 0x104F, 0x02,
	0x3CE6, 0x0200, 0x02,
	0x3CE8, 0x03FF, 0x02,
	0x3CEA, 0x104F, 0x02,
	0x3CEC, 0x1058, 0x02,
	0x3CEE, 0x0400, 0x02,
	0x3CF0, 0x07FF, 0x02,
	0x3CF2, 0x1057, 0x02,
	0x3CF4, 0x1073, 0x02,
	0x3CF6, 0x0800, 0x02,
	0x3CF8, 0x1000, 0x02,
	0x3CFA, 0x1073, 0x02,
	0x3CFC, 0x10A2, 0x02,
	0x3D16, 0x0100, 0x02,
	0x3D18, 0x017F, 0x02,
	0x3D1A, 0x1000, 0x02,
	0x3D1C, 0x104F, 0x02,
	0x3D1E, 0x0180, 0x02,
	0x3D20, 0x01FF, 0x02,
	0x3D22, 0x104F, 0x02,
	0x3D24, 0x104F, 0x02,
	0x3D26, 0x0200, 0x02,
	0x3D28, 0x03FF, 0x02,
	0x3D2A, 0x104F, 0x02,
	0x3D2C, 0x1058, 0x02,
	0x3D2E, 0x0400, 0x02,
	0x3D30, 0x07FF, 0x02,
	0x3D32, 0x1057, 0x02,
	0x3D34, 0x1073, 0x02,
	0x3D36, 0x0800, 0x02,
	0x3D38, 0x1000, 0x02,
	0x3D3A, 0x1073, 0x02,
	0x3D3C, 0x10A2, 0x02,
	0x3002, 0x0001, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x0081, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x006B, 0x02,
	0x0302, 0x0001, 0x02,
	0x0300, 0x0004, 0x02,
	0x030A, 0x0001, 0x02,
	0x0308, 0x0008, 0x02,
	0x0216, 0x0101, 0x02,
	0x021A, 0x0100, 0x02,
	0x0202, 0x0100, 0x02,
	0x0200, 0x0200, 0x02,
	0x021E, 0x0100, 0x02,
	0x021C, 0x0200, 0x02,
	0x0344, 0x0000, 0x02,
	0x0348, 0x120F, 0x02,
	0x0346, 0x0168, 0x02,
	0x034A, 0x0C41, 0x02,
	0x034C, 0x1210, 0x02,
	0x034E, 0x0ADA, 0x02,
	0x0342, 0x141C, 0x02,
	0x0340, 0x0E23, 0x02,
	0x3552, 0x00D0, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3072, 0x03C0, 0x02,
	0x6214, 0x7970, 0x02,
};

/* 16:9 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_3p3_setfile_A_2312x1300_60fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6010, 0x0001, 0x02,

	0x6214, 0x7971, 0x02,
	0x6218, 0x0100, 0x02,
	0x3E58, 0x004B, 0x02,
	0x3D7C, 0x0010, 0x02,
	0x3D88, 0x0064, 0x02,
	0x3D8A, 0x0068, 0x02,
	0x6028, 0x4000, 0x02,
	0x602A, 0xF408, 0x02,
	0x6F12, 0x0048, 0x02,
	0x602A, 0xF40C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AA, 0x02,
	0x6F12, 0x0060, 0x02,
	0x602A, 0xF442, 0x02,
	0x6F12, 0x0800, 0x02,
	0x602A, 0xF43E, 0x02,
	0x6F12, 0x2020, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AC, 0x02,
	0x6F12, 0x004B, 0x02,
	0x602A, 0xF492, 0x02,
	0x6F12, 0x0016, 0x02,
	0x602A, 0xF480, 0x02,
	0x6F12, 0x0040, 0x02,
	0x602A, 0xF4A4, 0x02,
	0x6F12, 0x0010, 0x02,
	0x3A38, 0x006C, 0x02,
	0x3CD6, 0x0100, 0x02,
	0x3CD8, 0x017F, 0x02,
	0x3CDA, 0x1000, 0x02,
	0x3CDC, 0x104F, 0x02,
	0x3CDE, 0x0180, 0x02,
	0x3CE0, 0x01FF, 0x02,
	0x3CE2, 0x104F, 0x02,
	0x3CE4, 0x104F, 0x02,
	0x3CE6, 0x0200, 0x02,
	0x3CE8, 0x03FF, 0x02,
	0x3CEA, 0x104F, 0x02,
	0x3CEC, 0x1058, 0x02,
	0x3CEE, 0x0400, 0x02,
	0x3CF0, 0x07FF, 0x02,
	0x3CF2, 0x1057, 0x02,
	0x3CF4, 0x1073, 0x02,
	0x3CF6, 0x0800, 0x02,
	0x3CF8, 0x1000, 0x02,
	0x3CFA, 0x1073, 0x02,
	0x3CFC, 0x10A2, 0x02,
	0x3D16, 0x0100, 0x02,
	0x3D18, 0x017F, 0x02,
	0x3D1A, 0x1000, 0x02,
	0x3D1C, 0x104F, 0x02,
	0x3D1E, 0x0180, 0x02,
	0x3D20, 0x01FF, 0x02,
	0x3D22, 0x104F, 0x02,
	0x3D24, 0x104F, 0x02,
	0x3D26, 0x0200, 0x02,
	0x3D28, 0x03FF, 0x02,
	0x3D2A, 0x104F, 0x02,
	0x3D2C, 0x1058, 0x02,
	0x3D2E, 0x0400, 0x02,
	0x3D30, 0x07FF, 0x02,
	0x3D32, 0x1057, 0x02,
	0x3D34, 0x1073, 0x02,
	0x3D36, 0x0800, 0x02,
	0x3D38, 0x1000, 0x02,
	0x3D3A, 0x1073, 0x02,
	0x3D3C, 0x10A2, 0x02,
	0x3002, 0x0001, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x0081, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x003B, 0x02,
	0x0302, 0x0001, 0x02,
	0x0300, 0x0004, 0x02,
	0x030A, 0x0001, 0x02,
	0x0308, 0x0008, 0x02,
	0x0216, 0x0000, 0x02,
	0x021A, 0x0100, 0x02,
	0x0202, 0x0100, 0x02,
	0x0200, 0x0200, 0x02,
	0x021E, 0x0100, 0x02,
	0x021C, 0x0200, 0x02,
	0x0344, 0x0018, 0x02,
	0x0348, 0x1227, 0x02,
	0x0346, 0x01BA, 0x02,
	0x034A, 0x0BE1, 0x02,
	0x034C, 0x0908, 0x02,
	0x034E, 0x0514, 0x02,
	0x0342, 0x141C, 0x02,
	0x0340, 0x0711, 0x02,
	0x3552, 0x00D0, 0x02,
	0x0900, 0x0122, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0003, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0010, 0x02,
	0x3072, 0x03C0, 0x02,
	0x6214, 0x7970, 0x02,
};

/* 4:3 4x4 margin, EXTCLK 26Mhz */
const u32 sensor_3p3_setfile_A_1152x864_120fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6010, 0x0001, 0x02,

	0x6214, 0x7971, 0x02,
	0x6218, 0x0100, 0x02,
	0x3E58, 0x004B, 0x02,
	0x3D7C, 0x0010, 0x02,
	0x3D88, 0x0064, 0x02,
	0x3D8A, 0x0068, 0x02,
	0x6028, 0x4000, 0x02,
	0x602A, 0xF408, 0x02,
	0x6F12, 0x0048, 0x02,
	0x602A, 0xF40C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AA, 0x02,
	0x6F12, 0x0060, 0x02,
	0x602A, 0xF442, 0x02,
	0x6F12, 0x0800, 0x02,
	0x602A, 0xF43E, 0x02,
	0x6F12, 0x2020, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AC, 0x02,
	0x6F12, 0x004B, 0x02,
	0x602A, 0xF492, 0x02,
	0x6F12, 0x0016, 0x02,
	0x602A, 0xF480, 0x02,
	0x6F12, 0x0040, 0x02,
	0x602A, 0xF4A4, 0x02,
	0x6F12, 0x0010, 0x02,
	0x3A38, 0x006C, 0x02,
	0x3CD6, 0x0100, 0x02,
	0x3CD8, 0x017F, 0x02,
	0x3CDA, 0x1000, 0x02,
	0x3CDC, 0x104F, 0x02,
	0x3CDE, 0x0180, 0x02,
	0x3CE0, 0x01FF, 0x02,
	0x3CE2, 0x104F, 0x02,
	0x3CE4, 0x104F, 0x02,
	0x3CE6, 0x0200, 0x02,
	0x3CE8, 0x03FF, 0x02,
	0x3CEA, 0x104F, 0x02,
	0x3CEC, 0x1058, 0x02,
	0x3CEE, 0x0400, 0x02,
	0x3CF0, 0x07FF, 0x02,
	0x3CF2, 0x1057, 0x02,
	0x3CF4, 0x1073, 0x02,
	0x3CF6, 0x0800, 0x02,
	0x3CF8, 0x1000, 0x02,
	0x3CFA, 0x1073, 0x02,
	0x3CFC, 0x10A2, 0x02,
	0x3D16, 0x0100, 0x02,
	0x3D18, 0x017F, 0x02,
	0x3D1A, 0x1000, 0x02,
	0x3D1C, 0x104F, 0x02,
	0x3D1E, 0x0180, 0x02,
	0x3D20, 0x01FF, 0x02,
	0x3D22, 0x104F, 0x02,
	0x3D24, 0x104F, 0x02,
	0x3D26, 0x0200, 0x02,
	0x3D28, 0x03FF, 0x02,
	0x3D2A, 0x104F, 0x02,
	0x3D2C, 0x1058, 0x02,
	0x3D2E, 0x0400, 0x02,
	0x3D30, 0x07FF, 0x02,
	0x3D32, 0x1057, 0x02,
	0x3D34, 0x1073, 0x02,
	0x3D36, 0x0800, 0x02,
	0x3D38, 0x1000, 0x02,
	0x3D3A, 0x1073, 0x02,
	0x3D3C, 0x10A2, 0x02,
	0x3002, 0x0001, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x0081, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x003B, 0x02,
	0x0302, 0x0001, 0x02,
	0x0300, 0x0004, 0x02,
	0x030A, 0x0001, 0x02,
	0x0308, 0x0008, 0x02,
	0x0216, 0x0000, 0x02,
	0x021A, 0x0100, 0x02,
	0x0202, 0x0100, 0x02,
	0x0200, 0x0200, 0x02,
	0x021E, 0x0100, 0x02,
	0x021C, 0x0200, 0x02,
	0x0344, 0x0250, 0x02,
	0x0348, 0x0FCF, 0x02,
	0x0346, 0x01B8, 0x02,
	0x034A, 0x0BE7, 0x02,
	0x034C, 0x0480, 0x02,
	0x034E, 0x0360, 0x02,
	0x0342, 0x1400, 0x02,
	0x0340, 0x038D, 0x02,
	0x3552, 0x00D0, 0x02,
	0x0900, 0x0133, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0005, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0005, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0010, 0x02,
	0x3072, 0x03C0, 0x02,
	0x6214, 0x7970, 0x02,
};

/* 16:9 4x4 margin, EXTCLK 26Mhz */
const u32 sensor_3p3_setfile_A_1152x648_120fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6010, 0x0001, 0x02,

	0x6214, 0x7971, 0x02,
	0x6218, 0x0100, 0x02,
	0x3E58, 0x004B, 0x02,
	0x3D7C, 0x0010, 0x02,
	0x3D88, 0x0064, 0x02,
	0x3D8A, 0x0068, 0x02,
	0x6028, 0x4000, 0x02,
	0x602A, 0xF408, 0x02,
	0x6F12, 0x0048, 0x02,
	0x602A, 0xF40C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AA, 0x02,
	0x6F12, 0x0060, 0x02,
	0x602A, 0xF442, 0x02,
	0x6F12, 0x0800, 0x02,
	0x602A, 0xF43E, 0x02,
	0x6F12, 0x2020, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0xF4AC, 0x02,
	0x6F12, 0x004B, 0x02,
	0x602A, 0xF492, 0x02,
	0x6F12, 0x0016, 0x02,
	0x602A, 0xF480, 0x02,
	0x6F12, 0x0040, 0x02,
	0x602A, 0xF4A4, 0x02,
	0x6F12, 0x0010, 0x02,
	0x3A38, 0x006C, 0x02,
	0x3CD6, 0x0100, 0x02,
	0x3CD8, 0x017F, 0x02,
	0x3CDA, 0x1000, 0x02,
	0x3CDC, 0x104F, 0x02,
	0x3CDE, 0x0180, 0x02,
	0x3CE0, 0x01FF, 0x02,
	0x3CE2, 0x104F, 0x02,
	0x3CE4, 0x104F, 0x02,
	0x3CE6, 0x0200, 0x02,
	0x3CE8, 0x03FF, 0x02,
	0x3CEA, 0x104F, 0x02,
	0x3CEC, 0x1058, 0x02,
	0x3CEE, 0x0400, 0x02,
	0x3CF0, 0x07FF, 0x02,
	0x3CF2, 0x1057, 0x02,
	0x3CF4, 0x1073, 0x02,
	0x3CF6, 0x0800, 0x02,
	0x3CF8, 0x1000, 0x02,
	0x3CFA, 0x1073, 0x02,
	0x3CFC, 0x10A2, 0x02,
	0x3D16, 0x0100, 0x02,
	0x3D18, 0x017F, 0x02,
	0x3D1A, 0x1000, 0x02,
	0x3D1C, 0x104F, 0x02,
	0x3D1E, 0x0180, 0x02,
	0x3D20, 0x01FF, 0x02,
	0x3D22, 0x104F, 0x02,
	0x3D24, 0x104F, 0x02,
	0x3D26, 0x0200, 0x02,
	0x3D28, 0x03FF, 0x02,
	0x3D2A, 0x104F, 0x02,
	0x3D2C, 0x1058, 0x02,
	0x3D2E, 0x0400, 0x02,
	0x3D30, 0x07FF, 0x02,
	0x3D32, 0x1057, 0x02,
	0x3D34, 0x1073, 0x02,
	0x3D36, 0x0800, 0x02,
	0x3D38, 0x1000, 0x02,
	0x3D3A, 0x1073, 0x02,
	0x3D3C, 0x10A2, 0x02,
	0x3002, 0x0001, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x0081, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x003B, 0x02,
	0x0302, 0x0001, 0x02,
	0x0300, 0x0004, 0x02,
	0x030A, 0x0001, 0x02,
	0x0308, 0x0008, 0x02,
	0x0216, 0x0000, 0x02,
	0x021A, 0x0100, 0x02,
	0x0202, 0x0100, 0x02,
	0x0200, 0x0200, 0x02,
	0x021E, 0x0100, 0x02,
	0x021C, 0x0200, 0x02,
	0x0344, 0x0010, 0x02,
	0x0348, 0x120F, 0x02,
	0x0346, 0x01C4, 0x02,
	0x034A, 0x0BE3, 0x02,
	0x034C, 0x0480, 0x02,
	0x034E, 0x0288, 0x02,
	0x0342, 0x141C, 0x02,
	0x0340, 0x0388, 0x02,
	0x3552, 0x00D0, 0x02,
	0x0900, 0x0144, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0007, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0007, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0010, 0x02,
	0x3072, 0x03C0, 0x02,
	0x6214, 0x7970, 0x02,
};

const struct sensor_pll_info sensor_3p3_pllinfo_A_4624x3466_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x04, /* vt_pix_clk_div	(0x0301) */
	0x01, /* vt_sys_clk_div	(0x0303) */
	0x06, /* pre_pll_clk_div	(0x0305) */
	0x81, /* pll_multiplier	(0x0307) */
	0x08, /* op_pix_clk_div	(0x0309) */
	0x01, /* op_sys_clk_div	(0x030B) */

	0x04, /* secnd_pre_pll_clk_div	(0x030D) */
	0x6B, /* secnd_pll_multiplier	(0x030F) */
	0x0E23, /* frame_length_lines	(0x0341) */
	0x141C, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info sensor_3p3_pllinfo_A_4624x3466_24fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x04, /* vt_pix_clk_div	(0x0301) */
	0x01, /* vt_sys_clk_div	(0x0303) */
	0x06, /* pre_pll_clk_div	(0x0305) */
	0x81, /* pll_multiplier	(0x0307) */
	0x08, /* op_pix_clk_div	(0x0309) */
	0x01, /* op_sys_clk_div	(0x030B) */

	0x04, /* secnd_pre_pll_clk_div	(0x030D) */
	0x6B, /* secnd_pll_multiplier	(0x030F) */
	0x11AC, /* frame_length_lines	(0x0341) */
	0x141C, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info sensor_3p3_pllinfo_A_4624x2602_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x04, /* vt_pix_clk_div	(0x0301) */
	0x01, /* vt_sys_clk_div	(0x0303) */
	0x06, /* pre_pll_clk_div	(0x0305) */
	0x81, /* pll_multiplier	(0x0307) */
	0x08, /* op_pix_clk_div	(0x0309) */
	0x01, /* op_sys_clk_div	(0x030B) */

	0x04, /* secnd_pre_pll_clk_div	(0x030D) */
	0x6B, /* secnd_pll_multiplier	(0x030F) */
	0x0E23, /* frame_length_lines	(0x0341) */
	0x141C, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info sensor_3p3_pllinfo_A_4624x2602_24fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x04, /* vt_pix_clk_div	(0x0301) */
	0x01, /* vt_sys_clk_div	(0x0303) */
	0x06, /* pre_pll_clk_div	(0x0305) */
	0x81, /* pll_multiplier	(0x0307) */
	0x08, /* op_pix_clk_div	(0x0309) */
	0x01, /* op_sys_clk_div	(0x030B) */

	0x04, /* secnd_pre_pll_clk_div	(0x030D) */
	0x6B, /* secnd_pll_multiplier	(0x030F) */
	0x11AC, /* frame_length_lines	(0x0341) */
	0x141C, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info sensor_3p3_pllinfo_A_4240x3466_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x04, /* vt_pix_clk_div	(0x0301) */
	0x01, /* vt_sys_clk_div	(0x0303) */
	0x06, /* pre_pll_clk_div	(0x0305) */
	0x81, /* pll_multiplier	(0x0307) */
	0x08, /* op_pix_clk_div	(0x0309) */
	0x01, /* op_sys_clk_div	(0x030B) */

	0x04, /* secnd_pre_pll_clk_div	(0x030D) */
	0x6B, /* secnd_pll_multiplier	(0x030F) */
	0x0E23, /* frame_length_lines	(0x0341) */
	0x141C, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info sensor_3p3_pllinfo_A_4624x3082_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x04, /* vt_pix_clk_div	(0x0301) */
	0x01, /* vt_sys_clk_div	(0x0303) */
	0x06, /* pre_pll_clk_div	(0x0305) */
	0x81, /* pll_multiplier	(0x0307) */
	0x08, /* op_pix_clk_div	(0x0309) */
	0x01, /* op_sys_clk_div	(0x030B) */

	0x04, /* secnd_pre_pll_clk_div	(0x030D) */
	0x6B, /* secnd_pll_multiplier	(0x030F) */
	0x0E23, /* frame_length_lines	(0x0341) */
	0x141C, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info sensor_3p3_pllinfo_A_4336x3466_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x04, /* vt_pix_clk_div	(0x0301) */
	0x01, /* vt_sys_clk_div	(0x0303) */
	0x06, /* pre_pll_clk_div	(0x0305) */
	0x81, /* pll_multiplier	(0x0307) */
	0x08, /* op_pix_clk_div	(0x0309) */
	0x01, /* op_sys_clk_div	(0x030B) */

	0x04, /* secnd_pre_pll_clk_div	(0x030D) */
	0x6B, /* secnd_pll_multiplier	(0x030F) */
	0x0E23, /* frame_length_lines	(0x0341) */
	0x141C, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info sensor_3p3_pllinfo_A_4624x2778_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x04, /* vt_pix_clk_div	(0x0301) */
	0x01, /* vt_sys_clk_div	(0x0303) */
	0x06, /* pre_pll_clk_div	(0x0305) */
	0x81, /* pll_multiplier	(0x0307) */
	0x08, /* op_pix_clk_div	(0x0309) */
	0x01, /* op_sys_clk_div	(0x030B) */

	0x04, /* secnd_pre_pll_clk_div	(0x030D) */
	0x6B, /* secnd_pll_multiplier	(0x030F) */
	0x0E23, /* frame_length_lines	(0x0341) */
	0x141C, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info sensor_3p3_pllinfo_A_2312x1300_60fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x04, /* vt_pix_clk_div	(0x0301) */
	0x01, /* vt_sys_clk_div	(0x0303) */
	0x06, /* pre_pll_clk_div	(0x0305) */
	0x81, /* pll_multiplier	(0x0307) */
	0x08, /* op_pix_clk_div	(0x0309) */
	0x01, /* op_sys_clk_div	(0x030B) */

	0x04, /* secnd_pre_pll_clk_div	(0x030D) */
	0x3B, /* secnd_pll_multiplier	(0x030F) */
	0x0711, /* frame_length_lines	(0x0341) */
	0x141C, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info sensor_3p3_pllinfo_A_1152x864_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x04, /* vt_pix_clk_div	(0x0301) */
	0x01, /* vt_sys_clk_div	(0x0303) */
	0x06, /* pre_pll_clk_div	(0x0305) */
	0x81, /* pll_multiplier	(0x0307) */
	0x08, /* op_pix_clk_div	(0x0309) */
	0x01, /* op_sys_clk_div	(0x030B) */

	0x04, /* secnd_pre_pll_clk_div	(0x030D) */
	0x3B, /* secnd_pll_multiplier	(0x030F) */
	0x038D, /* frame_length_lines	(0x0341) */
	0x1400, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info sensor_3p3_pllinfo_A_1152x648_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x04, /* vt_pix_clk_div	(0x0301) */
	0x01, /* vt_sys_clk_div	(0x0303) */
	0x06, /* pre_pll_clk_div	(0x0305) */
	0x81, /* pll_multiplier	(0x0307) */
	0x08, /* op_pix_clk_div	(0x0309) */
	0x01, /* op_sys_clk_div	(0x030B) */

	0x04, /* secnd_pre_pll_clk_div	(0x030D) */
	0x3B, /* secnd_pll_multiplier	(0x030F) */
	0x0388, /* frame_length_lines	(0x0341) */
	0x141C, /* line_length_pck	(0x0343) */
};


static const u32 *sensor_3p3_setfiles_A[] = {
	/* 16x12 margin */
	sensor_3p3_setfile_A_4624x3466_30fps,
	sensor_3p3_setfile_A_4624x3466_24fps,
	sensor_3p3_setfile_A_4624x2602_30fps,
	sensor_3p3_setfile_A_4624x2602_24fps,
	sensor_3p3_setfile_A_4240x3466_30fps,
	sensor_3p3_setfile_A_4624x3082_30fps,
	sensor_3p3_setfile_A_4336x3466_30fps,
	sensor_3p3_setfile_A_4624x2778_30fps,
	sensor_3p3_setfile_A_2312x1300_60fps,
	sensor_3p3_setfile_A_1152x864_120fps,
	sensor_3p3_setfile_A_1152x648_120fps,
};

static const u32 sensor_3p3_setfile_A_sizes[] = {
	/* 16x12 margin */
	sizeof(sensor_3p3_setfile_A_4624x3466_30fps) / sizeof(sensor_3p3_setfile_A_4624x3466_30fps[0]),
	sizeof(sensor_3p3_setfile_A_4624x3466_24fps) / sizeof(sensor_3p3_setfile_A_4624x3466_24fps[0]),
	sizeof(sensor_3p3_setfile_A_4624x2602_30fps) / sizeof(sensor_3p3_setfile_A_4624x2602_30fps[0]),
	sizeof(sensor_3p3_setfile_A_4624x2602_24fps) / sizeof(sensor_3p3_setfile_A_4624x2602_24fps[0]),
	sizeof(sensor_3p3_setfile_A_4240x3466_30fps) / sizeof(sensor_3p3_setfile_A_4240x3466_30fps[0]),
	sizeof(sensor_3p3_setfile_A_4624x3082_30fps) / sizeof(sensor_3p3_setfile_A_4624x3082_30fps[0]),
	sizeof(sensor_3p3_setfile_A_4336x3466_30fps) / sizeof(sensor_3p3_setfile_A_4336x3466_30fps[0]),
	sizeof(sensor_3p3_setfile_A_4624x2778_30fps) / sizeof(sensor_3p3_setfile_A_4624x2778_30fps[0]),
	sizeof(sensor_3p3_setfile_A_2312x1300_60fps) / sizeof(sensor_3p3_setfile_A_2312x1300_60fps[0]),
	sizeof(sensor_3p3_setfile_A_1152x864_120fps) / sizeof(sensor_3p3_setfile_A_1152x864_120fps[0]),
	sizeof(sensor_3p3_setfile_A_1152x648_120fps) / sizeof(sensor_3p3_setfile_A_1152x648_120fps[0]),
};

static const struct sensor_pll_info *sensor_3p3_pllinfos_A[] = {
	/* 16x12 margin */
	&sensor_3p3_pllinfo_A_4624x3466_30fps,
	&sensor_3p3_pllinfo_A_4624x3466_24fps,
	&sensor_3p3_pllinfo_A_4624x2602_30fps,
	&sensor_3p3_pllinfo_A_4624x2602_24fps,
	&sensor_3p3_pllinfo_A_4240x3466_30fps,
	&sensor_3p3_pllinfo_A_4624x3082_30fps,
	&sensor_3p3_pllinfo_A_4336x3466_30fps,
	&sensor_3p3_pllinfo_A_4624x2778_30fps,
	&sensor_3p3_pllinfo_A_2312x1300_60fps,
	&sensor_3p3_pllinfo_A_1152x864_120fps,
	&sensor_3p3_pllinfo_A_1152x648_120fps,
};

#endif

