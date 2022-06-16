/* SPDX-License-Identifier: GPL-2.0 */
/* Generated by Documentation/scheduler/sched-pelt; do not modify. */

#ifdef CONFIG_PELT_UTIL_HALFLIFE_32
static const u32 runnable_avg_yN_inv[] __maybe_unused = {
	0xffffffff,0xfa83b2da,0xf5257d14,0xefe4b99a,
	0xeac0c6e6,0xe5b906e6,0xe0ccdeeb,0xdbfbb796,
	0xd744fcc9,0xd2a81d91,0xce248c14,0xc9b9bd85,
	0xc5672a10,0xc12c4cc9,0xbd08a39e,0xb8fbaf46,
	0xb504f333,0xb123f581,0xad583ee9,0xa9a15ab4,
	0xa5fed6a9,0xa2704302,0x9ef5325f,0x9b8d39b9,
	0x9837f050,0x94f4efa8,0x91c3d373,0x8ea4398a,
	0x8b95c1e3,0x88980e80,0x85aac367,0x82cd8698,
};

static const u32 runnable_avg_yN_sum[] = {
	    0, 1002, 1982, 2941, 3880, 4798, 5697, 6576, 7437, 8279, 9103,
	 9909,10698,11470,12226,12966,13690,14398,15091,15769,16433,17082,
	17718,18340,18949,19545,20128,20698,21256,21802,22336,22859,23371,
};

#define LOAD_AVG_PERIOD 32
#define LOAD_AVG_MAX 47742
#define LOAD_AVG_MAX_N 345

#endif

#ifdef CONFIG_PELT_UTIL_HALFLIFE_24
static const u32 runnable_avg_yN_inv[] __maybe_unused = {
	0xffffffff,0xf8b65139,0xf1a1bf37,0xeac0c6e6,
	0xe411f039,0xdd93cdd6,0xd744fcc9,0xd124243d,
	0xcb2ff529,0xc5672a10,0xbfc886ba,0xba52d7ee,
	0xb504f333,0xafddb68e,0xaadc0846,0xa5fed6a9,
	0xa14517cb,0x9cadc957,0x9837f050,0x93e298df,
	0x8facd61d,0x8b95c1e3,0x879c7c96,0x83c02cf9,
};

static const u32 runnable_avg_yN_sum[] = {
	    0,  994, 1960, 2899, 3811, 4697, 5558, 6394, 7206, 7995, 8762,
	 9507,10231,10934,11617,12281,12926,13552,14161,14752,15326,15884,
	16426,16953,17465,
};

#define LOAD_AVG_PERIOD 24
#define LOAD_AVG_MAX 35936
#define LOAD_AVG_MAX_N 259

#endif

#ifdef CONFIG_PELT_UTIL_HALFLIFE_16
static const u32 runnable_avg_yN_inv[] __maybe_unused = {
	0xffffffff,0xf5257d14,0xeac0c6e6,0xe0ccdeeb,
	0xd744fcc9,0xce248c14,0xc5672a10,0xbd08a39e,
	0xb504f333,0xad583ee9,0xa5fed6a9,0x9ef5325f,
	0x9837f050,0x91c3d373,0x8b95c1e3,0x85aac367,
};

static const u32 runnable_avg_yN_sum[] = {
	    0,  980, 1919, 2818, 3679, 4503, 5292, 6048, 6772, 7465, 8129,
	 8764, 9373, 9956,10514,11048,11560,
};

#define LOAD_AVG_PERIOD 16
#define LOAD_AVG_MAX 24130
#define LOAD_AVG_MAX_N 172

#endif

#ifdef CONFIG_PELT_UTIL_HALFLIFE_12
static const u32 runnable_avg_yN_inv[] __maybe_unused = {
	0xffffffff,0xf1a1bf37,0xe411f039,0xd744fcc9,
	0xcb2ff529,0xbfc886ba,0xb504f333,0xaadc0846,
	0xa14517cb,0x9837f050,0x8facd61d,0x879c7c96,
};

static const u32 runnable_avg_yN_sum[] = {
	    0,  966, 1878, 2739, 3551, 4318, 5042, 5725, 6370, 6979, 7553,
	 8095, 8607,
};

#define LOAD_AVG_PERIOD 12
#define LOAD_AVG_MAX 18227
#define LOAD_AVG_MAX_N 128

#endif

#ifdef CONFIG_PELT_UTIL_HALFLIFE_10
static const u32 runnable_avg_yN_inv[] __maybe_unused = {
	0xffffffff,0xeedb4007,0xdedc66d6,0xcfefc5e5,
	0xc203001c,0xb504f333,0xa8e5a29d,0x9d9623df,
	0x93088c35,0x892fdf70,
};

static const u32 runnable_avg_yN_sum[] = {
	    0,  955, 1846, 2677, 3453, 4177, 4852, 5482, 6070, 6618, 7130,
};

#define LOAD_AVG_PERIOD 10
#define LOAD_AVG_MAX 15277
#define LOAD_AVG_MAX_N 107

#endif

#ifdef CONFIG_PELT_UTIL_HALFLIFE_8
static const u32 runnable_avg_yN_inv[] __maybe_unused = {
	0xffffffff,0xeac0c6e6,0xd744fcc9,0xc5672a10,
	0xb504f333,0xa5fed6a9,0x9837f050,0x8b95c1e3,
};

static const u32 runnable_avg_yN_sum[] = {
	    0,  939, 1800, 2589, 3313, 3977, 4585, 5143, 5655,
};

#define LOAD_AVG_PERIOD 8
#define LOAD_AVG_MAX 12326
#define LOAD_AVG_MAX_N 85

#endif
