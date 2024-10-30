/* SPDX-License-Identifier: GPL-2.0-only */

#include <console/console.h>
#include <device/device.h>
#include <drivers/intel/gma/int15.h>
#include <gpio.h>
#include <mainboard/gpio.h>
#include <soc/ramstage.h>

static void mainboard_enable(struct device *dev)
{
	mainboard_configure_gpios();
}

struct chip_operations mainboard_ops = {
	.enable_dev = mainboard_enable,
};
