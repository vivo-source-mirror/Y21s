/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

/***************************************************************
 * Auto generated by DE, please DO NOT modify this file directly.
 ****************************************************************/

#ifndef _MT_SLEEP_REG_MD_REG_
#define _MT_SLEEP_REG_MD_REG_

#include "sleep_def_mt6771.h"
#include "pcm_def_mt6771.h"

/**************************************
 * Define and Declare
 **************************************/

#define SLEEP_REG_MD_SPM_DVFS_CMD16    (SLEEP_REG_MD_BASE + 0x000)
#define SLEEP_REG_MD_SPM_DVFS_CMD17    (SLEEP_REG_MD_BASE + 0x004)
#define SLEEP_REG_MD_SPM_DVFS_CMD18    (SLEEP_REG_MD_BASE + 0x008)
#define SLEEP_REG_MD_SPM_DVFS_CMD19    (SLEEP_REG_MD_BASE + 0x00C)
#define SLEEP_REG_MD_SPM_DVFS_CMD20    (SLEEP_REG_MD_BASE + 0x010)
#define SLEEP_REG_MD_SPM_DVFS_CMD21    (SLEEP_REG_MD_BASE + 0x014)
#define SLEEP_REG_MD_SPM_DVFS_CMD22    (SLEEP_REG_MD_BASE + 0x018)
#define SLEEP_REG_MD_SPM_DVFS_CMD23    (SLEEP_REG_MD_BASE + 0x01C)
#define SLEEP_REG_MD_NONSECU_RSV0      (SLEEP_REG_MD_BASE + 0x020)
#define SLEEP_REG_MD_NONSECU_RSV1      (SLEEP_REG_MD_BASE + 0x024)
#define SLEEP_REG_MD_NONSECU_RSV2      (SLEEP_REG_MD_BASE + 0x028)
#define SLEEP_REG_MD_NONSECU_RSV3      (SLEEP_REG_MD_BASE + 0x02C)
#define SLEEP_REG_MD_NONSECU_RSV4      (SLEEP_REG_MD_BASE + 0x030)
#define SLEEP_REG_MD_NONSECU_RSV5      (SLEEP_REG_MD_BASE + 0x034)
#define SLEEP_REG_MD_NONSECU_RSV6      (SLEEP_REG_MD_BASE + 0x038)
#define SLEEP_REG_MD_NONSECU_RSV7      (SLEEP_REG_MD_BASE + 0x03C)

/* SPM_DVFS_CMD16 (0x1000F000+0x000) */
#define SPM_DVFS_CMD16_LSB                  (1U << 0)       /* 32b */
/* SPM_DVFS_CMD17 (0x1000F000+0x004) */
#define SPM_DVFS_CMD17_LSB                  (1U << 0)       /* 32b */
/* SPM_DVFS_CMD18 (0x1000F000+0x008) */
#define SPM_DVFS_CMD18_LSB                  (1U << 0)       /* 32b */
/* SPM_DVFS_CMD19 (0x1000F000+0x00C) */
#define SPM_DVFS_CMD19_LSB                  (1U << 0)       /* 32b */
/* SPM_DVFS_CMD20 (0x1000F000+0x010) */
#define SPM_DVFS_CMD20_LSB                  (1U << 0)       /* 32b */
/* SPM_DVFS_CMD21 (0x1000F000+0x014) */
#define SPM_DVFS_CMD21_LSB                  (1U << 0)       /* 32b */
/* SPM_DVFS_CMD22 (0x1000F000+0x018) */
#define SPM_DVFS_CMD22_LSB                  (1U << 0)       /* 32b */
/* SPM_DVFS_CMD23 (0x1000F000+0x01C) */
#define SPM_DVFS_CMD23_LSB                  (1U << 0)       /* 32b */
/* NONSECU_RSV0 (0x1000F000+0x020) */
#define NONSECU_RSV0_LSB                    (1U << 0)       /* 32b */
/* NONSECU_RSV1 (0x1000F000+0x024) */
#define NONSECU_RSV1_LSB                    (1U << 0)       /* 32b */
/* NONSECU_RSV2 (0x1000F000+0x028) */
#define NONSECU_RSV2_LSB                    (1U << 0)       /* 32b */
/* NONSECU_RSV3 (0x1000F000+0x02C) */
#define NONSECU_RSV3_LSB                    (1U << 0)       /* 32b */
/* NONSECU_RSV4 (0x1000F000+0x030) */
#define NONSECU_RSV4_LSB                    (1U << 0)       /* 32b */
/* NONSECU_RSV5 (0x1000F000+0x034) */
#define NONSECU_RSV5_LSB                    (1U << 0)       /* 32b */
/* NONSECU_RSV6 (0x1000F000+0x038) */
#define NONSECU_RSV6_LSB                    (1U << 0)       /* 32b */
/* NONSECU_RSV7 (0x1000F000+0x03C) */
#define NONSECU_RSV7_LSB                    (1U << 0)       /* 32b */

#define SPM_PROJECT_CODE	0xb16
#define SPM_REGWR_CFG_KEY	(SPM_PROJECT_CODE << 16)

/**************************************
 * Macro and Inline
 **************************************/
#define spm_read(addr)	__raw_readl((void __force __iomem *)(addr))
#define spm_write(addr, val)	mt_reg_sync_writel(val, addr)

#endif
