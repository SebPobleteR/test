/*
 * Performance CPU Finder
 *
 * Copyright (C) 2018 Samsung Electronics Co., Ltd
 * Park Bumgyu <bumgyu.park@samsung.com>
 */

#include <trace/events/ems.h>

#include "ems.h"
#include "../sched.h"

/*
 * Currently, PCF is composed of a selection algorithm based on distributed
 * processing, for example, selecting idle cpu or cpu with biggest spare
 * capacity. Although the current algorithm may suffice, it is necessary to
 * examine a selection algorithm considering cache hot and migration cost.
 */
int select_perf_cpu(struct task_struct *p)
{
	int cpu;
	unsigned long best_perf_cap_orig = 0;
	unsigned long best_perf_util = ULONG_MAX;
	unsigned long best_spare_util = 0;
	unsigned long best_active_util = ULONG_MAX;
	int best_perf_cstate = INT_MAX;
	int best_perf_cpu = -1;
	int best_spare_cpu = -1;
	int best_active_cpu = -1;

	rcu_read_lock();

	for_each_cpu_and(cpu, &p->cpus_allowed, cpu_active_mask) {
		unsigned long capacity_orig = capacity_orig_of(cpu);
		unsigned long capacity_curr;
		unsigned long wake_util = cpu_util_wake(cpu, p);
		unsigned long new_util;
		unsigned long spare_util;

		new_util = wake_util + task_util_est(p);
		new_util += cpu_rq(cpu)->rt.avg.util_avg;
		new_util = max(new_util, boosted_task_util(p));

		/* Skip over-capacity cpu */
		if (capacity_orig < new_util)
			continue;

		/*
		 * A) Find best performance cpu.
		 *
		 * If the impact of cache hot and migration cost are excluded,
		 * distributed processing is the best way to achieve performance.
		 * To maximize performance, the idle cpu with the highest
		 * performance is selected first. If there are more than two idle
		 * cpus with the highest performance, choose the cpu with the
		 * shallowest idle state for fast reactivity.
		 */
		if (idle_cpu(cpu)) {
			int idle_idx = idle_get_state_idx(cpu_rq(cpu));

			/* find biggest capacity cpu */
			if (capacity_orig < best_perf_cap_orig)
				continue;

			/*
			 * if we find a better-performing cpu, re-initialize
			 * best_perf_cstate
			 */
			if (capacity_orig > best_perf_cap_orig) {
				best_perf_cap_orig = capacity_orig;
				best_perf_cstate = INT_MAX;
			}

			/* find shallowest idle state cpu */
			if (idle_idx > best_perf_cstate)
				continue;

			/* if same cstate, select lower util */
			if (idle_idx == best_perf_cstate &&
				wake_util >= best_perf_util)
				continue;

			/* Keep track of best idle CPU */
			best_perf_util = wake_util;
			best_perf_cstate = idle_idx;
			best_perf_cpu = cpu;
			continue;
		}

		if (cpu_selected(best_perf_cpu))
			continue;

		/*
		 * B) Find backup performance cpu.
		 *
		 * Backup cpu also adopts distributed processing. In the absence
		 * of idle cpu, it is difficult to expect reactivity, so select
		 * the cpu with the biggest spare capacity to handle the most
		 * computations. Since a high performance cpu has a large capacity,
		 * cpu having a high performance is likely to be selected.
		 */
		spare_util = capacity_orig - new_util;
		capacity_curr = capacity_curr_of(cpu);

		if (capacity_curr > new_util &&
			spare_util > best_spare_util) {
			best_spare_util = spare_util;
			best_spare_cpu = cpu;
			continue;
		}

		if (cpu_selected(best_spare_cpu))
			continue;

		if (new_util >= best_active_util)
			continue;

		best_active_util = new_util;
		best_active_cpu =  cpu;
	}

	rcu_read_unlock();

	if (!cpu_selected(best_spare_cpu))
		best_spare_cpu = best_active_cpu;

	trace_ems_select_perf_cpu(p, best_perf_cpu, best_spare_cpu);

	if (best_perf_cpu == -1)
		return best_spare_cpu;

	return best_perf_cpu;
}
