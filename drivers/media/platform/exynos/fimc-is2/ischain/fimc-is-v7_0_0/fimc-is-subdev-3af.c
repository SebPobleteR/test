/*
 * Samsung Exynos5 SoC series FIMC-IS driver
 *
 * exynos5 fimc-is video functions
 *
 * Copyright (c) 2018 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include "fimc-is-device-ischain.h"
#include "fimc-is-device-sensor.h"
#include "fimc-is-subdev-ctrl.h"
#include "fimc-is-config.h"
#include "fimc-is-param.h"
#include "fimc-is-video.h"
#include "fimc-is-type.h"

static int fimc_is_ischain_3af_cfg(struct fimc_is_subdev *subdev,
	void *device_data, struct fimc_is_frame *frame,
	struct fimc_is_crop *incrop, struct fimc_is_crop *otcrop,
	u32 *lindex, u32 *hindex, u32 *indexes)
{
	return 0;
}

static int fimc_is_ischain_3af_start(struct fimc_is_device_ischain *device,
	struct fimc_is_subdev *subdev, struct fimc_is_frame *frame,
	struct fimc_is_queue *queue, struct taa_param *taa_param,
	struct fimc_is_crop *incrop, struct fimc_is_crop *otcrop,
	u32 *lindex, u32 *hindex, u32 *indexes)
{
	int ret = 0;
	struct fimc_is_group *group;
	struct param_dma_output *dma_output;
	struct fimc_is_module_enum *module;
	u32 hw_format, hw_bitwidth;

	FIMC_BUG(!queue);
	FIMC_BUG(!queue->framecfg.format);

	group = &device->group_3aa;

	hw_format = queue->framecfg.format->hw_format;
	hw_bitwidth = queue->framecfg.format->hw_bitwidth; /* memory width per pixel */

	ret = fimc_is_sensor_g_module(device->sensor, &module);
	if (ret) {
		merr("fimc_is_sensor_g_module is fail(%d)", device, ret);
		goto p_err;
	}

	if ((otcrop->w > taa_param->otf_input.bayer_crop_width) ||
		(otcrop->h > taa_param->otf_input.bayer_crop_height)) {
		mrerr("bds output size is invalid((%d, %d) > (%d, %d))", device, frame,
			otcrop->w, otcrop->h,
			taa_param->otf_input.bayer_crop_width,
			taa_param->otf_input.bayer_crop_height);
		ret = -EINVAL;
		goto p_err;
	}

	if (otcrop->x || otcrop->y) {
		mwarn("crop pos(%d, %d) is ignored", device, otcrop->x, otcrop->y);
		otcrop->x = 0;
		otcrop->y = 0;
	}

	dma_output = fimc_is_itf_g_param(device, frame, subdev->param_dma_ot);
	dma_output->cmd = DMA_OUTPUT_COMMAND_ENABLE;
	dma_output->format = DMA_OUTPUT_FORMAT_YUV422;
	dma_output->bitwidth = DMA_OUTPUT_BIT_WIDTH_8BIT;
	dma_output->msb = dma_output->bitwidth - 1;
	dma_output->dma_crop_offset_x = incrop->x;
	dma_output->dma_crop_offset_y = incrop->y;
	dma_output->dma_crop_width = incrop->w;
	dma_output->dma_crop_height = incrop->h;
#ifdef CONFIG_SOC_EXYNOS9820_EVT0
	dma_output->crop_enable = 0; /* EVT0 do not support DS crop function */
#else
	dma_output->crop_enable = 1;
#endif
	dma_output->width = otcrop->w;
	dma_output->height = otcrop->h;
	*lindex |= LOWBIT_OF(subdev->param_dma_ot);
	*hindex |= HIGHBIT_OF(subdev->param_dma_ot);
	(*indexes)++;

	subdev->input.crop = *incrop;
	subdev->output.crop = *otcrop;

	set_bit(FIMC_IS_SUBDEV_RUN, &subdev->state);

p_err:
	return ret;
}

static int fimc_is_ischain_3af_stop(struct fimc_is_device_ischain *device,
	struct fimc_is_subdev *subdev, struct fimc_is_frame *frame,
	struct taa_param *taa_param,
	struct fimc_is_crop *incrop, struct fimc_is_crop *otcrop,
	u32 *lindex, u32 *hindex, u32 *indexes)
{
	int ret = 0;
	struct fimc_is_group *group;
	struct param_dma_output *dma_output;

	mdbgd_ischain("%s\n", device, __func__);

	group = &device->group_3aa;

	if ((otcrop->w > taa_param->otf_input.bayer_crop_width) ||
		(otcrop->h > taa_param->otf_input.bayer_crop_height)) {
		mrerr("bds output size is invalid((%d, %d) > (%d, %d))", device, frame,
			otcrop->w, otcrop->h,
			taa_param->otf_input.bayer_crop_width,
			taa_param->otf_input.bayer_crop_height);
		ret = -EINVAL;
		goto p_err;
	}

	if (otcrop->x || otcrop->y) {
		mwarn("crop pos(%d, %d) is ignored", device, otcrop->x, otcrop->y);
		otcrop->x = 0;
		otcrop->y = 0;
	}

	dma_output = fimc_is_itf_g_param(device, frame, subdev->param_dma_ot);
	dma_output->cmd = DMA_OUTPUT_COMMAND_DISABLE;
#ifdef USE_3AA_CROP_AFTER_BDS
	if (test_bit(FIMC_IS_GROUP_OTF_INPUT, &group->state)) {
		dma_output->dma_crop_offset_x = incrop->x;
		dma_output->dma_crop_offset_y = incrop->y;
		dma_output->dma_crop_width = incrop->w;
		dma_output->dma_crop_height = incrop->h;
		dma_output->crop_enable = 0;
	} else {
		dma_output->dma_crop_offset_x = 0;
		dma_output->dma_crop_offset_y = 0;
		dma_output->dma_crop_width = taa_param->otf_input.bayer_crop_width;
		dma_output->dma_crop_height = taa_param->otf_input.bayer_crop_height;
		dma_output->crop_enable = 1;
	}
#else
	dma_output->dma_crop_offset_x = incrop->x;
	dma_output->dma_crop_offset_y = incrop->y;
	dma_output->dma_crop_width = incrop->w;
	dma_output->dma_crop_height = incrop->h;
	dma_output->crop_enable = 0;
#endif
	dma_output->width = otcrop->w;
	dma_output->height = otcrop->h;
	*lindex |= LOWBIT_OF(subdev->param_dma_ot);
	*hindex |= HIGHBIT_OF(subdev->param_dma_ot);
	(*indexes)++;

	clear_bit(FIMC_IS_SUBDEV_RUN, &subdev->state);

p_err:
	return ret;
}

static int fimc_is_ischain_3af_tag(struct fimc_is_subdev *subdev,
	void *device_data, struct fimc_is_frame *ldr_frame,
	struct camera2_node *node)
{
	int ret = 0;
	struct fimc_is_subdev *leader;
	struct fimc_is_queue *queue;
	struct taa_param *taa_param;
	struct fimc_is_crop *incrop, *otcrop, inparm, otparm;
	struct fimc_is_device_ischain *device;
	u32 lindex, hindex, indexes;
	u32 pixelformat = 0;

	device = (struct fimc_is_device_ischain *)device_data;

	FIMC_BUG(!device);
	FIMC_BUG(!device->is_region);
	FIMC_BUG(!subdev);
	FIMC_BUG(!GET_SUBDEV_QUEUE(subdev));
	FIMC_BUG(!ldr_frame);
	FIMC_BUG(!ldr_frame->shot);
	FIMC_BUG(!node);

	mdbgs_ischain(4, "3AAF TAG(request %d)\n", device, node->request);

	lindex = hindex = indexes = 0;
	leader = subdev->leader;
	taa_param = &device->is_region->parameter.taa;
	queue = GET_SUBDEV_QUEUE(subdev);
	if (!queue) {
		merr("queue is NULL", device);
		ret = -EINVAL;
		goto p_err;
	}

	if (!queue->framecfg.format) {
		merr("format is NULL", device);
		ret = -EINVAL;
		goto p_err;
	}

	pixelformat = queue->framecfg.format->pixelformat;
	incrop = (struct fimc_is_crop *)node->input.cropRegion;
	otcrop = (struct fimc_is_crop *)node->output.cropRegion;

	inparm.x = taa_param->efd_output.dma_crop_offset_x;
	inparm.y = taa_param->efd_output.dma_crop_offset_y;
	inparm.w = taa_param->efd_output.dma_crop_width;
	inparm.h = taa_param->efd_output.dma_crop_height;

	if (IS_NULL_CROP(incrop))
		*incrop = inparm;

	otparm.x = 0;
	otparm.y = 0;
	otparm.w = taa_param->efd_output.width;
	otparm.h = taa_param->efd_output.height;

	if (IS_NULL_CROP(otcrop))
		*otcrop = otparm;

	if (node->request) {
		if (!COMPARE_CROP(incrop, &inparm) ||
			!COMPARE_CROP(otcrop, &otparm) ||
			!test_bit(FIMC_IS_SUBDEV_RUN, &subdev->state) ||
			test_bit(FIMC_IS_SUBDEV_FORCE_SET, &leader->state)) {
			ret = fimc_is_ischain_3af_start(device,
				subdev, ldr_frame, queue,
				taa_param, incrop, otcrop,
				&lindex, &hindex, &indexes);
			if (ret) {
				merr("fimc_is_ischain_3af_start is fail(%d)", device, ret);
				goto p_err;
			}

			mdbg_pframe("ot_crop[%d, %d, %d, %d] on\n", device, subdev, ldr_frame,
				otcrop->x, otcrop->y, otcrop->w, otcrop->h);
		}

		ret = fimc_is_ischain_buf_tag(device,
			subdev, ldr_frame, pixelformat, otcrop->w, otcrop->h,
			ldr_frame->efdTargetAddress);
		if (ret) {
			mswarn("%d frame is drop", device, subdev, ldr_frame->fcount);
			node->request = 0;
		}
	} else {
		if (!COMPARE_CROP(otcrop, &otparm) ||
			test_bit(FIMC_IS_SUBDEV_RUN, &subdev->state) ||
			test_bit(FIMC_IS_SUBDEV_FORCE_SET, &leader->state)) {
			ret = fimc_is_ischain_3af_stop(device,
				subdev, ldr_frame,
				taa_param, incrop, otcrop,
				&lindex, &hindex, &indexes);
			if (ret) {
				merr("fimc_is_ischain_3af_stop is fail(%d)", device, ret);
				goto p_err;
			}

			mdbg_pframe("ot_crop[%d, %d, %d, %d] off\n", device, subdev, ldr_frame,
				otcrop->x, otcrop->y, otcrop->w, otcrop->h);
		}

		ldr_frame->efdTargetAddress[0] = 0;
		ldr_frame->efdTargetAddress[1] = 0;
		ldr_frame->efdTargetAddress[2] = 0;
		node->request = 0;
	}

	ret = fimc_is_itf_s_param(device, ldr_frame, lindex, hindex, indexes);
	if (ret) {
		mrerr("fimc_is_itf_s_param is fail(%d)", device, ldr_frame, ret);
		goto p_err;
	}

p_err:
	return ret;
}

const struct fimc_is_subdev_ops fimc_is_subdev_3af_ops = {
	.bypass			= NULL,
	.cfg			= fimc_is_ischain_3af_cfg,
	.tag			= fimc_is_ischain_3af_tag,
};
