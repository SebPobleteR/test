/*
 * s2mps18-private.h - Voltage regulator driver for the s2mps18
 *
 *  Copyright (C) 2015 Samsung Electrnoics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __LINUX_MFD_S2MPS18_PRIV_H
#define __LINUX_MFD_S2MPS18_PRIV_H

#include <linux/i2c.h>
#define S2MPS18_REG_INVALID             (0xff)
#define S2MPS18_IRQSRC_PMIC		(1 << 0)

/* PMIC Top-Level Registers */
#define	S2MPS18_PMIC_REG_PMICID		0x00
#define	S2MPS18_PMIC_REG_INTSRC		0x01
#define	S2MPS18_PMIC_REG_INTSRC_MASK	0x02

/* Slave addr = 0xCC */
/* PMIC Registers */
#define S2MPS18_PMIC_REG_INT1		0x00
#define S2MPS18_PMIC_REG_INT2		0x01
#define S2MPS18_PMIC_REG_INT3		0x02
#define S2MPS18_PMIC_REG_INT4		0x03
#define S2MPS18_PMIC_REG_INT5		0x04
#define S2MPS18_PMIC_REG_INT6		0x05
#define S2MPS18_PMIC_REG_INT7		0x06
#define S2MPS18_PMIC_REG_INT1M		0x07
#define S2MPS18_PMIC_REG_INT2M		0x08
#define S2MPS18_PMIC_REG_INT3M		0x09
#define S2MPS18_PMIC_REG_INT4M		0x0A
#define S2MPS18_PMIC_REG_INT5M		0x0B
#define S2MPS18_PMIC_REG_INT6M		0x0C
#define S2MPS18_PMIC_REG_INT7M		0x0D
#define S2MPS18_PMIC_REG_STATUS1	0x0E
#define S2MPS18_PMIC_REG_STATUS2	0x0F
#define S2MPS18_PMIC_REG_PWRONSRC	0x10
#define S2MPS18_PMIC_REG_OFFSRC		0x11

#define S2MPS18_PMIC_REG_BUCHG		0x12
#define S2MPS18_PMIC_REG_RTCBUF		0x13
#define S2MPS18_PMIC_REG_CTRL1		0x14
#define S2MPS18_PMIC_REG_CTRL2		0x15
#define S2MPS18_PMIC_REG_CTRL3		0x16

#define S2MPS18_PMIC_REG_B1CTRL		0x1C
#define S2MPS18_PMIC_REG_B1OUT1		0x1D
#define S2MPS18_PMIC_REG_B1OUT2		0x1E
#define S2MPS18_PMIC_REG_B2CTRL		0x1F
#define S2MPS18_PMIC_REG_B2OUT1		0x20
#define S2MPS18_PMIC_REG_B2OUT2		0x21
#define S2MPS18_PMIC_REG_B3CTRL		0x22
#define S2MPS18_PMIC_REG_B3OUT1		0x23
#define S2MPS18_PMIC_REG_B3OUT2		0x24
#define S2MPS18_PMIC_REG_B4CTRL		0x25
#define S2MPS18_PMIC_REG_B4OUT1		0x26
#define S2MPS18_PMIC_REG_B4OUT2		0x27
#define S2MPS18_PMIC_REG_B5CTRL		0x28
#define S2MPS18_PMIC_REG_B5OUT		0x29
#define S2MPS18_PMIC_REG_B6CTRL		0x2A
#define S2MPS18_PMIC_REG_B6OUT		0x2B
#define S2MPS18_PMIC_REG_B7CTRL		0x2C
#define S2MPS18_PMIC_REG_B7OUT		0x2D
#define S2MPS18_PMIC_REG_B8CTRL		0x2E
#define S2MPS18_PMIC_REG_B8OUT		0x2F
#define S2MPS18_PMIC_REG_B9CTRL		0x30
#define S2MPS18_PMIC_REG_B9OUT		0x31
#define S2MPS18_PMIC_REG_B10CTRL	0x32
#define S2MPS18_PMIC_REG_B10OUT		0x33
#define S2MPS18_PMIC_REG_B11CTRL	0x34
#define S2MPS18_PMIC_REG_B11OUT1	0x35
#define S2MPS18_PMIC_REG_B11OUT2	0x36
#define S2MPS18_PMIC_REG_B12CTRL	0x37
#define S2MPS18_PMIC_REG_B12OUT		0x38
#define S2MPS18_PMIC_REG_B13CTRL	0x39
#define S2MPS18_PMIC_REG_B13OUT		0x3A
#define S2MPS18_PMIC_REG_B14CTRL	0x3B
#define S2MPS18_PMIC_REG_B14OUT		0x3C
#define S2MPS18_PMIC_REG_BB1CTRL	0x3D
#define S2MPS18_PMIC_REG_BB1OUT		0x3E

#define S2MPS18_PMIC_REG_BUCKRAMP	0x3F
#define S2MPS18_PMIC_REG_BUCKRAMP2	0x40
#define S2MPS18_PMIC_REG_BUCK2_PH_DVS	0x41
#define S2MPS18_PMIC_REG_BUCK5_PH_DVS	0x42
#define S2MPS18_PMIC_REG_BUCK6_PH_DVS	0x43
#define S2MPS18_PMIC_REG_LDO6_DVS	0x44
#define S2MPS18_PMIC_REG_LDO7_DVS	0x45
#define S2MPS18_PMIC_REG_LDO11_DVS	0x46
#define S2MPS18_PMIC_REG_LDO29_DVS	0x47
#define S2MPS18_PMIC_REG_BUCK7_DVS	0x48

#define S2MPS18_PMIC_REG_L1CTRL		0x49
#define S2MPS18_PMIC_REG_L2CTRL1	0x4A
#define S2MPS18_PMIC_REG_L2CTRL2	0x4B
#define S2MPS18_PMIC_REG_L3CTRL		0x4C
#define S2MPS18_PMIC_REG_L4CTRL		0x4D
#define S2MPS18_PMIC_REG_L5CTRL		0x4E
#define S2MPS18_PMIC_REG_L6CTRL		0x4F
#define S2MPS18_PMIC_REG_L7CTRL		0x50
#define S2MPS18_PMIC_REG_L8CTRL		0x51
#define S2MPS18_PMIC_REG_L9CTRL		0x52
#define S2MPS18_PMIC_REG_L10CTRL	0x53
#define S2MPS18_PMIC_REG_L11CTRL	0x54
#define S2MPS18_PMIC_REG_L12CTRL	0x55
#define S2MPS18_PMIC_REG_L13CTRL	0x56
#define S2MPS18_PMIC_REG_L14CTRL	0x57
#define S2MPS18_PMIC_REG_L15CTRL	0x58
#define S2MPS18_PMIC_REG_L16CTRL	0x59
#define S2MPS18_PMIC_REG_L17CTRL	0x5A
#define S2MPS18_PMIC_REG_L18CTRL	0x5B
#define S2MPS18_PMIC_REG_L19CTRL	0x5C
#define S2MPS18_PMIC_REG_L20CTRL	0x5D
#define S2MPS18_PMIC_REG_L21CTRL	0x5E
#define S2MPS18_PMIC_REG_L22CTRL	0x5F
#define S2MPS18_PMIC_REG_L23CTRL	0x60
#define S2MPS18_PMIC_REG_L24CTRL	0x61
#define S2MPS18_PMIC_REG_L25CTRL	0x62
#define S2MPS18_PMIC_REG_L26CTRL	0x63
#define S2MPS18_PMIC_REG_L27CTRL	0x64
#define S2MPS18_PMIC_REG_L28CTRL	0x65
#define S2MPS18_PMIC_REG_L29CTRL	0x66
#define S2MPS18_PMIC_REG_L30CTRL	0x67
#define S2MPS18_PMIC_REG_L31CTRL	0x68
#define S2MPS18_PMIC_REG_L32CTRL	0x69
#define S2MPS18_PMIC_REG_L33CTRL	0x6A
#define S2MPS18_PMIC_REG_L34CTRL	0x6B
#define S2MPS18_PMIC_REG_L35CTRL	0x6C
#define S2MPS18_PMIC_REG_L36CTRL	0x6D
#define S2MPS18_PMIC_REG_L37CTRL	0x6E
#define S2MPS18_PMIC_REG_L38CTRL	0x6F
#define S2MPS18_PMIC_REG_L39CTRL	0x70
#define S2MPS18_PMIC_REG_L40CTRL	0x71
#define S2MPS18_PMIC_REG_L41CTRL	0x72
#define S2MPS18_PMIC_REG_L42CTRL	0x73
#define S2MPS18_PMIC_REG_L43CTRL	0x74
#define S2MPS18_PMIC_REG_L44CTRL	0x75
#define S2MPS18_PMIC_REG_L45CTRL	0x76

#define S2MPS18_PMIC_REG_LDO_DSCH1	0x78
#define S2MPS18_PMIC_REG_LDO_DSCH2	0x79
#define S2MPS18_PMIC_REG_LDO_DSCH3	0x7A
#define S2MPS18_PMIC_REG_LDO_DSCH4	0x7B
#define S2MPS18_PMIC_REG_LDO_DSCH5	0x7C
#define S2MPS18_PMIC_REG_LDO_DSCH6	0x7D
#define S2MPS18_PMIC_REG_LDO_DSCH7	0x7E
#define S2MPS18_PMIC_REG_TCXO_CTRL	0x88
#define S2MPS18_PMIC_REG_PWREN_SEL1	0xC8
#define S2MPS18_PMIC_REG_PWREN_SEL2	0xC9
#define S2MPS18_PMIC_REG_LPM_MODE0	0xCC
#define S2MPS18_PMIC_REG_LPM_MODE1	0xCD
#define S2MPS18_PMIC_REG_LPM_MODE2	0xCE
#define S2MPS18_REG_ADC_CTRL1		0xCF
#define S2MPS18_REG_ADC_CTRL2		0xD0
#define S2MPS18_REG_ADC_CTRL3		0xD1
#define S2MPS18_REG_ADC_DATA		0xD2
#define S2MPS18_PMIC_REG_OCP_WARN1	0xD3
#define S2MPS18_PMIC_REG_OCP_WARN2	0xD4

/* S2MPS18regulator ids */
enum S2MPS18_regulators {
	S2MPS18_LDO1,
	S2MPS18_LDO2,
	S2MPS18_LDO3,
	S2MPS18_LDO4,
	S2MPS18_LDO5,
	S2MPS18_LDO6,
	S2MPS18_LDO7,
	S2MPS18_LDO8,
	S2MPS18_LDO9,
	S2MPS18_LDO10,
	S2MPS18_LDO11,
	S2MPS18_LDO12,
	S2MPS18_LDO13,
	S2MPS18_LDO14,
/*	S2MPS18_LDO15,
	S2MPS18_LDO16,
	S2MPS18_LDO17,
	S2MPS18_LDO18,
	S2MPS18_LDO19,
	S2MPS18_LDO20,
	S2MPS18_LDO21,
*/	S2MPS18_LDO22,
/*	S2MPS18_LDO23,
	S2MPS18_LDO24,
	S2MPS18_LDO25,
	S2MPS18_LDO26,
	S2MPS18_LDO27,
	S2MPS18_LDO28,
	S2MPS18_LDO29,
*/	S2MPS18_LDO30,
	S2MPS18_LDO31,
	S2MPS18_LDO32,
	S2MPS18_LDO33,
	S2MPS18_LDO34,
	S2MPS18_LDO35,
	S2MPS18_LDO36,
	S2MPS18_LDO37,
	S2MPS18_LDO38,
	S2MPS18_LDO39,
	S2MPS18_LDO40,
	S2MPS18_LDO41,
	S2MPS18_LDO42,
	S2MPS18_LDO43,
	S2MPS18_LDO44,
	S2MPS18_LDO45,
	S2MPS18_BUCK1,
	S2MPS18_BUCK2,
	S2MPS18_BUCK3,
	S2MPS18_BUCK4,
	S2MPS18_BUCK5,
	S2MPS18_BUCK6,
	S2MPS18_BUCK7,
	S2MPS18_BUCK8,
	S2MPS18_BUCK9,
	S2MPS18_BUCK10,
	S2MPS18_BUCK11,
	S2MPS18_BUCK12,
	S2MPS18_BUCK13,
/*	S2MPS18_BUCK14,
	S2MPS18_BB1, */
	S2MPS18_REG_MAX,
};

#define S2MPS18_BUCK_MIN1	300000
#define S2MPS18_BUCK_MIN2	600000
#define S2MPS18_LDO_MIN1	700000
#define S2MPS18_LDO_MIN2	400000
#define S2MPS18_LDO_MIN3	1800000
#define S2MPS18_LDO_MIN4	300000
#define S2MPS18_BUCK_STEP1	6250
#define S2MPS18_BUCK_STEP2	12500
#define S2MPS18_LDO_STEP1	12500
#define S2MPS18_LDO_STEP2	25000
#define S2MPS18_LDO_VSEL_MASK	0x3F
#define S2MPS18_BUCK_VSEL_MASK	0xFF
#define S2MPS18_ENABLE_MASK	(0x03 << S2MPS18_ENABLE_SHIFT)
#define S2MPS18_SW_ENABLE_MASK	0x03
#define S2MPS18_RAMP_DELAY	12000

#define S2MPS18_ENABLE_TIME_LDO		128
#define S2MPS18_ENABLE_TIME_BUCK1	130
#define S2MPS18_ENABLE_TIME_BUCK2	130
#define S2MPS18_ENABLE_TIME_BUCK3	130
#define S2MPS18_ENABLE_TIME_BUCK4	130
#define S2MPS18_ENABLE_TIME_BUCK5	130
#define S2MPS18_ENABLE_TIME_BUCK6	130
#define S2MPS18_ENABLE_TIME_BUCK7	130
#define S2MPS18_ENABLE_TIME_BUCK8	130
#define S2MPS18_ENABLE_TIME_BUCK9	130
#define S2MPS18_ENABLE_TIME_BUCK10	130
#define S2MPS18_ENABLE_TIME_BUCK11	130
#define S2MPS18_ENABLE_TIME_BUCK12	130
#define S2MPS18_ENABLE_TIME_BUCK13	130
#define S2MPS18_ENABLE_TIME_BUCK14	130
#define S2MPS18_ENABLE_TIME_BB		160

#define S2MPS18_ENABLE_SHIFT	0x06
#define S2MPS18_LDO_N_VOLTAGES	(S2MPS18_LDO_VSEL_MASK + 1)
#define S2MPS18_BUCK_N_VOLTAGES (S2MPS18_BUCK_VSEL_MASK + 1)

#define S2MPS18_PMIC_EN_SHIFT	6
#define S2MPS18_REGULATOR_MAX (S2MPS18_REG_MAX)
#define SEC_PMIC_REV(iodev)    (iodev)->pmic_rev

#define S2MPS18_OCP_WARN_EN_SHIFT	7
#define S2MPS18_OCP_WARN_RESET_SHIFT	6
#define S2MPS18_OCP_WARN_LEVEL_SHIFT	0

#define CURRENT_BS			15625
#define CURRENT_BD			31250
#define CURRENT_BT			46875
#define CURRENT_BB			15625
#define CURRENT_BV			15625
#define CURRENT_L150			879
#define CURRENT_L300			1758
#define CURRENT_L450			2637
#define CURRENT_L600			3516
#define CURRENT_L800			4688

#define POWER_CMS			977
#define	POWER_CMD			1953
#define POWER_CMT			2930
#define POWER_VM			1953
#define POWER_BB			3906
#define POWER_N150HL			110
#define POWER_N300H			220
#define POWER_N450H			330
#define POWER_N600HL			439
#define POWER_P150HL			220
#define POWER_P300HL			439
#define POWER_P450HL			659
#define POWER_P800L			1172
#define POWER_N150DVS			220
#define POWER_N300DVS			439
#define POWER_N450DVS			659

#define HIGH_ACC_CURRENT_BS		977
#define HIGH_ACC_CURRENT_BD		1953
#define HIGH_ACC_CURRENT_BT		2930
#define HIGH_ACC_CURRENT_BB		977
#define HIGH_ACC_CURRENT_BV		977
#define HIGH_ACC_CURRENT_L150		55
#define HIGH_ACC_CURRENT_L300		110
#define HIGH_ACC_CURRENT_L450		165
#define HIGH_ACC_CURRENT_L600		220
#define HIGH_ACC_CURRENT_L800		293

#define ADC_EN_MASK			0x80
#define ADC_ASYNCRD_MASK	0x80
#define ADC_PTR_MASK			0x0F
#define ADC_PGEN_MASK			0x30
#define CURRENT_MODE			0x00
#define CHANNELSET_MODE			0x20
#define POWER_MODE			0x10
#define RAWCURRENT_MODE			0x30

#define S2MPS18_LDO_START		0x41
#define S2MPS18_LDO_END			0x6D
#define S2MPS18_BUCK_START		0x01
#define S2MPS18_BUCK_END		0x0E

#define SMPNUM_MASK			0x0F

#define SEC_PMIC_REV(iodev)	(iodev)->pmic_rev
#define S2MPS18_MAX_ADC_CHANNEL		8
/*
 * sec_opmode_data - regulator operation mode data
 * @id: regulator id
 * @mode: regulator operation mode
 */

enum s2mps18_irq_source {
	PMIC_INT1 = 0,
	PMIC_INT2,
	PMIC_INT3,
	PMIC_INT4,
	PMIC_INT5,
	PMIC_INT6,
	PMIC_INT7,

	S2MPS18_IRQ_GROUP_NR,
};

#define S2MPS18_NUM_IRQ_PMIC_REGS	7

enum s2mps18_irq {
	/* PMIC */
	S2MPS18_PMIC_IRQ_PWRONR_INT1,
	S2MPS18_PMIC_IRQ_PWRONF_INT1,
	S2MPS18_PMIC_IRQ_JIGONBF_INT1,
	S2MPS18_PMIC_IRQ_JIGONBR_INT1,
	S2MPS18_PMIC_IRQ_ACOKBF_INT1,
	S2MPS18_PMIC_IRQ_ACOKBR_INT1,
	S2MPS18_PMIC_IRQ_PWRON1S_INT1,
	S2MPS18_PMIC_IRQ_MRB_INT1,

	S2MPS18_PMIC_IRQ_RTC60S_INT2,
	S2MPS18_PMIC_IRQ_RTCA1_INT2,
	S2MPS18_PMIC_IRQ_RTCA0_INT2,
	S2MPS18_PMIC_IRQ_SMPL_INT2,
	S2MPS18_PMIC_IRQ_RTC1S_INT2,
	S2MPS18_PMIC_IRQ_WTSR_INT2,
	S2MPS18_PMIC_IRQ_WRSTB_INT2,

	S2MPS18_PMIC_IRQ_120C_INT3,
	S2MPS18_PMIC_IRQ_140C_INT3,
	S2MPS18_PMIC_IRQ_TSD_INT3,
	S2MPS18_PMIC_IRQ_ADCDONE_INT3,

	S2MPS18_PMIC_IRQ_OC0_INT4,
	S2MPS18_PMIC_IRQ_OC1_INT4,
	S2MPS18_PMIC_IRQ_OC2_INT4,
	S2MPS18_PMIC_IRQ_OC3_INT4,
	S2MPS18_PMIC_IRQ_OC4_INT4,
	S2MPS18_PMIC_IRQ_OC5_INT4,
	S2MPS18_PMIC_IRQ_OC6_INT4,
	S2MPS18_PMIC_IRQ_OC7_INT4,

	S2MPS18_PMIC_IRQ_OCPB1_INT5,
	S2MPS18_PMIC_IRQ_OCPB2_INT5,
	S2MPS18_PMIC_IRQ_OCPB3_INT5,
	S2MPS18_PMIC_IRQ_OCPB4_INT5,
	S2MPS18_PMIC_IRQ_OCPB5_INT5,
	S2MPS18_PMIC_IRQ_OCPB6_INT5,
	S2MPS18_PMIC_IRQ_OCPB7_INT5,
	S2MPS18_PMIC_IRQ_OCPB8_INT5,

	S2MPS18_PMIC_IRQ_OCPB9_INT6,
	S2MPS18_PMIC_IRQ_OCPB10_INT6,
	S2MPS18_PMIC_IRQ_OCPB11_INT6,
	S2MPS18_PMIC_IRQ_OCPB12_INT6,
	S2MPS18_PMIC_IRQ_OCPB13_INT6,
	S2MPS18_PMIC_IRQ_OCPB14_INT6,
	S2MPS18_PMIC_IRQ_OCPBB_INT6,

	S2MPS18_PMIC_IRQ_SCLDO20_INT7,
	S2MPS18_PMIC_IRQ_SCLDO21_INT7,
	S2MPS18_PMIC_IRQ_SCLDO31_INT7,
	S2MPS18_PMIC_IRQ_SCLDO44_INT7,
	S2MPS18_PMIC_IRQ_SCLDO2_INT7,
	S2MPS18_PMIC_IRQ_MASKSCLDOINT_INT7,

	S2MPS18_IRQ_NR,
};


enum sec_device_type {
	S2MPS18X,
};

struct s2mps18_dev {
	struct device *dev;
	struct i2c_client *i2c;
	struct i2c_client *pmic;
	struct i2c_client *rtc;
	struct i2c_client *debug_i2c;
	struct mutex i2c_lock;
	struct apm_ops *ops;

	int type;
	int device_type;
	int irq;
	int irq_base;
	int irq_gpio;
	bool wakeup;
	struct mutex irqlock;
	int irq_masks_cur[S2MPS18_IRQ_GROUP_NR];
	int irq_masks_cache[S2MPS18_IRQ_GROUP_NR];

	/* pmic VER/REV register */
	u8 pmic_rev;	/* pmic Rev */
	int adc_mode;
	int adc_sync_mode;

	struct s2mps18_platform_data *pdata;
};

enum s2mps18_types {
	TYPE_S2MPS18,
};

extern int s2mps18_irq_init(struct s2mps18_dev *s2mps18);
extern void s2mps18_irq_exit(struct s2mps18_dev *s2mps18);

extern void s2mps18_powermeter_init(struct s2mps18_dev *s2mps18);
extern void s2mps18_powermeter_deinit(struct s2mps18_dev *s2mps18);

/* S2MPS18 shared i2c API function */
extern int s2mps18_read_reg(struct i2c_client *i2c, u8 reg, u8 *dest);
extern int s2mps18_bulk_read(struct i2c_client *i2c, u8 reg, int count,
				u8 *buf);
extern int s2mps18_write_reg(struct i2c_client *i2c, u8 reg, u8 value);
extern int s2mps18_bulk_write(struct i2c_client *i2c, u8 reg, int count,
				u8 *buf);
extern int s2mps18_write_word(struct i2c_client *i2c, u8 reg, u16 value);
extern int s2mps18_read_word(struct i2c_client *i2c, u8 reg);

extern int s2mps18_update_reg(struct i2c_client *i2c, u8 reg, u8 val, u8 mask);

extern int s2m_ldo_set_mode(int ldo_num, unsigned int mode);

#ifdef CONFIG_EXYNOS_OCP
extern void get_s2mps18_i2c(struct i2c_client **i2c);
#endif

#endif /* __LINUX_MFD_S2MPS18_PRIV_H */

