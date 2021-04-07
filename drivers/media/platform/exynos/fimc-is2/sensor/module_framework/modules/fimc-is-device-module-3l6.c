/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2018 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/i2c.h>
#include <linux/slab.h>
#include <linux/irq.h>
#include <linux/interrupt.h>
#include <linux/delay.h>
#include <linux/version.h>
#include <linux/gpio.h>
#include <linux/clk.h>
#include <linux/regulator/consumer.h>
#include <linux/videodev2.h>
#include <linux/videodev2_exynos_camera.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/platform_device.h>
#ifdef CONFIG_OF
#include <linux/of_gpio.h>
#endif
#include <media/v4l2-ctrls.h>
#include <media/v4l2-device.h>
#include <media/v4l2-subdev.h>

#include <exynos-fimc-is-sensor.h>
#include "fimc-is-hw.h"
#include "fimc-is-core.h"
#include "fimc-is-device-sensor.h"
#include "fimc-is-device-sensor-peri.h"
#include "fimc-is-resourcemgr.h"
#include "fimc-is-dt.h"

#include "fimc-is-device-module-base.h"

#ifndef USE_VENDOR_PWR_PIN_NAME
#define RCAM_AF_VDD      "vdd_ldo37"       /* RCAM1_AFVDD_2P8 */
#define S5K3L6_IOVDD     "CAM_VLDO3"       /* CAM_VDDIO_1P8 : CAM_VLDO3 is used for all camera commonly */
#define S5K3L6_AVDD      "CAM_VLDO6"       /* RCAM1_AVDD_2P8 */
#define S5K3L6_DVDD      "CAM_VLDO2"       /* RCAM1_DVDD_1P05 */
#endif

/*
 * [Mode Information]
 *
 * Reference File : 3L6_EVT1_Ver_2.1.xlsx

*/
static struct fimc_is_sensor_cfg config_module_3l6[] = {
	/* 0 : 4128x3096@30fps 4:3 */
	FIMC_IS_SENSOR_CFG(4128, 3096,  30, 0, 0, CSI_DATA_LANES_4, 1196, CSI_MODE_CH0_ONLY, PD_NONE,
		VC_IN(0, HW_FORMAT_RAW10, 4128, 3096), VC_OUT(HW_FORMAT_RAW10, VC_NOTHING, 0, 0),
		VC_IN(1, HW_FORMAT_UNKNOWN, 0, 0), VC_OUT(HW_FORMAT_UNKNOWN, VC_NOTHING, 0, 0),
		VC_IN(2, HW_FORMAT_UNKNOWN, 0, 0), VC_OUT(HW_FORMAT_UNKNOWN, VC_NOTHING, 0, 0),
		VC_IN(3, HW_FORMAT_UNKNOWN, 0, 0), VC_OUT(HW_FORMAT_UNKNOWN, VC_NOTHING, 0, 0)),
	/* 1 : 4128x2324@30fps 16:9 */
	FIMC_IS_SENSOR_CFG(4128, 2324,  30, 0, 1, CSI_DATA_LANES_4, 1196, CSI_MODE_CH0_ONLY, PD_NONE,
		VC_IN(0, HW_FORMAT_RAW10, 4128, 2324), VC_OUT(HW_FORMAT_RAW10, VC_NOTHING, 0, 0),
		VC_IN(1, HW_FORMAT_UNKNOWN, 0, 0), VC_OUT(HW_FORMAT_UNKNOWN, VC_NOTHING, 0, 0),
		VC_IN(2, HW_FORMAT_UNKNOWN, 0, 0), VC_OUT(HW_FORMAT_UNKNOWN, VC_NOTHING, 0, 0),
		VC_IN(3, HW_FORMAT_UNKNOWN, 0, 0), VC_OUT(HW_FORMAT_UNKNOWN, VC_NOTHING, 0, 0)),
	/* 2 : 4128x1908@30fps 19.5:9 */
	FIMC_IS_SENSOR_CFG(4128, 1908,  30, 0, 2, CSI_DATA_LANES_4, 1196, CSI_MODE_CH0_ONLY, PD_NONE,
		VC_IN(0, HW_FORMAT_RAW10, 4128, 1908), VC_OUT(HW_FORMAT_RAW10, VC_NOTHING, 0, 0),
		VC_IN(1, HW_FORMAT_UNKNOWN, 0, 0), VC_OUT(HW_FORMAT_UNKNOWN, VC_NOTHING, 0, 0),
		VC_IN(2, HW_FORMAT_UNKNOWN, 0, 0), VC_OUT(HW_FORMAT_UNKNOWN, VC_NOTHING, 0, 0),
		VC_IN(3, HW_FORMAT_UNKNOWN, 0, 0), VC_OUT(HW_FORMAT_UNKNOWN, VC_NOTHING, 0, 0)),
	/* 3 : 3088x3088@30fps 1:1 */
	FIMC_IS_SENSOR_CFG(3088, 3088,  30, 0, 3, CSI_DATA_LANES_4, 1196, CSI_MODE_CH0_ONLY, PD_NONE,
		VC_IN(0, HW_FORMAT_RAW10, 3088, 3088), VC_OUT(HW_FORMAT_RAW10, VC_NOTHING, 0, 0),
		VC_IN(1, HW_FORMAT_UNKNOWN, 0, 0), VC_OUT(HW_FORMAT_UNKNOWN, VC_NOTHING, 0, 0),
		VC_IN(2, HW_FORMAT_UNKNOWN, 0, 0), VC_OUT(HW_FORMAT_UNKNOWN, VC_NOTHING, 0, 0),
		VC_IN(3, HW_FORMAT_UNKNOWN, 0, 0), VC_OUT(HW_FORMAT_UNKNOWN, VC_NOTHING, 0, 0)),
	/* 4 : 1280x720@120fps 2-binning */
	FIMC_IS_SENSOR_CFG(1280, 720,  120, 0, 4, CSI_DATA_LANES_4, 1196, CSI_MODE_CH0_ONLY, PD_NONE,
		VC_IN(0, HW_FORMAT_RAW10, 1280, 720), VC_OUT(HW_FORMAT_RAW10, VC_NOTHING, 0, 0),
		VC_IN(1, HW_FORMAT_UNKNOWN, 0, 0), VC_OUT(HW_FORMAT_UNKNOWN, VC_NOTHING, 0, 0),
		VC_IN(2, HW_FORMAT_UNKNOWN, 0, 0), VC_OUT(HW_FORMAT_UNKNOWN, VC_NOTHING, 0, 0),
		VC_IN(3, HW_FORMAT_UNKNOWN, 0, 0), VC_OUT(HW_FORMAT_UNKNOWN, VC_NOTHING, 0, 0)),
	/* 5 : 1024x768@120fps fastenAe 4-binning */
	FIMC_IS_SENSOR_CFG(1024, 768,  120, 0, 5, CSI_DATA_LANES_4, 1196, CSI_MODE_CH0_ONLY, PD_NONE,
		VC_IN(0, HW_FORMAT_RAW10, 1024, 768), VC_OUT(HW_FORMAT_RAW10, VC_NOTHING, 0, 0),
		VC_IN(1, HW_FORMAT_UNKNOWN, 0, 0), VC_OUT(HW_FORMAT_UNKNOWN, VC_NOTHING, 0, 0),
		VC_IN(2, HW_FORMAT_UNKNOWN, 0, 0), VC_OUT(HW_FORMAT_UNKNOWN, VC_NOTHING, 0, 0),
		VC_IN(3, HW_FORMAT_UNKNOWN, 0, 0), VC_OUT(HW_FORMAT_UNKNOWN, VC_NOTHING, 0, 0)),
};

static const struct v4l2_subdev_core_ops core_ops = {
	.init = sensor_module_init,
	.g_ctrl = sensor_module_g_ctrl,
	.s_ctrl = sensor_module_s_ctrl,
	.g_ext_ctrls = sensor_module_g_ext_ctrls,
	.s_ext_ctrls = sensor_module_s_ext_ctrls,
	.ioctl = sensor_module_ioctl,
	.log_status = sensor_module_log_status,
};

static const struct v4l2_subdev_video_ops video_ops = {
	.s_routing = sensor_module_s_routing,
	.s_stream = sensor_module_s_stream,
	.s_parm = sensor_module_s_param
};

static const struct v4l2_subdev_pad_ops pad_ops = {
	.set_fmt = sensor_module_s_format
};

static const struct v4l2_subdev_ops subdev_ops = {
	.core = &core_ops,
	.video = &video_ops,
	.pad = &pad_ops
};

static int sensor_module_3l6_power_setpin(struct device *dev,
	struct exynos_platform_fimc_is_module *pdata)
{
	struct fimc_is_core *core;
	struct device_node *dnode;
	int gpio_reset = 0;
	int gpio_none = 0;
	bool shared_mclk = false;
	
	FIMC_BUG(!dev);

	dnode = dev->of_node;

	core = (struct fimc_is_core *)dev_get_drvdata(fimc_is_dev);
	if (!core) {
		err("core is NULL");
		return -EINVAL;
	}

	dev_info(dev, "%s E v4\n", __func__);

	gpio_reset = of_get_named_gpio(dnode, "gpio_reset", 0);
	if (!gpio_is_valid(gpio_reset)) {
		dev_err(dev, "failed to get PIN_RESET\n");
		return -EINVAL;
	} else {
		gpio_request_one(gpio_reset, GPIOF_OUT_INIT_LOW, "CAM_GPIO_OUTPUT_LOW");
		gpio_free(gpio_reset);
	}
	
	shared_mclk = of_property_read_bool(dnode, "shared_mclk");

	SET_PIN_INIT(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_ON);
	SET_PIN_INIT(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_OFF);

	SET_PIN_INIT(pdata, SENSOR_SCENARIO_READ_ROM, GPIO_SCENARIO_ON);
	SET_PIN_INIT(pdata, SENSOR_SCENARIO_READ_ROM, GPIO_SCENARIO_OFF);

	/* Normal on */
	SET_PIN(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_ON,  gpio_reset, SENSOR_RESET_LOW,	PIN_OUTPUT,    0, 500);
	SET_PIN(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_ON,  gpio_none,  S5K3L6_IOVDD,	PIN_REGULATOR, 1, 0);
	SET_PIN(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_ON,  gpio_none,  S5K3L6_AVDD,	PIN_REGULATOR, 1, 0);
	SET_PIN(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_ON,  gpio_none,  S5K3L6_DVDD,      PIN_REGULATOR, 1, 0);
	SET_PIN(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_ON,  gpio_none,  RCAM_AF_VDD,	PIN_REGULATOR, 1, 500);
	SET_PIN(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_ON,  gpio_none,  SENSOR_MCLK_PIN,	PIN_FUNCTION,  2, 1000);
	if (shared_mclk) {
		SET_PIN_SHARED(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_ON, SRT_ACQUIRE,
				&core->shared_rsc_slock[SHARED_PIN0], &core->shared_rsc_count[SHARED_PIN0], 1);
	}
	SET_PIN(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_ON,  gpio_reset, SENSOR_RESET_HIGH,PIN_OUTPUT,    1, 0);
	SET_PIN(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_ON,  gpio_none,  SENSOR_SET_DELAY,	PIN_NONE,      0, 5000);

	/* Normal off */
	SET_PIN(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_OFF, gpio_none,  SENSOR_SET_DELAY,	PIN_NONE,      0, 5000);
	SET_PIN(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_OFF, gpio_reset, SENSOR_RESET_LOW,	PIN_OUTPUT,    0, 0);
	SET_PIN(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_OFF, gpio_none,  SENSOR_MCLK_PIN,	PIN_FUNCTION,  1, 0);
	if (shared_mclk) {
		SET_PIN_SHARED(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_OFF, SRT_RELEASE,
				&core->shared_rsc_slock[SHARED_PIN0], &core->shared_rsc_count[SHARED_PIN0], 0);
	}
	SET_PIN(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_OFF, gpio_none,  SENSOR_MCLK_PIN,	PIN_FUNCTION,  0, 0);
	SET_PIN(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_OFF, gpio_none,  RCAM_AF_VDD,	PIN_REGULATOR, 0, 500);
	SET_PIN(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_OFF, gpio_none,  S5K3L6_DVDD,      PIN_REGULATOR, 0, 0);
	SET_PIN(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_OFF, gpio_none,  S5K3L6_AVDD,      PIN_REGULATOR, 0, 0);
	SET_PIN(pdata, SENSOR_SCENARIO_NORMAL, GPIO_SCENARIO_OFF, gpio_none,  S5K3L6_IOVDD,     PIN_REGULATOR, 0, 0);

	/* READ_ROM - POWER ON */
	SET_PIN(pdata, SENSOR_SCENARIO_READ_ROM, GPIO_SCENARIO_ON,  gpio_none, RCAM_AF_VDD,	PIN_REGULATOR, 1, 0);
	SET_PIN(pdata, SENSOR_SCENARIO_READ_ROM, GPIO_SCENARIO_ON,  gpio_none, S5K3L6_IOVDD,	PIN_REGULATOR, 1, 0);
	/* READ_ROM - POWER OFF */
	SET_PIN(pdata, SENSOR_SCENARIO_READ_ROM, GPIO_SCENARIO_OFF, gpio_none, RCAM_AF_VDD,	PIN_REGULATOR, 0, 0);
	SET_PIN(pdata, SENSOR_SCENARIO_READ_ROM, GPIO_SCENARIO_OFF, gpio_none, S5K3L6_IOVDD,	PIN_REGULATOR, 0, 0);

	dev_info(dev, "%s X v4\n", __func__);

	return 0;
}

static int __init sensor_module_3l6_probe(struct platform_device *pdev)
{
	int ret = 0;
	struct fimc_is_core *core;
	struct v4l2_subdev *subdev_module;
	struct fimc_is_module_enum *module;
	struct fimc_is_device_sensor *device;
	struct sensor_open_extended *ext;
	struct exynos_platform_fimc_is_module *pdata;
	struct device *dev;
	struct pinctrl_state *s;
	bool use_pdaf = false;
#ifdef USE_MS_PDAF
	int ch, t;
#endif

	FIMC_BUG(!fimc_is_dev);

	core = (struct fimc_is_core *)dev_get_drvdata(fimc_is_dev);
	if (!core) {
		probe_info("core device is not yet probed");
		return -EPROBE_DEFER;
	}

	dev = &pdev->dev;

	if (of_property_read_bool(dev->of_node, "use_pdaf")) {
		use_pdaf = true;
	}
	probe_info("%s use_pdaf(%d)\n", __func__, use_pdaf);

	fimc_is_module_parse_dt(dev, sensor_module_3l6_power_setpin);

	pdata = dev_get_platdata(dev);
	device = &core->sensor[pdata->id];

	subdev_module = kzalloc(sizeof(struct v4l2_subdev), GFP_KERNEL);
	if (!subdev_module) {
		probe_err("subdev_module is NULL");
		ret = -ENOMEM;
		goto p_err;
	}

	probe_info("%s pdta->id(%d), module_enum id = %d\n", __func__, pdata->id, atomic_read(&device->module_count));
	module = &device->module_enum[atomic_read(&device->module_count)];
	atomic_inc(&device->module_count);
	clear_bit(FIMC_IS_MODULE_GPIO_ON, &module->state);
	module->pdata = pdata;
	module->dev = dev;
	module->sensor_id = SENSOR_NAME_S5K3L6;
	module->subdev = subdev_module;
	module->device = pdata->id;
	module->client = NULL;
	module->active_width = 4208;
	module->active_height = 3120;
	module->margin_left = 0;
	module->margin_right = 0;
	module->margin_top = 0;
	module->margin_bottom = 0;
	module->pixel_width = module->active_width;
	module->pixel_height = module->active_height;
	module->max_framerate = 120;
	module->position = pdata->position;
	module->bitwidth = 10;
	module->sensor_maker = "SLSI";
	module->sensor_name = "S5K3L6";
	module->setfile_name = "setfile_3l6.bin";
	module->cfgs = ARRAY_SIZE(config_module_3l6);
	module->cfg = config_module_3l6;
	module->ops = NULL;

#ifdef USE_MS_PDAF
	for (ch = 1; ch < CSI_VIRTUAL_CH_MAX; ch++) {
		module->internal_vc[ch] = pdata->internal_vc[ch];
		module->vc_buffer_offset[ch] = pdata->vc_buffer_offset[ch];
	}

	for (t = VC_BUF_DATA_TYPE_SENSOR_STAT1; t < VC_BUF_DATA_TYPE_MAX; t++) {
		module->vc_max_size[t].stat_type = VC_STAT_TYPE_INVALID;
		module->vc_max_size[t].sensor_mode = VC_SENSOR_MODE_INVALID;
		module->vc_max_size[t].width = 0;
		module->vc_max_size[t].height = 0;
		module->vc_max_size[t].element_size = 0;
		if (use_pdaf) {
			switch (t) {
			case VC_BUF_DATA_TYPE_SENSOR_STAT1:
				module->vc_max_size[t].sensor_mode = VC_SENSOR_MODE_MSPD_GLOBAL_NORMAL;
				break;
			}
		}
	}
#endif

	/* Sensor peri */
	module->private_data = kzalloc(sizeof(struct fimc_is_device_sensor_peri), GFP_KERNEL);
	if (!module->private_data) {
		probe_err("fimc_is_device_sensor_peri is NULL");
		ret = -ENOMEM;
		goto p_err;
	}
	fimc_is_sensor_peri_probe((struct fimc_is_device_sensor_peri *)module->private_data);
	PERI_SET_MODULE(module);

	ext = &module->ext;

	ext->sensor_con.product_name = module->sensor_id;
	ext->sensor_con.peri_type = SE_I2C;
	ext->sensor_con.peri_setting.i2c.channel = pdata->sensor_i2c_ch;
	ext->sensor_con.peri_setting.i2c.slave_address = pdata->sensor_i2c_addr;
	ext->sensor_con.peri_setting.i2c.speed = 400000;

	if (pdata->af_product_name !=  ACTUATOR_NAME_NOTHING) {
		ext->actuator_con.product_name = pdata->af_product_name;
		ext->actuator_con.peri_type = SE_I2C;
		ext->actuator_con.peri_setting.i2c.channel = pdata->af_i2c_ch;
		ext->actuator_con.peri_setting.i2c.slave_address = pdata->af_i2c_addr;
		ext->actuator_con.peri_setting.i2c.speed = 400000;
	}

	if (pdata->flash_product_name != FLADRV_NAME_NOTHING) {
		ext->flash_con.product_name = pdata->flash_product_name;
		ext->flash_con.peri_type = SE_GPIO;
		ext->flash_con.peri_setting.gpio.first_gpio_port_no = pdata->flash_first_gpio;
		ext->flash_con.peri_setting.gpio.second_gpio_port_no = pdata->flash_second_gpio;
	}

	ext->from_con.product_name = FROMDRV_NAME_NOTHING;

	if (pdata->preprocessor_product_name != PREPROCESSOR_NAME_NOTHING) {
		ext->preprocessor_con.product_name = pdata->preprocessor_product_name;
		ext->preprocessor_con.peri_info0.valid = true;
		ext->preprocessor_con.peri_info0.peri_type = SE_SPI;
		ext->preprocessor_con.peri_info0.peri_setting.spi.channel = pdata->preprocessor_spi_channel;
		ext->preprocessor_con.peri_info1.valid = true;
		ext->preprocessor_con.peri_info1.peri_type = SE_I2C;
		ext->preprocessor_con.peri_info1.peri_setting.i2c.channel = pdata->preprocessor_i2c_ch;
		ext->preprocessor_con.peri_info1.peri_setting.i2c.slave_address = pdata->preprocessor_i2c_addr;
		ext->preprocessor_con.peri_info1.peri_setting.i2c.speed = 400000;
		ext->preprocessor_con.peri_info2.valid = true;
		ext->preprocessor_con.peri_info2.peri_type = SE_DMA;
		ext->preprocessor_con.peri_info2.peri_setting.dma.channel = FLITE_ID_D;
	} else {
		ext->preprocessor_con.product_name = pdata->preprocessor_product_name;
	}

	if (pdata->ois_product_name != OIS_NAME_NOTHING) {
		ext->ois_con.product_name = pdata->ois_product_name;
		ext->ois_con.peri_type = SE_I2C;
		ext->ois_con.peri_setting.i2c.channel = pdata->ois_i2c_ch;
		ext->ois_con.peri_setting.i2c.slave_address = pdata->ois_i2c_addr;
		ext->ois_con.peri_setting.i2c.speed = 400000;
	} else {
		ext->ois_con.product_name = pdata->ois_product_name;
		ext->ois_con.peri_type = SE_NULL;
	}

	v4l2_subdev_init(subdev_module, &subdev_ops);

	v4l2_set_subdevdata(subdev_module, module);
	v4l2_set_subdev_hostdata(subdev_module, device);
	snprintf(subdev_module->name, V4L2_SUBDEV_NAME_SIZE, "sensor-subdev.%d", module->sensor_id);

	probe_info("%s done\n", __func__);

	s = pinctrl_lookup_state(pdata->pinctrl, "release");

	if (pinctrl_select_state(pdata->pinctrl, s) < 0) {
		probe_err("pinctrl_select_state is fail\n");
		goto p_err;
	}

p_err:
	return ret;
}

static const struct of_device_id exynos_fimc_is_sensor_module_3l6_match[] = {
	{
		.compatible = "samsung,sensor-module-3l6",
	},
	{},
};
MODULE_DEVICE_TABLE(of, exynos_fimc_is_sensor_module_3l6_match);

static struct platform_driver sensor_module_3l6_driver = {
	.driver = {
		.name   = "FIMC-IS-SENSOR-MODULE-3L6",
		.owner  = THIS_MODULE,
		.of_match_table = exynos_fimc_is_sensor_module_3l6_match,
	}
};

static int __init fimc_is_sensor_module_3l6_init(void)
{
	int ret;

	ret = platform_driver_probe(&sensor_module_3l6_driver,
				sensor_module_3l6_probe);
	if (ret)
		err("failed to probe %s driver: %d\n",
			sensor_module_3l6_driver.driver.name, ret);

	return ret;
}
late_initcall(fimc_is_sensor_module_3l6_init);
