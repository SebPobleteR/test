/******************************************************************************
 *
 * Copyright(c) 2007 - 2016  Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * The full GNU General Public License is included in this distribution in the
 * file called LICENSE.
 *
 * Contact Information:
 * wlanfae <wlanfae@realtek.com>
 * Realtek Corporation, No. 2, Innovation Road II, Hsinchu Science Park,
 * Hsinchu 300, Taiwan.
 *
 * Larry Finger <Larry.Finger@lwfinger.net>
 *
 *****************************************************************************/
#ifndef __PHYDM_IQK_8822B_H__
#define __PHYDM_IQK_8822B_H__

/*--------------------------Define Parameters-------------------------------*/
#define MAC_REG_NUM_8822B 2
#define BB_REG_NUM_8822B 13
#define RF_REG_NUM_8822B 5

#define LOK_delay_8822B 2
#define GS_delay_8822B 2
#define WBIQK_delay_8822B 2

#define TXIQK 0
#define RXIQK 1
#define SS_8822B 2

/*------------------------End Define Parameters-------------------------------*/

void do_iqk_8822b(void *dm_void, u8 delta_thermal_index, u8 thermal_value,
		  u8 threshold);

void phy_iq_calibrate_8822b(void *dm_void, bool clear);

#endif /* #ifndef __PHYDM_IQK_8822B_H__*/
