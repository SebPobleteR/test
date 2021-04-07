/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2015 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_CIS_3M3_SET_A_H
#define FIMC_IS_CIS_3M3_SET_A_H

#include "fimc-is-cis.h"
#include "fimc-is-cis-3m3.h"

/* S5K3M3SM_EVT0.1_Ver_2.0_20180724 */
const u32 sensor_3m3_setfile_A_Global[] = {
	0xFCFC,	0x4000,	0x02,
	0x6010,	0x0001,	0x02,
	I2C_MODE_DELAY,        3000,        0x00,
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x6004,	0x0001,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x30EC,	0x02,
	I2C_MODE_BURST_ADDR,	0x6F12,	0x02,
	I2C_MODE_BURST_DATA,	0x0000,	0x02,
	I2C_MODE_BURST_DATA,	0x0000,	0x02,
	I2C_MODE_BURST_DATA,	0x0449,	0x02,
	I2C_MODE_BURST_DATA,	0x0348,	0x02,
	I2C_MODE_BURST_DATA,	0x044A,	0x02,
	I2C_MODE_BURST_DATA,	0x0860,	0x02,
	I2C_MODE_BURST_DATA,	0x101A,	0x02,
	I2C_MODE_BURST_DATA,	0x8880,	0x02,
	I2C_MODE_BURST_DATA,	0x00F0,	0x02,
	I2C_MODE_BURST_DATA,	0x5CB9,	0x02,
	I2C_MODE_BURST_DATA,	0x2000,	0x02,
	I2C_MODE_BURST_DATA,	0x3444,	0x02,
	I2C_MODE_BURST_DATA,	0x2000,	0x02,
	I2C_MODE_BURST_DATA,	0x1E80,	0x02,
	I2C_MODE_BURST_DATA,	0x2000,	0x02,
	I2C_MODE_BURST_DATA,	0x4C00,	0x02,
	I2C_MODE_BURST_DATA,	0x0000,	0x02,
	I2C_MODE_BURST_DATA,	0x0000,	0x02,
	I2C_MODE_BURST_DATA,	0xF0B5,	0x02,
	I2C_MODE_BURST_DATA,	0x5E88,	0x02,
	I2C_MODE_BURST_DATA,	0x1F89,	0x02,
	I2C_MODE_BURST_DATA,	0x9D88,	0x02,
	I2C_MODE_BURST_DATA,	0xF419,	0x02,
	I2C_MODE_BURST_DATA,	0x641B,	0x02,
	I2C_MODE_BURST_DATA,	0x25B2,	0x02,
	I2C_MODE_BURST_DATA,	0x1C88,	0x02,
	I2C_MODE_BURST_DATA,	0x002D,	0x02,
	I2C_MODE_BURST_DATA,	0x01DC,	0x02,
	I2C_MODE_BURST_DATA,	0x7D1B,	0x02,
	I2C_MODE_BURST_DATA,	0x08E0,	0x02,
	I2C_MODE_BURST_DATA,	0x6D1E,	0x02,
	I2C_MODE_BURST_DATA,	0x2544,	0x02,
	I2C_MODE_BURST_DATA,	0x95FB,	0x02,
	I2C_MODE_BURST_DATA,	0xF4FC,	0x02,
	I2C_MODE_BURST_DATA,	0x04FB,	0x02,
	I2C_MODE_BURST_DATA,	0x1C55,	0x02,
	I2C_MODE_BURST_DATA,	0x2744,	0x02,
	I2C_MODE_BURST_DATA,	0x7D1B,	0x02,
	I2C_MODE_BURST_DATA,	0x6D1E,	0x02,
	I2C_MODE_BURST_DATA,	0x5F89,	0x02,
	I2C_MODE_BURST_DATA,	0xB3F8,	0x02,
	I2C_MODE_BURST_DATA,	0x06C0,	0x02,
	I2C_MODE_BURST_DATA,	0x3744,	0x02,
	I2C_MODE_BURST_DATA,	0xADB2,	0x02,
	I2C_MODE_BURST_DATA,	0x6745,	0x02,
	I2C_MODE_BURST_DATA,	0x00D3,	0x02,
	I2C_MODE_BURST_DATA,	0x6746,	0x02,
	I2C_MODE_BURST_DATA,	0x2E44,	0x02,
	I2C_MODE_BURST_DATA,	0xBE1B,	0x02,
	I2C_MODE_BURST_DATA,	0xB6B2,	0x02,
	I2C_MODE_BURST_DATA,	0xB6FB,	0x02,
	I2C_MODE_BURST_DATA,	0xF4F4,	0x02,
	I2C_MODE_BURST_DATA,	0x0580,	0x02,
	I2C_MODE_BURST_DATA,	0x1888,	0x02,
	I2C_MODE_BURST_DATA,	0x04FB,	0x02,
	I2C_MODE_BURST_DATA,	0x0050,	0x02,
	I2C_MODE_BURST_DATA,	0x0880,	0x02,
	I2C_MODE_BURST_DATA,	0x1480,	0x02,
	I2C_MODE_BURST_DATA,	0xF0BD,	0x02,
	I2C_MODE_BURST_DATA,	0x2DE9,	0x02,
	I2C_MODE_BURST_DATA,	0xF043,	0x02,
	I2C_MODE_BURST_DATA,	0x0446,	0x02,
	I2C_MODE_BURST_DATA,	0x9C48,	0x02,
	I2C_MODE_BURST_DATA,	0x1646,	0x02,
	I2C_MODE_BURST_DATA,	0x0D46,	0x02,
	I2C_MODE_BURST_DATA,	0x0068,	0x02,
	I2C_MODE_BURST_DATA,	0x85B0,	0x02,
	I2C_MODE_BURST_DATA,	0x87B2,	0x02,
	I2C_MODE_BURST_DATA,	0x4FEA,	0x02,
	I2C_MODE_BURST_DATA,	0x1048,	0x02,
	I2C_MODE_BURST_DATA,	0x0022,	0x02,
	I2C_MODE_BURST_DATA,	0x3946,	0x02,
	I2C_MODE_BURST_DATA,	0x4046,	0x02,
	I2C_MODE_BURST_DATA,	0x00F0,	0x02,
	I2C_MODE_BURST_DATA,	0x39F9,	0x02,
	I2C_MODE_BURST_DATA,	0x3246,	0x02,
	I2C_MODE_BURST_DATA,	0x2946,	0x02,
	I2C_MODE_BURST_DATA,	0x2046,	0x02,
	I2C_MODE_BURST_DATA,	0x00F0,	0x02,
	I2C_MODE_BURST_DATA,	0x39F9,	0x02,
	I2C_MODE_BURST_DATA,	0x0122,	0x02,
	I2C_MODE_BURST_DATA,	0x3946,	0x02,
	I2C_MODE_BURST_DATA,	0x4046,	0x02,
	I2C_MODE_BURST_DATA,	0x00F0,	0x02,
	I2C_MODE_BURST_DATA,	0x2FF9,	0x02,
	I2C_MODE_BURST_DATA,	0xDFF8,	0x02,
	I2C_MODE_BURST_DATA,	0x4892,	0x02,
	I2C_MODE_BURST_DATA,	0xB9F8,	0x02,
	I2C_MODE_BURST_DATA,	0x5C00,	0x02,
	I2C_MODE_BURST_DATA,	0x0028,	0x02,
	I2C_MODE_BURST_DATA,	0x7ED0,	0x02,
	I2C_MODE_BURST_DATA,	0x0027,	0x02,
	I2C_MODE_BURST_DATA,	0xADF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0070,	0x02,
	I2C_MODE_BURST_DATA,	0x94F8,	0x02,
	I2C_MODE_BURST_DATA,	0x6C00,	0x02,
	I2C_MODE_BURST_DATA,	0x0028,	0x02,
	I2C_MODE_BURST_DATA,	0x2088,	0x02,
	I2C_MODE_BURST_DATA,	0x07D0,	0x02,
	I2C_MODE_BURST_DATA,	0xB4F8,	0x02,
	I2C_MODE_BURST_DATA,	0x6410,	0x02,
	I2C_MODE_BURST_DATA,	0x94F8,	0x02,
	I2C_MODE_BURST_DATA,	0x6820,	0x02,
	I2C_MODE_BURST_DATA,	0x01FB,	0x02,
	I2C_MODE_BURST_DATA,	0x0200,	0x02,
	I2C_MODE_BURST_DATA,	0xC0F5,	0x02,
	I2C_MODE_BURST_DATA,	0x8450,	0x02,
	I2C_MODE_BURST_DATA,	0x80B2,	0x02,
	I2C_MODE_BURST_DATA,	0xADF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0A00,	0x02,
	I2C_MODE_BURST_DATA,	0x94F8,	0x02,
	I2C_MODE_BURST_DATA,	0x6910,	0x02,
	I2C_MODE_BURST_DATA,	0x4FF0,	0x02,
	I2C_MODE_BURST_DATA,	0x4008,	0x02,
	I2C_MODE_BURST_DATA,	0xB0FB,	0x02,
	I2C_MODE_BURST_DATA,	0xF1F0,	0x02,
	I2C_MODE_BURST_DATA,	0xADF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0A00,	0x02,
	I2C_MODE_BURST_DATA,	0x94F8,	0x02,
	I2C_MODE_BURST_DATA,	0x6900,	0x02,
	I2C_MODE_BURST_DATA,	0x02AB,	0x02,
	I2C_MODE_BURST_DATA,	0xB8FB,	0x02,
	I2C_MODE_BURST_DATA,	0xF0F1,	0x02,
	I2C_MODE_BURST_DATA,	0xADF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0810,	0x02,
	I2C_MODE_BURST_DATA,	0x6021,	0x02,
	I2C_MODE_BURST_DATA,	0xB1FB,	0x02,
	I2C_MODE_BURST_DATA,	0xF0F0,	0x02,
	I2C_MODE_BURST_DATA,	0xADF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0C00,	0x02,
	I2C_MODE_BURST_DATA,	0x94F8,	0x02,
	I2C_MODE_BURST_DATA,	0x6900,	0x02,
	I2C_MODE_BURST_DATA,	0x4FF4,	0x02,
	I2C_MODE_BURST_DATA,	0x8151,	0x02,
	I2C_MODE_BURST_DATA,	0xB1FB,	0x02,
	I2C_MODE_BURST_DATA,	0xF0F0,	0x02,
	I2C_MODE_BURST_DATA,	0xADF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0E00,	0x02,
	I2C_MODE_BURST_DATA,	0xB4F8,	0x02,
	I2C_MODE_BURST_DATA,	0x9E10,	0x02,
	I2C_MODE_BURST_DATA,	0x7089,	0x02,
	I2C_MODE_BURST_DATA,	0x0909,	0x02,
	I2C_MODE_BURST_DATA,	0x4843,	0x02,
	I2C_MODE_BURST_DATA,	0xADF8,	0x02,
	I2C_MODE_BURST_DATA,	0x1200,	0x02,
	I2C_MODE_BURST_DATA,	0x3088,	0x02,
	I2C_MODE_BURST_DATA,	0xADF8,	0x02,
	I2C_MODE_BURST_DATA,	0x1000,	0x02,
	I2C_MODE_BURST_DATA,	0x05F1,	0x02,
	I2C_MODE_BURST_DATA,	0x1E01,	0x02,
	I2C_MODE_BURST_DATA,	0x6A46,	0x02,
	I2C_MODE_BURST_DATA,	0x881E,	0x02,
	I2C_MODE_BURST_DATA,	0xFFF7,	0x02,
	I2C_MODE_BURST_DATA,	0x78FF,	0x02,
	I2C_MODE_BURST_DATA,	0xBDF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0000,	0x02,
	I2C_MODE_BURST_DATA,	0x7E21,	0x02,
	I2C_MODE_BURST_DATA,	0xB1EB,	0x02,
	I2C_MODE_BURST_DATA,	0x400F,	0x02,
	I2C_MODE_BURST_DATA,	0x01D2,	0x02,
	I2C_MODE_BURST_DATA,	0x7E20,	0x02,
	I2C_MODE_BURST_DATA,	0x00E0,	0x02,
	I2C_MODE_BURST_DATA,	0x4000,	0x02,
	I2C_MODE_BURST_DATA,	0x80B2,	0x02,
	I2C_MODE_BURST_DATA,	0x0C21,	0x02,
	I2C_MODE_BURST_DATA,	0xB0FB,	0x02,
	I2C_MODE_BURST_DATA,	0xF1F2,	0x02,
	I2C_MODE_BURST_DATA,	0x2881,	0x02,
	I2C_MODE_BURST_DATA,	0x6A81,	0x02,
	I2C_MODE_BURST_DATA,	0xB0FB,	0x02,
	I2C_MODE_BURST_DATA,	0xF1F2,	0x02,
	I2C_MODE_BURST_DATA,	0x01FB,	0x02,
	I2C_MODE_BURST_DATA,	0x1200,	0x02,
	I2C_MODE_BURST_DATA,	0xA881,	0x02,
	I2C_MODE_BURST_DATA,	0xADF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0470,	0x02,
	I2C_MODE_BURST_DATA,	0x94F8,	0x02,
	I2C_MODE_BURST_DATA,	0x6D00,	0x02,
	I2C_MODE_BURST_DATA,	0x0028,	0x02,
	I2C_MODE_BURST_DATA,	0x6088,	0x02,
	I2C_MODE_BURST_DATA,	0x07D0,	0x02,
	I2C_MODE_BURST_DATA,	0xB4F8,	0x02,
	I2C_MODE_BURST_DATA,	0x6610,	0x02,
	I2C_MODE_BURST_DATA,	0x94F8,	0x02,
	I2C_MODE_BURST_DATA,	0x6A20,	0x02,
	I2C_MODE_BURST_DATA,	0x01FB,	0x02,
	I2C_MODE_BURST_DATA,	0x0200,	0x02,
	I2C_MODE_BURST_DATA,	0xC0F5,	0x02,
	I2C_MODE_BURST_DATA,	0x4460,	0x02,
	I2C_MODE_BURST_DATA,	0x80B2,	0x02,
	I2C_MODE_BURST_DATA,	0xADF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0A00,	0x02,
	I2C_MODE_BURST_DATA,	0x94F8,	0x02,
	I2C_MODE_BURST_DATA,	0x6B10,	0x02,
	I2C_MODE_BURST_DATA,	0xB0FB,	0x02,
	I2C_MODE_BURST_DATA,	0xF1F0,	0x02,
	I2C_MODE_BURST_DATA,	0xADF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0A00,	0x02,
	I2C_MODE_BURST_DATA,	0x94F8,	0x02,
	I2C_MODE_BURST_DATA,	0x6B00,	0x02,
	I2C_MODE_BURST_DATA,	0xB8FB,	0x02,
	I2C_MODE_BURST_DATA,	0xF0F1,	0x02,
	I2C_MODE_BURST_DATA,	0xADF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0810,	0x02,
	I2C_MODE_BURST_DATA,	0x2021,	0x02,
	I2C_MODE_BURST_DATA,	0xB1FB,	0x02,
	I2C_MODE_BURST_DATA,	0xF0F0,	0x02,
	I2C_MODE_BURST_DATA,	0xADF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0C00,	0x02,
	I2C_MODE_BURST_DATA,	0x94F8,	0x02,
	I2C_MODE_BURST_DATA,	0x6B10,	0x02,
	I2C_MODE_BURST_DATA,	0x4FF4,	0x02,
	I2C_MODE_BURST_DATA,	0x4268,	0x02,
	I2C_MODE_BURST_DATA,	0xB8FB,	0x02,
	I2C_MODE_BURST_DATA,	0xF1F0,	0x02,
	I2C_MODE_BURST_DATA,	0xADF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0E00,	0x02,
	I2C_MODE_BURST_DATA,	0x00E0,	0x02,
	I2C_MODE_BURST_DATA,	0x57E0,	0x02,
	I2C_MODE_BURST_DATA,	0xB089,	0x02,
	I2C_MODE_BURST_DATA,	0x718A,	0x02,
	I2C_MODE_BURST_DATA,	0x4F4F,	0x02,
	I2C_MODE_BURST_DATA,	0x401A,	0x02,
	I2C_MODE_BURST_DATA,	0xADF8,	0x02,
	I2C_MODE_BURST_DATA,	0x1200,	0x02,
	I2C_MODE_BURST_DATA,	0x7088,	0x02,
	I2C_MODE_BURST_DATA,	0x94F8,	0x02,
	I2C_MODE_BURST_DATA,	0xB210,	0x02,
	I2C_MODE_BURST_DATA,	0x02AB,	0x02,
	I2C_MODE_BURST_DATA,	0x401A,	0x02,
	I2C_MODE_BURST_DATA,	0xADF8,	0x02,
	I2C_MODE_BURST_DATA,	0x1000,	0x02,
	I2C_MODE_BURST_DATA,	0x6A46,	0x02,
	I2C_MODE_BURST_DATA,	0x01A9,	0x02,
	I2C_MODE_BURST_DATA,	0xB81C,	0x02,
	I2C_MODE_BURST_DATA,	0xFFF7,	0x02,
	I2C_MODE_BURST_DATA,	0x25FF,	0x02,
	I2C_MODE_BURST_DATA,	0xB9F8,	0x02,
	I2C_MODE_BURST_DATA,	0x5E00,	0x02,
	I2C_MODE_BURST_DATA,	0xB8B1,	0x02,
	I2C_MODE_BURST_DATA,	0x94F8,	0x02,
	I2C_MODE_BURST_DATA,	0x6D00,	0x02,
	I2C_MODE_BURST_DATA,	0x90B9,	0x02,
	I2C_MODE_BURST_DATA,	0xBDF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0A10,	0x02,
	I2C_MODE_BURST_DATA,	0xBDF8,	0x02,
	I2C_MODE_BURST_DATA,	0x1200,	0x02,
	I2C_MODE_BURST_DATA,	0x0144,	0x02,
	I2C_MODE_BURST_DATA,	0x4145,	0x02,
	I2C_MODE_BURST_DATA,	0x0BD8,	0x02,
	I2C_MODE_BURST_DATA,	0xBDF8,	0x02,
	I2C_MODE_BURST_DATA,	0x1010,	0x02,
	I2C_MODE_BURST_DATA,	0x0844,	0x02,
	I2C_MODE_BURST_DATA,	0x7988,	0x02,
	I2C_MODE_BURST_DATA,	0x401A,	0x02,
	I2C_MODE_BURST_DATA,	0xBDF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0810,	0x02,
	I2C_MODE_BURST_DATA,	0x90FB,	0x02,
	I2C_MODE_BURST_DATA,	0xF1F2,	0x02,
	I2C_MODE_BURST_DATA,	0x01FB,	0x02,
	I2C_MODE_BURST_DATA,	0x1200,	0x02,
	I2C_MODE_BURST_DATA,	0x70B1,	0x02,
	I2C_MODE_BURST_DATA,	0x0020,	0x02,
	I2C_MODE_BURST_DATA,	0xB880,	0x02,
	I2C_MODE_BURST_DATA,	0x7888,	0x02,
	I2C_MODE_BURST_DATA,	0x94F8,	0x02,
	I2C_MODE_BURST_DATA,	0x9210,	0x02,
	I2C_MODE_BURST_DATA,	0x0844,	0x02,
	I2C_MODE_BURST_DATA,	0xE882,	0x02,
	I2C_MODE_BURST_DATA,	0xB888,	0x02,
	I2C_MODE_BURST_DATA,	0x38B1,	0x02,
	I2C_MODE_BURST_DATA,	0xBDF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0800,	0x02,
	I2C_MODE_BURST_DATA,	0xBDF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0410,	0x02,
	I2C_MODE_BURST_DATA,	0x081A,	0x02,
	I2C_MODE_BURST_DATA,	0x03E0,	0x02,
	I2C_MODE_BURST_DATA,	0x0120,	0x02,
	I2C_MODE_BURST_DATA,	0xEFE7,	0x02,
	I2C_MODE_BURST_DATA,	0xBDF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0400,	0x02,
	I2C_MODE_BURST_DATA,	0x80B2,	0x02,
	I2C_MODE_BURST_DATA,	0xADF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0400,	0x02,
	I2C_MODE_BURST_DATA,	0x94F8,	0x02,
	I2C_MODE_BURST_DATA,	0x9210,	0x02,
	I2C_MODE_BURST_DATA,	0x0144,	0x02,
	I2C_MODE_BURST_DATA,	0x2983,	0x02,
	I2C_MODE_BURST_DATA,	0x6988,	0x02,
	I2C_MODE_BURST_DATA,	0xBDF8,	0x02,
	I2C_MODE_BURST_DATA,	0x0C20,	0x02,
	I2C_MODE_BURST_DATA,	0x9142,	0x02,
	I2C_MODE_BURST_DATA,	0x04D9,	0x02,
	I2C_MODE_BURST_DATA,	0xE980,	0x02,
	I2C_MODE_BURST_DATA,	0x7A88,	0x02,
	I2C_MODE_BURST_DATA,	0x1144,	0x02,
	I2C_MODE_BURST_DATA,	0xE980,	0x02,
	I2C_MODE_BURST_DATA,	0x00E0,	0x02,
	I2C_MODE_BURST_DATA,	0xEA80,	0x02,
	I2C_MODE_BURST_DATA,	0xE988,	0x02,
	I2C_MODE_BURST_DATA,	0x728A,	0x02,
	I2C_MODE_BURST_DATA,	0x1144,	0x02,
	I2C_MODE_BURST_DATA,	0xE980,	0x02,
	I2C_MODE_BURST_DATA,	0x7A88,	0x02,
	I2C_MODE_BURST_DATA,	0x801A,	0x02,
	I2C_MODE_BURST_DATA,	0x0844,	0x02,
	I2C_MODE_BURST_DATA,	0xA880,	0x02,
	I2C_MODE_BURST_DATA,	0x05B0,	0x02,
	I2C_MODE_BURST_DATA,	0xBDE8,	0x02,
	I2C_MODE_BURST_DATA,	0xF083,	0x02,
	I2C_MODE_BURST_DATA,	0x2DE9,	0x02,
	I2C_MODE_BURST_DATA,	0xF041,	0x02,
	I2C_MODE_BURST_DATA,	0x8046,	0x02,
	I2C_MODE_BURST_DATA,	0x1F48,	0x02,
	I2C_MODE_BURST_DATA,	0x1546,	0x02,
	I2C_MODE_BURST_DATA,	0x0E46,	0x02,
	I2C_MODE_BURST_DATA,	0x4368,	0x02,
	I2C_MODE_BURST_DATA,	0x0022,	0x02,
	I2C_MODE_BURST_DATA,	0x1C0C,	0x02,
	I2C_MODE_BURST_DATA,	0x9FB2,	0x02,
	I2C_MODE_BURST_DATA,	0x3946,	0x02,
	I2C_MODE_BURST_DATA,	0x2046,	0x02,
	I2C_MODE_BURST_DATA,	0x00F0,	0x02,
	I2C_MODE_BURST_DATA,	0x40F8,	0x02,
	I2C_MODE_BURST_DATA,	0x2A46,	0x02,
	I2C_MODE_BURST_DATA,	0x3146,	0x02,
	I2C_MODE_BURST_DATA,	0x4046,	0x02,
	I2C_MODE_BURST_DATA,	0x00F0,	0x02,
	I2C_MODE_BURST_DATA,	0x45F8,	0x02,
	I2C_MODE_BURST_DATA,	0x0646,	0x02,
	I2C_MODE_BURST_DATA,	0x0122,	0x02,
	I2C_MODE_BURST_DATA,	0x3946,	0x02,
	I2C_MODE_BURST_DATA,	0x2046,	0x02,
	I2C_MODE_BURST_DATA,	0x00F0,	0x02,
	I2C_MODE_BURST_DATA,	0x35F8,	0x02,
	I2C_MODE_BURST_DATA,	0x95F8,	0x02,
	I2C_MODE_BURST_DATA,	0x6B00,	0x02,
	I2C_MODE_BURST_DATA,	0x4021,	0x02,
	I2C_MODE_BURST_DATA,	0xB1FB,	0x02,
	I2C_MODE_BURST_DATA,	0xF0F1,	0x02,
	I2C_MODE_BURST_DATA,	0x1448,	0x02,
	I2C_MODE_BURST_DATA,	0x028B,	0x02,
	I2C_MODE_BURST_DATA,	0xC08A,	0x02,
	I2C_MODE_BURST_DATA,	0x101A,	0x02,
	I2C_MODE_BURST_DATA,	0x90FB,	0x02,
	I2C_MODE_BURST_DATA,	0xF1F0,	0x02,
	I2C_MODE_BURST_DATA,	0x4FF6,	0x02,
	I2C_MODE_BURST_DATA,	0xFF71,	0x02,
	I2C_MODE_BURST_DATA,	0x01EA,	0x02,
	I2C_MODE_BURST_DATA,	0x0010,	0x02,
	I2C_MODE_BURST_DATA,	0x0D49,	0x02,
	I2C_MODE_BURST_DATA,	0xB1F8,	0x02,
	I2C_MODE_BURST_DATA,	0x5C10,	0x02,
	I2C_MODE_BURST_DATA,	0x0029,	0x02,
	I2C_MODE_BURST_DATA,	0x00D1,	0x02,
	I2C_MODE_BURST_DATA,	0x3046,	0x02,
	I2C_MODE_BURST_DATA,	0xBDE8,	0x02,
	I2C_MODE_BURST_DATA,	0xF081,	0x02,
	I2C_MODE_BURST_DATA,	0x10B5,	0x02,
	I2C_MODE_BURST_DATA,	0x0022,	0x02,
	I2C_MODE_BURST_DATA,	0xAFF2,	0x02,
	I2C_MODE_BURST_DATA,	0x5D21,	0x02,
	I2C_MODE_BURST_DATA,	0x0A48,	0x02,
	I2C_MODE_BURST_DATA,	0x00F0,	0x02,
	I2C_MODE_BURST_DATA,	0x26F8,	0x02,
	I2C_MODE_BURST_DATA,	0x054C,	0x02,
	I2C_MODE_BURST_DATA,	0x0022,	0x02,
	I2C_MODE_BURST_DATA,	0xAFF2,	0x02,
	I2C_MODE_BURST_DATA,	0x7301,	0x02,
	I2C_MODE_BURST_DATA,	0x2060,	0x02,
	I2C_MODE_BURST_DATA,	0x0748,	0x02,
	I2C_MODE_BURST_DATA,	0x00F0,	0x02,
	I2C_MODE_BURST_DATA,	0x1EF8,	0x02,
	I2C_MODE_BURST_DATA,	0x6060,	0x02,
	I2C_MODE_BURST_DATA,	0x10BD,	0x02,
	I2C_MODE_BURST_DATA,	0x0000,	0x02,
	I2C_MODE_BURST_DATA,	0x2000,	0x02,
	I2C_MODE_BURST_DATA,	0x3430,	0x02,
	I2C_MODE_BURST_DATA,	0x2000,	0x02,
	I2C_MODE_BURST_DATA,	0x2F10,	0x02,
	I2C_MODE_BURST_DATA,	0x2000,	0x02,
	I2C_MODE_BURST_DATA,	0x2F70,	0x02,
	I2C_MODE_BURST_DATA,	0x2000,	0x02,
	I2C_MODE_BURST_DATA,	0x1B10,	0x02,
	I2C_MODE_BURST_DATA,	0x0000,	0x02,
	I2C_MODE_BURST_DATA,	0x0B8B,	0x02,
	I2C_MODE_BURST_DATA,	0x0000,	0x02,
	I2C_MODE_BURST_DATA,	0xA135,	0x02,
	I2C_MODE_BURST_DATA,	0x40F6,	0x02,
	I2C_MODE_BURST_DATA,	0x4F0C,	0x02,
	I2C_MODE_BURST_DATA,	0xC0F2,	0x02,
	I2C_MODE_BURST_DATA,	0x000C,	0x02,
	I2C_MODE_BURST_DATA,	0x6047,	0x02,
	I2C_MODE_BURST_DATA,	0x40F6,	0x02,
	I2C_MODE_BURST_DATA,	0x8B3C,	0x02,
	I2C_MODE_BURST_DATA,	0xC0F2,	0x02,
	I2C_MODE_BURST_DATA,	0x000C,	0x02,
	I2C_MODE_BURST_DATA,	0x6047,	0x02,
	I2C_MODE_BURST_DATA,	0x4AF2,	0x02,
	I2C_MODE_BURST_DATA,	0x351C,	0x02,
	I2C_MODE_BURST_DATA,	0xC0F2,	0x02,
	I2C_MODE_BURST_DATA,	0x000C,	0x02,
	I2C_MODE_BURST_DATA,	0x6047,	0x02,
	I2C_MODE_BURST_DATA,	0x4DF6,	0x02,
	I2C_MODE_BURST_DATA,	0x4B2C,	0x02,
	I2C_MODE_BURST_DATA,	0xC0F2,	0x02,
	I2C_MODE_BURST_DATA,	0x000C,	0x02,
	I2C_MODE_BURST_DATA,	0x6047,	0x02,
	I2C_MODE_BURST_DATA,	0x0000,	0x02,
	I2C_MODE_BURST_DATA,	0x0000,	0x02,
	I2C_MODE_BURST_DATA,	0x30D3,	0x02,
	I2C_MODE_BURST_DATA,	0x02BB,	0x02,
	I2C_MODE_BURST_DATA,	0x0000,	0x02,
	I2C_MODE_BURST_DATA,	0x0004,	0x02,
	0x6028,	0x4000,	0x02,
	0x0300,	0x0004,	0x02,
	0x0302,	0x0001,	0x02,
	0x0304,	0x0006,	0x02,
	0x0308,	0x0008,	0x02,
	0x030A,	0x0001,	0x02,
	0x030C,	0x0004,	0x02,
	0x3644,	0x0060,	0x02,
	0x3150,	0x1500,	0x02,
	0x0216,	0x0000,	0x02,
	0xF496,	0x0048,	0x02,
	0x30D4,	0x0300,	0x02,
	0x30D2,	0x0004,	0x02,
	0x30D6,	0x0100,	0x02,
	0x30D8,	0x0100,	0x02,
	0x3EF8,	0x0000,	0x02,
	0x3EFA,	0x0000,	0x02,
	0x1118,	0x43C8,	0x02,
	0x1124,	0x43C8,	0x02,
	0x30AC,	0x0064,	0x02,
	0x708A,	0x1FFF,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x2F40,	0x02,
	0x6F12,	0x0000,	0x02,
	0x602A,	0x2F42,	0x02,
	0x6F12,	0x0044,	0x02,
	0x602A,	0x2F34,	0x02,
	0x6F12,	0x00A0,	0x02,
	0x602A,	0x2F48,	0x02,
	0x6F12,	0xFFF8,	0x02,
	0x602A,	0x2F54,	0x02,
	0x6F12,	0x0034,	0x02,
};

/*  EXTCLK 26Mhz */
const u32 sensor_3m3_setfile_A_4032x3024_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43F1,	0x02,
	0x0306,	0x006F,	0x02,
	0x030E,	0x005C,	0x02,
	0x0344,	0x0060,	0x02,
	0x0346,	0x0038,	0x02,
	0x0348,	0x101F,	0x02,
	0x034A,	0x0C07,	0x02,
	0x034C,	0x0FC0,	0x02,
	0x034E,	0x0BD0,	0x02,
	0x0340,	0x0D48,	0x02,
	0x0342,	0x1268,	0x02,
	0x3000,	0x0001,	0x02,
	0xF440,	0x002F,	0x02,
	0xF494,	0x0030,	0x02,
	0x3604,	0x0000,	0x02,
	0xF4CC,	0x0029,	0x02,
	0xF4CE,	0x002C,	0x02,
	0xF4D0,	0x0034,	0x02,
	0xF4D2,	0x0035,	0x02,
	0xF4D4,	0x0038,	0x02,
	0xF4D6,	0x0039,	0x02,
	0xF4D8,	0x0034,	0x02,
	0xF4DA,	0x0035,	0x02,
	0xF4DC,	0x0038,	0x02,
	0xF4DE,	0x0039,	0x02,
	0x0200,	0x0618,	0x02,
	0x0202,	0x0D27,	0x02,
	0x021E,	0x0400,	0x02,
	0x021C,	0x0000,	0x02,
	0x0900,	0x0011,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0000,	0x02,
	0x0404,	0x0010,	0x02,
	0x0B0E,	0x0100,	0x02,
	0x3058,	0x0001,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x19E0,	0x02,
	0x6F12,	0x0000,	0x02,
	0x317A,	0x0115,	0x02,
	0x30E2,	0x0001,	0x02,
	0x30E4,	0x002B,	0x02,
	0x30DA,	0x0016,	0x02,
	0x30DC,	0x0016,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x2F6C,	0x02,
	0x6F12,	0x0001,	0x02,
	0x602A,	0x2F6E,	0x02,
	0x6F12,	0x0001,	0x02,
};

const u32 sensor_3m3_setfile_A_4032x2268_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43F1,	0x02,
	0x0306,	0x006F,	0x02,
	0x030E,	0x005C,	0x02,
	0x0344,	0x0060,	0x02,
	0x0346,	0x01B0,	0x02,
	0x0348,	0x101F,	0x02,
	0x034A,	0x0A8F,	0x02,
	0x034C,	0x0FC0,	0x02,
	0x034E,	0x08DC,	0x02,
	0x0340,	0x0D48,	0x02,
	0x0342,	0x1268,	0x02,
	0x3000,	0x0001,	0x02,
	0xF440,	0x002F,	0x02,
	0xF494,	0x0030,	0x02,
	0x3604,	0x0000,	0x02,
	0xF4CC,	0x0029,	0x02,
	0xF4CE,	0x002C,	0x02,
	0xF4D0,	0x0034,	0x02,
	0xF4D2,	0x0035,	0x02,
	0xF4D4,	0x0038,	0x02,
	0xF4D6,	0x0039,	0x02,
	0xF4D8,	0x0034,	0x02,
	0xF4DA,	0x0035,	0x02,
	0xF4DC,	0x0038,	0x02,
	0xF4DE,	0x0039,	0x02,
	0x0200,	0x0618,	0x02,
	0x0202,	0x0D27,	0x02,
	0x021E,	0x0400,	0x02,
	0x021C,	0x0000,	0x02,
	0x0900,	0x0011,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0000,	0x02,
	0x0404,	0x0010,	0x02,
	0x0B0E,	0x0100,	0x02,
	0x3058,	0x0001,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x19E0,	0x02,
	0x6F12,	0x0000,	0x02,
	0x317A,	0x0115,	0x02,
	0x30E2,	0x0001,	0x02,
	0x30E4,	0x002B,	0x02,
	0x30DA,	0x0016,	0x02,
	0x30DC,	0x0016,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x2F6C,	0x02,
	0x6F12,	0x0001,	0x02,
	0x602A,	0x2F6E,	0x02,
	0x6F12,	0x0001,	0x02,
};

/* 18.5:9 setting */
const u32 sensor_3m3_setfile_A_4032x1960_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x1130, 0x43F1, 0x02,
	0x0306, 0x006F, 0x02,
	0x030E, 0x005C, 0x02,
	0x0344, 0x0060, 0x02,
	0x0346, 0x0250, 0x02,
	0x0348, 0x101F, 0x02,
	0x034A, 0x09F7, 0x02,
	0x034C, 0x0FC0, 0x02,
	0x034E, 0x07A8, 0x02,
	0x0340, 0x0D48, 0x02,
	0x0342, 0x1268, 0x02,
	0x3000, 0x0001, 0x02,
	0xF440, 0x002F, 0x02,
	0xF494, 0x0030, 0x02,
	0x3604, 0x0000, 0x02,
	0xF4CC, 0x0029, 0x02,
	0xF4CE, 0x002C, 0x02,
	0xF4D0, 0x0034, 0x02,
	0xF4D2, 0x0035, 0x02,
	0xF4D4, 0x0038, 0x02,
	0xF4D6, 0x0039, 0x02,
	0xF4D8, 0x0034, 0x02,
	0xF4DA, 0x0035, 0x02,
	0xF4DC, 0x0038, 0x02,
	0xF4DE, 0x0039, 0x02,
	0x0200, 0x0618, 0x02,
	0x0202, 0x0D27, 0x02,
	0x021E, 0x0400, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x0B0E, 0x0100, 0x02,
	0x3058, 0x0001, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x19E0, 0x02,
	0x6F12, 0x0000, 0x02,
	0x317A, 0x0115, 0x02,
	0x30E2, 0x0001, 0x02,
	0x30E4, 0x002B, 0x02,
	0x30DA, 0x0016, 0x02,
	0x30DC, 0x0016, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x2F6C, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x2F6E, 0x02,
	0x6F12, 0x0001, 0x02,
	//0x0100, 0x0100, 0x02,
};

/* 19:9 setting */
const u32 sensor_3m3_setfile_A_4032x1908_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43F1,	0x02,
	0x0306,	0x006F,	0x02,
	0x030E,	0x005C,	0x02,
	0x0344,	0x0060,	0x02,
	0x0346,	0x0268,	0x02,
	0x0348,	0x101F,	0x02,
	0x034A,	0x09DF,	0x02,
	0x034C,	0x0FC0,	0x02,
	0x034E,	0x0774,	0x02,
	0x0340,	0x0D48,	0x02,
	0x0342,	0x1268,	0x02,
	0x3000,	0x0001,	0x02,
	0xF440,	0x002F,	0x02,
	0xF494,	0x0030,	0x02,
	0x3604,	0x0000,	0x02,
	0xF4CC,	0x0029,	0x02,
	0xF4CE,	0x002C,	0x02,
	0xF4D0,	0x0034,	0x02,
	0xF4D2,	0x0035,	0x02,
	0xF4D4,	0x0038,	0x02,
	0xF4D6,	0x0039,	0x02,
	0xF4D8,	0x0034,	0x02,
	0xF4DA,	0x0035,	0x02,
	0xF4DC,	0x0038,	0x02,
	0xF4DE,	0x0039,	0x02,
	0x0200,	0x0618,	0x02,
	0x0202,	0x0D27,	0x02,
	0x021E,	0x0400,	0x02,
	0x021C,	0x0000,	0x02,
	0x0900,	0x0011,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0000,	0x02,
	0x0404,	0x0010,	0x02,
	0x0B0E,	0x0100,	0x02,
	0x3058,	0x0001,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x19E0,	0x02,
	0x6F12,	0x0000,	0x02,
	0x317A,	0x0115,	0x02,
	0x30E2,	0x0001,	0x02,
	0x30E4,	0x002B,	0x02,
	0x30DA,	0x0016,	0x02,
	0x30DC,	0x0016,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x2F6C,	0x02,
	0x6F12,	0x0001,	0x02,
	0x602A,	0x2F6E,	0x02,
	0x6F12,	0x0001,	0x02,
};

const u32 sensor_3m3_setfile_A_3024x3024_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43F1,	0x02,
	0x0306,	0x006F,	0x02,
	0x030E,	0x005C,	0x02,
	0x0344,	0x0258,	0x02,
	0x0346,	0x0038,	0x02,
	0x0348,	0x0E27,	0x02,
	0x034A,	0x0C07,	0x02,
	0x034C,	0x0BD0,	0x02,
	0x034E,	0x0BD0,	0x02,
	0x0340,	0x0D48,	0x02,
	0x0342,	0x1268,	0x02,
	0x3000,	0x0001,	0x02,
	0xF440,	0x002F,	0x02,
	0xF494,	0x0030,	0x02,
	0x3604,	0x0000,	0x02,
	0xF4CC,	0x0029,	0x02,
	0xF4CE,	0x002C,	0x02,
	0xF4D0,	0x0034,	0x02,
	0xF4D2,	0x0035,	0x02,
	0xF4D4,	0x0038,	0x02,
	0xF4D6,	0x0039,	0x02,
	0xF4D8,	0x0034,	0x02,
	0xF4DA,	0x0035,	0x02,
	0xF4DC,	0x0038,	0x02,
	0xF4DE,	0x0039,	0x02,
	0x0200,	0x0618,	0x02,
	0x0202,	0x0D27,	0x02,
	0x021E,	0x0400,	0x02,
	0x021C,	0x0000,	0x02,
	0x0900,	0x0011,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0000,	0x02,
	0x0404,	0x0010,	0x02,
	0x0B0E,	0x0100,	0x02,
	0x3058,	0x0001,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x19E0,	0x02,
	0x6F12,	0x0000,	0x02,
	0x317A,	0x0015,	0x02,
	0x30E2,	0x0001,	0x02,
	0x30E4,	0x002B,	0x02,
	0x30DA,	0x0016,	0x02,
	0x30DC,	0x0016,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x2F6C,	0x02,
	0x6F12,	0x0001,	0x02,
	0x602A,	0x2F6E,	0x02,
	0x6F12,	0x0001,	0x02,
};

const u32 sensor_3m3_setfile_A_2016x1512_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43F1,	0x02,
	0x0306,	0x006F,	0x02,
	0x030E,	0x005C,	0x02,
	0x0344,	0x0060,	0x02,
	0x0346,	0x0038,	0x02,
	0x0348,	0x101F,	0x02,
	0x034A,	0x0C07,	0x02,
	0x034C,	0x07E0,	0x02,
	0x034E,	0x05E8,	0x02,
	0x0340,	0x0667,	0x02,
	0x0342,	0x2628,	0x02,
	0x3000,	0x0001,	0x02,
	0xF440,	0x006F,	0x02,
	0xF494,	0x0020,	0x02,
	0x3604,	0x0000,	0x02,
	0xF4CC,	0x0029,	0x02,
	0xF4CE,	0x002C,	0x02,
	0xF4D0,	0x0034,	0x02,
	0xF4D2,	0x0035,	0x02,
	0xF4D4,	0x0038,	0x02,
	0xF4D6,	0x0039,	0x02,
	0xF4D8,	0x0034,	0x02,
	0xF4DA,	0x0035,	0x02,
	0xF4DC,	0x0038,	0x02,
	0xF4DE,	0x0039,	0x02,
	0x0200,	0x0618,	0x02,
	0x0202,	0x059D,	0x02,
	0x021E,	0x0400,	0x02,
	0x021C,	0x0000,	0x02,
	0x0900,	0x0112,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0003,	0x02,
	0x0400,	0x0001,	0x02,
	0x0404,	0x0020,	0x02,
	0x0B0E,	0x0100,	0x02,
	0x3058,	0x0001,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x19E0,	0x02,
	0x6F12,	0x0000,	0x02,
	0x317A,	0xFFFF,	0x02,
	0x30E2,	0x0001,	0x02,
	0x30E4,	0x002B,	0x02,
	0x30DA,	0x0016,	0x02,
	0x30DC,	0x0016,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x2F6C,	0x02,
	0x6F12,	0x0001,	0x02,
	0x602A,	0x2F6E,	0x02,
	0x6F12,	0x0001,	0x02,
};

const u32 sensor_3m3_setfile_A_1504x1504_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43F1,	0x02,
	0x0306,	0x006F,	0x02,
	0x030E,	0x005C,	0x02,
	0x0344,	0x0260,	0x02,
	0x0346,	0x0040,	0x02,
	0x0348,	0x0E1F,	0x02,
	0x034A,	0x0BFF,	0x02,
	0x034C,	0x05E0,	0x02,
	0x034E,	0x05E0,	0x02,
	0x0340,	0x065F,	0x02,
	0x0342,	0x265E,	0x02,
	0x3000,	0x0001,	0x02,
	0xF440,	0x006F,	0x02,
	0xF494,	0x0020,	0x02,
	0x3604,	0x0000,	0x02,
	0xF4CC,	0x0029,	0x02,
	0xF4CE,	0x002C,	0x02,
	0xF4D0,	0x0034,	0x02,
	0xF4D2,	0x0035,	0x02,
	0xF4D4,	0x0038,	0x02,
	0xF4D6,	0x0039,	0x02,
	0xF4D8,	0x0034,	0x02,
	0xF4DA,	0x0035,	0x02,
	0xF4DC,	0x0038,	0x02,
	0xF4DE,	0x0039,	0x02,
	0x0200,	0x0618,	0x02,
	0x0202,	0x059D,	0x02,
	0x021E,	0x0400,	0x02,
	0x021C,	0x0000,	0x02,
	0x0900,	0x0112,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0003,	0x02,
	0x0400,	0x0001,	0x02,
	0x0404,	0x0020,	0x02,
	0x0B0E,	0x0100,	0x02,
	0x3058,	0x0001,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x19E0,	0x02,
	0x6F12,	0x0000,	0x02,
	0x317A,	0xFFFF,	0x02,
	0x30E2,	0x0001,	0x02,
	0x30E4,	0x002B,	0x02,
	0x30DA,	0x0016,	0x02,
	0x30DC,	0x0016,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x2F6C,	0x02,
	0x6F12,	0x0001,	0x02,
	0x602A,	0x2F6E,	0x02,
	0x6F12,	0x0001,	0x02,
};

const u32 sensor_3m3_setfile_A_1920x1080_60fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43F1,	0x02,
	0x0306,	0x006F,	0x02,
	0x030E,	0x005C,	0x02,
	0x0344,	0x0480,	0x02,
	0x0346,	0x0400,	0x02,
	0x0348,	0x0BFF,	0x02,
	0x034A,	0x0837,	0x02,
	0x034C,	0x0780,	0x02,
	0x034E,	0x0438,	0x02,
	0x0340,	0x069E,	0x02,
	0x0342,	0x1268,	0x02,
	0x3000,	0x0001,	0x02,
	0xF440,	0x002F,	0x02,
	0xF494,	0x0030,	0x02,
	0x3604,	0x0000,	0x02,
	0xF4CC,	0x0029,	0x02,
	0xF4CE,	0x002C,	0x02,
	0xF4D0,	0x0034,	0x02,
	0xF4D2,	0x0035,	0x02,
	0xF4D4,	0x0038,	0x02,
	0xF4D6,	0x0039,	0x02,
	0xF4D8,	0x0034,	0x02,
	0xF4DA,	0x0035,	0x02,
	0xF4DC,	0x0038,	0x02,
	0xF4DE,	0x0039,	0x02,
	0x0200,	0x0618,	0x02,
	0x0202,	0x0D27,	0x02,
	0x021E,	0x0400,	0x02,
	0x021C,	0x0000,	0x02,
	0x0900,	0x0011,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0000,	0x02,
	0x0404,	0x0010,	0x02,
	0x0B0E,	0x0100,	0x02,
	0x3058,	0x0001,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x19E0,	0x02,
	0x6F12,	0x0000,	0x02,
	0x317A,	0x006B,	0x02,
	0x30E2,	0x0001,	0x02,
	0x30E4,	0x002B,	0x02,
	0x30DA,	0x0016,	0x02,
	0x30DC,	0x0016,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x2F6C,	0x02,
	0x6F12,	0x0001,	0x02,
	0x602A,	0x2F6E,	0x02,
	0x6F12,	0x0001,	0x02,
};

const u32 sensor_3m3_setfile_A_1344x756_120fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43F1,	0x02,
	0x0306,	0x006F,	0x02,
	0x030E,	0x005C,	0x02,
	0x0344,	0x0060,	0x02,
	0x0346,	0x01B0,	0x02,
	0x0348,	0x101F,	0x02,
	0x034A,	0x0A97,	0x02,
	0x034C,	0x0540,	0x02,
	0x034E,	0x02F4,	0x02,
	0x0340,	0x0382,	0x02,
	0x0342,	0x1168,	0x02,
	0x3000,	0x0000,	0x02,
	0xF440,	0x00AF,	0x02,
	0xF494,	0x0020,	0x02,
	0x3604,	0x0001,	0x02,
	0xF4CC,	0x0028,	0x02,
	0xF4CE,	0x0028,	0x02,
	0xF4D0,	0x0034,	0x02,
	0xF4D2,	0x0034,	0x02,
	0xF4D4,	0x0FFF,	0x02,
	0xF4D6,	0x0FFF,	0x02,
	0xF4D8,	0x0034,	0x02,
	0xF4DA,	0x0034,	0x02,
	0xF4DC,	0x0FFF,	0x02,
	0xF4DE,	0x0FFF,	0x02,
	0x0200,	0x0618,	0x02,
	0x0202,	0x0369,	0x02,
	0x021E,	0x0400,	0x02,
	0x021C,	0x0000,	0x02,
	0x0900,	0x0113,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0005,	0x02,
	0x0400,	0x0001,	0x02,
	0x0404,	0x0030,	0x02,
	0x0B0E,	0x0100,	0x02,
	0x3058,	0x0000,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x19E0,	0x02,
	0x6F12,	0x0001,	0x02,
	0x317A,	0x0007,	0x02,
	0x30E2,	0x0000,	0x02,
	0x30E4,	0x002B,	0x02,
	0x30DA,	0x0016,	0x02,
	0x30DC,	0x0016,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x2F6C,	0x02,
	0x6F12,	0x0001,	0x02,
	0x602A,	0x2F6E,	0x02,
	0x6F12,	0x0001,	0x02,
};

const u32 sensor_3m3_setfile_A_2016x1134_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43F1,	0x02,
	0x0306,	0x006F,	0x02,
	0x030E,	0x005C,	0x02,
	0x0344,	0x0060,	0x02,
	0x0346,	0x01B0,	0x02,
	0x0348,	0x101F,	0x02,
	0x034A,	0x0A8F,	0x02,
	0x034C,	0x07E0,	0x02,
	0x034E,	0x046E,	0x02,
	0x0340,	0x04D0,	0x02,
	0x0342,	0x32CA,	0x02,
	0x3000,	0x0001,	0x02,
	0xF440,	0x006F,	0x02,
	0xF494,	0x0020,	0x02,
	0x3604,	0x0000,	0x02,
	0xF4CC,	0x0029,	0x02,
	0xF4CE,	0x002C,	0x02,
	0xF4D0,	0x0034,	0x02,
	0xF4D2,	0x0035,	0x02,
	0xF4D4,	0x0038,	0x02,
	0xF4D6,	0x0039,	0x02,
	0xF4D8,	0x0034,	0x02,
	0xF4DA,	0x0035,	0x02,
	0xF4DC,	0x0038,	0x02,
	0xF4DE,	0x0039,	0x02,
	0x0200,	0x0618,	0x02,
	0x0202,	0x059D,	0x02,
	0x021E,	0x0400,	0x02,
	0x021C,	0x0000,	0x02,
	0x0900,	0x0112,	0x02,
	0x0380,	0x0001,	0x02,
	0x0382,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0386,	0x0003,	0x02,
	0x0400,	0x0001,	0x02,
	0x0404,	0x0020,	0x02,
	0x0B0E,	0x0100,	0x02,
	0x3058,	0x0001,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x19E0,	0x02,
	0x6F12,	0x0000,	0x02,
	0x317A,	0xFFFF,	0x02,
	0x30E2,	0x0001,	0x02,
	0x30E4,	0x002B,	0x02,
	0x30DA,	0x0016,	0x02,
	0x30DC,	0x0016,	0x02,
	0x6028,	0x2000,	0x02,
	0x602A,	0x2F6C,	0x02,
	0x6F12,	0x0001,	0x02,
	0x602A,	0x2F6E,	0x02,
	0x6F12,	0x0001,	0x02,
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_A_4032x3024_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0D48, /* frame_length_lines */
	0x1268, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_A_4032x2268_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0D48, /* frame_length_lines */
	0x1268, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_A_4032x1960_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0D48, /* frame_length_lines */
	0x1268, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_A_4032x1908_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0D48, /* frame_length_lines */
	0x1268, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_A_3024x3024_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0D48, /* frame_length_lines */
	0x1268, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_A_2016x1512_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0667, /* frame_length_lines */
	0x2628, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_A_1504x1504_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x065F, /* frame_length_lines */
	0x265E, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_A_1920x1080_60fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x069E, /* frame_length_lines */
	0x1268, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_A_1344x756_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0382, /* frame_length_lines */
	0x1168, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3m3_pllinfo_A_2016x1134_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000, /* mipi_datarate */
	481000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x04D0, /* frame_length_lines */
	0x32CA, /* line_length_pck */
};

static const u32 *sensor_3m3_setfiles_A[] = {
	sensor_3m3_setfile_A_4032x3024_30fps,
	sensor_3m3_setfile_A_4032x2268_30fps,
	sensor_3m3_setfile_A_4032x1960_30fps,
	sensor_3m3_setfile_A_4032x1908_30fps,
	sensor_3m3_setfile_A_3024x3024_30fps,
	sensor_3m3_setfile_A_2016x1512_30fps,
	sensor_3m3_setfile_A_1504x1504_30fps,
	sensor_3m3_setfile_A_1920x1080_60fps,
	sensor_3m3_setfile_A_1344x756_120fps,
	sensor_3m3_setfile_A_2016x1134_30fps,
};

static const u32 sensor_3m3_setfile_A_sizes[] = {
	ARRAY_SIZE(sensor_3m3_setfile_A_4032x3024_30fps),
	ARRAY_SIZE(sensor_3m3_setfile_A_4032x2268_30fps),
	ARRAY_SIZE(sensor_3m3_setfile_A_4032x1960_30fps),
	ARRAY_SIZE(sensor_3m3_setfile_A_4032x1908_30fps),
	ARRAY_SIZE(sensor_3m3_setfile_A_3024x3024_30fps),
	ARRAY_SIZE(sensor_3m3_setfile_A_2016x1512_30fps),
	ARRAY_SIZE(sensor_3m3_setfile_A_1504x1504_30fps),
	ARRAY_SIZE(sensor_3m3_setfile_A_1920x1080_60fps),
	ARRAY_SIZE(sensor_3m3_setfile_A_1344x756_120fps),
	ARRAY_SIZE(sensor_3m3_setfile_A_2016x1134_30fps),
};

static const struct sensor_pll_info_compact *sensor_3m3_pllinfos_A[] = {
	&sensor_3m3_pllinfo_A_4032x3024_30fps,
	&sensor_3m3_pllinfo_A_4032x2268_30fps,
	&sensor_3m3_pllinfo_A_4032x1960_30fps,
	&sensor_3m3_pllinfo_A_4032x1908_30fps,
	&sensor_3m3_pllinfo_A_3024x3024_30fps,
	&sensor_3m3_pllinfo_A_2016x1512_30fps,
	&sensor_3m3_pllinfo_A_1504x1504_30fps,
	&sensor_3m3_pllinfo_A_1920x1080_60fps,
	&sensor_3m3_pllinfo_A_1344x756_120fps,
	&sensor_3m3_pllinfo_A_2016x1134_30fps,
};

#endif
