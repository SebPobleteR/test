/*
 * STMicroelectronics magnetometers driver
 *
 * Copyright 2012-2013 STMicroelectronics Inc.
 *
 * Denis Ciocca <denis.ciocca@st.com>
 *
 * Licensed under the GPL-2.
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/spi/spi.h>
#include <linux/iio/iio.h>

#include <linux/iio/common/st_sensors.h>
#include <linux/iio/common/st_sensors_spi.h>
#include "st_magn.h"

#ifdef CONFIG_OF
/*
 * For new single-chip sensors use <device_name> as compatible string.
 * For old single-chip devices keep <device_name>-magn to maintain
 * compatibility
 */
static const struct of_device_id st_magn_of_match[] = {
	{
		.compatible = "st,lis3mdl-magn",
		.data = LIS3MDL_MAGN_DEV_NAME,
	},
	{
		.compatible = "st,lsm303agr-magn",
		.data = LSM303AGR_MAGN_DEV_NAME,
	},
	{
		.compatible = "st,lis2mdl",
		.data = LIS2MDL_MAGN_DEV_NAME,
	},
	{}
};
MODULE_DEVICE_TABLE(of, st_magn_of_match);
#else
#define st_magn_of_match	NULL
#endif

static int st_magn_spi_probe(struct spi_device *spi)
{
	struct iio_dev *indio_dev;
	struct st_sensor_data *mdata;
	int err;

	indio_dev = devm_iio_device_alloc(&spi->dev, sizeof(*mdata));
	if (!indio_dev)
		return -ENOMEM;

	mdata = iio_priv(indio_dev);

	st_sensors_of_name_probe(&spi->dev, st_magn_of_match,
				 spi->modalias, sizeof(spi->modalias));
	st_sensors_spi_configure(indio_dev, spi, mdata);

	err = st_magn_common_probe(indio_dev);
	if (err < 0)
		return err;

	return 0;
}

static int st_magn_spi_remove(struct spi_device *spi)
{
	struct iio_dev *indio_dev = spi_get_drvdata(spi);
	st_magn_common_remove(indio_dev);

	return 0;
}

static const struct spi_device_id st_magn_id_table[] = {
	{ LIS3MDL_MAGN_DEV_NAME },
	{ LSM303AGR_MAGN_DEV_NAME },
	{ LIS2MDL_MAGN_DEV_NAME },
	{},
};
MODULE_DEVICE_TABLE(spi, st_magn_id_table);

static struct spi_driver st_magn_driver = {
	.driver = {
		.name = "st-magn-spi",
		.of_match_table = of_match_ptr(st_magn_of_match),
	},
	.probe = st_magn_spi_probe,
	.remove = st_magn_spi_remove,
	.id_table = st_magn_id_table,
};
module_spi_driver(st_magn_driver);

MODULE_AUTHOR("Denis Ciocca <denis.ciocca@st.com>");
MODULE_DESCRIPTION("STMicroelectronics magnetometers spi driver");
MODULE_LICENSE("GPL v2");
