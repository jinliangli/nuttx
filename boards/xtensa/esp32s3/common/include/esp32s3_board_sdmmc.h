/****************************************************************************
 * boards/xtensa/esp32s3/common/include/esp32s3_board_sdmmc.h
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __BOARDS_XTENSA_ESP32S3_COMMON_INCLUDE_ESP32S3_BOARD_SDMMC_H
#define __BOARDS_XTENSA_ESP32S3_COMMON_INCLUDE_ESP32S3_BOARD_SDMMC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#ifndef __ASSEMBLY__

#undef EXTERN
#if defined(__cplusplus)
#define EXTERN extern "C"
extern "C"
{
#else
#define EXTERN extern
#endif

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

#ifdef CONFIG_ESP32S3_SDMMC

/****************************************************************************
 * Name: board_sdmmc_initialize
 *
 * Description:
 *   Configure the SDMMC peripheral to communicate with SDIO or MMC card.
 *
 * Returned Value:
 *   Zero (OK) is returned on success; A negated errno value is returned
 *   to indicate the nature of any failure.
 *
 ****************************************************************************/

int board_sdmmc_initialize(void);

#endif /* CONFIG_ESP32S3_SDMMC */

/****************************************************************************
 * Name: board_sdmmc_spi_initialize
 *
 * Description:
 *   Initialize SPI-based SD card.
 *
 * Input Parameters:
 *   None.
 *
 * Returned Value:
 *   Zero (OK) is returned on success; A negated errno value is returned
 *   to indicate the nature of any failure.
 *
 ****************************************************************************/
#ifdef CONFIG_MMCSD_SPI
int board_sdmmc_spi_initialize(void);
#endif /* CONFIG_MMCSD_SPI */

#undef EXTERN
#if defined(__cplusplus)
}
#endif

#endif /* __ASSEMBLY__ */
#endif /* __BOARDS_XTENSA_ESP32S3_COMMON_INCLUDE_ESP32S3_BOARD_SDMMC_H */
