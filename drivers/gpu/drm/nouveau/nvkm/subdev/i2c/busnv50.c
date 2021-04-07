/*
 * Copyright 2015 Red Hat Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial busions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Authors: Ben Skeggs <bskeggs@redhat.com>
 */
#define nv50_i2c_bus(p) container_of((p), struct nv50_i2c_bus, base)
#include "bus.h"

#include <subdev/vga.h>

struct nv50_i2c_bus {
	struct nvkm_i2c_bus base;
	u32 addr;
	u32 data;
};

static void
nv50_i2c_bus_drive_scl(struct nvkm_i2c_bus *base, int state)
{
	struct nv50_i2c_bus *bus = nv50_i2c_bus(base);
	struct nvkm_device *device = bus->base.pad->i2c->subdev.device;
	if (state) bus->data |= 0x01;
	else	   bus->data &= 0xfe;
	nvkm_wr32(device, bus->addr, bus->data);
}

static void
nv50_i2c_bus_drive_sda(struct nvkm_i2c_bus *base, int state)
{
	struct nv50_i2c_bus *bus = nv50_i2c_bus(base);
	struct nvkm_device *device = bus->base.pad->i2c->subdev.device;
	if (state) bus->data |= 0x02;
	else	   bus->data &= 0xfd;
	nvkm_wr32(device, bus->addr, bus->data);
}

static int
nv50_i2c_bus_sense_scl(struct nvkm_i2c_bus *base)
{
	struct nv50_i2c_bus *bus = nv50_i2c_bus(base);
	struct nvkm_device *device = bus->base.pad->i2c->subdev.device;
	return !!(nvkm_rd32(device, bus->addr) & 0x00000001);
}

static int
nv50_i2c_bus_sense_sda(struct nvkm_i2c_bus *base)
{
	struct nv50_i2c_bus *bus = nv50_i2c_bus(base);
	struct nvkm_device *device = bus->base.pad->i2c->subdev.device;
	return !!(nvkm_rd32(device, bus->addr) & 0x00000002);
}

static void
nv50_i2c_bus_init(struct nvkm_i2c_bus *base)
{
	struct nv50_i2c_bus *bus = nv50_i2c_bus(base);
	struct nvkm_device *device = bus->base.pad->i2c->subdev.device;
	nvkm_wr32(device, bus->addr, (bus->data = 0x00000007));
}

static const struct nvkm_i2c_bus_func
nv50_i2c_bus_func = {
	.init = nv50_i2c_bus_init,
	.drive_scl = nv50_i2c_bus_drive_scl,
	.drive_sda = nv50_i2c_bus_drive_sda,
	.sense_scl = nv50_i2c_bus_sense_scl,
	.sense_sda = nv50_i2c_bus_sense_sda,
	.xfer = nvkm_i2c_bit_xfer,
};

int
nv50_i2c_bus_new(struct nvkm_i2c_pad *pad, int id, u8 drive,
		 struct nvkm_i2c_bus **pbus)
{
	static const u32 addr[] = {
		0x00e138, 0x00e150, 0x00e168, 0x00e180,
		0x00e254, 0x00e274, 0x00e764, 0x00e780,
		0x00e79c, 0x00e7b8
	};
	struct nv50_i2c_bus *bus;

	if (drive >= ARRAY_SIZE(addr)) {
		nvkm_warn(&pad->i2c->subdev, "bus %d unknown\n", drive);
		return -ENODEV;
	}

	if (!(bus = kzalloc(sizeof(*bus), GFP_KERNEL)))
		return -ENOMEM;
	*pbus = &bus->base;

	nvkm_i2c_bus_ctor(&nv50_i2c_bus_func, pad, id, &bus->base);
	bus->addr = addr[drive];
	bus->data = 0x00000007;
	return 0;
}
