/*
 * Copyright (c) 2017 Samsung Electronics Co., Ltd.
 *              http://www.samsung.com
 *
 * Author: Sung-Hyun Na <sunghyun.na@samsung.com>
 *
 * Chip Abstraction Layer for USB PHY
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef DRIVER_USB_USBPHY_CAL_PHY_EXYNOS_USBDP_REG_TRSV_H_
#define DRIVER_USB_USBPHY_CAL_PHY_EXYNOS_USBDP_REG_TRSV_H_

#define EXYNOS_USBDP_COM_TRSV_R01	(0x00c4)
#define USBDP_TRSV01_RXAFE_LEQ_ISEL_GEN2_MASK		USBDP_COMBO_REG_MSK(6, 2)
#define USBDP_TRSV01_RXAFE_LEQ_ISEL_GEN2_SET(_x)	USBDP_COMBO_REG_SET(_x, 6, 2)
#define USBDP_TRSV01_RXAFE_LEQ_ISEL_GEN2_GET(_R)	USBDP_COMBO_REG_GET(_R, 6, 2)
#define USBDP_TRSV01_RXAFE_LEQ_ISEL_GEN1_MASK		USBDP_COMBO_REG_MSK(4, 2)
#define USBDP_TRSV01_RXAFE_LEQ_ISEL_GEN1_SET(_x)	USBDP_COMBO_REG_SET(_x, 4, 2)
#define USBDP_TRSV01_RXAFE_LEQ_ISEL_GEN1_GET(_R)	USBDP_COMBO_REG_GET(_R, 4, 2)
#define USBDP_TRSV01_RXAFE_CTLE_SEL_MASK	USBDP_COMBO_REG_MSK(2, 2)
#define USBDP_TRSV01_RXAFE_CTLE_SEL_SET(_x)	USBDP_COMBO_REG_SET(_x, 2, 2)
#define USBDP_TRSV01_RXAFE_CTLE_SEL_GET(_R)	USBDP_COMBO_REG_GET(_R, 2, 2)
#define USBDP_TRSV01_RXAFE_SCLBUF_EN_MASK	USBDP_COMBO_REG_MSK(0, 2)
#define USBDP_TRSV01_RXAFE_SCLBUF_EN_SET(_x)	USBDP_COMBO_REG_SET(_x, 0, 2)
#define USBDP_TRSV01_RXAFE_SCLBUF_EN_GET(_R)	USBDP_COMBO_REG_GET(_R, 0, 2)

#define EXYNOS_USBDP_COM_TRSV_R02	(0x00c8)
#define USBDP_TRSV02_RXAFE_LEQ_CSEL_GEN2_MASK		USBDP_COMBO_REG_MSK(4, 4)
#define USBDP_TRSV02_RXAFE_LEQ_CSEL_GEN2_SET(_x)	USBDP_COMBO_REG_SET(_x, 4, 4)
#define USBDP_TRSV02_RXAFE_LEQ_CSEL_GEN2_GET(_R)	USBDP_COMBO_REG_GET(_R, 4, 4)
#define USBDP_TRSV02_RXAFE_LEQ_CSEL_GEN1_MASK		USBDP_COMBO_REG_MSK(0, 4)
#define USBDP_TRSV02_RXAFE_LEQ_CSEL_GEN1_SET(_x)	USBDP_COMBO_REG_SET(_x, 0, 4)
#define USBDP_TRSV02_RXAFE_LEQ_CSEL_GEN1_GET(_R)	USBDP_COMBO_REG_GET(_R, 0, 4)

#define EXYNOS_USBDP_COM_TRSV_R03	(0x00cc)
#define USBDP_TRSV03_RXAFE_TERM_MODE			USBDP_COMBO_REG_MSK(7, 1)
#define USBDP_TRSV03_RXAFE_EQ_AMP3BUF_EN		USBDP_COMBO_REG_MSK(6, 1)
#define USBDP_TRSV03_RXAFE_LEQ_RSEL_GEN2_MASK		USBDP_COMBO_REG_MSK(3, 3)
#define USBDP_TRSV03_RXAFE_LEQ_RSEL_GEN2_SET(_x)	USBDP_COMBO_REG_SET(_x, 3, 3)
#define USBDP_TRSV03_RXAFE_LEQ_RSEL_GEN2_GET(_R)	USBDP_COMBO_REG_GET(_R, 3, 3)
#define USBDP_TRSV03_RXAFE_LEQ_RSEL_GEN1_MASK		USBDP_COMBO_REG_MSK(0, 3)
#define USBDP_TRSV03_RXAFE_LEQ_RSEL_GEN1_SET(_x)	USBDP_COMBO_REG_SET(_x, 0, 3)
#define USBDP_TRSV03_RXAFE_LEQ_RSEL_GEN1_GET(_R)	USBDP_COMBO_REG_GET(_R, 0, 3)

#define EXYNOS_USBDP_COM_TRSV_R04	(0x00d0)
#define USBDP_TRSV04_RXAFE_TUNE_MASK			USBDP_COMBO_REG_MSK(4, 4)
#define USBDP_TRSV04_RXAFE_TUNE_SET(_x)			USBDP_COMBO_REG_SET(_x, 4, 4)
#define USBDP_TRSV04_RXAFE_TUNE_GET(_R)			USBDP_COMBO_REG_GET(_R, 4, 4)
#define USBDP_TRSV04_RXAFE_SQ_VFFSET_CTRL_MASK		USBDP_COMBO_REG_MSK(0, 4)
#define USBDP_TRSV04_RXAFE_SQ_VFFSET_CTRL_SET(_x)	USBDP_COMBO_REG_SET(_x, 0, 4)
#define USBDP_TRSV04_RXAFE_SQ_VFFSET_CTRL_GET(_R)	USBDP_COMBO_REG_GET(_R, 0, 4)

#define EXYNOS_USBDP_COM_TRSV_R0A	(0x00E8)
#define USBDP_TRSV0A_APB_CAL_OFFSET_DIFP_MASK		USBDP_COMBO_REG_MSK(4, 4)
#define USBDP_TRSV0A_APB_CAL_OFFSET_DIFP_SET(_x)	USBDP_COMBO_REG_SET(_x, 4, 4)
#define USBDP_TRSV0A_APB_CAL_OFFSET_DIFP_GET(_R)	USBDP_COMBO_REG_GET(_R, 4, 4)

#define EXYNOS_USBDP_COM_TRSV_R0B	(0x00EC)
#define USBDP_TRSV0B_APB_CAL_OFFSET_DIFN_MASK		USBDP_COMBO_REG_MSK(0, 4)
#define USBDP_TRSV0B_APB_CAL_OFFSET_DIFN_SET(_x)	USBDP_COMBO_REG_SET(_x, 0, 4)
#define USBDP_TRSV0B_APB_CAL_OFFSET_DIFN_GET(_R)	USBDP_COMBO_REG_GET(_R, 0, 4)

#define EXYNOS_USBDP_COM_TRSV_R0C	(0x00F0)
#define USBDP_TRSV0C_MAN_TX_DE_EMP_LVL_MASK		USBDP_COMBO_REG_MSK(4, 4)
#define USBDP_TRSV0C_MAN_TX_DE_EMP_LVL_SET(_x)		USBDP_COMBO_REG_SET(_x, 4, 4)
#define USBDP_TRSV0C_MAN_TX_DE_EMP_LVL_GET(_R)		USBDP_COMBO_REG_GET(_R, 4, 4)
#define USBDP_TRSV0C_MAN_TX_DRVR_LVL_MASK		USBDP_COMBO_REG_MSK(0, 4)
#define USBDP_TRSV0C_MAN_TX_DRVR_LVL_SET(_x)		USBDP_COMBO_REG_SET(_x, 0, 4)
#define USBDP_TRSV0C_MAN_TX_DRVR_LVL_GET(_R)		USBDP_COMBO_REG_GET(_R, 0, 4)

#define EXYNOS_USBDP_COM_TRSV_R0D	(0x00F4)
#define USBDP_TRSV0D_TX_RCV_COMB_CTRL_MASK		USBDP_COMBO_REG_MSK(6, 2)
#define USBDP_TRSV0D_TX_RCV_COMB_CTRL_SET(_x)		USBDP_COMBO_REG_SET(_x, 6, 2)
#define USBDP_TRSV0D_TX_RCV_COMB_CTRL_GET(_R)		USBDP_COMBO_REG_GET(_R, 6, 2)
#define USBDP_TRSV0D_TX_LINE_LB_SEL			USBDP_COMBO_REG_MSK(5, 1)
#define USBDP_TRSV0D_TX_LINE_LB_EN			USBDP_COMBO_REG_MSK(4, 1)
#define USBDP_TRSV0D_TXHSCK_MON_EN			USBDP_COMBO_REG_MSK(3, 1)
#define USBDP_TRSV0D_EDP_MODE_SEL			USBDP_COMBO_REG_MSK(2, 1)
#define USBDP_TRSV0D_TX_DESKEW_BYPASS			USBDP_COMBO_REG_MSK(1, 1)
#define USBDP_TRSV0D_MAN_DRVR_DE_EMP_LVL_MAN_EN		USBDP_COMBO_REG_MSK(0, 1)

#define EXYNOS_USBDP_COM_TRSV_R23	(0x014C)
#define USBDP_TRSV23_DATA_CLEAR_BY_SIGVAL	USBDP_COMBO_REG_MSK(7, 1)
#define USBDP_TRSV23_DESKEW_CHK_BYPASS		USBDP_COMBO_REG_MSK(6, 1)
#define USBDP_TRSV23_TX_FIX_DB			USBDP_COMBO_REG_MSK(5, 1)
#define USBDP_TRSV23_TX_FIX_DA			USBDP_COMBO_REG_MSK(4, 1)
#define USBDP_TRSV23_FBB_H_BW_DIFF_MASK		USBDP_COMBO_REG_MSK(0, 4)
#define USBDP_TRSV23_FBB_H_BW_DIFF_SET(_x)	USBDP_COMBO_REG_SET(_x, 0, 4)
#define USBDP_TRSV23_FBB_H_BW_DIFF_GET(_R)	USBDP_COMBO_REG_GET(_R, 0, 4)

#define EXYNOS_USBDP_COM_TRSV_R24	(0x0150)
#define USBDP_TRSV24_MAN_TX_RCV_DET_EN			USBDP_COMBO_REG_MSK(7, 1)

#define EXYNOS_USBDP_COM_TRSV_R27	(0x015C)
#define USBDP_TRSV27_MAN_EN_CTRL		USBDP_COMBO_REG_MSK(7, 1)
#define USBDP_TRSV27_MAN_TX_SER_RSTN		USBDP_COMBO_REG_MSK(6, 1)
#define USBDP_TRSV27_MAN_DESKEW_RSTN		USBDP_COMBO_REG_MSK(5, 1)
#define USBDP_TRSV27_MAN_CDR_AFC_RSTN		USBDP_COMBO_REG_MSK(4, 1)
#define USBDP_TRSV27_MAN_CDR_AFC_INIT_RSTN	USBDP_COMBO_REG_MSK(3, 1)
#define USBDP_TRSV27_MAN_VALID_RSTN		USBDP_COMBO_REG_MSK(2, 1)
#define USBDP_TRSV27_MAN_CDR_DES_RSTN		USBDP_COMBO_REG_MSK(1, 1)
#define USBDP_TRSV27_MAN_RSTN_EN		USBDP_COMBO_REG_MSK(0, 1)

#define EXYNOS_USBDP_COM_TRSV_R34	(0x0190)
#define USBDP_TRSV34_SIGVAL_FILT_DLY_CODE_MASK		USBDP_COMBO_REG_MSK(2, 2)
#define USBDP_TRSV34_SIGVAL_FILT_DLY_CODE_SET(_x)	USBDP_COMBO_REG_SET(_x, 2, 2)
#define USBDP_TRSV34_SIGVAL_FILT_DLY_CODE_GET(_R)	USBDP_COMBO_REG_GET(_R, 2, 2)
#define USBDP_TRSV34_OUT_SIGVAL_FILT_SEL		USBDP_COMBO_REG_MSK(1, 1)
#define USBDP_TRSV34_INT_SIGVAL_FILT_SEL		USBDP_COMBO_REG_MSK(0, 1)

#define EXYNOS_USBDP_COM_TRSV_R38	(0x01A0)
#define USBDP_TRSV38_SFR_RX_LFPS_LPF_CTRL_MASK		USBDP_COMBO_REG_MSK(5, 2)
#define USBDP_TRSV38_SFR_RX_LFPS_LPF_CTRL_SET(_x)	USBDP_COMBO_REG_SET(_x, 5, 2)
#define USBDP_TRSV38_SFR_RX_LFPS_LPF_CTRL_GET(_R)	USBDP_COMBO_REG_GET(_R, 5, 2)
#define USBDP_TRSV38_SFR_RX_LFPS_TH_CTRL_MASK		USBDP_COMBO_REG_MSK(2, 3)
#define USBDP_TRSV38_SFR_RX_LFPS_TH_CTRL_SET(_x)	USBDP_COMBO_REG_SET(_x, 2, 3)
#define USBDP_TRSV38_SFR_RX_LFPS_TH_CTRL_GET(_R)	USBDP_COMBO_REG_GET(_R, 2, 3)
#define USBDP_TRSV38_SFR_RX_LFPS_COMP_I_CTRL	USBDP_COMBO_REG_MSK(1, 1)
#define USBDP_TRSV38_RX_LFPS_DET_EN		USBDP_COMBO_REG_MSK(0, 1)

#define EXYNOS_USBDP_COM_TRSV_R4B	(0x01EC)
#define USBDP_TRSV4B_CDR_AFC_DONE		USBDP_COMBO_REG_MSK(5, 1)
#define USBDP_TRSV4B_RX_CAL_DONE		USBDP_COMBO_REG_MSK(4, 1)
#define USBDP_TRSV4B_CDR_FLD_PLL_MODE_DONE	USBDP_COMBO_REG_MSK(3, 1)
#define USBDP_TRSV4B_BIST_COMP_TEST		USBDP_COMBO_REG_MSK(2, 1)
#define USBDP_TRSV4B_BIST_ERR_INJ_TEST		USBDP_COMBO_REG_MSK(1, 1)
#define USBDP_TRSV4B_BIST_COMP_START		USBDP_COMBO_REG_MSK(0, 1)

#define EXYNOS_USBDP_COM_TRSV_R59	(0x0224)
#define USBDP_TRSV59_TX_JEQ_EN				USBDP_COMBO_REG_MSK(7, 1)
#define USBDP_TRSV59_TX_DRV_PLL_REF_MON_EN		USBDP_COMBO_REG_MSK(6, 1)
#define USBDP_TRSV59_TX_DRV_IDRV_IUP_CTRL_MASK		USBDP_COMBO_REG_MSK(3, 3)
#define USBDP_TRSV59_TX_DRV_IDRV_IUP_CTRL_SET(_x)	USBDP_COMBO_REG_SET(_x, 3, 3)
#define USBDP_TRSV59_TX_DRV_IDRV_IUP_CTRL_GET(_R)	USBDP_COMBO_REG_GET(_R, 3, 3)
#define USBDP_TRSV59_TX_DRV_IDRV_EN			USBDP_COMBO_REG_MSK(2, 1)
#define USBDP_TRSV59_TX_DRV_ACCDRV_EN			USBDP_COMBO_REG_MSK(1, 1)

#define EXYNOS_USBDP_COM_TRSV_R5A	(0x0228)
#define USBDP_TRSV5A_TX_DRV_ACCDRV_CTRL_MASK		USBDP_COMBO_REG_MSK(5, 3)
#define USBDP_TRSV5A_TX_DRV_ACCDRV_CTRL_SET(_x)		USBDP_COMBO_REG_SET(_x, 5, 3)
#define USBDP_TRSV5A_TX_DRV_ACCDRV_CTRL_GET(_R)		USBDP_COMBO_REG_GET(_R, 5, 3)

#endif /* DRIVER_USB_USBPHY_CAL_PHY_EXYNOS_USBDP_REG_TRSV_H_ */
