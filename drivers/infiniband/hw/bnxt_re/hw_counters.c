/*
 * Broadcom NetXtreme-E RoCE driver.
 *
 * Copyright (c) 2016 - 2017, Broadcom. All rights reserved.  The term
 * Broadcom refers to Broadcom Limited and/or its subsidiaries.
 *
 * This software is available to you under a choice of one of two
 * licenses.  You may choose to be licensed under the terms of the GNU
 * General Public License (GPL) Version 2, available from the file
 * COPYING in the main directory of this source tree, or the
 * BSD license below:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Description: Statistics
 *
 */

#include <linux/interrupt.h>
#include <linux/types.h>
#include <linux/spinlock.h>
#include <linux/sched.h>
#include <linux/slab.h>
#include <linux/pci.h>
#include <linux/prefetch.h>
#include <linux/delay.h>

#include <rdma/ib_addr.h>

#include "bnxt_ulp.h"
#include "roce_hsi.h"
#include "qplib_res.h"
#include "qplib_sp.h"
#include "qplib_fp.h"
#include "qplib_rcfw.h"
#include "bnxt_re.h"
#include "hw_counters.h"

static const char * const bnxt_re_stat_name[] = {
	[BNXT_RE_ACTIVE_QP]           =  "active_qps",
	[BNXT_RE_ACTIVE_SRQ]          =  "active_srqs",
	[BNXT_RE_ACTIVE_CQ]           =  "active_cqs",
	[BNXT_RE_ACTIVE_MR]           =  "active_mrs",
	[BNXT_RE_ACTIVE_MW]           =  "active_mws",
	[BNXT_RE_RX_PKTS]             =  "rx_pkts",
	[BNXT_RE_RX_BYTES]            =  "rx_bytes",
	[BNXT_RE_TX_PKTS]             =  "tx_pkts",
	[BNXT_RE_TX_BYTES]            =  "tx_bytes",
	[BNXT_RE_RECOVERABLE_ERRORS]  =  "recoverable_errors"
};

int bnxt_re_ib_get_hw_stats(struct ib_device *ibdev,
			    struct rdma_hw_stats *stats,
			    u8 port, int index)
{
	struct bnxt_re_dev *rdev = to_bnxt_re_dev(ibdev, ibdev);
	struct ctx_hw_stats *bnxt_re_stats = rdev->qplib_ctx.stats.dma;

	if (!port || !stats)
		return -EINVAL;

	stats->value[BNXT_RE_ACTIVE_QP] = atomic_read(&rdev->qp_count);
	stats->value[BNXT_RE_ACTIVE_SRQ] = atomic_read(&rdev->srq_count);
	stats->value[BNXT_RE_ACTIVE_CQ] = atomic_read(&rdev->cq_count);
	stats->value[BNXT_RE_ACTIVE_MR] = atomic_read(&rdev->mr_count);
	stats->value[BNXT_RE_ACTIVE_MW] = atomic_read(&rdev->mw_count);
	if (bnxt_re_stats) {
		stats->value[BNXT_RE_RECOVERABLE_ERRORS] =
			le64_to_cpu(bnxt_re_stats->tx_bcast_pkts);
		stats->value[BNXT_RE_RX_PKTS] =
			le64_to_cpu(bnxt_re_stats->rx_ucast_pkts);
		stats->value[BNXT_RE_RX_BYTES] =
			le64_to_cpu(bnxt_re_stats->rx_ucast_bytes);
		stats->value[BNXT_RE_TX_PKTS] =
			le64_to_cpu(bnxt_re_stats->tx_ucast_pkts);
		stats->value[BNXT_RE_TX_BYTES] =
			le64_to_cpu(bnxt_re_stats->tx_ucast_bytes);
	}
	return ARRAY_SIZE(bnxt_re_stat_name);
}

struct rdma_hw_stats *bnxt_re_ib_alloc_hw_stats(struct ib_device *ibdev,
						u8 port_num)
{
	BUILD_BUG_ON(ARRAY_SIZE(bnxt_re_stat_name) != BNXT_RE_NUM_COUNTERS);
	/* We support only per port stats */
	if (!port_num)
		return NULL;

	return rdma_alloc_hw_stats_struct(bnxt_re_stat_name,
					  ARRAY_SIZE(bnxt_re_stat_name),
					  RDMA_HW_STATS_DEFAULT_LIFESPAN);
}
