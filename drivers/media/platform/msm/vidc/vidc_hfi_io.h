/* Copyright (c) 2012-2013, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __VIDC_HFI_IO_H__
#define __VIDC_HFI_IO_H__

#include <linux/io.h>

#define VENUS_VCODEC_SS_CLOCK_HALT     0x0000000C
#define VENUS_VPP_CORE_SW_RESET        0x00042004
#define VENUS_VPP_CTRL_CTRL_RESET      0x00041008

#define VIDC_VBIF_BASE_OFFS			0x00080000
#define VIDC_VBIF_VERSION			(VIDC_VBIF_BASE_OFFS + 0x00)
#define VIDC_VENUS_VBIF_DDR_OUT_MAX_BURST		\
			(VIDC_VBIF_BASE_OFFS + 0xD8)
#define VIDC_VENUS_VBIF_OCMEM_OUT_MAX_BURST		\
			(VIDC_VBIF_BASE_OFFS + 0xDC)
#define VIDC_VENUS_VBIF_ROUND_ROBIN_QOS_ARB		\
			(VIDC_VBIF_BASE_OFFS + 0x124)

#define VIDC_CPU_BASE_OFFS			0x000C0000
#define VIDC_CPU_CS_BASE_OFFS		(VIDC_CPU_BASE_OFFS + 0x00012000)
#define VIDC_CPU_IC_BASE_OFFS		(VIDC_CPU_BASE_OFFS + 0x0001F000)

#define VIDC_CPU_CS_REMAP_OFFS		(VIDC_CPU_CS_BASE_OFFS + 0x00)
#define VIDC_CPU_CS_TIMER_CONTROL	(VIDC_CPU_CS_BASE_OFFS + 0x04)
#define VIDC_CPU_CS_A2HSOFTINTEN	(VIDC_CPU_CS_BASE_OFFS + 0x10)
#define VIDC_CPU_CS_A2HSOFTINTENCLR	(VIDC_CPU_CS_BASE_OFFS + 0x14)
#define VIDC_CPU_CS_A2HSOFTINT		(VIDC_CPU_CS_BASE_OFFS + 0x18)
#define VIDC_CPU_CS_A2HSOFTINTCLR	(VIDC_CPU_CS_BASE_OFFS + 0x1C)
#define VIDC_CPU_CS_SCIACMD			(VIDC_CPU_CS_BASE_OFFS + 0x48)

/* HFI_CTRL_STATUS */
#define VIDC_CPU_CS_SCIACMDARG0		(VIDC_CPU_CS_BASE_OFFS + 0x4C)
#define VIDC_CPU_CS_SCIACMDARG0_BMSK	0xff
#define VIDC_CPU_CS_SCIACMDARG0_SHFT	0x0
#define VIDC_CPU_CS_SCIACMDARG0_HFI_CTRL_ERROR_STATUS_BMSK	0xfe
#define VIDC_CPU_CS_SCIACMDARG0_HFI_CTRL_ERROR_STATUS_SHFT	0x1
#define VIDC_CPU_CS_SCIACMDARG0_HFI_CTRL_INIT_STATUS_BMSK	0x1
#define VIDC_CPU_CS_SCIACMDARG0_HFI_CTRL_INIT_STATUS_SHFT	0x0
#define VIDC_CPU_CS_SCIACMDARG0_HFI_CTRL_PC_READY           0x100
#define VIDC_CPU_CS_SCIACMDARG0_HFI_CTRL_INIT_IDLE_MSG_BMSK     0x40000000

/* HFI_QTBL_INFO */
#define VIDC_CPU_CS_SCIACMDARG1		(VIDC_CPU_CS_BASE_OFFS + 0x50)

/* HFI_QTBL_ADDR */
#define VIDC_CPU_CS_SCIACMDARG2		(VIDC_CPU_CS_BASE_OFFS + 0x54)

/* HFI_VERSION_INFO */
#define VIDC_CPU_CS_SCIACMDARG3		(VIDC_CPU_CS_BASE_OFFS + 0x58)
#define VIDC_CPU_IC_IRQSTATUS		(VIDC_CPU_IC_BASE_OFFS + 0x00)
#define VIDC_CPU_IC_FIQSTATUS		(VIDC_CPU_IC_BASE_OFFS + 0x04)
#define VIDC_CPU_IC_RAWINTR			(VIDC_CPU_IC_BASE_OFFS + 0x08)
#define VIDC_CPU_IC_INTSELECT		(VIDC_CPU_IC_BASE_OFFS + 0x0C)
#define VIDC_CPU_IC_INTENABLE		(VIDC_CPU_IC_BASE_OFFS + 0x10)
#define VIDC_CPU_IC_INTENACLEAR		(VIDC_CPU_IC_BASE_OFFS + 0x14)
#define VIDC_CPU_IC_SOFTINT			(VIDC_CPU_IC_BASE_OFFS + 0x18)
#define VIDC_CPU_IC_SOFTINT_H2A_BMSK	0x8000
#define VIDC_CPU_IC_SOFTINT_H2A_SHFT	0xF
#define VIDC_CPU_IC_SOFTINTCLEAR	(VIDC_CPU_IC_BASE_OFFS + 0x1C)

/*---------------------------------------------------------------------------
 * MODULE: vidc_wrapper
 *--------------------------------------------------------------------------*/
#define VIDC_WRAPPER_BASE_OFFS		0x000E0000

#define VIDC_WRAPPER_HW_VERSION		(VIDC_WRAPPER_BASE_OFFS + 0x00)
#define VIDC_WRAPPER_CLOCK_CONFIG	(VIDC_WRAPPER_BASE_OFFS + 0x04)

#define VIDC_WRAPPER_INTR_STATUS	(VIDC_WRAPPER_BASE_OFFS + 0x0C)
#define VIDC_WRAPPER_INTR_STATUS_A2HWD_BMSK	0x10
#define VIDC_WRAPPER_INTR_STATUS_A2HWD_SHFT	0x4
#define VIDC_WRAPPER_INTR_STATUS_A2H_BMSK	0x4
#define VIDC_WRAPPER_INTR_STATUS_A2H_SHFT	0x2

#define VIDC_WRAPPER_INTR_MASK		(VIDC_WRAPPER_BASE_OFFS + 0x10)
#define VIDC_WRAPPER_INTR_MASK_A2HWD_BMSK	0x10
#define VIDC_WRAPPER_INTR_MASK_A2HWD_SHFT	0x4
#define VIDC_WRAPPER_INTR_MASK_A2HVCODEC_BMSK	0x8
#define VIDC_WRAPPER_INTR_MASK_A2HVCODEC_SHFT	0x3
#define VIDC_WRAPPER_INTR_MASK_A2HCPU_BMSK	0x4
#define VIDC_WRAPPER_INTR_MASK_A2HCPU_SHFT	0x2

#define VIDC_WRAPPER_INTR_CLEAR		(VIDC_WRAPPER_BASE_OFFS + 0x14)
#define VIDC_WRAPPER_INTR_CLEAR_A2HWD_BMSK	0x10
#define VIDC_WRAPPER_INTR_CLEAR_A2HWD_SHFT	0x4
#define VIDC_WRAPPER_INTR_CLEAR_A2H_BMSK	0x4
#define VIDC_WRAPPER_INTR_CLEAR_A2H_SHFT	0x2

#define VIDC_WRAPPER_VBIF_XIN_SW_RESET	(VIDC_WRAPPER_BASE_OFFS + 0x18)
#define VIDC_WRAPPER_VBIF_XIN_STATUS	(VIDC_WRAPPER_BASE_OFFS + 0x1C)
#define VIDC_WRAPPER_CPU_CLOCK_CONFIG	(VIDC_WRAPPER_BASE_OFFS + 0x2000)
#define VIDC_WRAPPER_VBIF_XIN_CPU_SW_RESET	\
				(VIDC_WRAPPER_BASE_OFFS + 0x2004)
#define VIDC_WRAPPER_AXI_HALT		(VIDC_WRAPPER_BASE_OFFS + 0x2008)
#define VIDC_WRAPPER_AXI_HALT_STATUS	(VIDC_WRAPPER_BASE_OFFS + 0x200C)
#define VIDC_WRAPPER_CPU_CGC_DIS	(VIDC_WRAPPER_BASE_OFFS + 0x2010)
#define VIDC_VENUS_VBIF_CLK_ON		(VIDC_VBIF_BASE_OFFS + 0x4)
#define VIDC_VBIF_IN_RD_LIM_CONF0       (VIDC_VBIF_BASE_OFFS + 0xB0)
#define VIDC_VBIF_IN_RD_LIM_CONF1       (VIDC_VBIF_BASE_OFFS + 0xB4)
#define VIDC_VBIF_IN_RD_LIM_CONF2       (VIDC_VBIF_BASE_OFFS + 0xB8)
#define VIDC_VBIF_IN_RD_LIM_CONF3       (VIDC_VBIF_BASE_OFFS + 0xBC)
#define VIDC_VBIF_IN_WR_LIM_CONF0       (VIDC_VBIF_BASE_OFFS + 0xC0)
#define VIDC_VBIF_IN_WR_LIM_CONF1       (VIDC_VBIF_BASE_OFFS + 0xC4)
#define VIDC_VBIF_IN_WR_LIM_CONF2       (VIDC_VBIF_BASE_OFFS + 0xC8)
#define VIDC_VBIF_IN_WR_LIM_CONF3       (VIDC_VBIF_BASE_OFFS + 0xCC)
#define VIDC_VBIF_OUT_RD_LIM_CONF0      (VIDC_VBIF_BASE_OFFS + 0xD0)
#define VIDC_VBIF_OUT_WR_LIM_CONF0      (VIDC_VBIF_BASE_OFFS + 0xD4)
#define VIDC_VBIF_DDR_OUT_MAX_BURST     (VIDC_VBIF_BASE_OFFS + 0xD8)
#define VIDC_VBIF_OCMEM_OUT_MAX_BURST   (VIDC_VBIF_BASE_OFFS + 0xDC)
#define VIDC_VBIF_DDR_ARB_CONF0         (VIDC_VBIF_BASE_OFFS + 0xF4)
#define VIDC_VBIF_DDR_ARB_CONF1         (VIDC_VBIF_BASE_OFFS + 0xF8)
#define VIDC_VBIF_ROUND_ROBIN_QOS_ARB   (VIDC_VBIF_BASE_OFFS + 0x124)
#define VIDC_VBIF_OUT_AXI_AOOO_EN       (VIDC_VBIF_BASE_OFFS + 0x178)
#define VIDC_VBIF_OUT_AXI_AOOO          (VIDC_VBIF_BASE_OFFS + 0x17C)
#define VIDC_VBIF_ARB_CTL               (VIDC_VBIF_BASE_OFFS + 0xF0)
#define VIDC_VBIF_OUT_AXI_AMEMTYPE_CONF0 (VIDC_VBIF_BASE_OFFS + 0x160)
#define VIDC_VBIF_OUT_AXI_AMEMTYPE_CONF1 (VIDC_VBIF_BASE_OFFS + 0x164)
#define VIDC_VBIF_ADDR_TRANS_EN         (VIDC_VBIF_BASE_OFFS + 0xC00)
#define VIDC_VBIF_AT_OLD_BASE           (VIDC_VBIF_BASE_OFFS + 0xC04)
#define VIDC_VBIF_AT_OLD_HIGH           (VIDC_VBIF_BASE_OFFS + 0xC08)
#define VIDC_VBIF_AT_NEW_BASE           (VIDC_VBIF_BASE_OFFS + 0xC10)
#define VIDC_VBIF_AT_NEW_HIGH           (VIDC_VBIF_BASE_OFFS + 0xC18)

#define VIDC_VENUS0_WRAPPER_VBIF_REQ_PRIORITY \
	(VIDC_WRAPPER_BASE_OFFS + 0x20)
#define VIDC_VENUS0_WRAPPER_VBIF_PRIORITY_LEVEL \
	(VIDC_WRAPPER_BASE_OFFS + 0x24)

#define VIDC_CTRL_INIT 0x000D2048
#define VIDC_CTRL_INIT_RESERVED_BITS31_1__M 0xFFFFFFFE
#define VIDC_CTRL_INIT_RESERVED_BITS31_1__S 1
#define VIDC_CTRL_INIT_CTRL__M 0x00000001
#define VIDC_CTRL_INIT_CTRL__S 0

#define VIDC_CTRL_STATUS 0x000D204C
#define VIDC_CTRL_STATUS_RESERVED_BITS31_8__M 0xFFFFFF00
#define VIDC_CTRL_STATUS_RESERVED_BITS31_8__S 8
#define VIDC_CTRL_ERROR_STATUS__M             0x000000FE
#define VIDC_CTRL_ERROR_STATUS__S             1
#define VIDC_CTRL_INIT_STATUS__M              0x00000001
#define VIDC_CTRL_INIT_STATUS__S              0

#define VIDC_QTBL_INFO 0x000D2050
#define VIDC_QTBL_HOSTID__M 0xFF000000
#define VIDC_QTBL_HOSTID__S 24
#define VIDC_QTBL_INFO_RESERVED_BITS23_8__M 0x00FFFF00
#define VIDC_QTBL_INFO_RESERVED_BITS23_8__S 8
#define VIDC_QTBL_STATUS__M 0x000000FF
#define VIDC_QTBL_STATUS__S 0

#define VIDC_QTBL_ADDR 0x000D2054

#define VIDC_VERSION_INFO 0x000D2058
#define VIDC_VERSION_INFO_MAJOR__M  0xF0000000
#define VIDC_VERSION_INFO_MAJOR__S  28
#define VIDC_VERSION_INFO_MINOR__M  0x0FFFFFE0
#define VIDC_VERSION_INFO_MINOR__S  5
#define VIDC_VERSION_INFO_BRANCH__M 0x0000001F
#define VIDC_VERSION_INFO_BRANCH__S 0

#define VIDC_SFR_ADDR 0x000D205C
#define VIDC_MMAP_ADDR 0x000D2060
#define VIDC_UC_REGION_ADDR 0x000D2064
#define VIDC_UC_REGION_SIZE 0x000D2068

#endif
