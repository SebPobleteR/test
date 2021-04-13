/* drivers/gpu/arm/.../platform/gpu_treace_defs.h
 *
 * Copyright 2011 by S.LSI. Samsung Electronics Inc.
 * San#24, Nongseo-Dong, Giheung-Gu, Yongin, Korea
 *
 * Samsung SoC Mali-T Series DDK porting layer
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software FoundatIon.
 */

/**
 * @file gpu_trace_defs.h
 * DDK porting layer.
 */

#if 0 /* Dummy section to avoid breaking formatting */
int dummy_array[] = {
#endif

	/* MALI_SEC_INTEGRATION */
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_JM_IRQ),
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_JM_IRQ_E),
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_MMU_IRQ),
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_MMU_IRQ_E),
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_GPU_IRQ),
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_GPU_IRQ_E),

	KBASE_KTRACE_CODE_MAKE_CODE(KBASE_DEVICE_SUSPEND),
	KBASE_KTRACE_CODE_MAKE_CODE(KBASE_DEVICE_RESUME),
	KBASE_KTRACE_CODE_MAKE_CODE(KBASE_DEVICE_PM_SUSPEND),
	KBASE_KTRACE_CODE_MAKE_CODE(KBASE_DEVICE_PM_RESUME),
	KBASE_KTRACE_CODE_MAKE_CODE(KBASE_DEVICE_PM_WAIT_WQ_RUN),
	KBASE_KTRACE_CODE_MAKE_CODE(KBASE_DEVICE_PM_WAIT_WQ_QUEUE_WORK),
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_GPU_RPM_RESUME_API), /* gpu on */
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_GPU_RPM_SUSPEND_API), /* gpu off */
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_SUSPEND_CALLBACK), /* suspend */
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_GPU_ON), /* gpu on */
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_GPU_OFF), /* gpu off */
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_GPU_DVS_ON), /* gpu dvs on */
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_GPU_DVS_OFF), /* gpu dvs off */
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_RESUME), /* resume */
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_CLOCK_VALUE), /* clock */
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_TMU_VALUE), /* TMU LOCK info */
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_REGISTER_DUMP), /* CMU & PMU info */
 

	KBASE_KTRACE_CODE_MAKE_CODE(LSI_SECURE_WORLD_ENTER), /* SECURE RENDERING START */
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_SECURE_WORLD_EXIT), /* SECURE RENDERING END */
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_SECURE_CACHE), /* SECURE RENDERING CACHE FLUSH */
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_SECURE_CACHE_END), /* SECURE RENDERING CACHE FLUSH END */

	KBASE_KTRACE_CODE_MAKE_CODE(LSI_KBASE_PM_INIT_HW), /* SECURE RENDERING END */
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_IFPM_POWER_ON), /* IFPM Power on */
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_IFPM_POWER_OFF), /* IFPM Power off */

	KBASE_KTRACE_CODE_MAKE_CODE(LSI_RESUME_CHECK), /* is resume check */
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_RESUME_FREQ), /* resume freq check */

	KBASE_KTRACE_CODE_MAKE_CODE(LSI_GPU_MAX_LOCK), /* GPU MAX CLOCK LOCK */
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_GPU_MIN_LOCK), /* GPU MIN CLOCK LOCK */

	KBASE_KTRACE_CODE_MAKE_CODE(LSI_GPU_SECURE), /* GPU Secure Rendering */

	KBASE_KTRACE_CODE_MAKE_CODE(LSI_RESET_GPU_EARLY_DUPE),
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_RESET_RACE_DETECTED_EARLY_OUT),
	KBASE_KTRACE_CODE_MAKE_CODE(LSI_PM_SUSPEND),

	KBASE_KTRACE_CODE_MAKE_CODE(LSI_KATOM_REMOVED),
#if 0
};
#endif
