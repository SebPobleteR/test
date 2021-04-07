/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2016 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_CIS_2P7SQ_SET_B_H
#define FIMC_IS_CIS_2P7SQ_SET_B_H

#include "fimc-is-cis.h"
#include "fimc-is-cis-2p7sq.h"

const u32 sensor_2p7sq_setfile_B_Global[] = {
	0x6028, 0x2000, 0x02,
	0x0100, 0x0000, 0x02,
	I2C_MODE_DELAY, 0x3000, 0x00,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,

	0xf51a, 0x0076, 0x02,
	0x3256, 0x0001, 0x02,
	0x3274, 0x00E2, 0x02,
	0x35AA, 0x000F, 0x02,
	0x35CE, 0x0011, 0x02,
	0x3276, 0x00B9, 0x02,
	0x35AC, 0x000F, 0x02,
	0x35D0, 0x0011, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x1C50, 0x02,
	0x6F12, 0x1600, 0x02,
	0x602A, 0x3684, 0x02,
	0x6F12, 0xFFFF, 0x02,
	0x6F12, 0xFFFF, 0x02,
	0x602A, 0x368C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x3092, 0x0200, 0x02,
	0x3088, 0x0101, 0x02,
	0x602A, 0x1B30, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x1B32, 0x02,
	0x6F12, 0x0140, 0x02,
	0x602A, 0x1B34, 0x02,
	0x6F12, 0x0140, 0x02,
	0x602A, 0x1B36, 0x02,
	0x6F12, 0x64C6, 0x02,
	0x602A, 0x1B38, 0x02,
	0x6F12, 0x64A6, 0x02,
	0x602A, 0x1B3A, 0x02,
	0x6F12, 0xF442, 0x02,
	0x3816, 0x0180, 0x02,
	0x3818, 0x0180, 0x02,
	0x37DE, 0x1304, 0x02,
	0xF47C, 0x0019, 0x02,
	0x31FA, 0x0001, 0x02,
};

/*
 * [Mode Information]
 *	0: [MCLK:26,Width:4640,Height:3488,Format:MIPI_RAW10,mipi_lane:4,mipi_datarate:1495,pvi_pclk_inverse:0]
 */

const u32 sensor_2p7sq_setfile_B_4640x3488_30fps[] = {
	0xf440, 0x402F, 0x02,
	0x37F6, 0x0001, 0x02,
	0x319A, 0x0100, 0x02,
	0x319C, 0x0130, 0x02,
	0x3056, 0x0100, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x1266, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x1268, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x1BB0, 0x02,
	0x6F12, 0x0100, 0x02,

	0x0B0E, 0x0100, 0x02,
	0x30D4, 0x0001, 0x02,
	0x30D8, 0x0100, 0x02,
	0xB138, 0x0000, 0x02,
	0x31B0, 0x0008, 0x02,
	0x31D2, 0x0100, 0x02,
	0x0340, 0x0E1A, 0x02,
	0x0342, 0x1400, 0x02,
	0x0344, 0x0008, 0x02,
	0x0346, 0x0000, 0x02,
	0x0348, 0x1227, 0x02,
	0x034A, 0x0D9F, 0x02,
	0x034C, 0x1220, 0x02,
	0x034E, 0x0DA0, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x0408, 0x0000, 0x02,
	0x040A, 0x0000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x0060, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x0073, 0x02,
	0x030A, 0x0001, 0x02,
	0x0308, 0x0008, 0x02,
	0x300A, 0x0000, 0x02,
	0x0200, 0x0200, 0x02,
	0x0202, 0x0E10, 0x02,
	0x0204, 0x0020, 0x02,
	0x37C0, 0x0002, 0x02,
	0x37C2, 0x0103, 0x02,
	0x3004, 0x0003, 0x02,
	0x0114, 0x0300, 0x02,
	0x304C, 0x0300, 0x02,
	0x3098, 0x0164, 0x02,
	0x30C0, 0x0300, 0x02,
	0x602A, 0x13A4, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0003, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0003, 0x02,
	0x6F12, 0x0003, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0003, 0x02,
	0x6F12, 0x0000, 0x02,

	0x6214, 0x7970, 0x02,
};

const struct sensor_pll_info_compact sensor_2p7sq_pllinfo_B_4640x3488_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1495000000, /* mipi_datarate */
	554000000,	/* pclk  = VT pix CLK (this value is different by cis) */
	0x0E1A, /* frame_length_lines	(0x0340) */
	0x1400, /* line_length_pck	(0x0342) */
};

static const u32 *sensor_2p7sq_setfiles_B[] = {
	sensor_2p7sq_setfile_B_4640x3488_30fps,
};

static const u32 sensor_2p7sq_setfile_B_sizes[] = {
	ARRAY_SIZE(sensor_2p7sq_setfile_B_4640x3488_30fps),
};

static const struct sensor_pll_info_compact *sensor_2p7sq_pllinfos_B[] = {
	&sensor_2p7sq_pllinfo_B_4640x3488_30fps,
};
#endif
