/*
 * Configuration for Avnet UltraZed-EG with IO Carrier Card
 *
 * (C) Copyright 2017 Mentor Graphics, Inc.
 * Alexey Firago <alexey_firago@mentor.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_ZYNQMP_ULTRAZED_EG_H
#define __CONFIG_ZYNQMP_ULTRAZED_EG_H

#define CONFIG_ZYNQ_SDHCI1

#define CONFIG_ZYNQ_I2C1
#define CONFIG_SYS_I2C_MAX_HOPS		1
#define CONFIG_SYS_NUM_I2C_BUSES	3
#define CONFIG_SYS_I2C_BUSES	{ \
				{1, {I2C_NULL_HOP} }, \
				{1, {{I2C_MUX_PCA9542, 0x70, 0} } }, \
				{1, {{I2C_MUX_PCA9542, 0x70, 1} } }, \
				}

#define CONFIG_SYS_I2C_ZYNQ

#define CONFIG_ZYNQMP_XHCI_LIST {ZYNQMP_USB0_XHCI_BASEADDR}

#include <configs/xilinx_zynqmp.h>

#endif /* __CONFIG_ZYNQMP_ULTRAZED_EG_H */
