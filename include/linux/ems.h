/*
 * Copyright (c) 2017 Samsung Electronics Co., Ltd
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

#include <linux/plist.h>
#include <linux/sched/idle.h>
#include <linux/sched/topology.h>

struct gb_qos_request {
	struct plist_node node;
	char *name;
	bool active;
};

#define LEAVE_BAND	0

struct task_band {
	int id;
	pid_t tgid;
	raw_spinlock_t lock;

	struct list_head members;
	int member_count;
	struct cpumask playable_cpus;

	unsigned long util;
	unsigned long last_update_time;
};

struct rq;

#ifdef CONFIG_SCHED_EMS
extern struct kobject *ems_kobj;
extern unsigned int get_cpu_max_capacity(unsigned int cpu);

/* task util initialization */
extern void exynos_init_entity_util_avg(struct sched_entity *se);

/* active balance */
extern int exynos_need_active_balance(enum cpu_idle_type idle,
				struct sched_domain *sd, int src_cpu, int dst_cpu);

/* wakeup balance */
extern int
exynos_wakeup_balance(struct task_struct *p, int prev_cpu, int sd_flag, int sync);

/* ontime migration */
extern void ontime_migration(void);
extern int ontime_can_migration(struct task_struct *p, int cpu);
extern void ontime_update_load_avg(u64 delta, int cpu, unsigned long weight, struct sched_avg *sa);
extern void ontime_new_entity_load(struct task_struct *parent, struct sched_entity *se);
extern void ontime_trace_task_info(struct task_struct *p);

/* load balance trigger */
extern bool lbt_overutilized(int cpu, int level);
extern void update_lbt_overutil(int cpu, unsigned long capacity);

/* global boost */
extern void gb_qos_update_request(struct gb_qos_request *req, u32 new_value);

/* task band */
extern void sync_band(struct task_struct *p, bool join);
extern void newbie_join_band(struct task_struct *newbie);
extern int alloc_bands(void);
extern void update_band(struct task_struct *p, long old_util);
extern int band_playing(struct task_struct *p, int cpu);

/* P.A.R.T */
void update_cpu_active_ratio(struct rq *rq, struct task_struct *p, int type);
void part_cpu_active_ratio(unsigned long *util, unsigned long *max, int cpu);
void set_part_period_start(struct rq *rq);
extern void init_part(void);

extern const struct cpumask *cpu_slowest_mask(void);
extern const struct cpumask *cpu_fastest_mask(void);
extern inline bool is_slowest_cpu(int cpu);
#else
static inline void exynos_init_entity_util_avg(struct sched_entity *se) { }

static inline int exynos_need_active_balance(enum cpu_idle_type idle,
				struct sched_domain *sd, int src_cpu, int dst_cpu)
{
	return 0;
}

static inline int
exynos_wakeup_balance(struct task_struct *p, int prev_cpu, int sd_flag, int sync)
{
	return -1;
}

static inline void ontime_migration(void) { }
static inline int ontime_can_migration(struct task_struct *p, int cpu)
{
	return 1;
}
static inline void ontime_update_load_avg(u64 delta, int cpu, unsigned long weight, struct sched_avg *sa) { }
static inline void ontime_new_entity_load(struct task_struct *p, struct sched_entity *se) { }
static inline void ontime_trace_task_info(struct task_struct *p) { }

static inline bool lbt_overutilized(int cpu, int level)
{
	return false;
}
static inline void update_lbt_overutil(int cpu, unsigned long capacity) { }

static inline void gb_qos_update_request(struct gb_qos_request *req, u32 new_value) { }

static inline void sync_band(struct task_struct *p, bool join) { }
static inline void newbie_join_band(struct task_struct *newbie) { }
static inline int alloc_bands(void)
{
	return 0;
}
static inline void update_band(struct task_struct *p, long old_util) { }
static inline int band_playing(struct task_struct *p, int cpu)
{
	return 0;
}
static inline bool is_slowest_cpu(int cpu)
{
	return false;
}
/* P.A.R.T */
static inline void update_cpu_active_ratio(struct rq *rq, struct task_struct *p, int type) { }
static inline void part_cpu_active_ratio(unsigned long *util, unsigned long *max, int cpu) { }
static inline void set_part_period_start(struct rq *rq) { }
#endif /* CONFIG_SCHED_EMS */

#ifdef CONFIG_SIMPLIFIED_ENERGY_MODEL
extern void init_sched_energy_table(struct cpumask *cpus, int table_size,
				unsigned long *f_table, unsigned int *v_table,
				int max_f, int min_f);
#else
static inline void init_sched_energy_table(struct cpumask *cpus, int table_size,
				unsigned long *f_table, unsigned int *v_table,
				int max_f, int min_f) { }
#endif

/* Fluid Real Time */
extern unsigned int frt_disable_cpufreq;

/*
 * Maximum number of boost groups to support
 * When per-task boosting is used we still allow only limited number of
 * boost groups for two main reasons:
 * 1. on a real system we usually have only few classes of workloads which
 *    make sense to boost with different values (e.g. background vs foreground
 *    tasks, interactive vs low-priority tasks)
 * 2. a limited number allows for a simpler and more memory/time efficient
 *    implementation especially for the computation of the per-CPU boost
 *    value
 */
#if defined(CONFIG_MINT_SESL) && defined(CONFIG_MINT_PLATFORM_VERSION) && CONFIG_MINT_PLATFORM_VERSION >= 12
#define BOOSTGROUPS_COUNT 8
#else
#define BOOSTGROUPS_COUNT 6
#endif

/* SchedTune boost groups
 * Keep track of all the boost groups which impact on CPU, for example when a
 * CPU has two RUNNABLE tasks belonging to two different boost groups and thus
 * likely with different boost values.
 * Since on each system we expect only a limited number of boost groups, here
 * we use a simple array to keep track of the metrics required to compute the
 * maximum per-CPU boosting value.
 */
struct boost_groups {
	/* Maximum boost value for all RUNNABLE tasks on a CPU */
	bool idle;
	int boost_max;
	u64 boost_ts;
	struct {
		/* The boost for tasks on that boost group */
		int boost;
		/* Count of RUNNABLE tasks on that boost group */
		unsigned tasks;
		/* Timestamp of boost activation */
		u64 ts;
	} group[BOOSTGROUPS_COUNT];
	/* CPU's boost group locking */
	raw_spinlock_t lock;
};
