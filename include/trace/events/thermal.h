/* SPDX-License-Identifier: GPL-2.0 */
#undef TRACE_SYSTEM
#define TRACE_SYSTEM thermal

#if !defined(_TRACE_THERMAL_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_THERMAL_H

#include <linux/devfreq.h>
#include <linux/thermal.h>
#include <linux/tracepoint.h>

TRACE_DEFINE_ENUM(THERMAL_TRIP_CRITICAL);
TRACE_DEFINE_ENUM(THERMAL_TRIP_HOT);
TRACE_DEFINE_ENUM(THERMAL_TRIP_PASSIVE);
TRACE_DEFINE_ENUM(THERMAL_TRIP_ACTIVE);

#define show_tzt_type(type)					\
	__print_symbolic(type,					\
			 { THERMAL_TRIP_CRITICAL, "CRITICAL"},	\
			 { THERMAL_TRIP_HOT,      "HOT"},	\
			 { THERMAL_TRIP_PASSIVE,  "PASSIVE"},	\
			 { THERMAL_TRIP_ACTIVE,   "ACTIVE"})

TRACE_EVENT(thermal_temperature,

	TP_PROTO(struct thermal_zone_device *tz),

	TP_ARGS(tz),

	TP_STRUCT__entry(
		__string(thermal_zone, tz->type)
		__field(int, id)
		__field(int, temp_prev)
		__field(int, temp)
	),

	TP_fast_assign(
		__assign_str(thermal_zone, tz->type);
		__entry->id = tz->id;
		__entry->temp_prev = tz->last_temperature;
		__entry->temp = tz->temperature;
	),

	TP_printk("thermal_zone=%s id=%d temp_prev=%d temp=%d",
		__get_str(thermal_zone), __entry->id, __entry->temp_prev,
		__entry->temp)
);

TRACE_EVENT(cdev_update,

	TP_PROTO(struct thermal_cooling_device *cdev, unsigned long target),

	TP_ARGS(cdev, target),

	TP_STRUCT__entry(
		__string(type, cdev->type)
		__field(unsigned long, target)
	),

	TP_fast_assign(
		__assign_str(type, cdev->type);
		__entry->target = target;
	),

	TP_printk("type=%s target=%lu", __get_str(type), __entry->target)
);

TRACE_EVENT(thermal_zone_trip,

	TP_PROTO(struct thermal_zone_device *tz, int trip,
		enum thermal_trip_type trip_type),

	TP_ARGS(tz, trip, trip_type),

	TP_STRUCT__entry(
		__string(thermal_zone, tz->type)
		__field(int, id)
		__field(int, trip)
		__field(enum thermal_trip_type, trip_type)
	),

	TP_fast_assign(
		__assign_str(thermal_zone, tz->type);
		__entry->id = tz->id;
		__entry->trip = trip;
		__entry->trip_type = trip_type;
	),

	TP_printk("thermal_zone=%s id=%d trip=%d trip_type=%s",
		__get_str(thermal_zone), __entry->id, __entry->trip,
		show_tzt_type(__entry->trip_type))
);

TRACE_EVENT(thermal_power_cpu_get_power,
	TP_PROTO(int tzid, const struct cpumask *cpus, unsigned long freq, u32 *load,
		size_t load_len, u32 dynamic_power, u32 static_power),

	TP_ARGS(tzid, cpus, freq, load, load_len, dynamic_power, static_power),

	TP_STRUCT__entry(
		__field(int, tzid)
		__bitmask(cpumask, num_possible_cpus())
		__field(unsigned long, freq          )
		__dynamic_array(u32,   load, load_len)
		__field(size_t,        load_len      )
		__field(u32,           dynamic_power )
		__field(u32,           static_power  )
	),

	TP_fast_assign(
		__entry->tzid = tzid;
		__assign_bitmask(cpumask, cpumask_bits(cpus),
				num_possible_cpus());
		__entry->freq = freq;
		memcpy(__get_dynamic_array(load), load,
			load_len * sizeof(*load));
		__entry->load_len = load_len;
		__entry->dynamic_power = dynamic_power;
		__entry->static_power = static_power;
	),

	TP_printk("thermal_zone_id=%d cpus=%s freq=%lu load={%s} dynamic_power=%d static_power=%d",
		__entry->tzid, __get_bitmask(cpumask), __entry->freq,
		__print_array(__get_dynamic_array(load), __entry->load_len, 4),
		__entry->dynamic_power, __entry->static_power)
);

TRACE_EVENT(thermal_power_cpu_limit,
	TP_PROTO(int tzid, const struct cpumask *cpus, unsigned int freq,
		unsigned long cdev_state, u32 power),

	TP_ARGS(tzid, cpus, freq, cdev_state, power),

	TP_STRUCT__entry(
		__field(int, tzid)
		__bitmask(cpumask, num_possible_cpus())
		__field(unsigned int,  freq      )
		__field(unsigned long, cdev_state)
		__field(u32,           power     )
	),

	TP_fast_assign(
		__entry->tzid = tzid;
		__assign_bitmask(cpumask, cpumask_bits(cpus),
				num_possible_cpus());
		__entry->freq = freq;
		__entry->cdev_state = cdev_state;
		__entry->power = power;
	),

	TP_printk("thermal_zone_id=%d cpus=%s freq=%u cdev_state=%lu power=%u",
		__entry->tzid, __get_bitmask(cpumask), __entry->freq, __entry->cdev_state,
		__entry->power)
);

TRACE_EVENT(thermal_power_devfreq_get_power,
	TP_PROTO(struct thermal_cooling_device *cdev,
		 struct devfreq_dev_status *status, unsigned long freq,
		u32 dynamic_power, u32 static_power, u32 power),

	TP_ARGS(cdev, status,  freq, dynamic_power, static_power, power),

	TP_STRUCT__entry(
		__string(type,         cdev->type    )
		__field(unsigned long, freq          )
		__field(u32,           load          )
		__field(u32,           dynamic_power )
		__field(u32,           static_power  )
		__field(u32,           power)
	),

	TP_fast_assign(
		__assign_str(type, cdev->type);
		__entry->freq = freq;
		__entry->load = (100 * status->busy_time) / status->total_time;
		__entry->dynamic_power = dynamic_power;
		__entry->static_power = static_power;
		__entry->power = power;
	),

	TP_printk("type=%s freq=%lu load=%u dynamic_power=%u static_power=%u power=%u",
		__get_str(type), __entry->freq,
		__entry->load, __entry->dynamic_power, __entry->static_power,
		__entry->power)
);

TRACE_EVENT(thermal_power_devfreq_limit,
	TP_PROTO(struct thermal_cooling_device *cdev, unsigned long freq,
		unsigned long cdev_state, u32 power),

	TP_ARGS(cdev, freq, cdev_state, power),

	TP_STRUCT__entry(
		__string(type,         cdev->type)
		__field(unsigned int,  freq      )
		__field(unsigned long, cdev_state)
		__field(u32,           power     )
	),

	TP_fast_assign(
		__assign_str(type, cdev->type);
		__entry->freq = freq;
		__entry->cdev_state = cdev_state;
		__entry->power = power;
	),

	TP_printk("type=%s freq=%u cdev_state=%lu power=%u",
		__get_str(type), __entry->freq, __entry->cdev_state,
		__entry->power)
);

TRACE_EVENT(thermal_power_gpu_get_power,
	TP_PROTO(unsigned long freq, u32 load, u32 dynamic_power, u32 static_power),

	TP_ARGS(freq, load, dynamic_power, static_power),

	TP_STRUCT__entry(
		__field(unsigned long, freq          )
		__field(u32,           load )
		__field(u32,           dynamic_power )
		__field(u32,           static_power  )
	),

	TP_fast_assign(
		__entry->freq = freq;
		__entry->load = load;
		__entry->dynamic_power = dynamic_power;
		__entry->static_power = static_power;
	),

	TP_printk("freq=%lu load=%d dynamic_power=%d static_power=%d",
		__entry->freq, __entry->load, __entry->dynamic_power, __entry->static_power)
);

TRACE_EVENT(thermal_power_gpu_limit,
	TP_PROTO(unsigned int freq, unsigned long cdev_state, u32 power),

	TP_ARGS(freq, cdev_state, power),

	TP_STRUCT__entry(
		__field(unsigned int,  freq      )
		__field(unsigned long, cdev_state)
		__field(u32,           power     )
	),

	TP_fast_assign(
		__entry->freq = freq;
		__entry->cdev_state = cdev_state;
		__entry->power = power;
	),

	TP_printk("freq=%u cdev_state=%lu power=%u",
		__entry->freq, __entry->cdev_state,
		__entry->power)
);

#endif /* _TRACE_THERMAL_H */

/* This part must be outside protection */
#include <trace/define_trace.h>
