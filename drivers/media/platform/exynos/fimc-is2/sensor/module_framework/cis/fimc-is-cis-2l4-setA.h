/*
 * Samsung Exynos SoC series Sensor driver
 *
 *
 * Copyright (c) 2016 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_CIS_2L4_SET_A_H
#define FIMC_IS_CIS_2L4_SET_A_H

#include "fimc-is-cis.h"
#include "fimc-is-cis-2l4.h"

/* SAK2L4SX_EVT0.0_Ver_0.0_20180604_2stack_System_bring-up */

/* Reset + TnP */
const u32 sensor_2l4_setfile_A_Reset_TnP[] = {};

/* Global */
const u32 sensor_2l4_setfile_A_Global[] = {
	0xFCFC,	0x4000,	0x02,
	0x6028,	0x2001,	0x02,
	0x602A,	0xA9F4,	0x02,
	0x6F12,	0x0000,	0x02,
	0x64FE,	0x0000,	0x02,
	0x6010,	0x0001,	0x02,
	I2C_MODE_DELAY,        5000,        0x00,
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0005,	0x02,
	0x6214,	0x79F1,	0x02,
	0x6218,	0x7150,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x1D2A,	0x0110,	0x02,
	0x109C,	0x0000,	0x02,
	0x1D22,	0x0658,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0380,	0x0001,	0x02,
	0x0384,	0x0001,	0x02,
	0x0400,	0x0004,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x1030,	0x1D97,	0x02,
	0x1032,	0x1D97,	0x02,
	0x1034,	0x1D33,	0x02,
	0x1036,	0x1D33,	0x02,
	0xAC52,	0x0000,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0136,	0x1A00,	0x02,
	0x0832,	0x0100,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x1018,	0x0901,	0x02,
	0xDE9E,	0x0000,	0x02,
	0xDEA0,	0x0000,	0x02,
	0xDEA2,	0x0000,	0x02,
	0xDEA4,	0x0000,	0x02,
	0xDED2,	0x0000,	0x02,
	0xDED4,	0x0000,	0x02,
	0xDED6,	0x0000,	0x02,
	0xDED8,	0x0000,	0x02,
	0xD7DE,	0x0101,	0x02,
	0xD7E0,	0x0101,	0x02,
	0xD7E2,	0x0100,	0x02,
	0xB664,	0x0100,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x3010,	0x0001,	0x02,
	0x3012,	0x0101,	0x02,
	0x3014,	0x0101,	0x02,
	0x3016,	0x0000,	0x02,
	0x3018,	0x0000,	0x02,
	0x301A,	0x0001,	0x02,
	0x301C,	0x0000,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x1AC4,	0x0000,	0x02,
	0x1AC6,	0x0000,	0x02,
	0x10AC,	0x0001,	0x02,
	0x10B4,	0x0000,	0x02,
	0x10DE,	0x0000,	0x02,
	0x10E6,	0x0202,	0x02,
	0x1122,	0x0000,	0x02,
	0x1134,	0x0000,	0x02,
	0x1136,	0x0000,	0x02,
	0x114E,	0x0004,	0x02,
	0x115A,	0x0000,	0x02,
	0x10AE,	0x0203,	0x02,
	0x10B4,	0x0000,	0x02,
	0x10E0,	0x0000,	0x02,
	0x10E6,	0x0202,	0x02,
	0x1124,	0x0000,	0x02,
	0x1138,	0x0000,	0x02,
	0x113A,	0x0000,	0x02,
	0x1150,	0x0004,	0x02,
	0x115C,	0x0103,	0x02,
	0x10B0,	0x0401,	0x02,
	0x10B6,	0x0000,	0x02,
	0x10E2,	0x0000,	0x02,
	0x10E8,	0x0202,	0x02,
	0x1128,	0x0000,	0x02,
	0x1140,	0x0000,	0x02,
	0x1142,	0x0000,	0x02,
	0x1154,	0x0004,	0x02,
	0x115E,	0x0201,	0x02,
	0xB062,	0x06F9,	0x02,
	0xB064,	0x0530,	0x02,
	0xB066,	0x076C,	0x02,
	0xB06C,	0x06A0,	0x02,
	0xAE10,	0x1551,	0x02,
	0xAE24,	0x0400,	0x02,
	0xAE0C,	0x03FA,	0x02,
	0xAD9C,	0x0709,	0x02,
	0xADAC,	0x0709,	0x02,
	0xAE7C,	0x8562,	0x02,
	0xAE7E,	0x0380,	0x02,
	0xAE80,	0x4050,	0x02,
	0xAC7A,	0x0504,	0x02,
	0xAC8A,	0x0504,	0x02,
	0xAC9A,	0x0504,	0x02,
	0xAD68,	0x0002,	0x02,
	0xAD6A,	0x1848,	0x02,
	0xAD3E,	0x0042,	0x02,
	0xAE1A,	0x0012,	0x02,
	0xFCFC,	0x4000,	0x02,
	0xF44A,	0x000A,	0x02,
	0xF44C,	0x000A,	0x02,
	0xFCFC,	0x2000,	0x02,
	0xAE16,	0x0018,	0x02,
	0xFCFC,	0x4000,	0x02,
	0xF450,	0x0018,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x3CEA,	0xFF86,	0x02,
	0x10EE,	0x00D8,	0x02,
	0xADA0,	0x0709,	0x02,
	0xADB0,	0x0709,	0x02,
	0xAC7E,	0x0504,	0x02,
	0xAC8E,	0x0504,	0x02,
	0xAC9E,	0x0504,	0x02,
	0xAD78,	0x0002,	0x02,
	0xAD7A,	0x1848,	0x02,
	0xAD46,	0x0042,	0x02,
	0x3CF2,	0xFEF8,	0x02,
	0x3D12,	0x0226,	0x02,
	0x2BD2,	0x0007,	0x02,
	0x3A72,	0x0021,	0x02,
	0x3A92,	0x001F,	0x02,
	0x3AB2,	0x0015,	0x02,
	0x3AD2,	0x0013,	0x02,
	0x3AF2,	0x0009,	0x02,
	0x3B92,	0x0025,	0x02,
	0x3BB2,	0x0023,	0x02,
	0x3BD2,	0x0019,	0x02,
	0x3BF2,	0x0017,	0x02,
	0x3C12,	0x000D,	0x02,
	0x3C32,	0x000B,	0x02,
	0x3C52,	0x0001,	0x02,
	0x3C72,	0xFFFF,	0x02,
	0x3C92,	0xFFF5,	0x02,
	0x10F0,	0x0140,	0x02,
	0xADA4,	0x0709,	0x02,
	0xADB4,	0x0709,	0x02,
	0xAC82,	0x0504,	0x02,
	0xAC92,	0x0504,	0x02,
	0xACA2,	0x0504,	0x02,
	0xAD88,	0x0002,	0x02,
	0xAD8A,	0x1848,	0x02,
	0xAD4E,	0x0042,	0x02,
	0x3CFA,	0xFE40,	0x02,
	0x3D1A,	0x04B0,	0x02,
	0x217A,	0x0008,	0x02,
	0x2BDA,	0x0007,	0x02,
	0x3A7A,	0x0021,	0x02,
	0x3A9A,	0x001F,	0x02,
	0x3ABA,	0x0015,	0x02,
	0x3ADA,	0x0013,	0x02,
	0x3AFA,	0x0009,	0x02,
	0x3B9A,	0x0025,	0x02,
	0x3BBA,	0x0023,	0x02,
	0x3BDA,	0x0019,	0x02,
	0x3BFA,	0x0017,	0x02,
	0x3C1A,	0x000D,	0x02,
	0x3C3A,	0x000B,	0x02,
	0x3C5A,	0x0001,	0x02,
	0x3C7A,	0xFFFF,	0x02,
	0x3C9A,	0xFFF5,	0x02,
	0x10F4,	0x0226,	0x02,
	0xADB8,	0x0606,	0x02,
	0xADC8,	0x0606,	0x02,
	0xAD98,	0x0707,	0x02,
	0xADA8,	0x0707,	0x02,
	0xAC76,	0x0A0A,	0x02,
	0xAC86,	0x0A0A,	0x02,
	0xAC96,	0x0A0A,	0x02,
	0xAD36,	0x0042,	0x02,
	0x3CE2,	0xFF66,	0x02,
	0xAC5E,	0x00F0,	0x02,
	0xADB8,	0x0606,	0x02,
	0xADC8,	0x0606,	0x02,
	0xAD98,	0x0707,	0x02,
	0xADA8,	0x0707,	0x02,
	0xAC76,	0x0A0A,	0x02,
	0xAC86,	0x0A0A,	0x02,
	0xAC96,	0x0A0A,	0x02,
	0xAD38,	0x0042,	0x02,
	0x1EC4,	0x0006,	0x02,
	0x1EE4,	0x0028,	0x02,
	0x1F04,	0x0028,	0x02,
	0x1F24,	0x0028,	0x02,
	0x1F44,	0x0028,	0x02,
	0x2104,	0xFFD8,	0x02,
	0x2124,	0xFFD8,	0x02,
	0x2164,	0x0036,	0x02,
	0x2184,	0x0030,	0x02,
	0x2204,	0x00C1,	0x02,
	0x2224,	0x00BB,	0x02,
	0x28C4,	0x0004,	0x02,
	0x28E4,	0x0011,	0x02,
	0x2904,	0x0032,	0x02,
	0x2A84,	0x0008,	0x02,
	0x2AA4,	0x0006,	0x02,
	0x2D44,	0x0002,	0x02,
	0x2D64,	0x0006,	0x02,
	0x2DA4,	0x003B,	0x02,
	0x2DC4,	0x002B,	0x02,
	0x2DE4,	0x0043,	0x02,
	0x2E04,	0x0033,	0x02,
	0x2E24,	0x0043,	0x02,
	0x2E44,	0x0014,	0x02,
	0x2E64,	0x0007,	0x02,
	0x2F64,	0x0007,	0x02,
	0x3144,	0x0007,	0x02,
	0x3164,	0x0004,	0x02,
	0x3244,	0x0007,	0x02,
	0x3264,	0x0004,	0x02,
	0x3464,	0x0007,	0x02,
	0x34A4,	0x0006,	0x02,
	0x3764,	0x0006,	0x02,
	0x37E4,	0x0007,	0x02,
	0x3844,	0x0020,	0x02,
	0x3CA4,	0x0007,	0x02,
	0x3CE4,	0xFF9C,	0x02,
	0x3D24,	0x0002,	0x02,
	0x3D44,	0x0013,	0x02,
	0x3DA4,	0x0040,	0x02,
	0x3DC4,	0x0040,	0x02,
	0x3DE4,	0x00A0,	0x02,
	0x3E04,	0x00A0,	0x02,
	0x3E24,	0x00A0,	0x02,
	0x3E44,	0x00A0,	0x02,
	0x5764,	0x0010,	0x02,
	0x57C4,	0x0009,	0x02,
	0x57E4,	0x000B,	0x02,
	0x5804,	0x0007,	0x02,
	0xADBA,	0x0206,	0x02,
	0xADCA,	0x0206,	0x02,
	0xAD9A,	0x0907,	0x02,
	0xADAA,	0x0907,	0x02,
	0xAC78,	0x080A,	0x02,
	0xAC88,	0x080A,	0x02,
	0xAC98,	0x080A,	0x02,
	0xAD3C,	0x0042,	0x02,
	0x1162,	0xFCFC,	0x02,
	0x1164,	0x1050,	0x02,
	0x128E,	0x2000,	0x02,
	0x1290,	0x1770,	0x02,
	0x13BA,	0x2000,	0x02,
	0x13BC,	0x0000,	0x02,
	0x14E6,	0x2000,	0x02,
	0x14E8,	0x0000,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0085,	0x02,
};

const u32 sensor_2l4_setfile_A_4032x3024_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0005,	0x02,
	0x6214,	0x79F1,	0x02,
	0x6218,	0x7150,	0x02,
	0x0342,	0x2C80,	0x02,
	0x0340,	0x0C58,	0x02,
	0x303C,	0x0001,	0x02,
	0x3040,	0x0001,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x107E,	0x0004,	0x02,
	0x1D26,	0x0BE0,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0344,	0x0038,	0x02,
	0x0348,	0x1FC6,	0x02,
	0x0346,	0x0000,	0x02,
	0x034A,	0x0BDF,	0x02,
	0x034C,	0x0FC0,	0x02,
	0x034E,	0x0BD0,	0x02,
	0x0BC2,	0x0000,	0x02,
	0x0BC6,	0x0000,	0x02,
	0x0408,	0x0005,	0x02,
	0x040A,	0x0007,	0x02,
	0xFCFC,	0x2000,	0x02,
	0xD7D6,	0x0FC0,	0x02,
	0xD7DA,	0x0BD0,	0x02,
	0xD7D4,	0x0004,	0x02,
	0xD7D8,	0x0007,	0x02,
	0xD72E,	0x0000,	0x02,
	0xD730,	0x0000,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0382,	0x0001,	0x02,
	0x0386,	0x0001,	0x02,
	0x0900,	0x0111,	0x02,
	0x303E,	0x0110,	0x02,
	0x303C,	0x0001,	0x02,
	0x3072,	0x0300,	0x02,
	0x3074,	0x0102,	0x02,
	0x3096,	0x012B,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x0F44,	0x0100,	0x02,
	0xDD10,	0x0100,	0x02,
	0x1050,	0x0000,	0x02,
	0xB6B0,	0x0101,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x3068,	0x0102,	0x02,
	0x0B30,	0x0100,	0x02,
	0x021E,	0x0100,	0x02,
	0xFCFC,	0x2000,	0x02,
	0xDD14,	0x3F80,	0x02,
	0xDD16,	0x0000,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0304,	0x0003,	0x02,
	0x0306,	0x00BB,	0x02,
	0x0300,	0x0006,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x6D26,	0x0006,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x3006,	0x0003,	0x02,
	0x0314,	0x0000,	0x02,
	0x0316,	0x0000,	0x02,
	0x030E,	0x0004,	0x02,
	0x0310,	0x013C,	0x02,
	0x0312,	0x0001,	0x02,
	0x30AC,	0x0000,	0x02,
	0x0114,	0x0300,	0x02,
	0xFCFC,	0x2000,	0x02,
	0xEA90,	0x0000,	0x02,
	0xE404,	0x0001,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x3010,	0x0101,	0x02,
	0x3012,	0x0101,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x10BA,	0x0100,	0x02,
	0x10D2,	0x2C80,	0x02,
	0x10FA,	0x0101,	0x02,
	0x1108,	0x3F80,	0x02,
	0x110A,	0x0000,	0x02,
	0x10BC,	0x0001,	0x02,
	0x10D4,	0x2C80,	0x02,
	0x10FC,	0x0100,	0x02,
	0x110C,	0x3F80,	0x02,
	0x110E,	0x0000,	0x02,
	0x10BE,	0x0001,	0x02,
	0x10D8,	0x2C80,	0x02,
	0x10FE,	0x0100,	0x02,
	0x1114,	0x3F80,	0x02,
	0x1116,	0x0000,	0x02,
	0x1D2E,	0xFF01,	0x02,
	0x1082,	0x0080,	0x02,
	0xAC54,	0x0400,	0x02,
	0xB22E,	0x045B,	0x02,
	0xAE88,	0x0101,	0x02,
	0xAE0E,	0x03B9,	0x02,
	0xAC60,	0xFFFF,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0085,	0x02,
};

const u32 sensor_2l4_setfile_A_4032x2268_60fps[] = {};

const u32 sensor_2l4_setfile_A_4032x2268_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0005,	0x02,
	0x6214,	0x79F1,	0x02,
	0x6218,	0x7150,	0x02,
	0x0342,	0x2C80,	0x02,
	0x0340,	0x0C58,	0x02,
	0x303C,	0x0001,	0x02,
	0x3040,	0x0001,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x107E,	0x0004,	0x02,
	0x1D26,	0x0BE0,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0344,	0x0038,	0x02,
	0x0348,	0x1FC6,	0x02,
	0x0346,	0x0160,	0x02,
	0x034A,	0x0A57,	0x02,
	0x034C,	0x0FC0,	0x02,
	0x034E,	0x08DC,	0x02,
	0x0BC2,	0x0000,	0x02,
	0x0BC6,	0x0000,	0x02,
	0x0408,	0x0005,	0x02,
	0x040A,	0x0007,	0x02,
	0xFCFC,	0x2000,	0x02,
	0xD7D6,	0x0FC0,	0x02,
	0xD7DA,	0x08DC,	0x02,
	0xD7D4,	0x0004,	0x02,
	0xD7D8,	0x0007,	0x02,
	0xD72E,	0x0000,	0x02,
	0xD730,	0x0000,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0382,	0x0001,	0x02,
	0x0386,	0x0001,	0x02,
	0x0900,	0x0111,	0x02,
	0x303E,	0x0110,	0x02,
	0x303C,	0x0001,	0x02,
	0x3072,	0x0300,	0x02,
	0x3074,	0x0102,	0x02,
	0x3096,	0x012B,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x0F44,	0x0100,	0x02,
	0xDD10,	0x0100,	0x02,
	0x1050,	0x0000,	0x02,
	0xB6B0,	0x0101,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x3068,	0x0102,	0x02,
	0x0B30,	0x0100,	0x02,
	0x021E,	0x0100,	0x02,
	0xFCFC,	0x2000,	0x02,
	0xDD14,	0x3F80,	0x02,
	0xDD16,	0x0000,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0304,	0x0003,	0x02,
	0x0306,	0x00BB,	0x02,
	0x0300,	0x0006,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x6D26,	0x0006,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x3006,	0x0003,	0x02,
	0x0314,	0x0000,	0x02,
	0x0316,	0x0000,	0x02,
	0x030E,	0x0004,	0x02,
	0x0310,	0x013C,	0x02,
	0x0312,	0x0001,	0x02,
	0x30AC,	0x0000,	0x02,
	0x0114,	0x0300,	0x02,
	0xFCFC,	0x2000,	0x02,
	0xEA90,	0x0000,	0x02,
	0xE404,	0x0001,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x3010,	0x0101,	0x02,
	0x3012,	0x0101,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x10BA,	0x0100,	0x02,
	0x10D2,	0x2C80,	0x02,
	0x10FA,	0x0101,	0x02,
	0x1108,	0x3F80,	0x02,
	0x110A,	0x0000,	0x02,
	0x10BC,	0x0001,	0x02,
	0x10D4,	0x2C80,	0x02,
	0x10FC,	0x0100,	0x02,
	0x110C,	0x3F80,	0x02,
	0x110E,	0x0000,	0x02,
	0x10BE,	0x0001,	0x02,
	0x10D8,	0x2C80,	0x02,
	0x10FE,	0x0100,	0x02,
	0x1114,	0x3F80,	0x02,
	0x1116,	0x0000,	0x02,
	0x1D2E,	0xFF01,	0x02,
	0x1082,	0x0080,	0x02,
	0xAC54,	0x0400,	0x02,
	0xB22E,	0x045B,	0x02,
	0xAE88,	0x0101,	0x02,
	0xAE0E,	0x03B9,	0x02,
	0xAC60,	0xFFFF,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0085,	0x02,
};

const u32 sensor_2l4_setfile_A_4032x1960_30fps[] = {};

const u32 sensor_2l4_setfile_A_3024x3024_30fps[] = {};

const u32 sensor_2l4_setfile_A_2016x1512_30fps[] = {};

const u32 sensor_2l4_setfile_A_2016x1134_30fps[] = {};

const u32 sensor_2l4_setfile_A_1504x1504_30fps[] = {};

const u32 sensor_2l4_setfile_A_4032x3024_24fps[] = {};

const u32 sensor_2l4_setfile_A_4032x2268_24fps[] = {};

const u32 sensor_2l4_setfile_A_4032x1960_24fps[] = {};

const u32 sensor_2l4_setfile_A_3024x3024_24fps[] = {};

const u32 sensor_2l4_setfile_A_4032x2268_60fps_mode2[] = {};

const u32 sensor_2l4_setfile_A_2016x1512_120fps_mode2[] = {};

const u32 sensor_2l4_setfile_A_2016x1512_30fps_mode2[] = {};

const u32 sensor_2l4_setfile_A_2016x1134_240fps_mode2[] = {};

const u32 sensor_2l4_setfile_A_2016x1134_120fps_mode2[] = {};

const u32 sensor_2l4_setfile_A_2016x1134_30fps_mode2[] = {};

const u32 sensor_2l4_setfile_A_1504x1504_120fps_mode2[] = {};

const u32 sensor_2l4_setfile_A_1504x1504_30fps_mode2[] = {};

const u32 sensor_2l4_setfile_A_1008x756_120fps_mode2[] = {
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0005,	0x02,
	0x6214,	0x79F1,	0x02,
	0x6218,	0x7150,	0x02,
	0x0342,	0x0DC0,	0x02,
	0x0340,	0x09FC,	0x02,
	0x303C,	0x0002,	0x02,
	0x3040,	0x0001,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x107E,	0x0000,	0x02,
	0x1D26,	0x0BE0,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0344,	0x0018,	0x02,
	0x0348,	0x1FD6,	0x02,
	0x0346,	0x0000,	0x02,
	0x034A,	0x0BDF,	0x02,
	0x034C,	0x03F0,	0x02,
	0x034E,	0x02F4,	0x02,
	0x0BC2,	0x0000,	0x02,
	0x0BC6,	0x0000,	0x02,
	0x0408,	0x0003,	0x02,
	0x040A,	0x0001,	0x02,
	0xFCFC,	0x2000,	0x02,
	0xD7D6,	0x0000,	0x02,
	0xD7DA,	0x0000,	0x02,
	0xD7D4,	0x0000,	0x02,
	0xD7D8,	0x0000,	0x02,
	0xD72E,	0x0000,	0x02,
	0xD730,	0x0004,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0382,	0x0003,	0x02,
	0x0386,	0x0003,	0x02,
	0x0900,	0x0242,	0x02,
	0x303E,	0x0120,	0x02,
	0x303C,	0x0002,	0x02,
	0x3072,	0x0701,	0x02,
	0x3074,	0x0002,	0x02,
	0x3096,	0x002B,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x0F44,	0x0000,	0x02,
	0xDD10,	0x0100,	0x02,
	0x1050,	0x0000,	0x02,
	0xB6B0,	0x0100,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x3068,	0x0104,	0x02,
	0x0B30,	0x0100,	0x02,
	0x021E,	0x0000,	0x02,
	0xFCFC,	0x2000,	0x02,
	0xDD14,	0x3F80,	0x02,
	0xDD16,	0x0000,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0304,	0x0003,	0x02,
	0x0306,	0x00BB,	0x02,
	0x0300,	0x0006,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x6D26,	0x0006,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x3006,	0x0003,	0x02,
	0x0314,	0x0000,	0x02,
	0x0316,	0x0000,	0x02,
	0x030E,	0x0004,	0x02,
	0x0310,	0x013C,	0x02,
	0x0312,	0x0001,	0x02,
	0x30AC,	0x0000,	0x02,
	0x0114,	0x0300,	0x02,
	0xFCFC,	0x2000,	0x02,
	0xEA90,	0x0000,	0x02,
	0xE404,	0x0001,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x3010,	0x0001,	0x02,
	0x3012,	0x0101,	0x02,
	0xFCFC,	0x2000,	0x02,
	0x10BA,	0x0100,	0x02,
	0x10D2,	0x2C80,	0x02,
	0x10FA,	0x0101,	0x02,
	0x1108,	0x3F80,	0x02,
	0x110A,	0x0000,	0x02,
	0x10BC,	0x0001,	0x02,
	0x10D4,	0x2C80,	0x02,
	0x10FC,	0x0100,	0x02,
	0x110C,	0x3F80,	0x02,
	0x110E,	0x0000,	0x02,
	0x10BE,	0x0001,	0x02,
	0x10D8,	0x2C80,	0x02,
	0x10FE,	0x0100,	0x02,
	0x1114,	0x3F80,	0x02,
	0x1116,	0x0000,	0x02,
	0x1D2E,	0x0001,	0x02,
	0x1082,	0xFFFF,	0x02,
	0xAC54,	0x0400,	0x02,
	0xB22E,	0x049E,	0x02,
	0xAE88,	0x0100,	0x02,
	0xAE0E,	0x0159,	0x02,
	0xAC60,	0x0010,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0085,	0x02,
};

const u32 sensor_2l4_setfile_A_2016x1134_60fps_mode2_ssm_960[] = {};

const u32 sensor_2l4_setfile_A_1280x720_60fps_mode2_ssm_960[] = {};

const u32 sensor_2l4_setfile_A_4032x3024_30fps_mode2_dram_test_section1[] = {};

const u32 sensor_2l4_setfile_A_4032x3024_30fps_mode2_dram_test_section2[] = {};

#ifdef CONFIG_SENSOR_RETENTION_USE
const u32 sensor_2l4_setfile_A_Global_retention[] = {};

const u32 sensor_2l4_setfile_A_4032x3024_30fps_retention[] = {};

const u32 sensor_2l4_setfile_A_4032x2268_30fps_retention[] = {};

const u32 sensor_2l4_setfile_A_4032x2268_60fps_retention[] = {};

const u32 sensor_2l4_setfile_A_1008x756_120fps_retention[] = {};

const u32 sensor_2l4_setfile_A_4032x3024_30fps_load_sram[] = {};

const u32 sensor_2l4_setfile_A_4032x2268_30fps_load_sram[] = {};

const u32 sensor_2l4_setfile_A_4032x3024_24fps_load_sram[] = {};

const u32 sensor_2l4_setfile_A_4032x2268_24fps_load_sram[] = {};

const u32 sensor_2l4_setfile_A_4032x2268_60fps_load_sram[] = {};

const u32 sensor_2l4_setfile_A_1008x756_120fps_load_sram[] = {};
#endif

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_4032x3024_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000, /* mipi_datarate */
	1080444000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0C58, /* frame_length_lines	*/
	0x2C80, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_4032x2268_60fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2177500000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x133C, /* frame_length_lines	*/
	0x0D58, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_4032x2268_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000, /* mipi_datarate */
	1080444000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0C58, /* frame_length_lines	*/
	0x2C80, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_4032x1960_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x2140, /* frame_length_lines	*/
	0x0F50, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_3024x3024_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x31C0, /* frame_length_lines	*/
	0x0A50, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_2016x1512_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1352000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x6370, /* frame_length_lines	*/
	0x0528, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_2016x1134_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1352000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x6370, /* frame_length_lines	*/
	0x0528, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_1504x1504_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1352000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x6370, /* frame_length_lines	*/
	0x0528, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_4032x3024_24fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x3E4E, /* frame_length_lines	*/
	0x0A50, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_4032x2268_24fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x2FD0, /* frame_length_lines	*/
	0x0D70, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_4032x1960_24fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x29F8, /* frame_length_lines	*/
	0x0F50, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_3024x3024_24fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x3E4E, /* frame_length_lines	*/
	0x0A50, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_4032x2268_60fps_mode2 = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x27D0, /* frame_length_lines	*/
	0x0670, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_2016x1512_120fps_mode2 = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1404000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x27C0, /* frame_length_lines	*/
	0x0338, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_2016x1512_30fps_mode2 = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1352000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x9F00, /* frame_length_lines	*/
	0x0338, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_2016x1134_240fps_mode2 = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x13E0, /* frame_length_lines	*/
	0x0338, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_2016x1134_120fps_mode2 = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1352000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x27C0, /* frame_length_lines	*/
	0x0338, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_2016x1134_30fps_mode2 = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1352000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x9F00, /* frame_length_lines	*/
	0x0338, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_1504x1504_120fps_mode2 = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1352000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x27C0, /* frame_length_lines	*/
	0x0338, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_1504x1504_30fps_mode2 = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1352000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x9F00, /* frame_length_lines	*/
	0x0338, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_1008x756_120fps_mode2 = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000, /* mipi_datarate */
	1080444000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x09FC, /* frame_length_lines	*/
	0x0DC0, /* line_length_pck	*/
};


const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_2016x1134_60fps_mode2_ssm_960 = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x2840, /* frame_length_lines	*/
	0x0330, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_1280x720_60fps_mode2_ssm_960 = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000, /* mipi_datarate */
	1010668000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0E50, /* frame_length_lines	*/
	0x047C, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_4032x3024_30fps_mode2_aeb_factory = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x3080, /* frame_length_lines	*/
	0x0A80, /* line_length_pck	*/
};

const struct sensor_pll_info_compact sensor_2l4_pllinfo_A_4032x3024_30fps_mode2_aeb_factory_stage2 = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2054000000, /* mipi_datarate */
	1011111100,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x3080, /* frame_length_lines	*/
	0x0A80, /* line_length_pck	*/
};

static const u32 *sensor_2l4_setfiles_A[] = {
	sensor_2l4_setfile_A_4032x3024_30fps,
	sensor_2l4_setfile_A_4032x2268_60fps,
	sensor_2l4_setfile_A_4032x2268_30fps,
	sensor_2l4_setfile_A_4032x1960_30fps,
	sensor_2l4_setfile_A_3024x3024_30fps,
	sensor_2l4_setfile_A_2016x1512_30fps,
	sensor_2l4_setfile_A_2016x1134_30fps,
	sensor_2l4_setfile_A_1504x1504_30fps,
	sensor_2l4_setfile_A_4032x3024_24fps,
	sensor_2l4_setfile_A_4032x2268_24fps,
	sensor_2l4_setfile_A_4032x1960_24fps,
	sensor_2l4_setfile_A_3024x3024_24fps,
	sensor_2l4_setfile_A_4032x2268_60fps_mode2,
	sensor_2l4_setfile_A_2016x1512_120fps_mode2,
	sensor_2l4_setfile_A_2016x1512_30fps_mode2,
	sensor_2l4_setfile_A_2016x1134_240fps_mode2,
	sensor_2l4_setfile_A_2016x1134_120fps_mode2,
	sensor_2l4_setfile_A_2016x1134_30fps_mode2,
	sensor_2l4_setfile_A_1504x1504_120fps_mode2,
	sensor_2l4_setfile_A_1504x1504_30fps_mode2,
	sensor_2l4_setfile_A_1008x756_120fps_mode2,
	sensor_2l4_setfile_A_2016x1134_60fps_mode2_ssm_960,
	sensor_2l4_setfile_A_2016x1134_60fps_mode2_ssm_960,
	sensor_2l4_setfile_A_1280x720_60fps_mode2_ssm_960,
	sensor_2l4_setfile_A_1280x720_60fps_mode2_ssm_960,
	sensor_2l4_setfile_A_4032x3024_30fps_mode2_dram_test_section1,
	sensor_2l4_setfile_A_4032x3024_30fps_mode2_dram_test_section2,
};

static const u32 sensor_2l4_setfile_A_sizes[] = {
	ARRAY_SIZE(sensor_2l4_setfile_A_4032x3024_30fps),
	ARRAY_SIZE(sensor_2l4_setfile_A_4032x2268_60fps),
	ARRAY_SIZE(sensor_2l4_setfile_A_4032x2268_30fps),
	ARRAY_SIZE(sensor_2l4_setfile_A_4032x1960_30fps),
	ARRAY_SIZE(sensor_2l4_setfile_A_3024x3024_30fps),
	ARRAY_SIZE(sensor_2l4_setfile_A_2016x1512_30fps),
	ARRAY_SIZE(sensor_2l4_setfile_A_2016x1134_30fps),
	ARRAY_SIZE(sensor_2l4_setfile_A_1504x1504_30fps),
	ARRAY_SIZE(sensor_2l4_setfile_A_4032x3024_24fps),
	ARRAY_SIZE(sensor_2l4_setfile_A_4032x2268_24fps),
	ARRAY_SIZE(sensor_2l4_setfile_A_4032x1960_24fps),
	ARRAY_SIZE(sensor_2l4_setfile_A_3024x3024_24fps),
	ARRAY_SIZE(sensor_2l4_setfile_A_4032x2268_60fps_mode2),
	ARRAY_SIZE(sensor_2l4_setfile_A_2016x1512_120fps_mode2),
	ARRAY_SIZE(sensor_2l4_setfile_A_2016x1512_30fps_mode2),
	ARRAY_SIZE(sensor_2l4_setfile_A_2016x1134_240fps_mode2),
	ARRAY_SIZE(sensor_2l4_setfile_A_2016x1134_120fps_mode2),
	ARRAY_SIZE(sensor_2l4_setfile_A_2016x1134_30fps_mode2),
	ARRAY_SIZE(sensor_2l4_setfile_A_1504x1504_120fps_mode2),
	ARRAY_SIZE(sensor_2l4_setfile_A_1504x1504_30fps_mode2),
	ARRAY_SIZE(sensor_2l4_setfile_A_1008x756_120fps_mode2),
	ARRAY_SIZE(sensor_2l4_setfile_A_2016x1134_60fps_mode2_ssm_960),
	ARRAY_SIZE(sensor_2l4_setfile_A_2016x1134_60fps_mode2_ssm_960),
	ARRAY_SIZE(sensor_2l4_setfile_A_1280x720_60fps_mode2_ssm_960),
	ARRAY_SIZE(sensor_2l4_setfile_A_1280x720_60fps_mode2_ssm_960),
	ARRAY_SIZE(sensor_2l4_setfile_A_4032x3024_30fps_mode2_dram_test_section1),
	ARRAY_SIZE(sensor_2l4_setfile_A_4032x3024_30fps_mode2_dram_test_section2),
};

#ifdef CONFIG_SENSOR_RETENTION_USE
static const u32 *sensor_2l4_setfiles_A_retention[] = {
	sensor_2l4_setfile_A_4032x3024_30fps_retention,
	sensor_2l4_setfile_A_4032x2268_30fps_retention,
	sensor_2l4_setfile_A_4032x2268_60fps_retention,
	sensor_2l4_setfile_A_1008x756_120fps_retention,
};

static const u32 sensor_2l4_setfile_A_sizes_retention[] = {
	ARRAY_SIZE(sensor_2l4_setfile_A_4032x3024_30fps_retention),
	ARRAY_SIZE(sensor_2l4_setfile_A_4032x2268_30fps_retention),
	ARRAY_SIZE(sensor_2l4_setfile_A_4032x2268_60fps_retention),
	ARRAY_SIZE(sensor_2l4_setfile_A_1008x756_120fps_retention),
};

static const u32 *sensor_2l4_setfile_A_load_sram[] = {
	sensor_2l4_setfile_A_4032x3024_30fps_load_sram,
	sensor_2l4_setfile_A_4032x2268_30fps_load_sram,
	sensor_2l4_setfile_A_4032x3024_24fps_load_sram,
	sensor_2l4_setfile_A_4032x2268_24fps_load_sram,
	sensor_2l4_setfile_A_4032x2268_60fps_load_sram,
	sensor_2l4_setfile_A_1008x756_120fps_load_sram,
};

static const u32 sensor_2l4_setfile_A_sizes_load_sram[] = {
	ARRAY_SIZE(sensor_2l4_setfile_A_4032x3024_30fps_load_sram),
	ARRAY_SIZE(sensor_2l4_setfile_A_4032x2268_30fps_load_sram),
	ARRAY_SIZE(sensor_2l4_setfile_A_4032x3024_24fps_load_sram),
	ARRAY_SIZE(sensor_2l4_setfile_A_4032x2268_24fps_load_sram),
	ARRAY_SIZE(sensor_2l4_setfile_A_4032x2268_60fps_load_sram),
	ARRAY_SIZE(sensor_2l4_setfile_A_1008x756_120fps_load_sram),
};
#endif

static const struct sensor_pll_info_compact *sensor_2l4_pllinfos_A[] = {
	&sensor_2l4_pllinfo_A_4032x3024_30fps,
	&sensor_2l4_pllinfo_A_4032x2268_60fps,
	&sensor_2l4_pllinfo_A_4032x2268_30fps,
	&sensor_2l4_pllinfo_A_4032x1960_30fps,
	&sensor_2l4_pllinfo_A_3024x3024_30fps,
	&sensor_2l4_pllinfo_A_2016x1512_30fps,
	&sensor_2l4_pllinfo_A_2016x1134_30fps,
	&sensor_2l4_pllinfo_A_1504x1504_30fps,
	&sensor_2l4_pllinfo_A_4032x3024_24fps,
	&sensor_2l4_pllinfo_A_4032x2268_24fps,
	&sensor_2l4_pllinfo_A_4032x1960_24fps,
	&sensor_2l4_pllinfo_A_3024x3024_24fps,
	&sensor_2l4_pllinfo_A_4032x2268_60fps_mode2,
	&sensor_2l4_pllinfo_A_2016x1512_120fps_mode2,
	&sensor_2l4_pllinfo_A_2016x1512_30fps_mode2,
	&sensor_2l4_pllinfo_A_2016x1134_240fps_mode2,
	&sensor_2l4_pllinfo_A_2016x1134_120fps_mode2,
	&sensor_2l4_pllinfo_A_2016x1134_30fps_mode2,
	&sensor_2l4_pllinfo_A_1504x1504_120fps_mode2,
	&sensor_2l4_pllinfo_A_1504x1504_30fps_mode2,
	&sensor_2l4_pllinfo_A_1008x756_120fps_mode2,
	&sensor_2l4_pllinfo_A_2016x1134_60fps_mode2_ssm_960,
	&sensor_2l4_pllinfo_A_2016x1134_60fps_mode2_ssm_960,
	&sensor_2l4_pllinfo_A_1280x720_60fps_mode2_ssm_960,
	&sensor_2l4_pllinfo_A_1280x720_60fps_mode2_ssm_960,
	&sensor_2l4_pllinfo_A_4032x3024_30fps_mode2_aeb_factory,
	&sensor_2l4_pllinfo_A_4032x3024_30fps_mode2_aeb_factory_stage2,
};
#endif

