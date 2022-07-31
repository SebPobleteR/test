/*
 * Copyright (c) 2018 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "../sched-pelt.h"

#define cpu_selected(cpu)	(cpu >= 0)
#define tsk_cpus_allowed(tsk)	(&(tsk)->cpus_allowed)

extern struct kobject *ems_kobj;

/*
 * When choosing cpu considering energy efficiency, decide best cpu and
 * backup cpu according to policy, and then choose cpu which consumes the
 * least energy including prev cpu.
 */
struct eco_env {
    struct task_struct *p;
    unsigned long task_util;
    unsigned long min_util;

    /* schedtune */
    int boost;
    int prefer_idle;
    int prefer_perf;
    int prefer_high_cap;

    /* previous cpu */
    int prev_cpu;
};

extern int select_service_cpu(struct eco_env *eenv);
extern int ontime_task_wakeup(struct task_struct *p, int sync);
extern int select_perf_cpu(struct eco_env *eenv);
extern int global_boosting(struct eco_env *eenv);
extern int global_boosted(void);
extern int select_energy_cpu(struct eco_env *eenv, int sd_flag, int sync);
extern unsigned int calculate_energy(struct task_struct *p, int target_cpu);

#ifdef CONFIG_SCHED_TUNE
extern int prefer_perf_cpu(struct eco_env *eenv);
extern int prefer_idle_cpu(struct eco_env *eenv);
#else
static inline int prefer_perf_cpu(struct eco_env *eenv) { return -1; }
static inline int prefer_idle_cpu(struct eco_env *eenv) { return -1; }
#endif

extern bool is_cpu_preemptible(struct task_struct *p, int prev_cpu, int cpu, int sync);
extern unsigned long cpu_util(int cpu);
extern unsigned long task_util(struct task_struct *p);
extern unsigned long cpu_util_without(int cpu, struct task_struct *p);
extern unsigned long task_util_est(struct task_struct *p);
extern unsigned int get_cpu_mips(unsigned int cpu);
extern unsigned int get_cpu_max_capacity(unsigned int cpu);
extern unsigned long get_freq_cap(unsigned int cpu, unsigned long freq);

extern unsigned long capacity_curr_of(int cpu);
extern unsigned long boosted_task_util(struct task_struct *p);

extern void init_part(void);

static inline struct task_struct *task_of(struct sched_entity *se)
{
	return container_of(se, struct task_struct, se);
}

extern bool lbt_bring_overutilize(int cpu, struct task_struct *p);
extern bool lbt_util_bring_overutilize(int cpu, unsigned long util);

extern unsigned long freqvar_st_boost_vector(int cpu);
