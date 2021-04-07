#ifndef __CMUCAL_NODE_H__
#define __CMUCAL_NODE_H__

#include "../cmucal.h"

/*=================CMUCAL version: S5E9610================================*/

enum clk_id {
	OSCCLK_RCO_APM = FIXED_RATE_TYPE,
	CLK_DLL_DCO,
	OSCCLK_APM,
	OSCCLK_CAM,
	OSCCLK_RCO_CMGP,
	OSCCLK_CMGP,
	OSCCLK_CMU,
	OSCCLK_CORE,
	OSCCLK_CPUCL0,
	OSCCLK_EMBEDDED_CPUCL0,
	CLK_CLUSTER0_DIV_ACLK,
	CLK_CLUSTER0_DIV_PCLKDBG,
	CLK_CLUSTER0_DIV_CNTCLK,
	OSCCLK_CPUCL1,
	OSCCLK_EMBEDDED_CPUCL1,
	OSCCLK_DISPAUD,
	IOCLK_AUDIOCDCLK0,
	IOCLK_AUDIOCDCLK2,
	IOCLK_AUDIOCDCLK1,
	CLK_DEBUG_DECON,
	TICK_USB,
	OSCCLK_FSYS,
	OSCCLK_G2D,
	OSCCLK_G3D,
	OSCCLK_ISP,
	OSCCLK_MFC,
	CLKCMU_MIF_SWITCH_CLKOUT,
	OSCCLK_MIF,
	OSCCLK_MIF1,
	OSCCLK_PERI,
	OSCCLK_RCO_SHUB__ALV,
	RTCCLK_SHUB__ALV,
	OSCCLK_USB,
	RTC_CLK_USB__ALV,
	O_USB20_PHY_CLOCK,
	O_USB30_PHY_RX0CLK_0,
	O_USB30_PHY_RX0CLK_1,
	O_USB30_PIPE_PCLK_0,
	O_USB30_PIPE_PCLK_1,
	OSCCLK_VIPX1,
	OSCCLK_VIPX2,
	end_of_fixed_rate,
	num_of_fixed_rate = end_of_fixed_rate - FIXED_RATE_TYPE,

	CLKCMU_OTP = FIXED_FACTOR_TYPE,
	CLK_MIF_BUSD,
	CLK_MIF1_BUSD,
	end_of_fixed_factor,
	num_of_fixed_factor = end_of_fixed_factor - FIXED_FACTOR_TYPE,

	PLL_SHARED0 = PLL_TYPE,
	PLL_SHARED1,
	PLL_MMC,
	PLL_CPUCL0,
	PLL_CPUCL1,
	PLL_AUD,
	PLL_G3D,
	PLL_MIF,
	PLL_MIF1,
	end_of_pll,
	num_of_pll = end_of_pll - PLL_TYPE,

	MUX_CLK_APM_BUS = MUX_TYPE,
	MUX_CLKCMU_SHUB_BUS,
	MUX_CLK_CMGP_USI01,
	MUX_CLK_CMGP_I2C,
	MUX_CLK_CMGP_USI00,
	MUX_CLK_CMGP_USI04,
	MUX_CLK_CMGP_USI02,
	MUX_CLK_CMGP_USI03,
	MUX_CLK_CMGP_ADC,
	MUX_CLKCMU_G2D_MSCL,
	MUX_CLKCMU_DISPAUD_DISP,
	MUX_CLKCMU_FSYS_BUS,
	MUX_CLKCMU_FSYS_MMC_EMBD,
	MUX_CLKCMU_PERI_BUS,
	MUX_CLKCMU_PERI_IP,
	MUX_CLKCMU_FSYS_MMC_CARD,
	MUX_CLKCMU_CIS_CLK0,
	MUX_CLKCMU_CIS_CLK1,
	MUX_CLKCMU_CIS_CLK2,
	MUX_CMU_CMUREF,
	MUX_CLK_CMU_CMUREF,
	MUX_CLKCMU_APM_BUS,
	MUX_CLKCMU_CORE_CCI,
	MUX_CLKCMU_CORE_G3D,
	MUX_CLKCMU_CORE_BUS,
	MUX_CLKCMU_MIF_BUSP,
	MUX_CLKCMU_FSYS_UFS_EMBD,
	MUX_CLKCMU_CAM_BUS,
	MUX_CLKCMU_VIPX1_BUS,
	MUX_CLKCMU_ISP_BUS,
	MUX_CLKCMU_ISP_VRA,
	MUX_CLKCMU_ISP_GDC,
	MUX_CLKCMU_G2D_G2D,
	MUX_CLKCMU_CPUCL0_SWITCH,
	MUX_CLKCMU_CPUCL1_SWITCH,
	MUX_CLKCMU_G3D_SWITCH,
	MUX_CLKCMU_DISPAUD_CPU,
	MUX_CLKCMU_MIF_SWITCH,
	MUX_CLKCMU_CPUCL0_DBG,
	MUX_CLKCMU_USB_BUS,
	MUX_CLKCMU_USB_USB30DRD,
	MUX_CLKCMU_USB_DPGTC,
	MUX_CLKCMU_DISPAUD_AUD,
	MUX_CLKCMU_MFC_MFC,
	MUX_CLKCMU_MFC_WFD,
	MUX_CLKCMU_HPM,
	MUX_CLKCMU_PERI_UART,
	MUX_CLKCMU_VIPX2_BUS,
	MUX_CLKCMU_CIS_CLK3,
	MUX_CLK_CORE_GIC,
	MUX_CLK_CPUCL0_PLL,
	MUX_CLK_CPUCL1_PLL,
	MUX_CLK_AUD_CPU,
	MUX_CLK_AUD_UAIF0,
	MUX_CLK_AUD_UAIF2,
	MUX_CLK_AUD_UAIF1,
	MUX_CLK_AUD_CPU_HCH,
	MUX_CLK_AUD_FM,
	MUX_CLK_AUD_BUS,
	MUX_CLK_G3D_BUSD,
	MUX_CLK_MIF_DDRPHY_CLK2X,
	MUX_MIF_CMUREF,
	MUX_CLK_MIF1_DDRPHY_CLK2X,
	MUX_MIF1_CMUREF,
	MUX_CLK_SHUB_USI00,
	MUX_CLK_SHUB_USI01,
	MUX_CLK_SHUB_I2C,
	APM_CMU_APM_CLKOUT,
	CAM_CMU_CAM_CLKOUT,
	CMGP_CMU_CMGP_CLKOUT,
	CMU_CMU_TOP_CLKOUT,
	CORE_CMU_CORE_CLKOUT,
	CPUCL0_CMU_CPUCL0_CLKOUT,
	CPUCL0_EMBEDDED_CMU_CPUCL0_CLKOUT,
	CPUCL1_CMU_CPUCL1_CLKOUT,
	CPUCL1_EMBEDDED_CMU_CPUCL1_CLKOUT,
	DISPAUD_CMU_DISPAUD_CLKOUT,
	FSYS_CMU_FSYS_CLKOUT,
	G2D_CMU_G2D_CLKOUT,
	G3D_CMU_G3D_CLKOUT,
	ISP_CMU_ISP_CLKOUT,
	MFC_CMU_MFC_CLKOUT,
	MIF_CMU_MIF_CLKOUT,
	MIF1_CMU_MIF1_CLKOUT,
	PERI_CMU_PERI_CLKOUT,
	SHUB_CMU_SHUB_CLKOUT,
	USB_CMU_USB_CLKOUT,
	VIPX1_CMU_VIPX1_CLKOUT,
	VIPX2_CMU_VIPX2_CLKOUT,


	MUX_CLKCMU_APM_BUS_USER = ((MASK_OF_ID & VIPX2_CMU_VIPX2_CLKOUT) | USER_MUX_TYPE) + 1,
	MUX_DLL_USER,
	MUX_CLKCMU_CAM_BUS_USER,
	MUX_CLKCMU_CORE_BUS_USER,
	MUX_CLKCMU_CORE_CCI_USER,
	MUX_CLKCMU_CORE_G3D_USER,
	MUX_CLKCMU_CPUCL0_SWITCH_USER,
	MUX_CLKCMU_CPUCL0_DBG_USER,
	MUX_CLKCMU_CPUCL1_SWITCH_USER,
	MUX_CLKCMU_DISPAUD_CPU_USER,
	MUX_CLKCMU_DISPAUD_DISP_USER,
	MUX_CLKCMU_DISPAUD_AUD_USER,
	MUX_CLKCMU_FSYS_BUS_USER,
	MUX_CLKCMU_FSYS_MMC_CARD_USER,
	MUX_CLKCMU_FSYS_MMC_EMBD_USER,
	MUX_CLKCMU_FSYS_UFS_EMBD_USER,
	MUX_CLKCMU_G2D_MSCL_USER,
	MUX_CLKCMU_G2D_G2D_USER,
	MUX_CLKCMU_G3D_SWITCH_USER,
	MUX_CLKCMU_ISP_BUS_USER,
	MUX_CLKCMU_ISP_VRA_USER,
	MUX_CLKCMU_ISP_GDC_USER,
	MUX_CLKCMU_MFC_WFD_USER,
	MUX_CLKCMU_MFC_MFC_USER,
	MUX_CLKCMU_MIF_BUSP_USER,
	MUX_CLKCMU_MIF1_BUSP_USER,
	MUX_CLKCMU_PERI_BUS_USER,
	MUX_CLKCMU_PERI_IP_USER,
	MUX_CLKCMU_PERI_UART_USER,
	MUX_CLKCMU_SHUB_BUS_USER,
	MUX_CLKCMU_USB_BUS_USER,
	MUX_CLKCMU_USB_USB30DRD_USER,
	MUX_CLKCMU_USB_DPGTC_USER,
	MUX_CLKCMU_VIPX1_BUS_USER,
	MUX_CLKCMU_VIPX2_BUS_USER,
	end_of_mux,
	num_of_mux = (end_of_mux - MUX_TYPE) & MASK_OF_ID,

	DIV_CLK_APM_BUS = DIV_TYPE,
	CLKCMU_SHUB_BUS,
	DIV_CLK_CAM_BUSP,
	DIV_CLK_CMGP_USI03,
	DIV_CLK_CMGP_USI00,
	DIV_CLK_CMGP_I2C,
	DIV_CLK_CMGP_USI01,
	DIV_CLK_CMGP_USI04,
	DIV_CLK_CMGP_USI02,
	DIV_CLK_CMGP_ADC,
	CLKCMU_DISPAUD_DISP,
	CLKCMU_FSYS_BUS,
	CLKCMU_G2D_MSCL,
	AP2CP_SHARED0_PLL_CLK,
	CLKCMU_PERI_BUS,
	CLKCMU_PERI_IP,
	CLKCMU_APM_BUS,
	CLKCMU_FSYS_MMC_CARD,
	CLKCMU_CIS_CLK0,
	CLKCMU_CIS_CLK1,
	CLKCMU_CIS_CLK2,
	CLKCMU_FSYS_MMC_EMBD,
	AP2CP_SHARED1_PLL_CLK,
	DIV_CLK_CMU_CMUREF,
	CLKCMU_CORE_BUS,
	PLL_SHARED0_DIV3,
	CLKCMU_CPUCL0_DBG,
	PLL_SHARED0_DIV2,
	PLL_SHARED0_DIV4,
	PLL_SHARED1_DIV2,
	PLL_SHARED1_DIV4,
	CLKCMU_CORE_CCI,
	CLKCMU_CORE_G3D,
	CLKCMU_MIF_BUSP,
	PLL_SHARED1_DIV3,
	CLKCMU_FSYS_UFS_EMBD,
	CLKCMU_CAM_BUS,
	CLKCMU_VIPX1_BUS,
	CLKCMU_ISP_BUS,
	CLKCMU_ISP_VRA,
	CLKCMU_ISP_GDC,
	CLKCMU_G2D_G2D,
	CLKCMU_CPUCL0_SWITCH,
	CLKCMU_CPUCL1_SWITCH,
	CLKCMU_G3D_SWITCH,
	CLKCMU_DISPAUD_CPU,
	CLKCMU_USB_BUS,
	CLKCMU_USB_USB30DRD,
	CLKCMU_USB_DPGTC,
	CLKCMU_DISPAUD_AUD,
	CLKCMU_MFC_MFC,
	CLKCMU_MFC_WFD,
	CLKCMU_HPM,
	CLKCMU_PERI_UART,
	CLKCMU_VIPX2_BUS,
	CLKCMU_CIS_CLK3,
	PLL_MMC_DIV2,
	DIV_CLK_CORE_BUSP,
	DIV_CLK_CPUCL0_PCLK,
	DIV_CLK_CPUCL0_CMUREF,
	DIV_CLK_CLUSTER0_ACLK,
	DIV_CLK_CLUSTER0_PCLKDBG,
	DIV_CLK_CLUSTER0_CNTCLK,
	DIV_CLK_CPUCL1_PCLK,
	DIV_CLK_CPUCL1_CMUREF,
	DIV_CLK_CLUSTER1_ACLK,
	DIV_CLK_CLUSTER1_CNTCLK,
	DIV_CLK_CPUCL1_PCLKDBG,
	DIV_CLK_AUD_CPU,
	DIV_CLK_AUD_CPU_PCLKDBG,
	DIV_CLK_AUD_CPU_ACLK,
	DIV_CLK_AUD_UAIF0,
	DIV_CLK_AUD_AUDIF,
	DIV_CLK_AUD_UAIF2,
	DIV_CLK_AUD_UAIF1,
	DIV_CLK_DISPAUD_BUSP,
	DIV_CLK_AUD_DSIF,
	DIV_CLK_AUD_FM_SPDY,
	DIV_CLK_AUD_FM,
	DIV_CLK_AUD_BUS,
	DIV_CLK_G2D_BUSP,
	DIV_CLK_G3D_BUSP,
	DIV_CLK_ISP_BUSP,
	DIV_CLK_MFC_BUSP,
	DIV_CLK_PERI_I2C,
	DIV_CLK_PERI_SPI0,
	DIV_CLK_PERI_SPI1,
	DIV_CLK_PERI_USI_I2C,
	DIV_CLK_PERI_USI_USI,
	DIV_CLK_PERI_SPI2,
	DIV_CLK_SHUB_USI01,
	DIV_CLK_SHUB_I2C,
	DIV_CLK_SHUB_USI00,
	DIV_CLK_VIPX1_BUSP,
	DIV_CLK_VIPX2_BUSP,

	DIV_CLK_CPUCL0_CPU = (DIV_CLK_VIPX2_BUSP | CONST_DIV_TYPE) + 1,
	DIV_CLK_CPUCL1_CPU,
	DIV_CLK_G3D_BUSD,
	end_of_div,
	num_of_div = (end_of_div - DIV_TYPE) & MASK_OF_ID,

	GOUT_BLK_APM_UID_LHM_AXI_P_APM_IPCLKPORT_I_CLK = GATE_TYPE,
	GOUT_BLK_APM_UID_LHS_AXI_D_APM_IPCLKPORT_I_CLK,
	GOUT_BLK_APM_UID_MAILBOX_APM2AP_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_MAILBOX_APM2CP_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_MAILBOX_APM2GNSS_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_MAILBOX_APM2WLBT_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_SYSREG_APM_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_RSTnSYNC_CLK_APM_BUS_IPCLKPORT_CLK,
	GOUT_BLK_APM_UID_APBIF_PMU_ALIVE_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_APBIF_GPIO_ALIVE_IPCLKPORT_PCLK,
	CLK_BLK_APM_UID_APM_CMU_APM_IPCLKPORT_PCLK,
	GATE_CLKCMU_SHUB_BUS,
	CLKCMU_CMGP_BUS,
	GOUT_BLK_APM_UID_PEM_IPCLKPORT_I_CLK,
	GOUT_BLK_APM_UID_APBIF_RTC_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_APBIF_TOP_RTC_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_INTMEM_IPCLKPORT_ACLK,
	GOUT_BLK_APM_UID_INTMEM_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_LHM_AXI_P_APM_SHUB_IPCLKPORT_I_CLK,
	GOUT_BLK_APM_UID_LHM_AXI_P_APM_MODEM_IPCLKPORT_I_CLK,
	GOUT_BLK_APM_UID_LHM_AXI_P_APM_GNSS_IPCLKPORT_I_CLK,
	GOUT_BLK_APM_UID_LHS_AXI_LP_SHUB_IPCLKPORT_I_CLK,
	GOUT_BLK_APM_UID_MAILBOX_AP2CP_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_MAILBOX_AP2CP_S_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_MAILBOX_AP2GNSS_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_MAILBOX_AP2SHUB_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_MAILBOX_AP2WLBT_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_MAILBOX_APM2SHUB_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_MAILBOX_WLBT2GNSS_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_MAILBOX_SHUB2GNSS_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_MAILBOX_WLBT2ABOX_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_PGEN_LITE_APM_IPCLKPORT_CLK,
	GOUT_BLK_APM_UID_PMU_INTR_GEN_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_LHM_AXI_P_APM_WLBT_IPCLKPORT_I_CLK,
	GOUT_BLK_APM_UID_XIU_DP_APM_IPCLKPORT_ACLK,
	GOUT_BLK_APM_UID_WDT_APM_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_MAILBOX_SHUB2WLBT_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_MAILBOX_CP2GNSS_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_MAILBOX_CP2SHUB_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_MAILBOX_CP2WLBT_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_SPEEDY_APM_IPCLKPORT_PCLK,
	GOUT_BLK_APM_UID_RSTnSYNC_CLK_APM_GREBE_IPCLKPORT_CLK,
	GOUT_BLK_APM_UID_GREBEINTEGRATION_IPCLKPORT_HCLK,
	CLK_BLK_APM_UID_RSTnSYNC_CLK_APM_OSCCLK_IPCLKPORT_CLK,
	CLK_BLK_APM_UID_RSTnSYNC_CLK_APM_OSCCLK_RCO_IPCLKPORT_CLK,
	CLK_BLK_CAM_UID_CAM_CMU_CAM_IPCLKPORT_PCLK,
	GOUT_BLK_CAM_UID_LHM_AXI_P_CAM_IPCLKPORT_I_CLK,
	GOUT_BLK_CAM_UID_LHS_ATB_CAMISP_IPCLKPORT_I_CLK,
	GOUT_BLK_CAM_UID_LHS_ACEL_D_CAM_IPCLKPORT_I_CLK,
	GOUT_BLK_CAM_UID_RSTnSYNC_CLK_CAM_BUSD_IPCLKPORT_CLK,
	GOUT_BLK_CAM_UID_RSTnSYNC_CLK_CAM_BUSP_IPCLKPORT_CLK,
	CLK_BLK_CAM_UID_RSTnSYNC_CLK_CAM_OSCCLK_IPCLKPORT_CLK,
	GOUT_BLK_CAM_UID_is6p10p0_CAM_IPCLKPORT_ACLK_XIU_D_CAM,
	GOUT_BLK_CAM_UID_is6p10p0_CAM_IPCLKPORT_PCLK_PPMU_CAM,
	GOUT_BLK_CAM_UID_is6p10p0_CAM_IPCLKPORT_ACLK_PPMU_CAM,
	GOUT_BLK_CAM_UID_is6p10p0_CAM_IPCLKPORT_ACLK_SMMU_CAM,
	GOUT_BLK_CAM_UID_is6p10p0_CAM_IPCLKPORT_ACLK_3AA,
	GOUT_BLK_CAM_UID_is6p10p0_CAM_IPCLKPORT_ACLK_CSIS0,
	GOUT_BLK_CAM_UID_is6p10p0_CAM_IPCLKPORT_ACLK_CSIS1,
	GOUT_BLK_CAM_UID_is6p10p0_CAM_IPCLKPORT_ACLK_CSIS2,
	GOUT_BLK_CAM_UID_is6p10p0_CAM_IPCLKPORT_ACLK_CSIS3,
	GOUT_BLK_CAM_UID_BLK_CAM_IPCLKPORT_CLK_CAM_BUSD,
	GOUT_BLK_CAM_UID_SYSREG_CAM_IPCLKPORT_PCLK,
	GOUT_BLK_CAM_UID_is6p10p0_CAM_IPCLKPORT_PCLK_PGEN_LITE_CAM0,
	GOUT_BLK_CAM_UID_is6p10p0_CAM_IPCLKPORT_ACLK_DMA,
	GOUT_BLK_CAM_UID_is6p10p0_CAM_IPCLKPORT_ACLK_PAFSTAT_CORE,
	GOUT_BLK_CAM_UID_is6p10p0_CAM_IPCLKPORT_ACLK_RDMA,
	GOUT_BLK_CAM_UID_BTM_CAM_IPCLKPORT_I_ACLK,
	GOUT_BLK_CAM_UID_BTM_CAM_IPCLKPORT_I_PCLK,
	GOUT_BLK_CAM_UID_is6p10p0_CAM_IPCLKPORT_ACLK_GLUE_CSIS0,
	GOUT_BLK_CAM_UID_is6p10p0_CAM_IPCLKPORT_ACLK_GLUE_CSIS1,
	GOUT_BLK_CAM_UID_is6p10p0_CAM_IPCLKPORT_ACLK_GLUE_CSIS2,
	GOUT_BLK_CAM_UID_is6p10p0_CAM_IPCLKPORT_ACLK_GLUE_CSIS3,
	GOUT_BLK_CAM_UID_is6p10p0_CAM_IPCLKPORT_PCLK_PGEN_LITE_CAM1,
	CLK_BLK_CMGP_UID_CMGP_CMU_CMGP_IPCLKPORT_PCLK,
	GOUT_BLK_CMGP_UID_SYSREG_CMGP2CP_IPCLKPORT_PCLK,
	GOUT_BLK_CMGP_UID_SYSREG_CMGP2GNSS_IPCLKPORT_PCLK,
	GOUT_BLK_CMGP_UID_SYSREG_CMGP2SHUB_IPCLKPORT_PCLK,
	GOUT_BLK_CMGP_UID_SYSREG_CMGP2WLBT_IPCLKPORT_PCLK,
	GOUT_BLK_CMGP_UID_GPIO_CMGP_IPCLKPORT_PCLK,
	GOUT_BLK_CMGP_UID_ADC_CMGP_IPCLKPORT_PCLK_S0,
	GOUT_BLK_CMGP_UID_ADC_CMGP_IPCLKPORT_PCLK_S1,
	GOUT_BLK_CMGP_UID_I2C_CMGP00_IPCLKPORT_PCLK,
	GOUT_BLK_CMGP_UID_I2C_CMGP01_IPCLKPORT_PCLK,
	GOUT_BLK_CMGP_UID_I2C_CMGP02_IPCLKPORT_PCLK,
	GOUT_BLK_CMGP_UID_I2C_CMGP03_IPCLKPORT_PCLK,
	GOUT_BLK_CMGP_UID_I2C_CMGP04_IPCLKPORT_PCLK,
	GOUT_BLK_CMGP_UID_SYSREG_CMGP_IPCLKPORT_PCLK,
	GOUT_BLK_CMGP_UID_USI_CMGP00_IPCLKPORT_PCLK,
	GOUT_BLK_CMGP_UID_USI_CMGP01_IPCLKPORT_PCLK,
	GOUT_BLK_CMGP_UID_USI_CMGP02_IPCLKPORT_PCLK,
	GOUT_BLK_CMGP_UID_USI_CMGP03_IPCLKPORT_PCLK,
	GOUT_BLK_CMGP_UID_USI_CMGP04_IPCLKPORT_PCLK,
	GOUT_BLK_CMGP_UID_RSTnSYNC_CLK_CMGP_USI00_IPCLKPORT_CLK,
	GOUT_BLK_CMGP_UID_RSTnSYNC_CLK_CMGP_BUS_IPCLKPORT_CLK,
	GOUT_BLK_CMGP_UID_RSTnSYNC_CLK_CMGP_I2C_IPCLKPORT_CLK,
	GOUT_BLK_CMGP_UID_RSTnSYNC_CLK_CMGP_USI01_IPCLKPORT_CLK,
	GOUT_BLK_CMGP_UID_RSTnSYNC_CLK_CMGP_USI02_IPCLKPORT_CLK,
	GOUT_BLK_CMGP_UID_RSTnSYNC_CLK_CMGP_USI03_IPCLKPORT_CLK,
	GOUT_BLK_CMGP_UID_RSTnSYNC_CLK_CMGP_USI04_IPCLKPORT_CLK,
	GOUT_BLK_CMGP_UID_I2C_CMGP00_IPCLKPORT_IPCLK,
	GOUT_BLK_CMGP_UID_I2C_CMGP01_IPCLKPORT_IPCLK,
	GOUT_BLK_CMGP_UID_I2C_CMGP02_IPCLKPORT_IPCLK,
	GOUT_BLK_CMGP_UID_I2C_CMGP03_IPCLKPORT_IPCLK,
	GOUT_BLK_CMGP_UID_I2C_CMGP04_IPCLKPORT_IPCLK,
	GOUT_BLK_CMGP_UID_USI_CMGP00_IPCLKPORT_IPCLK,
	GOUT_BLK_CMGP_UID_USI_CMGP01_IPCLKPORT_IPCLK,
	GOUT_BLK_CMGP_UID_USI_CMGP02_IPCLKPORT_IPCLK,
	GOUT_BLK_CMGP_UID_USI_CMGP03_IPCLKPORT_IPCLK,
	GOUT_BLK_CMGP_UID_USI_CMGP04_IPCLKPORT_IPCLK,
	CLK_BLK_CMGP_UID_RSTnSYNC_CLK_CMGP_OSCCLK_RCO_IPCLKPORT_CLK,
	GOUT_BLK_CMGP_UID_SYSREG_CMGP2PMU_AP_IPCLKPORT_PCLK,
	GOUT_BLK_CMGP_UID_SYSREG_CMGP2PMU_SHUB_IPCLKPORT_PCLK,
	GATE_CLKCMU_G2D_MSCL,
	GATE_CLKCMU_DISPAUD_DISP,
	GATE_CLKCMU_FSYS_MMC_EMBD,
	GATE_CLKCMU_FSYS_BUS,
	GATE_CLKCMU_MODEM_SHARED0,
	GATE_CLKCMU_PERI_BUS,
	GATE_CLKCMU_PERI_IP,
	GATE_CLKCMU_APM_BUS,
	GATE_CLKCMU_FSYS_MMC_CARD,
	GATE_CLKCMU_CIS_CLK0,
	GATE_CLKCMU_CIS_CLK1,
	GATE_CLKCMU_CIS_CLK2,
	GATE_CLKCMU_MODEM_SHARED1,
	GATE_CLKCMU_CORE_BUS,
	GATE_CLKCMU_CPUCL0_DBG,
	GATE_CLKCMU_CORE_CCI,
	GATE_CLKCMU_CORE_G3D,
	GATE_CLKCMU_MIF_BUSP,
	GATE_CLKCMU_FSYS_UFS_EMBD,
	GATE_CLKCMU_CAM_BUS,
	GATE_CLKCMU_VIPX1_BUS,
	GATE_CLKCMU_ISP_BUS,
	GATE_CLKCMU_ISP_VRA,
	GATE_CLKCMU_ISP_GDC,
	GATE_CLKCMU_G2D_G2D,
	GATE_CLKCMU_CPUCL0_SWITCH,
	GATE_CLKCMU_CPUCL1_SWITCH,
	GATE_CLKCMU_G3D_SWITCH,
	GATE_CLKCMU_DISPAUD_CPU,
	CLKCMU_MIF_SWITCH,
	GATE_CLKCMU_USB_BUS,
	GATE_CLKCMU_USB_USB30DRD,
	GATE_CLKCMU_USB_DPGTC,
	GATE_CLKCMU_DISPAUD_AUD,
	GATE_CLKCMU_MFC_MFC,
	GATE_CLKCMU_MFC_WFD,
	GATE_CLKCMU_HPM,
	GATE_CLKCMU_PERI_UART,
	CLK_BLK_CMU_UID_OTP_IPCLKPORT_CLK,
	GATE_CLKCMU_VIPX2_BUS,
	GATE_CLKCMU_CIS_CLK3,
	GOUT_BLK_CORE_UID_AD_AXI_GIC_IPCLKPORT_ACLKM,
	GOUT_BLK_CORE_UID_GIC400_AIHWACG_IPCLKPORT_CLK,
	GOUT_BLK_CORE_UID_LHM_ACE_D_CPUCL0_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHM_ACE_D_CPUCL1_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHM_AXI_D_ABOX_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHM_AXI_D0_MODEM_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHM_ACEL_D_DPU_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHM_ACEL_D_CAM_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHM_AXI_D_WLBT_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_D0_MIF_CPU_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_D1_MIF_CPU_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_P_APM_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_P_CPUCL0_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_P_CPUCL1_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_P_DISPAUD_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_P_FSYS_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_P_MFC_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_P_PERI_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_PPCFW_G3D_IPCLKPORT_PCLK,
	GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL0_IPCLKPORT_ACLK,
	GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL0_IPCLKPORT_PCLK,
	GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL1_IPCLKPORT_ACLK,
	GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL1_IPCLKPORT_PCLK,
	GOUT_BLK_CORE_UID_SFR_APBIF_CMU_TOPC_IPCLKPORT_PCLK,
	GOUT_BLK_CORE_UID_SYSREG_CORE_IPCLKPORT_PCLK,
	GOUT_BLK_CORE_UID_TREX_D_CORE_IPCLKPORT_pclk,
	GOUT_BLK_CORE_UID_RSTnSYNC_CLK_CORE_CCI_OCC_IPCLKPORT_CLK,
	GOUT_BLK_CORE_UID_RSTnSYNC_CLK_CORE_BUSD_IPCLKPORT_CLK,
	GOUT_BLK_CORE_UID_RSTnSYNC_CLK_CORE_BUSP_OCC_IPCLKPORT_CLK,
	GOUT_BLK_CORE_UID_AD_APB_CCI_550_IPCLKPORT_PCLKM,
	GOUT_BLK_CORE_UID_LHS_AXI_P_MIF1_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_RSTnSYNC_CLK_CORE_G3D_OCC_IPCLKPORT_CLK,
	GOUT_BLK_CORE_UID_PPCFW_G3D_IPCLKPORT_ACLK,
	GOUT_BLK_CORE_UID_RSTnSYNC_CLK_CORE_BUSP_IPCLKPORT_CLK,
	GOUT_BLK_CORE_UID_RSTnSYNC_CLK_CORE_CCI_IPCLKPORT_CLK,
	GOUT_BLK_CORE_UID_RSTnSYNC_CLK_CORE_G3D_IPCLKPORT_CLK,
	GOUT_BLK_CORE_UID_LHM_AXI_D_G3D_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_RSTnSYNC_CLK_CORE_GIC_IPCLKPORT_CLK,
	GOUT_BLK_CORE_UID_RSTnSYNC_CLK_CORE_OSCCLK_IPCLKPORT_CLK,
	CLK_BLK_CORE_UID_CORE_CMU_CORE_IPCLKPORT_PCLK,
	GOUT_BLK_CORE_UID_LHS_AXI_D0_MIF_NRT_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_D1_MIF_NRT_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_ASYNCSFR_WR_DMC0_IPCLKPORT_I_PCLK,
	GOUT_BLK_CORE_UID_LHS_AXI_P_ISP_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_P_MODEM_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_AD_APB_PDMA0_IPCLKPORT_PCLKM,
	GOUT_BLK_CORE_UID_AD_APB_SPDMA_IPCLKPORT_PCLKM,
	GOUT_BLK_CORE_UID_LHM_AXI_D_APM_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHM_AXI_D_CSSYS_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHM_ACEL_D_FSYS_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHM_AXI_D_GNSS_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHM_ACEL_D0_ISP_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHM_ACEL_D_G2D_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHM_AXI_D_SHUB_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_P_SHUB_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_P_WLBT_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_P_GNSS_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_PDMA_CORE_IPCLKPORT_ACLK_PDMA0,
	GOUT_BLK_CORE_UID_SPDMA_CORE_IPCLKPORT_ACLK_PDMA1,
	GOUT_BLK_CORE_UID_LHS_AXI_P_MIF0_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHM_ACEL_D1_ISP_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_D1_MIF_CP_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_D1_MIF_RT_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_D0_MIF_RT_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_D0_MIF_CP_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHM_ACEL_D0_MFC_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHM_ACEL_D1_MFC_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHM_ACEL_D_USB_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHM_ACEL_D_VIPX1_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHM_ACEL_D_VIPX2_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_P_USB_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_P_CAM_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_P_G2D_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_LHS_AXI_P_VIPX1_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_ASYNCSFR_WR_DMC1_IPCLKPORT_I_PCLK,
	GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_pclk,
	GOUT_BLK_CORE_UID_LHS_AXI_P_G3D_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_PPFW_CORE_MEM0_IPCLKPORT_CLK,
	GOUT_BLK_CORE_UID_PPFW_CORE_MEM1_IPCLKPORT_CLK,
	GOUT_BLK_CORE_UID_PPFW_CORE_PERI_IPCLKPORT_CLK,
	GOUT_BLK_CORE_UID_BAAW_P_GNSS_IPCLKPORT_I_PCLK,
	GOUT_BLK_CORE_UID_BAAW_P_MODEM_IPCLKPORT_I_PCLK,
	GOUT_BLK_CORE_UID_BAAW_P_SHUB_IPCLKPORT_I_PCLK,
	GOUT_BLK_CORE_UID_BAAW_P_WLBT_IPCLKPORT_I_PCLK,
	GOUT_BLK_CORE_UID_SIREX_IPCLKPORT_i_ACLK,
	GOUT_BLK_CORE_UID_SIREX_IPCLKPORT_i_PCLK,
	GOUT_BLK_CORE_UID_TREX_D_CORE_IPCLKPORT_ACLK,
	GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_ACLK_P_CORE,
	GOUT_BLK_CORE_UID_CCI_550_IPCLKPORT_ACLK,
	GOUT_BLK_CORE_UID_TREX_D_NRT_IPCLKPORT_pclk,
	GOUT_BLK_CORE_UID_XIU_D_CORE_IPCLKPORT_ACLK,
	GOUT_BLK_CORE_UID_TREX_D_CORE_IPCLKPORT_CCLK,
	GOUT_BLK_CORE_UID_RSTnSYNC_CLK_CORE_BUSP_G3D_OCC_IPCLKPORT_CLK,
	GOUT_BLK_CORE_UID_PGEN_LITE_SIREX_IPCLKPORT_CLK,
	GOUT_BLK_CORE_UID_LHM_AXI_D1_MODEM_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_TREX_D_CORE_IPCLKPORT_GCLK,
	GOUT_BLK_CORE_UID_TREX_D_NRT_IPCLKPORT_ACLK,
	GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_CCLK_P_CORE,
	GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_PCLK_P_CORE,
	GOUT_BLK_CORE_UID_DIT_IPCLKPORT_iClkL2A,
	GOUT_BLK_CORE_UID_AD_APB_PPFW_MEM0_IPCLKPORT_PCLKM,
	GOUT_BLK_CORE_UID_AD_APB_PPFW_MEM1_IPCLKPORT_PCLKM,
	GOUT_BLK_CORE_UID_AD_APB_PPFW_PERI_IPCLKPORT_PCLKM,
	GOUT_BLK_CORE_UID_AXI_US_A40_64to128_DIT_IPCLKPORT_aclk,
	GOUT_BLK_CORE_UID_AD_APB_DIT_IPCLKPORT_PCLKM,
	GOUT_BLK_CORE_UID_LHS_AXI_P_VIPX2_IPCLKPORT_I_CLK,
	GOUT_BLK_CORE_UID_PGEN_PDMA_IPCLKPORT_CLK,
	GOUT_BLK_CORE_UID_AD_APB_PGEN_PDMA_IPCLKPORT_PCLKM,
	GOUT_BLK_CPUCL0_UID_SYSREG_CPUCL0_IPCLKPORT_PCLK,
	GOUT_BLK_CPUCL0_UID_RSTnSYNC_CLK_CPUCL0_PCLK_IPCLKPORT_CLK,
	CLK_BLK_CPUCL0_UID_RSTnSYNC_CLK_CPUCL0_OSCCLK_IPCLKPORT_CLK,
	GOUT_BLK_CPUCL0_UID_RSTnSYNC_CLK_CPUCL0_DBG_IPCLKPORT_CLK,
	CLK_BLK_CPUCL0_UID_CPUCL0_CMU_CPUCL0_IPCLKPORT_PCLK,
	GATE_CLK_CLUSTER0_CPU,
	GOUT_BLK_CPUCL0_UID_ADM_APB_G_CSSYS_CORE_IPCLKPORT_PCLKM,
	GOUT_BLK_CPUCL0_UID_ADS_AHB_G_CSSYS_FSYS_IPCLKPORT_HCLKS,
	GOUT_BLK_CPUCL0_UID_ADS_APB_G_CSSYS_CPUCL1_IPCLKPORT_PCLKS,
	GOUT_BLK_CPUCL0_UID_ADS_APB_G_P8Q_IPCLKPORT_PCLKS,
	GOUT_BLK_CPUCL0_UID_AD_APB_P_DUMP_PC_CPUCL0_IPCLKPORT_PCLKM,
	GOUT_BLK_CPUCL0_UID_DUMP_PC_CPUCL0_IPCLKPORT_I_PCLK,
	GOUT_BLK_CPUCL0_UID_LHS_AXI_D_CSSYS_IPCLKPORT_I_CLK,
	GOUT_BLK_CPUCL0_UID_AD_APB_P_DUMP_PC_CPUCL1_IPCLKPORT_PCLKM,
	GOUT_BLK_CPUCL0_UID_DUMP_PC_CPUCL1_IPCLKPORT_I_PCLK,
	GOUT_BLK_CPUCL0_UID_BUSIF_HPMCPUCL0_IPCLKPORT_PCLK,
	CLK_BLK_CPUCL0_UID_HPM_CPUCL0_IPCLKPORT_hpm_targetclk_c,
	GOUT_BLK_CPUCL0_UID_CSSYS_DBG_IPCLKPORT_PCLKDBG,
	GOUT_BLK_CPUCL0_UID_SECJTAG_IPCLKPORT_i_clk,
	GOUT_BLK_CPUCL0_UID_LHM_AXI_P_CPUCL0_IPCLKPORT_I_CLK,
	GOUT_BLK_CPUCL1_UID_RSTnSYNC_CLK_CPUCL1_PCLK_IPCLKPORT_CLK,
	CLK_BLK_CPUCL1_UID_RSTnSYNC_CLK_CPUCL1_OSCCLK_IPCLKPORT_CLK,
	GOUT_BLK_CPUCL1_UID_RSTnSYNC_CLK_CPUCL1_ACLK_IPCLKPORT_CLK,
	CLK_BLK_CPUCL1_UID_CPUCL1_CMU_CPUCL1_IPCLKPORT_PCLK,
	GOUT_BLK_CPUCL1_UID_ADM_APB_G_CSSYS_CPUCL1_IPCLKPORT_PCLKM,
	GOUT_BLK_CPUCL1_UID_RSTnSYNC_CLK_CPUCL1_PCLKDBG_IPCLKPORT_CLK,
	GATE_CLK_CLUSTER1_CPU,
	CLK_BLK_CPUCL1_UID_HPM_CPUCL1_IPCLKPORT_hpm_targetclk_c,
	GOUT_BLK_CPUCL1_UID_BUSIF_HPMCPUCL1_IPCLKPORT_PCLK,
	GOUT_BLK_CPUCL1_UID_SYSREG_CPUCL1_IPCLKPORT_PCLK,
	GOUT_BLK_CPUCL1_UID_LHM_AXI_P_CPUCL1_IPCLKPORT_I_CLK,
	GOUT_BLK_CPUCL1_UID_LHS_ACE_D_CPUCL1_IPCLKPORT_I_CLK,
	GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_CCLK_ASB,
	GOUT_BLK_DISPAUD_UID_AXI_US_32to128_IPCLKPORT_aclk,
	GOUT_BLK_DISPAUD_UID_RSTnSYNC_CLK_AUD_CPU_CLKIN_IPCLKPORT_CLK,
	GOUT_BLK_DISPAUD_UID_RSTnSYNC_CLK_AUD_CPU_PCLKDBG_IPCLKPORT_CLK,
	GOUT_BLK_DISPAUD_UID_RSTnSYNC_CLK_DISPAUD_AUD_IPCLKPORT_CLK,
	GOUT_BLK_DISPAUD_UID_PERI_AXI_ASB_IPCLKPORT_ACLKM,
	GOUT_BLK_DISPAUD_UID_PERI_AXI_ASB_IPCLKPORT_PCLK,
	GOUT_BLK_DISPAUD_UID_WDT_AUD_IPCLKPORT_PCLK,
	CLK_BLK_DISPAUD_UID_RSTnSYNC_CLK_DISPAUD_OSCCLK_IPCLKPORT_CLK,
	GOUT_BLK_DISPAUD_UID_DFTMUX_DISPAUD_IPCLKPORT_AUD_CODEC_MCLK,
	GOUT_BLK_DISPAUD_UID_PPMU_ABOX_IPCLKPORT_ACLK,
	GOUT_BLK_DISPAUD_UID_PPMU_ABOX_IPCLKPORT_PCLK,
	GOUT_BLK_DISPAUD_UID_SMMU_ABOX_IPCLKPORT_CLK,
	GOUT_BLK_DISPAUD_UID_LHS_ACEL_D_DPU_IPCLKPORT_I_CLK,
	GOUT_BLK_DISPAUD_UID_RSTnSYNC_CLK_DISPAUD_DISP_IPCLKPORT_CLK,
	GOUT_BLK_DISPAUD_UID_RSTnSYNC_CLK_DISPAUD_BUSP_IPCLKPORT_CLK,
	GOUT_BLK_DISPAUD_UID_PPMU_DPU_IPCLKPORT_ACLK,
	GOUT_BLK_DISPAUD_UID_PPMU_DPU_IPCLKPORT_PCLK,
	GOUT_BLK_DISPAUD_UID_SYSREG_DISPAUD_IPCLKPORT_PCLK,
	GOUT_BLK_DISPAUD_UID_LHM_AXI_P_DISPAUD_IPCLKPORT_I_CLK,
	GOUT_BLK_DISPAUD_UID_RSTnSYNC_CLK_AUD_CPU_ACLK_IPCLKPORT_CLK,
	CLK_BLK_DISPAUD_UID_DISPAUD_CMU_DISPAUD_IPCLKPORT_PCLK,
	GOUT_BLK_DISPAUD_UID_LHS_AXI_D_ABOX_IPCLKPORT_I_CLK,
	GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_SPDY,
	GOUT_BLK_DISPAUD_UID_SMMU_DPU_IPCLKPORT_CLK,
	GOUT_BLK_DISPAUD_UID_BLK_DISPAUD_IPCLKPORT_CLK_DISPAUD_DISP,
	GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_CCLK_DBG,
	GOUT_BLK_DISPAUD_UID_RSTnSYNC_CLK_AUD_DSIF_IPCLKPORT_CLK,
	GOUT_BLK_DISPAUD_UID_DPU_IPCLKPORT_ACLK_DECON,
	GOUT_BLK_DISPAUD_UID_DPU_IPCLKPORT_ACLK_DPP,
	GOUT_BLK_DISPAUD_UID_DPU_IPCLKPORT_ACLK_DMA,
	GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_ACLK,
	GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_DSIF,
	GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_OSC_SPDY,
	CLK_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_UAIF0,
	CLK_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_UAIF1,
	CLK_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_UAIF2,
	CLK_BLK_DISPAUD_UID_RSTnSYNC_CLK_AUD_UAIF0_IPCLKPORT_CLK,
	CLK_BLK_DISPAUD_UID_RSTnSYNC_CLK_AUD_UAIF1_IPCLKPORT_CLK,
	CLK_BLK_DISPAUD_UID_RSTnSYNC_CLK_AUD_UAIF2_IPCLKPORT_CLK,
	GOUT_BLK_DISPAUD_UID_BTM_ABOX_IPCLKPORT_I_ACLK,
	GOUT_BLK_DISPAUD_UID_BTM_ABOX_IPCLKPORT_I_PCLK,
	GOUT_BLK_DISPAUD_UID_BTM_DPU_IPCLKPORT_I_ACLK,
	GOUT_BLK_DISPAUD_UID_BTM_DPU_IPCLKPORT_I_PCLK,
	GOUT_BLK_DISPAUD_UID_BLK_DISPAUD_IPCLKPORT_CLK_DISPAUD_AUD,
	GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_CCLK_CA7,
	GOUT_BLK_DISPAUD_UID_GPIO_DISPAUD_IPCLKPORT_PCLK,
	GOUT_BLK_FSYS_UID_SSS_IPCLKPORT_i_PCLK,
	GOUT_BLK_FSYS_UID_RTIC_IPCLKPORT_i_PCLK,
	GOUT_BLK_FSYS_UID_RSTnSYNC_CLK_FSYS_BUS_IPCLKPORT_CLK,
	GOUT_BLK_FSYS_UID_GPIO_FSYS_IPCLKPORT_PCLK,
	GOUT_BLK_FSYS_UID_LHM_AXI_P_FSYS_IPCLKPORT_I_CLK,
	GOUT_BLK_FSYS_UID_LHS_ACEL_D_FSYS_IPCLKPORT_I_CLK,
	GOUT_BLK_FSYS_UID_PPMU_FSYS_IPCLKPORT_ACLK,
	GOUT_BLK_FSYS_UID_PPMU_FSYS_IPCLKPORT_PCLK,
	GOUT_BLK_FSYS_UID_SYSREG_FSYS_IPCLKPORT_PCLK,
	CLK_BLK_FSYS_UID_RSTnSYNC_CLK_FSYS_OSCCLK_IPCLKPORT_CLK,
	GOUT_BLK_FSYS_UID_XIU_D_FSYS_IPCLKPORT_ACLK,
	GOUT_BLK_FSYS_UID_ADM_AHB_SSS_IPCLKPORT_HCLKM,
	CLK_BLK_FSYS_UID_FSYS_CMU_FSYS_IPCLKPORT_PCLK,
	GOUT_BLK_FSYS_UID_MMC_CARD_IPCLKPORT_I_ACLK,
	GOUT_BLK_FSYS_UID_MMC_EMBD_IPCLKPORT_I_ACLK,
	GOUT_BLK_FSYS_UID_RTIC_IPCLKPORT_i_ACLK,
	GOUT_BLK_FSYS_UID_SSS_IPCLKPORT_i_ACLK,
	GOUT_BLK_FSYS_UID_UFS_EMBD_IPCLKPORT_I_ACLK,
	GOUT_BLK_FSYS_UID_UFS_EMBD_IPCLKPORT_I_FMP_CLK,
	GOUT_BLK_FSYS_UID_PGEN_LITE_FSYS_IPCLKPORT_CLK,
	GOUT_BLK_FSYS_UID_BTM_FSYS_IPCLKPORT_I_ACLK,
	GOUT_BLK_FSYS_UID_BTM_FSYS_IPCLKPORT_I_PCLK,
	GOUT_BLK_FSYS_UID_MMC_CARD_IPCLKPORT_SDCLKIN,
	GOUT_BLK_FSYS_UID_MMC_EMBD_IPCLKPORT_SDCLKIN,
	GOUT_BLK_FSYS_UID_UFS_EMBD_IPCLKPORT_I_CLK_UNIPRO,
	GOUT_BLK_G2D_UID_LHM_AXI_P_G2D_IPCLKPORT_I_CLK,
	GOUT_BLK_G2D_UID_SYSREG_G2D_IPCLKPORT_PCLK,
	GOUT_BLK_G2D_UID_RSTnSYNC_CLK_G2D_MSCL_IPCLKPORT_CLK,
	CLK_BLK_G2D_UID_RSTnSYNC_CLK_G2D_OSCCLK_IPCLKPORT_CLK,
	GOUT_BLK_G2D_UID_RSTnSYNC_CLK_G2D_BUSP_IPCLKPORT_CLK,
	CLK_BLK_G2D_UID_G2D_CMU_G2D_IPCLKPORT_PCLK,
	GOUT_BLK_G2D_UID_PPMU_G2D_IPCLKPORT_PCLK,
	GOUT_BLK_G2D_UID_JPEG_IPCLKPORT_I_FIMP_CLK,
	GOUT_BLK_G2D_UID_MSCL_IPCLKPORT_ACLK,
	GOUT_BLK_G2D_UID_RSTnSYNC_CLK_G2D_G2D_IPCLKPORT_CLK,
	GOUT_BLK_G2D_UID_AS_AXI_JPEG_IPCLKPORT_ACLKM,
	GOUT_BLK_G2D_UID_AS_AXI_JPEG_IPCLKPORT_ACLKS,
	GOUT_BLK_G2D_UID_AS_AXI_MSCL_IPCLKPORT_ACLKS,
	GOUT_BLK_G2D_UID_AS_AXI_MSCL_IPCLKPORT_ACLKM,
	GOUT_BLK_G2D_UID_LHS_ACEL_D_G2D_IPCLKPORT_I_CLK,
	GOUT_BLK_G2D_UID_PPMU_G2D_IPCLKPORT_ACLK,
	GOUT_BLK_G2D_UID_SYSMMU_G2D_IPCLKPORT_CLK,
	GOUT_BLK_G2D_UID_XIU_D_MSCL_IPCLKPORT_ACLK,
	GOUT_BLK_G2D_UID_G2D_IPCLKPORT_ACLK,
	GOUT_BLK_G2D_UID_PGEN100_LITE_G2D_IPCLKPORT_CLK,
	GOUT_BLK_G2D_UID_BLK_G2D_IPCLKPORT_CLK_G2D_MSCL,
	GOUT_BLK_G2D_UID_BLK_G2D_IPCLKPORT_CLK_G2D_G2D,
	GOUT_BLK_G2D_UID_BTM_G2D_IPCLKPORT_I_ACLK,
	GOUT_BLK_G2D_UID_BTM_G2D_IPCLKPORT_I_PCLK,
	GOUT_BLK_G3D_UID_LHS_AXI_G3DSFR_IPCLKPORT_I_CLK,
	GOUT_BLK_G3D_UID_LHM_AXI_P_G3D_IPCLKPORT_I_CLK,
	GOUT_BLK_G3D_UID_SYSREG_G3D_IPCLKPORT_PCLK,
	GOUT_BLK_G3D_UID_RSTnSYNC_CLK_G3D_BUSP_IPCLKPORT_CLK,
	CLK_BLK_G3D_UID_RSTnSYNC_CLK_G3D_OSCCLK_IPCLKPORT_CLK,
	GOUT_BLK_G3D_UID_RSTnSYNC_CLK_G3D_BUSD_IPCLKPORT_CLK,
	GOUT_BLK_G3D_UID_LHM_AXI_G3DSFR_IPCLKPORT_I_CLK,
	CLK_BLK_G3D_UID_G3D_CMU_G3D_IPCLKPORT_PCLK,
	GOUT_BLK_G3D_UID_GRAY2BIN_G3D_IPCLKPORT_CLK,
	GOUT_BLK_G3D_UID_PGEN_LITE_G3D_IPCLKPORT_CLK,
	CLK_BLK_G3D_UID_HPM_G3D_IPCLKPORT_hpm_targetclk_c,
	GOUT_BLK_G3D_UID_BUSIF_HPMG3D_IPCLKPORT_PCLK,
	GOUT_BLK_G3D_UID_BTM_G3D_IPCLKPORT_I_ACLK,
	GOUT_BLK_G3D_UID_BTM_G3D_IPCLKPORT_I_PCLK,
	CLK_BLK_G3D_UID_G3D_IPCLKPORT_CLK,
	GOUT_BLK_G3D_UID_LHS_AXI_D_G3D_IPCLKPORT_I_CLK,
	CLK_BLK_ISP_UID_RSTnSYNC_CLK_ISP_OSCCLK_IPCLKPORT_CLK,
	CLK_BLK_ISP_UID_ISP_CMU_ISP_IPCLKPORT_PCLK,
	GOUT_BLK_ISP_UID_RSTnSYNC_CLK_ISP_BUSP_IPCLKPORT_CLK,
	GOUT_BLK_ISP_UID_RSTnSYNC_CLK_ISP_BUSD_IPCLKPORT_CLK,
	GOUT_BLK_ISP_UID_RSTnSYNC_CLK_ISP_GDC_IPCLKPORT_CLK,
	GOUT_BLK_ISP_UID_RSTnSYNC_CLK_ISP_VRA_IPCLKPORT_CLK,
	GOUT_BLK_ISP_UID_SYSREG_ISP_IPCLKPORT_PCLK,
	GOUT_BLK_ISP_UID_LHM_AXI_P_ISP_IPCLKPORT_I_CLK,
	GOUT_BLK_ISP_UID_LHS_ACEL_D1_ISP_IPCLKPORT_I_CLK,
	GOUT_BLK_ISP_UID_LHS_ACEL_D0_ISP_IPCLKPORT_I_CLK,
	GOUT_BLK_ISP_UID_is6p10p0_ISP_IPCLKPORT_PCLK_PPMU_ISP1,
	GOUT_BLK_ISP_UID_is6p10p0_ISP_IPCLKPORT_ACLK_XIU_ASYNCM_VRA,
	GOUT_BLK_ISP_UID_is6p10p0_ISP_IPCLKPORT_ACLK_XIU_ASYNCS_VRA,
	GOUT_BLK_ISP_UID_is6p10p0_ISP_IPCLKPORT_ACLK_XIU_ASYNCS_GDC,
	GOUT_BLK_ISP_UID_is6p10p0_ISP_IPCLKPORT_ACLK_XIU_ASYNCM_GDC,
	GOUT_BLK_ISP_UID_is6p10p0_ISP_IPCLKPORT_ACLK_PPMU_ISP0,
	GOUT_BLK_ISP_UID_is6p10p0_ISP_IPCLKPORT_PCLK_PPMU_ISP0,
	GOUT_BLK_ISP_UID_is6p10p0_ISP_IPCLKPORT_ACLK_SMMU_ISP0,
	GOUT_BLK_ISP_UID_is6p10p0_ISP_IPCLKPORT_ACLK_GDC,
	GOUT_BLK_ISP_UID_is6p10p0_ISP_IPCLKPORT_ACLK_ISP,
	GOUT_BLK_ISP_UID_is6p10p0_ISP_IPCLKPORT_ACLK_VRA,
	GOUT_BLK_ISP_UID_LHM_ATB_CAMISP_IPCLKPORT_I_CLK,
	GOUT_BLK_ISP_UID_BLK_ISP_IPCLKPORT_CLK_ISP_BUSD,
	GOUT_BLK_ISP_UID_BLK_ISP_IPCLKPORT_CLK_ISP_GDC,
	GOUT_BLK_ISP_UID_BLK_ISP_IPCLKPORT_CLK_ISP_VRA,
	GOUT_BLK_ISP_UID_is6p10p0_ISP_IPCLKPORT_ACLK_PPMU_ISP1,
	GOUT_BLK_ISP_UID_is6p10p0_ISP_IPCLKPORT_ACLK_SMMU_ISP1,
	GOUT_BLK_ISP_UID_is6p10p0_ISP_IPCLKPORT_ACLK_XIU_D_ISP,
	GOUT_BLK_ISP_UID_is6p10p0_ISP_IPCLKPORT_ACLK_MCSC,
	GOUT_BLK_ISP_UID_is6p10p0_ISP_IPCLKPORT_PGEN_LITE_ISP_PCLK,
	GOUT_BLK_ISP_UID_BTM_ISP0_IPCLKPORT_I_ACLK,
	GOUT_BLK_ISP_UID_BTM_ISP0_IPCLKPORT_I_PCLK,
	GOUT_BLK_ISP_UID_BTM_ISP1_IPCLKPORT_I_ACLK,
	GOUT_BLK_ISP_UID_BTM_ISP1_IPCLKPORT_I_PCLK,
	CLK_BLK_MFC_UID_MFC_CMU_MFC_IPCLKPORT_PCLK,
	GOUT_BLK_MFC_UID_AS_AXI_WFD_IPCLKPORT_ACLKS,
	GOUT_BLK_MFC_UID_AS_AXI_WFD_IPCLKPORT_ACLKM,
	GOUT_BLK_MFC_UID_LH_ATB_MFC_IPCLKPORT_I_CLK_SI,
	GOUT_BLK_MFC_UID_LH_ATB_MFC_IPCLKPORT_I_CLK_MI,
	GOUT_BLK_MFC_UID_MFC_IPCLKPORT_ACLK,
	GOUT_BLK_MFC_UID_PGEN100_LITE_MFC_IPCLKPORT_CLK,
	GOUT_BLK_MFC_UID_PPMU_MFCD0_IPCLKPORT_ACLK,
	GOUT_BLK_MFC_UID_PPMU_MFCD0_IPCLKPORT_PCLK,
	GOUT_BLK_MFC_UID_PPMU_MFCD1_IPCLKPORT_ACLK,
	GOUT_BLK_MFC_UID_PPMU_MFCD1_IPCLKPORT_PCLK,
	GOUT_BLK_MFC_UID_SYSMMU_MFCD0_IPCLKPORT_CLK,
	GOUT_BLK_MFC_UID_SYSMMU_MFCD1_IPCLKPORT_CLK,
	GOUT_BLK_MFC_UID_SYSREG_MFC_IPCLKPORT_PCLK,
	GOUT_BLK_MFC_UID_WFD_IPCLKPORT_ACLK,
	GOUT_BLK_MFC_UID_XIU_D_MFC_IPCLKPORT_ACLK,
	GOUT_BLK_MFC_UID_BLK_MFC_IPCLKPORT_CLK_MFC_MFC,
	GOUT_BLK_MFC_UID_BLK_MFC_IPCLKPORT_CLK_MFC_WFD,
	GOUT_BLK_MFC_UID_RSTnSYNC_CLK_MFC_MFC_IPCLKPORT_CLK,
	GOUT_BLK_MFC_UID_RSTnSYNC_CLK_MFC_WFD_IPCLKPORT_CLK,
	CLK_BLK_MFC_UID_RSTnSYNC_CLK_MFC_OSCCLK_IPCLKPORT_CLK,
	GOUT_BLK_MFC_UID_RSTnSYNC_CLK_MFC_BUSP_IPCLKPORT_CLK,
	GOUT_BLK_MFC_UID_BTM_MFCD0_IPCLKPORT_I_PCLK,
	GOUT_BLK_MFC_UID_BTM_MFCD0_IPCLKPORT_I_ACLK,
	GOUT_BLK_MFC_UID_BTM_MFCD1_IPCLKPORT_I_ACLK,
	GOUT_BLK_MFC_UID_BTM_MFCD1_IPCLKPORT_I_PCLK,
	GOUT_BLK_MFC_UID_LHM_AXI_P_MFC_IPCLKPORT_I_CLK,
	GOUT_BLK_MFC_UID_LHS_ACEL_D0_MFC_IPCLKPORT_I_CLK,
	GOUT_BLK_MFC_UID_LHS_ACEL_D1_MFC_IPCLKPORT_I_CLK,
	GOUT_BLK_MFC_UID_RSTnSYNC_CLK_MFC_LH_ATB_MFC_MI_SW_RESET_IPCLKPORT_CLK,
	GOUT_BLK_MFC_UID_RSTnSYNC_CLK_MFC_LH_ATB_MFC_SI_SW_RESET_IPCLKPORT_CLK,
	GOUT_BLK_MFC_UID_RSTnSYNC_CLK_MFC_MFC_SW_RESET_IPCLKPORT_CLK,
	GOUT_BLK_MFC_UID_RSTnSYNC_CLK_MFC_WFD_SW_RESET_IPCLKPORT_CLK,
	CLK_BLK_MIF_UID_RSTnSYNC_CLK_MIF_OSCCLK_IPCLKPORT_CLK,
	GOUT_BLK_MIF_UID_RSTnSYNC_CLK_MIF_BUSD_IPCLKPORT_CLK,
	GOUT_BLK_MIF_UID_QE_DMC_CPU_IPCLKPORT_ACLK,
	GOUT_BLK_MIF_UID_DDR_PHY_IPCLKPORT_PCLK,
	GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK_PPMPU,
	GOUT_BLK_MIF_UID_LHM_AXI_P_MIF_IPCLKPORT_I_CLK,
	GOUT_BLK_MIF_UID_PPMU_DMC_CPU_IPCLKPORT_PCLK,
	GOUT_BLK_MIF_UID_QE_DMC_CPU_IPCLKPORT_PCLK,
	GOUT_BLK_MIF_UID_RSTnSYNC_CLK_MIF_BUSP_IPCLKPORT_CLK,
	GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DDR_PHY_IPCLKPORT_PCLK,
	GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DMC_IPCLKPORT_PCLK,
	GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DMC_PPMPU_IPCLKPORT_PCLK,
	GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DMC_SECURE_IPCLKPORT_PCLK,
	GOUT_BLK_MIF_UID_SYSREG_MIF_IPCLKPORT_PCLK,
	CLK_BLK_MIF_UID_MIF_CMU_MIF_IPCLKPORT_PCLK,
	CLK_BLK_MIF_UID_PPMU_DMC_CPU_IPCLKPORT_ACLK,
	GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DMC_PF_IPCLKPORT_PCLK,
	GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK_PF,
	GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK_SECURE,
	GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK,
	CLK_BLK_MIF_UID_HPM_MIF_IPCLKPORT_hpm_targetclk_c,
	GOUT_BLK_MIF_UID_BUSIF_HPMMIF_IPCLKPORT_PCLK,
	GOUT_BLK_MIF_UID_DMC_IPCLKPORT_ACLK,
	CLK_BLK_MIF_UID_LHM_AXI_D_MIF_CP_IPCLKPORT_I_CLK,
	CLK_BLK_MIF_UID_LHM_AXI_D_MIF_CPU_IPCLKPORT_I_CLK,
	CLK_BLK_MIF_UID_LHM_AXI_D_MIF_NRT_IPCLKPORT_I_CLK,
	CLK_BLK_MIF_UID_LHM_AXI_D_MIF_RT_IPCLKPORT_I_CLK,
	CLK_BLK_MIF1_UID_MIF1_CMU_MIF1_IPCLKPORT_PCLK,
	GOUT_BLK_MIF1_UID_DMC1_IPCLKPORT_ACLK,
	GOUT_BLK_MIF1_UID_HPM_MIF1_IPCLKPORT_hpm_targetclk_c,
	GOUT_BLK_MIF1_UID_BUSIF_HPMMIF1_IPCLKPORT_PCLK,
	GOUT_BLK_MIF1_UID_DMC1_IPCLKPORT_PCLK,
	GOUT_BLK_MIF1_UID_DMC1_IPCLKPORT_PCLK_PF,
	GOUT_BLK_MIF1_UID_DMC1_IPCLKPORT_PCLK_PPMPU,
	GOUT_BLK_MIF1_UID_DMC1_IPCLKPORT_PCLK_SECURE,
	GOUT_BLK_MIF1_UID_LHM_AXI_D_MIF1_CP_IPCLKPORT_I_CLK,
	GOUT_BLK_MIF1_UID_LHM_AXI_D_MIF1_CPU_IPCLKPORT_I_CLK,
	GOUT_BLK_MIF1_UID_LHM_AXI_D_MIF1_NRT_IPCLKPORT_I_CLK,
	GOUT_BLK_MIF1_UID_LHM_AXI_D_MIF1_RT_IPCLKPORT_I_CLK,
	CLK_BLK_PERI_UID_RSTnSYNC_CLK_PERI_OSCCLK_IPCLKPORT_CLK,
	GOUT_BLK_PERI_UID_AXI2AHB_MSD32_PERI_IPCLKPORT_aclk,
	GOUT_BLK_PERI_UID_BUSIF_TMU_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_LHM_AXI_P_PERI_IPCLKPORT_I_CLK,
	GOUT_BLK_PERI_UID_OTP_CON_TOP_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_RSTnSYNC_CLK_PERI_BUS_IPCLKPORT_CLK,
	GOUT_BLK_PERI_UID_SYSREG_PERI_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_WDT_CLUSTER0_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_WDT_CLUSTER1_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_MCT_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_PWM_MOTOR_IPCLKPORT_i_PCLK_S0,
	GOUT_BLK_PERI_UID_GPIO_PERI_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_SPI_0_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_SPI_1_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_UART_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_CAMI2C_0_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_CAMI2C_1_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_CAMI2C_2_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_CAMI2C_3_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_USI00_I2C_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_USI00_USI_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_SPI_2_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_RSTnSYNC_CLK_PERI_UART_IPCLKPORT_CLK,
	GATE_CLK_PERI_I2C,
	GATE_CLK_PERI_SPI0,
	GATE_CLK_PERI_SPI1,
	GATE_CLK_PERI_USI_USI,
	GATE_CLK_PERI_USI_I2C,
	GATE_CLK_PERI_SPI2,
	GOUT_BLK_PERI_UID_RSTnSYNC_CLK_PERI_I2C_IPCLKPORT_CLK,
	GOUT_BLK_PERI_UID_RSTnSYNC_CLK_PERI_SPI_0_IPCLKPORT_CLK,
	GOUT_BLK_PERI_UID_RSTnSYNC_CLK_PERI_SPI_1_IPCLKPORT_CLK,
	GOUT_BLK_PERI_UID_RSTnSYNC_CLK_PERI_USI00_I2C_IPCLKPORT_CLK,
	GOUT_BLK_PERI_UID_RSTnSYNC_CLK_PERI_USI00_USI_IPCLKPORT_CLK,
	GOUT_BLK_PERI_UID_RSTnSYNC_CLK_PERI_SPI_2_IPCLKPORT_CLK,
	CLK_BLK_PERI_UID_PERI_CMU_PERI_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_UART_IPCLKPORT_IPCLK,
	GOUT_BLK_PERI_UID_CAMI2C_0_IPCLKPORT_IPCLK,
	GOUT_BLK_PERI_UID_CAMI2C_1_IPCLKPORT_IPCLK,
	GOUT_BLK_PERI_UID_CAMI2C_2_IPCLKPORT_IPCLK,
	GOUT_BLK_PERI_UID_CAMI2C_3_IPCLKPORT_IPCLK,
	GOUT_BLK_PERI_UID_I2C_0_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_I2C_1_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_I2C_2_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_I2C_3_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_I2C_4_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_I2C_5_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_I2C_6_IPCLKPORT_PCLK,
	GOUT_BLK_PERI_UID_SPI_0_IPCLKPORT_IPCLK,
	GOUT_BLK_PERI_UID_SPI_1_IPCLKPORT_IPCLK,
	GOUT_BLK_PERI_UID_SPI_2_IPCLKPORT_IPCLK,
	GOUT_BLK_PERI_UID_USI00_I2C_IPCLKPORT_IPCLK,
	GOUT_BLK_PERI_UID_USI00_USI_IPCLKPORT_IPCLK,
	CLK_BLK_SHUB_UID_SHUB_CMU_SHUB_IPCLKPORT_PCLK,
	GOUT_BLK_SHUB_UID_BAAW_D_SHUB_IPCLKPORT_I_PCLK,
	GOUT_BLK_SHUB_UID_BAAW_P_APM_SHUB_IPCLKPORT_I_PCLK,
	GOUT_BLK_SHUB_UID_GPIO_SHUB_IPCLKPORT_PCLK,
	GOUT_BLK_SHUB_UID_I2C_SHUB00_IPCLKPORT_PCLK,
	GOUT_BLK_SHUB_UID_LHM_AXI_LP_SHUB_IPCLKPORT_I_CLK,
	GOUT_BLK_SHUB_UID_LHM_AXI_P_SHUB_IPCLKPORT_I_CLK,
	GOUT_BLK_SHUB_UID_LHS_AXI_D_SHUB_IPCLKPORT_I_CLK,
	GOUT_BLK_SHUB_UID_LHS_AXI_P_APM_SHUB_IPCLKPORT_I_CLK,
	GOUT_BLK_SHUB_UID_PWM_SHUB_IPCLKPORT_i_PCLK_S0,
	GOUT_BLK_SHUB_UID_SWEEPER_D_SHUB_IPCLKPORT_ACLK,
	GOUT_BLK_SHUB_UID_SWEEPER_P_APM_SHUB_IPCLKPORT_ACLK,
	GOUT_BLK_SHUB_UID_SYSREG_SHUB_IPCLKPORT_PCLK,
	GOUT_BLK_SHUB_UID_TIMER_SHUB_IPCLKPORT_PCLK,
	GOUT_BLK_SHUB_UID_USI_SHUB00_IPCLKPORT_PCLK,
	GOUT_BLK_SHUB_UID_WDT_SHUB_IPCLKPORT_PCLK,
	GOUT_BLK_SHUB_UID_RSTnSYNC_CLK_SHUB_BUS_IPCLKPORT_CLK,
	GOUT_BLK_SHUB_UID_RSTnSYNC_CLK_SHUB_I2C_IPCLKPORT_CLK,
	CLK_BLK_SHUB_UID_RSTnSYNC_CLK_SHUB_OSCCLK_IPCLKPORT_CLK,
	CLK_BLK_SHUB_UID_RSTnSYNC_CLK_SHUB_RTCCLK_IPCLKPORT_CLK,
	GOUT_BLK_SHUB_UID_RSTnSYNC_CLK_SHUB_USI00_IPCLKPORT_CLK,
	GOUT_BLK_SHUB_UID_CM4_SHUB_IPCLKPORT_FCLK,
	GOUT_BLK_SHUB_UID_I2C_SHUB00_IPCLKPORT_IPCLK,
	GOUT_BLK_SHUB_UID_PDMA_SHUB_IPCLKPORT_ACLK,
	GOUT_BLK_SHUB_UID_USI_SHUB00_IPCLKPORT_IPCLK,
	GOUT_BLK_SHUB_UID_XIU_DP_SHUB_IPCLKPORT_ACLK,
	CLK_BLK_USB_UID_USB_CMU_USB_IPCLKPORT_PCLK,
	GOUT_BLK_USB_UID_LHM_AXI_P_USB_IPCLKPORT_I_CLK,
	GOUT_BLK_USB_UID_PPMU_USB_IPCLKPORT_ACLK,
	GOUT_BLK_USB_UID_PPMU_USB_IPCLKPORT_PCLK,
	GOUT_BLK_USB_UID_SYSREG_USB_IPCLKPORT_PCLK,
	GOUT_BLK_USB_UID_USB30DRD_IPCLKPORT_bus_clk_early,
	GOUT_BLK_USB_UID_DP_LINK_IPCLKPORT_DPTX_LINK_I_DP_GTC_CLK,
	GOUT_BLK_USB_UID_RSTnSYNC_CLK_USB_BUS_IPCLKPORT_CLK,
	CLK_BLK_USB_UID_RSTnSYNC_CLK_USB_OSCCLK_IPCLKPORT_CLK,
	GOUT_BLK_USB_UID_USB30DRD_IPCLKPORT_ACLK_PHYCTRL_20,
	GOUT_BLK_USB_UID_PGEN_LITE_USB_IPCLKPORT_CLK,
	GOUT_BLK_USB_UID_USB30DRD_IPCLKPORT_ACLK_PHYCTRL_30_1,
	GOUT_BLK_USB_UID_BTM_USB_IPCLKPORT_I_ACLK,
	GOUT_BLK_USB_UID_BTM_USB_IPCLKPORT_I_PCLK,
	GOUT_BLK_USB_UID_US_D_USB_IPCLKPORT_aclk,
	GOUT_BLK_USB_UID_DP_LINK_IPCLKPORT_DPTX_LINK_I_PCLK,
	GOUT_BLK_USB_UID_USB30DRD_IPCLKPORT_ACLK_PHYCTRL_30_0,
	GOUT_BLK_USB_UID_USB30DRD_IPCLKPORT_USB30DRD_ref_clk,
	GOUT_BLK_USB_UID_LHS_ACEL_D_USB_IPCLKPORT_I_CLK,
	GOUT_BLK_VIPX1_UID_LHS_ACEL_D_VIPX1_IPCLKPORT_I_CLK,
	GOUT_BLK_VIPX1_UID_RSTnSYNC_CLK_VIPX1_BUSD_IPCLKPORT_CLK,
	GOUT_BLK_VIPX1_UID_RSTnSYNC_CLK_VIPX1_BUSP_IPCLKPORT_CLK,
	CLK_BLK_VIPX1_UID_RSTnSYNC_CLK_VIPX1_OSCCLK_IPCLKPORT_CLK,
	GOUT_BLK_VIPX1_UID_SYSREG_VIPX1_IPCLKPORT_PCLK,
	CLK_BLK_VIPX1_UID_VIPX1_CMU_VIPX1_IPCLKPORT_PCLK,
	GOUT_BLK_VIPX1_UID_LHS_ATB_VIPX1_IPCLKPORT_I_CLK,
	GOUT_BLK_VIPX1_UID_BLK_VIPX1_IPCLKPORT_CLK_VIPX1_BUSD,
	GOUT_BLK_VIPX1_UID_PPMU_D_VIPX1_IPCLKPORT_ACLK,
	GOUT_BLK_VIPX1_UID_PPMU_D_VIPX1_IPCLKPORT_PCLK,
	GOUT_BLK_VIPX1_UID_SMMU_D_VIPX1_IPCLKPORT_CLK,
	GOUT_BLK_VIPX1_UID_XIU_D_VIPX1_IPCLKPORT_ACLK,
	GOUT_BLK_VIPX1_UID_PGEN_LITE_VIPX1_IPCLKPORT_CLK,
	GOUT_BLK_VIPX1_UID_VIPX1_IPCLKPORT_CLK,
	GOUT_BLK_VIPX1_UID_BTM_D_VIPX1_IPCLKPORT_I_ACLK,
	GOUT_BLK_VIPX1_UID_BTM_D_VIPX1_IPCLKPORT_I_PCLK,
	GOUT_BLK_VIPX1_UID_LHM_AXI_P_VIPX1_IPCLKPORT_I_CLK,
	GOUT_BLK_VIPX1_UID_LHM_ATB_VIPX1_IPCLKPORT_I_CLK,
	GOUT_BLK_VIPX1_UID_LHS_AXI_P_VIPX1_LOCAL_IPCLKPORT_I_CLK,
	CLK_BLK_VIPX2_UID_VIPX2_CMU_VIPX2_IPCLKPORT_PCLK,
	GOUT_BLK_VIPX2_UID_BTM_D_VIPX2_IPCLKPORT_I_ACLK,
	GOUT_BLK_VIPX2_UID_BTM_D_VIPX2_IPCLKPORT_I_PCLK,
	GOUT_BLK_VIPX2_UID_LHM_ATB_VIPX2_IPCLKPORT_I_CLK,
	GOUT_BLK_VIPX2_UID_LHM_AXI_P_VIPX2_IPCLKPORT_I_CLK,
	GOUT_BLK_VIPX2_UID_LHS_ACEL_D_VIPX2_IPCLKPORT_I_CLK,
	GOUT_BLK_VIPX2_UID_LHS_ATB_VIPX2_IPCLKPORT_I_CLK,
	GOUT_BLK_VIPX2_UID_LHM_AXI_P_VIPX2_LOCAL_IPCLKPORT_I_CLK,
	GOUT_BLK_VIPX2_UID_PGEN_LITE_VIPX2_IPCLKPORT_CLK,
	GOUT_BLK_VIPX2_UID_PPMU_D_VIPX2_IPCLKPORT_ACLK,
	GOUT_BLK_VIPX2_UID_PPMU_D_VIPX2_IPCLKPORT_PCLK,
	GOUT_BLK_VIPX2_UID_SMMU_D_VIPX2_IPCLKPORT_CLK,
	GOUT_BLK_VIPX2_UID_SYSREG_VIPX2_IPCLKPORT_PCLK,
	GOUT_BLK_VIPX2_UID_BLK_VIPX2_IPCLKPORT_CLK_VIPX2_BUSD,
	GOUT_BLK_VIPX2_UID_VIPX2_IPCLKPORT_CLK,
	GOUT_BLK_VIPX2_UID_RSTnSYNC_CLK_VIPX2_BUSD_IPCLKPORT_CLK,
	GOUT_BLK_VIPX2_UID_RSTnSYNC_CLK_VIPX2_BUSP_IPCLKPORT_CLK,
	CLK_BLK_VIPX2_UID_RSTnSYNC_CLK_VIPX2_OSCCLK_IPCLKPORT_CLK,
	end_of_gate,
	num_of_gate = end_of_gate - GATE_TYPE,
};

#endif