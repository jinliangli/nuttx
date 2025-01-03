/****************************************************************************
 * arch/arm/src/tiva/hardware/cc13x2_cc26x2/cc13x2_cc26x2_prcm.h
 *
 * SPDX-License-Identifier: BSD-3-Clause
 * SPDX-FileCopyrightText: 2018 Gregory Nutt. All rights reserved.
 * SPDX-FileCopyrightText: 2015-2017, Texas Instruments Incorporated
 * SPDX-FileContributor: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#ifndef __ARCH_ARM_SRC_TIVA_HARDWARE_CC13X2_CC26X2_CC13X2_CC26X2_PRCM_H
#define __ARCH_ARM_SRC_TIVA_HARDWARE_CC13X2_CC26X2_CC13X2_CC26X2_PRCM_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "hardware/tiva_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* PRCM Register Offsets ****************************************************/

#define TIVA_PRCM_INFRCLKDIVR_OFFSET     0x0000  /* Infrastructure Clock Division Factor For Run Mode */
#define TIVA_PRCM_INFRCLKDIVS_OFFSET     0x0004  /* Infrastructure Clock Division Factor For Sleep Mode */
#define TIVA_PRCM_INFRCLKDIVDS_OFFSET    0x0008  /* Infrastructure Clock Division Factor For DeepSleep Mode */
#define TIVA_PRCM_VDCTL_OFFSET           0x000c  /* MCU Voltage Domain Control */
#define TIVA_PRCM_CLKLOADCTL_OFFSET      0x0028  /* Load PRCM Settings To CLKCTRL Power Domain */
#define TIVA_PRCM_RFCCLKG_OFFSET         0x002c  /* RFC Clock Gate */
#define TIVA_PRCM_VIMSCLKG_OFFSET        0x0030  /* VIMS Clock Gate */
#define TIVA_PRCM_SECDMACLKGR_OFFSET     0x003c  /* SEC (PKA And TRNG And CRYPTO) And UDMA Clock Gate For Run And All Modes */
#define TIVA_PRCM_SECDMACLKGS_OFFSET     0x0040  /* SEC (PKA And TRNG And CRYPTO) And UDMA Clock Gate For Sleep Mode */
#define TIVA_PRCM_SECDMACLKGDS_OFFSET    0x0044  /* SEC (PKA And TRNG and CRYPTO) And UDMA Clock Gate For Deep Sleep Mode */
#define TIVA_PRCM_GPIOCLKGR_OFFSET       0x0048  /* GPIO Clock Gate For Run And All Modes */
#define TIVA_PRCM_GPIOCLKGS_OFFSET       0x004c  /* GPIO Clock Gate For Sleep Mode */
#define TIVA_PRCM_GPIOCLKGDS_OFFSET      0x0050  /* GPIO Clock Gate For Deep Sleep Mode */
#define TIVA_PRCM_GPTCLKGR_OFFSET        0x0054  /* GPT Clock Gate For Run And All Modes */
#define TIVA_PRCM_GPTCLKGS_OFFSET        0x0058  /* GPT Clock Gate For Sleep Mode */
#define TIVA_PRCM_GPTCLKGDS_OFFSET       0x005c  /* GPT Clock Gate For Deep Sleep Mode */
#define TIVA_PRCM_I2CCLKGR_OFFSET        0x0060  /* I2C Clock Gate For Run And All Modes */
#define TIVA_PRCM_I2CCLKGS_OFFSET        0x0064  /* I2C Clock Gate For Sleep Mode */
#define TIVA_PRCM_I2CCLKGDS_OFFSET       0x0068  /* I2C Clock Gate For Deep Sleep Mode */
#define TIVA_PRCM_UARTCLKGR_OFFSET       0x006c  /* UART Clock Gate For Run And All Modes */
#define TIVA_PRCM_UARTCLKGS_OFFSET       0x0070  /* UART Clock Gate For Sleep Mode */
#define TIVA_PRCM_UARTCLKGDS_OFFSET      0x0074  /* UART Clock Gate For Deep Sleep Mode */
#define TIVA_PRCM_SSICLKGR_OFFSET        0x0078  /* SSI Clock Gate For Run And All Modes */
#define TIVA_PRCM_SSICLKGS_OFFSET        0x007c  /* SSI Clock Gate For Sleep Mode */
#define TIVA_PRCM_SSICLKGDS_OFFSET       0x0080  /* SSI Clock Gate For Deep Sleep Mode */
#define TIVA_PRCM_I2SCLKGR_OFFSET        0x0084  /* I2S Clock Gate For Run And All Modes */
#define TIVA_PRCM_I2SCLKGS_OFFSET        0x0088  /* I2S Clock Gate For Sleep Mode */
#define TIVA_PRCM_I2SCLKGDS_OFFSET       0x008c  /* I2S Clock Gate For Deep Sleep Mode */
#define TIVA_PRCM_SYSBUSCLKDIV_OFFSET    0x00b4  /* Internal */
#define TIVA_PRCM_CPUCLKDIV_OFFSET       0x00b8  /* Internal */
#define TIVA_PRCM_PERBUSCPUCLKDIV_OFFSET 0x00bc  /* Internal */
#define TIVA_PRCM_PERDMACLKDIV_OFFSET    0x00c4  /* Internal */
#define TIVA_PRCM_I2SBCLKSEL_OFFSET      0x00c8  /* I2S Clock Control */
#define TIVA_PRCM_GPTCLKDIV_OFFSET       0x00cc  /* GPT Scalar */
#define TIVA_PRCM_I2SCLKCTL_OFFSET       0x00d0  /* I2S Clock Control */
#define TIVA_PRCM_I2SMCLKDIV_OFFSET      0x00d4  /* MCLK Division Ratio */
#define TIVA_PRCM_I2SBCLKDIV_OFFSET      0x00d8  /* BCLK Division Ratio */
#define TIVA_PRCM_I2SWCLKDIV_OFFSET      0x00dc  /* WCLK Division Ratio */
#define TIVA_PRCM_RESETSECDMA_OFFSET     0x00f0  /* RESET For SEC (PKA And TRNG And CRYPTO) And UDMA */
#define TIVA_PRCM_RESETGPIO_OFFSET       0x00f4  /* RESET For GPIO IPs */
#define TIVA_PRCM_RESETGPT_OFFSET        0x00f8  /* RESET For GPT Ips */
#define TIVA_PRCM_RESETI2C_OFFSET        0x00fc  /* RESET For I2C IPs */
#define TIVA_PRCM_RESETUART_OFFSET       0x0100  /* RESET For UART IPs */
#define TIVA_PRCM_RESETSSI_OFFSET        0x0104  /* RESET For SSI IPs */
#define TIVA_PRCM_RESETI2S_OFFSET        0x0108  /* RESET For I2S IP */
#define TIVA_PRCM_PDCTL0_OFFSET          0x012c  /* Power Domain Control */
#define TIVA_PRCM_PDCTL0RFC_OFFSET       0x0130  /* RFC Power Domain Control */
#define TIVA_PRCM_PDCTL0SERIAL_OFFSET    0x0134  /* SERIAL Power Domain Control */
#define TIVA_PRCM_PDCTL0PERIPH_OFFSET    0x0138  /* PERIPH Power Domain Control */
#define TIVA_PRCM_PDSTAT0_OFFSET         0x0140  /* Power Domain Status */
#define TIVA_PRCM_PDSTAT0RFC_OFFSET      0x0144  /* RFC Power Domain Status */
#define TIVA_PRCM_PDSTAT0SERIAL_OFFSET   0x0148  /* SERIAL Power Domain Status */
#define TIVA_PRCM_PDSTAT0PERIPH_OFFSET   0x014c  /* PERIPH Power Domain Status */
#define TIVA_PRCM_PDCTL1_OFFSET          0x017c  /* Power Domain Control */
#define TIVA_PRCM_PDCTL1CPU_OFFSET       0x0184  /* CPU Power Domain Direct Control */
#define TIVA_PRCM_PDCTL1RFC_OFFSET       0x0188  /* RFC Power Domain Direct Control */
#define TIVA_PRCM_PDCTL1VIMS_OFFSET      0x018c  /* VIMS Mode Direct Control */
#define TIVA_PRCM_PDSTAT1_OFFSET         0x0194  /* Power Manager Status */
#define TIVA_PRCM_PDSTAT1BUS_OFFSET      0x0198  /* BUS Power Domain Direct Read Status */
#define TIVA_PRCM_PDSTAT1RFC_OFFSET      0x019c  /* RFC Power Domain Direct Read Status */
#define TIVA_PRCM_PDSTAT1CPU_OFFSET      0x01a0  /* CPU Power Domain Direct Read Status */
#define TIVA_PRCM_PDSTAT1VIMS_OFFSET     0x01a4  /* VIMS Mode Direct Read Status */
#define TIVA_PRCM_RFCBITS_OFFSET         0x01cc  /* Control To RFC */
#define TIVA_PRCM_RFCMODESEL_OFFSET      0x01d0  /* Selected RFC Mode */
#define TIVA_PRCM_RFCMODEHWOPT_OFFSET    0x01d4  /* Allowed RFC Modes */
#define TIVA_PRCM_PWRPROFSTAT_OFFSET     0x01e0  /* Power Profiler Register */
#define TIVA_PRCM_MCUSRAMCFG_OFFSET      0x021c  /* MCU SRAM configuration */
#define TIVA_PRCM_RAMRETEN_OFFSET        0x0224  /* Memory Retention Control */
#define TIVA_PRCM_OSCIMSC_OFFSET         0x0290  /* Oscillator Interrupt Mask */
#define TIVA_PRCM_OSCRIS_OFFSET          0x0294  /* Oscillator Raw Interrupt Status */
#define TIVA_PRCM_OSCICR_OFFSET          0x0298  /* Oscillator Raw Interrupt Clear */

/* PRCM Register Addresses **************************************************/

#define TIVA_PRCM_INFRCLKDIVR            (TIVA_PRCM_BASE + TIVA_PRCM_INFRCLKDIVR_OFFSET)
#define TIVA_PRCM_INFRCLKDIVS            (TIVA_PRCM_BASE + TIVA_PRCM_INFRCLKDIVS_OFFSET)
#define TIVA_PRCM_INFRCLKDIVDS           (TIVA_PRCM_BASE + TIVA_PRCM_INFRCLKDIVDS_OFFSET)
#define TIVA_PRCM_VDCTL                  (TIVA_PRCM_BASE + TIVA_PRCM_VDCTL_OFFSET)
#define TIVA_PRCM_CLKLOADCTL             (TIVA_PRCM_BASE + TIVA_PRCM_CLKLOADCTL_OFFSET)
#define TIVA_PRCM_RFCCLKG                (TIVA_PRCM_BASE + TIVA_PRCM_RFCCLKG_OFFSET)
#define TIVA_PRCM_VIMSCLKG               (TIVA_PRCM_BASE + TIVA_PRCM_VIMSCLKG_OFFSET)
#define TIVA_PRCM_SECDMACLKGR            (TIVA_PRCM_BASE + TIVA_PRCM_SECDMACLKGR_OFFSET)
#define TIVA_PRCM_SECDMACLKGS            (TIVA_PRCM_BASE + TIVA_PRCM_SECDMACLKGS_OFFSET)
#define TIVA_PRCM_SECDMACLKGDS           (TIVA_PRCM_BASE + TIVA_PRCM_SECDMACLKGDS_OFFSET)
#define TIVA_PRCM_GPIOCLKGR              (TIVA_PRCM_BASE + TIVA_PRCM_GPIOCLKGR_OFFSET)
#define TIVA_PRCM_GPIOCLKGS              (TIVA_PRCM_BASE + TIVA_PRCM_GPIOCLKGS_OFFSET)
#define TIVA_PRCM_GPIOCLKGDS             (TIVA_PRCM_BASE + TIVA_PRCM_GPIOCLKGDS_OFFSET)
#define TIVA_PRCM_GPTCLKGR               (TIVA_PRCM_BASE + TIVA_PRCM_GPTCLKGR_OFFSET)
#define TIVA_PRCM_GPTCLKGS               (TIVA_PRCM_BASE + TIVA_PRCM_GPTCLKGS_OFFSET)
#define TIVA_PRCM_GPTCLKGDS              (TIVA_PRCM_BASE + TIVA_PRCM_GPTCLKGDS_OFFSET)
#define TIVA_PRCM_I2CCLKGR               (TIVA_PRCM_BASE + TIVA_PRCM_I2CCLKGR_OFFSET)
#define TIVA_PRCM_I2CCLKGS               (TIVA_PRCM_BASE + TIVA_PRCM_I2CCLKGS_OFFSET)
#define TIVA_PRCM_I2CCLKGDS              (TIVA_PRCM_BASE + TIVA_PRCM_I2CCLKGDS_OFFSET)
#define TIVA_PRCM_UARTCLKGR              (TIVA_PRCM_BASE + TIVA_PRCM_UARTCLKGR_OFFSET)
#define TIVA_PRCM_UARTCLKGS              (TIVA_PRCM_BASE + TIVA_PRCM_UARTCLKGS_OFFSET)
#define TIVA_PRCM_UARTCLKGDS             (TIVA_PRCM_BASE + TIVA_PRCM_UARTCLKGDS_OFFSET)
#define TIVA_PRCM_SSICLKGR               (TIVA_PRCM_BASE + TIVA_PRCM_SSICLKGR_OFFSET)
#define TIVA_PRCM_SSICLKGS               (TIVA_PRCM_BASE + TIVA_PRCM_SSICLKGS_OFFSET)
#define TIVA_PRCM_SSICLKGDS              (TIVA_PRCM_BASE + TIVA_PRCM_SSICLKGDS_OFFSET)
#define TIVA_PRCM_I2SCLKGR               (TIVA_PRCM_BASE + TIVA_PRCM_I2SCLKGR_OFFSET)
#define TIVA_PRCM_I2SCLKGS               (TIVA_PRCM_BASE + TIVA_PRCM_I2SCLKGS_OFFSET)
#define TIVA_PRCM_I2SCLKGDS              (TIVA_PRCM_BASE + TIVA_PRCM_I2SCLKGDS_OFFSET)
#define TIVA_PRCM_SYSBUSCLKDIV           (TIVA_PRCM_BASE + TIVA_PRCM_SYSBUSCLKDIV_OFFSET)
#define TIVA_PRCM_CPUCLKDIV              (TIVA_PRCM_BASE + TIVA_PRCM_CPUCLKDIV_OFFSET)
#define TIVA_PRCM_PERBUSCPUCLKDIV        (TIVA_PRCM_BASE + TIVA_PRCM_PERBUSCPUCLKDIV_OFFSET)
#define TIVA_PRCM_PERDMACLKDIV           (TIVA_PRCM_BASE + TIVA_PRCM_PERDMACLKDIV_OFFSET)
#define TIVA_PRCM_I2SBCLKSEL             (TIVA_PRCM_BASE + TIVA_PRCM_I2SBCLKSEL_OFFSET)
#define TIVA_PRCM_GPTCLKDIV              (TIVA_PRCM_BASE + TIVA_PRCM_GPTCLKDIV_OFFSET)
#define TIVA_PRCM_I2SCLKCTL              (TIVA_PRCM_BASE + TIVA_PRCM_I2SCLKCTL_OFFSET)
#define TIVA_PRCM_I2SMCLKDIV             (TIVA_PRCM_BASE + TIVA_PRCM_I2SMCLKDIV_OFFSET)
#define TIVA_PRCM_I2SBCLKDIV             (TIVA_PRCM_BASE + TIVA_PRCM_I2SBCLKDIV_OFFSET)
#define TIVA_PRCM_I2SWCLKDIV             (TIVA_PRCM_BASE + TIVA_PRCM_I2SWCLKDIV_OFFSET)
#define TIVA_PRCM_RESETSECDMA            (TIVA_PRCM_BASE + TIVA_PRCM_RESETSECDMA_OFFSET)
#define TIVA_PRCM_RESETGPIO              (TIVA_PRCM_BASE + TIVA_PRCM_RESETGPIO_OFFSET)
#define TIVA_PRCM_RESETGPT               (TIVA_PRCM_BASE + TIVA_PRCM_RESETGPT_OFFSET)
#define TIVA_PRCM_RESETI2C               (TIVA_PRCM_BASE + TIVA_PRCM_RESETI2C_OFFSET)
#define TIVA_PRCM_RESETUART              (TIVA_PRCM_BASE + TIVA_PRCM_RESETUART_OFFSET)
#define TIVA_PRCM_RESETSSI               (TIVA_PRCM_BASE + TIVA_PRCM_RESETSSI_OFFSET)
#define TIVA_PRCM_RESETI2S               (TIVA_PRCM_BASE + TIVA_PRCM_RESETI2S_OFFSET)
#define TIVA_PRCM_PDCTL0                 (TIVA_PRCM_BASE + TIVA_PRCM_PDCTL0_OFFSET)
#define TIVA_PRCM_PDCTL0RFC              (TIVA_PRCM_BASE + TIVA_PRCM_PDCTL0RFC_OFFSET)
#define TIVA_PRCM_PDCTL0SERIAL           (TIVA_PRCM_BASE + TIVA_PRCM_PDCTL0SERIAL_OFFSET)
#define TIVA_PRCM_PDCTL0PERIPH           (TIVA_PRCM_BASE + TIVA_PRCM_PDCTL0PERIPH_OFFSET)
#define TIVA_PRCM_PDSTAT0                (TIVA_PRCM_BASE + TIVA_PRCM_PDSTAT0_OFFSET)
#define TIVA_PRCM_PDSTAT0RFC             (TIVA_PRCM_BASE + TIVA_PRCM_PDSTAT0RFC_OFFSET)
#define TIVA_PRCM_PDSTAT0SERIAL          (TIVA_PRCM_BASE + TIVA_PRCM_PDSTAT0SERIAL_OFFSET)
#define TIVA_PRCM_PDSTAT0PERIPH          (TIVA_PRCM_BASE + TIVA_PRCM_PDSTAT0PERIPH_OFFSET)
#define TIVA_PRCM_PDCTL1                 (TIVA_PRCM_BASE + TIVA_PRCM_PDCTL1_OFFSET)
#define TIVA_PRCM_PDCTL1CPU              (TIVA_PRCM_BASE + TIVA_PRCM_PDCTL1CPU_OFFSET)
#define TIVA_PRCM_PDCTL1RFC              (TIVA_PRCM_BASE + TIVA_PRCM_PDCTL1RFC_OFFSET)
#define TIVA_PRCM_PDCTL1VIMS             (TIVA_PRCM_BASE + TIVA_PRCM_PDCTL1VIMS_OFFSET)
#define TIVA_PRCM_PDSTAT1                (TIVA_PRCM_BASE + TIVA_PRCM_PDSTAT1_OFFSET)
#define TIVA_PRCM_PDSTAT1BUS             (TIVA_PRCM_BASE + TIVA_PRCM_PDSTAT1BUS_OFFSET)
#define TIVA_PRCM_PDSTAT1RFC             (TIVA_PRCM_BASE + TIVA_PRCM_PDSTAT1RFC_OFFSET)
#define TIVA_PRCM_PDSTAT1CPU             (TIVA_PRCM_BASE + TIVA_PRCM_PDSTAT1CPU_OFFSET)
#define TIVA_PRCM_PDSTAT1VIMS            (TIVA_PRCM_BASE + TIVA_PRCM_PDSTAT1VIMS_OFFSET)
#define TIVA_PRCM_RFCBITS                (TIVA_PRCM_BASE + TIVA_PRCM_RFCBITS_OFFSET)
#define TIVA_PRCM_RFCMODESEL             (TIVA_PRCM_BASE + TIVA_PRCM_RFCMODESEL_OFFSET)
#define TIVA_PRCM_RFCMODEHWOPT           (TIVA_PRCM_BASE + TIVA_PRCM_RFCMODEHWOPT_OFFSET)
#define TIVA_PRCM_PWRPROFSTAT            (TIVA_PRCM_BASE + TIVA_PRCM_PWRPROFSTAT_OFFSET)
#define TIVA_PRCM_MCUSRAMCFG             (TIVA_PRCM_BASE + TIVA_PRCM_MCUSRAMCFG_OFFSET)
#define TIVA_PRCM_RAMRETEN               (TIVA_PRCM_BASE + TIVA_PRCM_RAMRETEN_OFFSET)
#define TIVA_PRCM_OSCIMSC                (TIVA_PRCM_BASE + TIVA_PRCM_OSCIMSC_OFFSET)
#define TIVA_PRCM_OSCRIS                 (TIVA_PRCM_BASE + TIVA_PRCM_OSCRIS_OFFSET)
#define TIVA_PRCM_OSCICR                 (TIVA_PRCM_BASE + TIVA_PRCM_OSCICR_OFFSET)

/* PRCM Register Bitfield Definitions ***************************************/

/* Infrastructure Clock Division Factor For Run Mode */

#define PRCM_INFRCLKDIVR_RATIO_SHIFT     (0)       /* Bits 0-1:  Divider for MCU_AON clocks run mode */
#define PRCM_INFRCLKDIVR_RATIO_MASK      (3 << PRCM_INFRCLKDIVR_RATIO_SHIFT)
#  define PRCM_INFRCLKDIVR_RATIO_DIV1    (0 << PRCM_INFRCLKDIVR_RATIO_SHIFT) /*  Divide by 1 */
#  define PRCM_INFRCLKDIVR_RATIO_DIV2    (1 << PRCM_INFRCLKDIVR_RATIO_SHIFT) /*  Divide by 2 */
#  define PRCM_INFRCLKDIVR_RATIO_DIV8    (2 << PRCM_INFRCLKDIVR_RATIO_SHIFT) /*  Divide by 8 */
#  define PRCM_INFRCLKDIVR_RATIO_DIV32   (3 << PRCM_INFRCLKDIVR_RATIO_SHIFT) /*  Divide by 32 */

/* Infrastructure Clock Division Factor For Sleep Mode */

#define PRCM_INFRCLKDIVS_RATIO_SHIFT     (0)       /* Bits 0-1:  Divider for MCU_AON clocks sleep mode */
#define PRCM_INFRCLKDIVS_RATIO_MASK      (3 << PRCM_INFRCLKDIVS_RATIO_SHIFT)
#  define PRCM_INFRCLKDIVS_RATIO_DIV1    (0 << PRCM_INFRCLKDIVS_RATIO_SHIFT) /*  Divide by 1 */
#  define PRCM_INFRCLKDIVS_RATIO_DIV2    (1 << PRCM_INFRCLKDIVS_RATIO_SHIFT) /*  Divide by 2 */
#  define PRCM_INFRCLKDIVS_RATIO_DIV8    (2 << PRCM_INFRCLKDIVS_RATIO_SHIFT) /*  Divide by 8 */
#  define PRCM_INFRCLKDIVS_RATIO_DIV32   (3 << PRCM_INFRCLKDIVS_RATIO_SHIFT) /*  Divide by 32 */

/* Infrastructure Clock Division Factor For DeepSleep Mode */

#define PRCM_INFRCLKDIVDS_RATIO_SHIFT    (0)       /* Bits 0-1:  Divider for MCU_AON clocks sleep mode */
#define PRCM_INFRCLKDIVDS_RATIO_MASK     (3 << PRCM_INFRCLKDIVDS_RATIO_SHIFT)
#  define PRCM_INFRCLKDIVDS_RATIO_DIV1   (0 << PRCM_INFRCLKDIVDS_RATIO_SHIFT) /*  Divide by 1 */
#  define PRCM_INFRCLKDIVDS_RATIO_DIV2   (1 << PRCM_INFRCLKDIVDS_RATIO_SHIFT) /*  Divide by 2 */
#  define PRCM_INFRCLKDIVDS_RATIO_DIV8   (2 << PRCM_INFRCLKDIVDS_RATIO_SHIFT) /*  Divide by 8 */
#  define PRCM_INFRCLKDIVDS_RATIO_DIV32  (3 << PRCM_INFRCLKDIVDS_RATIO_SHIFT) /*  Divide by 32 */

/* MCU Voltage Domain Control */

#define PRCM_VDCTL_ULDO                  (1 << 0)  /* Bit 0:  Request WUC to switch to uLDO */
#define PRCM_VDCTL_MCUVD                 (1 << 2)  /* Bit 2:  Request WUC to power down MCU domain */

/* Load PRCM Settings To CLKCTRL Power Domain */

#define PRCM_CLKLOADCTL_LOAD             (1 << 0)  /* Bit 0:  Load settings to CLKCTRL */
#define PRCM_CLKLOADCTL_LOADDONE         (1 << 1)  /* Bit 1:  Set when LOAD is done */

/* RFC Clock Gate */

#define PRCM_RFCCLKG_CLKEN               (1 << 0)  /* Bit 0:  Enable clock */

/* VIMS Clock Gate */

#define PRCM_VIMSCLKG_CLKEN_SHIFT        (0)       /* Bits 0-1:  Clock control */
#define PRCM_VIMSCLKG_CLKEN_MASK         (3 << PRCM_VIMSCLKG_CLKEN_SHIFT)
#  define PRCM_VIMSCLKG_CLKEN_DIS        (0 << PRCM_VIMSCLKG_CLKEN_SHIFT) /* Disable clock */
#  define PRCM_VIMSCLKG_CLKEN_DISSYSCLK  (1 << PRCM_VIMSCLKG_CLKEN_SHIFT) /* Disable clock when SYCLK disabled */
#  define PRCM_VIMSCLKG_CLKEN_ENA        (3 << PRCM_VIMSCLKG_CLKEN_SHIFT) /* Enable clock */

/* SEC (PKA And TRNG And CRYPTO) And UDMA Clock Gate For Run And All Modes,
 * SEC (PKA And TRNG And CRYPTO) And UDMA Clock Gate For Sleep Mode, and
 * SEC (PKA And TRNG and CRYPTO) And UDMA Clock Gate For Deep Sleep Mode
 */

#define PRCM_SECDMACLKG_CRYPTO_CLKEN_SHIFT (0)       /* Bit 0:  Enable cypto clock */
#define PRCM_SECDMACLKG_CRYPTO_CLKEN       (1 << PRCM_SECDMACLKG_CRYPTO_CLKEN_SHIFT)
#define PRCM_SECDMACLKG_TRNG_CLKEN_SHIFT   (1)       /* Bit 1:  Enable TRNG clock */
#define PRCM_SECDMACLKG_TRNG_CLKEN         (1 << PRCM_SECDMACLKG_TRNG_CLKEN_SHIFT)
#define PRCM_SECDMACLKG_PKA_CLKEN_SHIFT    (2)       /* Bit 2:  Enable PKA clock */
#define PRCM_SECDMACLKG_PKA_CLKEN          (1 << PRCM_SECDMACLKG_PKA_CLKEN_SHIFT)
#define PRCM_SECDMACLKG_DMA_CLKEN_SHIFT    (8)       /* Bit 8:  Enable DMA clock */
#define PRCM_SECDMACLKG_DMA_CLKEN          (1 << PRCM_SECDMACLKG_DMA_CLKEN_SHIFT)

/* SEC (PKA And TRNG And CRYPTO) And UDMA Clock Gate For Run And All Modes
 * (only)
 */

#define PRCM_SECDMACLKGR_CRYPTO_AMCLKEN  (1 << 16) /* Bit 16: Force Crypto clock on all modes */
#define PRCM_SECDMACLKGR_TRNG_AMCLKEN    (1 << 17) /* Bit 17: Force TRNG clock on all modes */
#define PRCM_SECDMACLKGR_PKA_AMCLKEN     (1 << 18) /* Bit 18: Force PKA clock on all modes */
#define PRCM_SECDMACLKGR_PKA_ZER0RESETN  (1 << 19) /* Bit 18: Enable PKA zeroize of memory */
#define PRCM_SECDMACLKGR_DMA_AMCLKEN     (1 << 24) /* Bit 24: Force DMA clock on all modes */

/* GPIO Clock Gate For Run And All Modes, GPIO Clock Gate For Sleep Mode, and
 * GPIO Clock Gate For Deep Sleep Mode
 */

#define PRCM_GPIOCLKG_CLKEN_SHIFT        (0)       /* Bit 0: Enable clock */
#define PRCM_GPIOCLKG_CLKEN              (1 << PRCM_GPIOCLKG_CLKEN_SHIFT)

/* GPIO Clock Gate For Run And All Modes (only) */

#define PRCM_GPIOCLKGR_AMCLKEN           (1 << 8)  /* Bit 8: Force clock for all modes */

/* GPT Clock Gate For Run And All Modes, GPT Clock Gate For Sleep Mode, and
 * GPT Clock Gate For Deep Sleep Mode.
 */

#define PRCM_GPTCLKG_CLKEN_GPT0_SHIFT    (0)       /* Bit 0:  Enable clock for GPT0 */
#define PRCM_GPTCLKG_CLKEN_GPT0          (1 << PRCM_GPTCLKG_CLKEN_GPT0_SHIFT)
#define PRCM_GPTCLKG_CLKEN_GPT1_SHIFT    (1)       /* Bit 1:  Enable clock for GPT1 */
#define PRCM_GPTCLKG_CLKEN_GPT1          (1 << PRCM_GPTCLKG_CLKEN_GPT1_SHIFT)
#define PRCM_GPTCLKG_CLKEN_GPT2_SHIFT    (2)       /* Bit 2:  Enable clock for GPT2 */
#define PRCM_GPTCLKG_CLKEN_GPT2          (1 << PRCM_GPTCLKG_CLKEN_GPT2_SHIFT)
#define PRCM_GPTCLKG_CLKEN_GPT3_SHIFT    (3)       /* Bit 3:  Enable clock for GPT3 */
#define PRCM_GPTCLKG_CLKEN_GPT3          (1 << PRCM_GPTCLKG_CLKEN_GPT3_SHIFT)

/* GPT Clock Gate For Run And All Modes (only) */

#define PRCM_GPTCLKGR_AMCLKEN_AMGPT0     (1 << 8)  /* Bit 8:  Enable clock for GPT0 in all modes */
#define PRCM_GPTCLKGR_AMCLKEN_AMGPT1     (1 << 9)  /* Bit 9:  Enable clock for GPT1 in all modes */
#define PRCM_GPTCLKGR_AMCLKEN_AMGPT2     (1 << 10) /* Bit 11: Enable clock for GPT2 in all modes */
#define PRCM_GPTCLKGR_AMCLKEN_AMGPT3     (1 << 11) /* Bit 11: Enable clock for GPT3 in all modes */

/* I2C Clock Gate For Run And All Modes, 2C Clock Gate For Sleep Mode, and
 * 2C Clock Gate For Deep Sleep Mode
 */

#define PRCM_I2CCLKGR_CLKEN_SHIFT        (0)       /* Bit 0:  Enable clock */
#define PRCM_I2CCLKGR_CLKEN              (1 << PRCM_I2CCLKGR_CLKEN_SHIFT)

/* I2C Clock Gate For Run And All Modes (only) */

#define PRCM_I2CCLKGR_AMCLKEN            (1 << 8)  /* Bit 8:  Force clock on for all modes */

/* UART Clock Gate For Run And All Modes, UART Clock Gate For Sleep Mode, and
 * UART Clock Gate For Deep Sleep Mode
 */

#define PRCM_UARTCLKG_CLKEN_UART0_SHIFT  (0)       /* Bit 0:  UART0 Enable clock */
#define PRCM_UARTCLKG_CLKEN_UART0        (1 << PRCM_UARTCLKGDS_CLKEN_UART0_SHIFT)
#define PRCM_UARTCLKG_CLKEN_UART1_SHIFT  (1)       /* Bit 1:  UART1 Enable clock */
#define PRCM_UARTCLKG_CLKEN_UART1        (1 << PRCM_UARTCLKGDS_CLKEN_UART1_SHIFT)

/* UART Clock Gate For Run And All Modes (only) */

#define PRCM_UARTCLKGR_AMCLKEN_UART0     (1 << 8)  /* Bit 8:  UART0 Force clock on for all modes */
#define PRCM_UARTCLKGR_AMCLKEN_UART1     (1 << 9)  /* Bit 9:  UART1 Force clock on for all modes */

/* SSI Clock Gate For Run And All Modes, SSI Clock Gate For Sleep Mode, and
 * SSI Clock Gate For Deep Sleep Mode
 */

#define PRCM_SSICLKG_CLKEN_SSI0_SHIFT    (0)       /* Bit 0:  SSI0 Enable clock */
#define PRCM_SSICLKG_CLKEN_SSI0          (1 << PRCM_SSICLKG_CLKEN_SSI0_SHIFT)
#define PRCM_SSICLKG_CLKEN_SSI1_SHIFT    (1)       /* Bit 1:  SSI1 Enable clock */
#define PRCM_SSICLKG_CLKEN_SSI1          (1 << PRCM_SSICLKG_CLKEN_SSI1_SHIFT)

/* SSI Clock Gate For Run And All Modes (only) */

#define PRCM_SSICLKGR_AMCLKEN_SSI0       (1 << 8)  /* Bit 8:  SSI0 Force clock on for all modes */
#define PRCM_SSICLKGR_AMCLKEN_SSI1       (1 << 9)  /* Bit 9:  SSI1 Force clock on for all modes */

/* I2S Clock Gate For Run And All Modes, I2S Clock Gate For Sleep Mode, and
 * I2S Clock Gate For Deep Sleep Mode
 */

#define PRCM_I2SCLKG_CLKEN_SHIFT         (0)       /* Bit 0:  I2S Enable clock */
#define PRCM_I2SCLKG_CLKEN               (1 << PRCM_I2SCLKG_CLKEN_SHIFT)

/* I2S Clock Gate For Run And All Modes (only) */

#define PRCM_I2SCLKGR_AMCLKEN            (1 << 8)  /* Bit 8:  SSI0 Force clock on for all modes */

/* Internal */

#define PRCM_SYSBUSCLKDIV_DIV            (1 << 0)  /* Bit 0:  Ratio */
#  define PRCM_SYSBUSCLKDIV_DIV1         (0)
#  define PRCM_SYSBUSCLKDIV_DIV2         PRCM_SYSBUSCLKDIV_DIV

/* Internal */

#define PRCM_CPUCLKDIV_DIV               (1 << 0)  /* Bit 0:  Ratio */
#  define PRCM_CPUCLKDIV_DIV1            (0)
#  define PRCM_CPUCLKDIV_DIV2            PRCM_CPUCLKDIV_DIV

/* Internal */

#define PRCM_PERBUSCPUCLKDIV_SHIFT       (0)       /* Bit 0-3: Ratio */
#define PRCM_PERBUSCPUCLKDIV_MASK        (15 << PRCM_PERBUSCPUCLKDIV_SHIFT)
#  define PRCM_PERBUSCPUCLKDIV_DIV1      (0 << PRCM_PERBUSCPUCLKDIV_SHIFT)
#  define PRCM_PERBUSCPUCLKDIV_DIV2      (1 << PRCM_PERBUSCPUCLKDIV_SHIFT)
#  define PRCM_PERBUSCPUCLKDIV_DIV4      (2 << PRCM_PERBUSCPUCLKDIV_SHIFT)
#  define PRCM_PERBUSCPUCLKDIV_DIV8      (3 << PRCM_PERBUSCPUCLKDIV_SHIFT)
#  define PRCM_PERBUSCPUCLKDIV_DIV16     (4 << PRCM_PERBUSCPUCLKDIV_SHIFT)
#  define PRCM_PERBUSCPUCLKDIV_DIV32     (5 << PRCM_PERBUSCPUCLKDIV_SHIFT)
#  define PRCM_PERBUSCPUCLKDIV_DIV65     (6 << PRCM_PERBUSCPUCLKDIV_SHIFT)
#  define PRCM_PERBUSCPUCLKDIV_DIV128    (7 << PRCM_PERBUSCPUCLKDIV_SHIFT)
#  define PRCM_PERBUSCPUCLKDIV_DIV256    (8 << PRCM_PERBUSCPUCLKDIV_SHIFT)

/* Internal */

#define PRCM_PERDMACLKDIV_SHIFT          (0)       /* Bit 0-3: Ratio */
#define PRCM_PERDMACLKDIV_MASK           (15 << PRCM_PERDMACLKDIV_SHIFT)
#  define PRCM_PERDMACLKDIV_DIV1         (0 << PRCM_PERDMACLKDIV_SHIFT)
#  define PRCM_PERDMACLKDIV_DIV2         (1 << PRCM_PERDMACLKDIV_SHIFT)
#  define PRCM_PERDMACLKDIV_DIV4         (2 << PRCM_PERDMACLKDIV_SHIFT)
#  define PRCM_PERDMACLKDIV_DIV8         (3 << PRCM_PERDMACLKDIV_SHIFT)
#  define PRCM_PERDMACLKDIV_DIV16        (4 << PRCM_PERDMACLKDIV_SHIFT)
#  define PRCM_PERDMACLKDIV_DIV32        (5 << PRCM_PERDMACLKDIV_SHIFT)
#  define PRCM_PERDMACLKDIV_DIV65        (6 << PRCM_PERDMACLKDIV_SHIFT)
#  define PRCM_PERDMACLKDIV_DIV128       (7 << PRCM_PERDMACLKDIV_SHIFT)
#  define PRCM_PERDMACLKDIV_DIV256       (8 << PRCM_PERDMACLKDIV_SHIFT)

/* I2S Clock Control */

#define PRCM_I2SBCLKSEL_SRC              (1 << 0)  /* Bit 0:  BCLK source selector */
#  define PRCM_I2SBCLKSEL_EXTERNAL       (0)
#  define PRCM_I2SBCLKSEL_INTERNAL       PRCM_I2SBCLKSEL_SRC

/* GPT Scalar */

#define PRCM_GPTCLKDIV_SHIFT             (0)       /* Bit 0-3: Ratio */
#define PRCM_GPTCLKDIV_MASK              (15 << PRCM_GPTCLKDIV_SHIFT)
#  define PRCM_GPTCLKDIV_DIV1            (0 << PRCM_GPTCLKDIV_SHIFT)
#  define PRCM_GPTCLKDIV_DIV2            (1 << PRCM_GPTCLKDIV_SHIFT)
#  define PRCM_GPTCLKDIV_DIV4            (2 << PRCM_GPTCLKDIV_SHIFT)
#  define PRCM_GPTCLKDIV_DIV8            (3 << PRCM_GPTCLKDIV_SHIFT)
#  define PRCM_GPTCLKDIV_DIV16           (4 << PRCM_GPTCLKDIV_SHIFT)
#  define PRCM_GPTCLKDIV_DIV32           (5 << PRCM_GPTCLKDIV_SHIFT)
#  define PRCM_GPTCLKDIV_DIV64           (6 << PRCM_GPTCLKDIV_SHIFT)
#  define PRCM_GPTCLKDIV_DIV128          (7 << PRCM_GPTCLKDIV_SHIFT)
#  define PRCM_GPTCLKDIV_DIV256          (8 << PRCM_GPTCLKDIV_SHIFT)

/* I2S Clock Control */

#define PRCM_I2SCLKCTL_EN                 (1 << 0)                              /* Enable MCLK, BCLK, and WCLK */
#define PRCM_I2SCLKCTL_WCLKPHASE_SHIFT    1                                     /* Bits 1-2: Wclock division ration mode */
#define PRCM_I2SCLKCTL_WCLKPHASE_MASK     (3 << PRCM_I2SCLKCTL_WCLKPHASE_SHIFT)
#  define PRCM_I2SCLKCTL_WCLKPHASE_SINGLE (0 << PRCM_I2SCLKCTL_WCLKPHASE_SHIFT) /* Single phase */
#  define PRCM_I2SCLKCTL_WCLKPHASE_DUAL   (1 << PRCM_I2SCLKCTL_WCLKPHASE_SHIFT) /* Dual phase */
#  define PRCM_I2SCLKCTL_WCLKPHASE_USER   (2 << PRCM_I2SCLKCTL_WCLKPHASE_SHIFT) /* User Defined */
#define PRCM_I2SCLKCTL_POSEDGE            (1 << 3)                              /* Bit 3: Sample/clock on positive edge */
#  define PRCM_I2SCLKCTL_NEGEDGE          (0)                                   /*        Sample/clock on negative edge */

/* MCLK Division Ratio */

#define PRCM_I2SMCLKDIV_MDIV_SHIFT       (0)      /* Bits 0-9: MCLK divider */
#define PRCM_I2SMCLKDIV_MDIV_MASK        (0x3ff << PRCM_I2SMCLKDIV_MDIV_SHIFT)
#  define PRCM_I2SMCLKDIV_MDIV(n)        (((uint32_t)(n) & 0x3ff) << PRCM_I2SMCLKDIV_MDIV_SHIFT)

/* BCLK Division Ratio */

#define PRCM_I2SBCLKDIV_BDIV_SHIFT       (0)      /* Bits 0-9: MCLK divider */
#define PRCM_I2SBCLKDIV_BDIV_MASK        (0x3ff << PRCM_I2SBCLKDIV_BDIV_SHIFT)
#  define PRCM_I2SBCLKDIV_BDIV(n)        (((uint32_t)(n) & 0x3ff) << PRCM_I2SBCLKDIV_BDIV_SHIFT)

/* WCLK Division Ratio */

#define PRCM_I2SWCLKDIV_WDIV_SHIFT       (0)      /* Bits 0-9: MCLK divider */
#define PRCM_I2SWCLKDIV_WDIV_MASK        (0x3ff << PRCM_I2SWCLKDIV_WDIV_SHIFT)
#  define PRCM_I2SWCLKDIV_WDIV(n)        ((uint32_t)(n) << PRCM_I2SWCLKDIV_WDIV_SHIFT)

/* RESET For SEC (PKA And TRNG And CRYPTO) And UDMA */

#define PRCM_RESETSECDMA_CRYPTO          (1 << 0)  /* Bit 0:  Reset Crypto */
#define PRCM_RESETSECDMA_TRNG            (1 << 1)  /* Bit 1:  Reset TRNG */
#define PRCM_RESETSECDMA_PKA             (1 << 2)  /* Bit 2:  Reset PKA */
#define PRCM_RESETSECDMA_DMA             (1 << 8)  /* Bit 8:  Reset DMA */

/* RESET For GPIO IPs */

#define PRCM_RESETGPIO_GPIO              (1 << 0)  /* Bit 0:  Reset GPIO */

/* RESET For GPT IPs */

#define PRCM_RESETGPT_GPT                (1 << 0)  /* Bit 0:  Reset GPT */

/* RESET For I2C IPs */

#define PRCM_RESETI2C_I2C                (1 << 0)  /* Bit 0:  Reset I2C */

/* RESET For UART IPs */

#define PRCM_RESETUART_UART0             (1 << 0)  /* Bit 0:  Reset UART0 */
#define PRCM_RESETUART_UART1             (1 << 1)  /* Bit 1:  Reset UART1 */

/* RESET For SSI IPs */

#define PRCM_RESETSSI_SSI0               (1 << 0)  /* Bit 0:  Reset SSI0 */
#define PRCM_RESETSSI_SSI1               (1 << 1)  /* Bit 1:  Reset SSI1 */

/* RESET For I2S IP */

#define PRCM_RESETI2S_I2S                (1 << 0)  /* Bit 0:  Reset I2S */

/* Power Domain Control */

#define PRCM_PDCTL0_RFC_ON               (1 << 0)  /* Bit 0:  RFC domain powered on */
#define PRCM_PDCTL0_SERIAL_ON            (1 << 1)  /* Bit 1:  SERIAL domain powered up */
#define PRCM_PDCTL0_PERIPH_ON            (1 << 2)  /* Bit 2:  PERIPH domain powered up */

/* RFC Power Domain Control */

#define PRCM_PDCTL0RFC_ON                (1 << 0)  /* Bit 0:  Alias for PDCTL0.RFC_ON */

/* SERIAL Power Domain Control */

#define PRCM_PDCTL0SERIAL_ON             (1 << 0)  /* Bit 0:  Alias for PDCTL0.SERIAL_ON */

/* PERIPH Power Domain Control */

#define PRCM_PDCTL0PERIPH_ON             (1 << 0)  /* Bit 0:  Alias for PDCTL0.PERIPH_ON */

/* Power Domain Status */

#define PRCM_PDSTAT0_RFC_ON              (1 << 0)  /* Bit 0:  RFC domain powered on */
#define PRCM_PDSTAT0_SERIAL_ON           (1 << 1)  /* Bit 1:  SERIAL domain powered up */
#define PRCM_PDSTAT0_PERIPH_ON           (1 << 2)  /* Bit 2:  PERIPH domain powered up */

/* RFC Power Domain Status */

#define PRCM_PDSTAT0RFC_ON               (1 << 0)  /* Bit 0:  Alias for PDSTAT0.RFC_ON */

/* SERIAL Power Domain Status */

#define PRCM_PDSTAT0SERIAL_ON            (1 << 0)  /* Bit 0:  Alias for PDSTAT0.SERIAL_ON */

/* PERIPH Power Domain Status */

#define PRCM_PDSTAT0PERIPH_ON            (1 << 0)  /* Bit 0:  Alias for PDSTAT0.PERIPH_ON */

/* Power Domain Control */

#define PRCM_PDCTL1_CPU_ON               (1 << 1)  /* Bit 1:  Initiate power-on CPU domain */
#define PRCM_PDCTL1_RFC_ON               (1 << 2)  /* Bit 2:  RFC power off if PDCTL.RFC_ON */
#define PRCM_PDCTL1_VIMS_MODE_SHIFT      (3)       /* Bits 3-4: VIMS mode */
#define PRCM_PDCTL1_VIMS_MODE_MASK       (3 << PRCM_PDCTL1_VIMS_MODE_SHIFT)
#  define PRCM_PDCTL1_VIMS_MODE_CPU      (0 << PRCM_PDCTL1_VIMS_MODE_SHIFT) /* When CPU domain powered */
#  define PRCM_PDCTL1_VIMS_MODE_BUS      (1 << PRCM_PDCTL1_VIMS_MODE_SHIFT) /* When BUS domain powered */
#  define PRCM_PDCTL1_VIMS_MODE_BLOCK    (2 << PRCM_PDCTL1_VIMS_MODE_SHIFT) /* Block on next wakeup */

/* CPU Power Domain Direct Control */

#define PRCM_PDCTL1CPU_ON                (1 << 0)  /* Bit 0:  Alias for PDCTL1.CPU_ON */

/* RFC Power Domain Direct Control */

#define PRCM_PDCTL1RFC_ON                (1 << 0)  /* Bit 0:  Alias for PDCTL1.RFC_ON */

/* VIMS Mode Direct Control */

#define PRCM_PDCTL1VIMS_ON               (1 << 0)  /* Bit 0:  Alias for PDCTL1.VIMS_ON */

/* Power Manager Status */

#define PRCM_PDSTAT1_CPU_ON              (1 << 1)  /* Bit 1:  CPU domain is accessible */
#define PRCM_PDSTAT1_RFC_ON              (1 << 2)  /* Bit 2:  RFC domain is accessible */
#define PRCM_PDSTAT1_VIMS_ON             (1 << 3)  /* Bit 3:  VIMS domain is accessible */
#define PRCM_PDSTAT1_BUS_ON              (1 << 4)  /* Bit 4:  BUS domain is accessible */

/* BUS Power Domain Direct Read Status */

#define PRCM_PDSTAT1BUS_ON               (1 << 0)  /* Bit 0:  Alias for PSTAT1.BUS_ON */

/* RFC Power Domain Direct Read Status */

#define PRCM_PDSTAT1RFC_ON               (1 << 0)  /* Bit 0:  Alias for PSTAT1.RFC_ON */

/* CPU Power Domain Direct Read Status */

#define PRCM_PDSTAT1CPU_ON               (1 << 0)  /* Bit 0:  Alias for PSTAT1.CPU_ON */

/* VIMS Mode Direct Read Status */

#define PRCM_PDSTAT1VIMS_ON              (1 << 0)  /* Bit 0:  Alias for PSTAT1.VIMS_ON */

/* Control To RFC (32-bits RFCBITS) */

/* Selected RFC Mode */

#define PRCM_RFCMODESEL_CURR_SHIFT       (0)       /* Bits 0-2:  Selects RFC command set */
#define PRCM_RFCMODESEL_CURR_MASK        (7 << PRCM_RFCMODESEL_CURR_SHIFT)
#  define PRCM_RFCMODESEL_CURR_MODE0     (0 << PRCM_RFCMODESEL_CURR_SHIFT)
#  define PRCM_RFCMODESEL_CURR_MODE1     (1 << PRCM_RFCMODESEL_CURR_SHIFT)
#  define PRCM_RFCMODESEL_CURR_MODE2     (2 << PRCM_RFCMODESEL_CURR_SHIFT)
#  define PRCM_RFCMODESEL_CURR_MODE3     (3 << PRCM_RFCMODESEL_CURR_SHIFT)
#  define PRCM_RFCMODESEL_CURR_MODE4     (4 << PRCM_RFCMODESEL_CURR_SHIFT)
#  define PRCM_RFCMODESEL_CURR_MODE5     (5 << PRCM_RFCMODESEL_CURR_SHIFT)
#  define PRCM_RFCMODESEL_CURR_MODE6     (6 << PRCM_RFCMODESEL_CURR_SHIFT)
#  define PRCM_RFCMODESEL_CURR_MODE7     (7 << PRCM_RFCMODESEL_CURR_SHIFT)

/* Allowed RFC Modes */

#define PRCM_RFCMODEHWOPT_CURR_SHIFT     (0)     /* Bits 0-2:  Permitted RFC modes */
#define PRCM_RFCMODEHWOPT_CURR_MASK      (7 << PRCM_RFCMODEHWOPT_CURR_SHIFT)
#  define PRCM_RFCMODEHWOPT_CURR_MODE0   (0 << PRCM_RFCMODEHWOPT_CURR_SHIFT)
#  define PRCM_RFCMODEHWOPT_CURR_MODE1   (1 << PRCM_RFCMODEHWOPT_CURR_SHIFT)
#  define PRCM_RFCMODEHWOPT_CURR_MODE2   (2 << PRCM_RFCMODEHWOPT_CURR_SHIFT)
#  define PRCM_RFCMODEHWOPT_CURR_MODE3   (3 << PRCM_RFCMODEHWOPT_CURR_SHIFT)
#  define PRCM_RFCMODEHWOPT_CURR_MODE4   (4 << PRCM_RFCMODEHWOPT_CURR_SHIFT)
#  define PRCM_RFCMODEHWOPT_CURR_MODE5   (5 << PRCM_RFCMODEHWOPT_CURR_SHIFT)
#  define PRCM_RFCMODEHWOPT_CURR_MODE6   (6 << PRCM_RFCMODEHWOPT_CURR_SHIFT)
#  define PRCM_RFCMODEHWOPT_CURR_MODE7   (7 << PRCM_RFCMODEHWOPT_CURR_SHIFT)

/* Power Profiler Register */

#define PRCM_PWRPROFSTAT_VALUE_SHIFT     (0)     /* Bits 0-7: Timestamp value */
#define PRCM_PWRPROFSTAT_VALUE_MASK      (0xff << PRCM_PWRPROFSTAT_VALUE_SHIFT)

/* MCU SRAM configuration */

#define PRCM_MCUSRAMCFG_PCHL             (1 << 0)  /* Bit 0:  1st half bitline precharge when BM=1 */
#define PRCM_MCUSRAMCFG_PCHF             (1 << 1)  /* Bit 1:  2nd half bitline precharge when BM=1 */
#define PRCM_MCUSRAMCFG_BM               (1 << 2)  /* Bit 2:  Burst mode enable */
#define PRCM_MCUSRAMCFG_PGS              (1 << 3)  /* Bit 3:  Select word MSB in page mode */
#define PRCM_MCUSRAMCFG_PAGE             (1 << 4)  /* Bit 4:  Page mode enable */
#define PRCM_MCUSRAMCFG_BMOFF            (1 << 5)  /* Bit 5:  Burst mode disable */

/* Memory Retention Control */

#define PRCM_RAMRETEN_VIMS_SHIFT         (0)       /* Bits 0-1: VIMS memory retention enabled */
#define PRCM_RAMRETEN_VIMS_MASK          (3 << PRCM_RAMRETEN_VIMS_SHIFT)
#  define PRCM_RAMRETEN_VIMS_TRAM        (1 << PRCM_RAMRETEN_VIMS_SHIFT)
#  define PRCM_RAMRETEN_VIMS_CRAM        (2 << PRCM_RAMRETEN_VIMS_SHIFT)
#define PRCM_RAMRETEN_RFC                (1 << 2)  /* Bit 2:  RFC SRAM retention enabled */
#define PRCM_RAMRETEN_RFCULL             (1 << 3)  /* Bit 3:  RFC ULL SRAM retention enabled */

/* Oscillator Interrupt Mask, Oscillator Raw Interrupt Status, and
 * Oscillator Raw Interrupt Clear
 */

#define PRCM_OSCINT_RCOSCHF              (1 << 0)  /* Bit 0:  RCOSCHF interrupt */
#define PRCM_OSCINT_XOSCHF               (1 << 1)  /* Bit 1:  XOSCHF interrupt */
#define PRCM_OSCINT_RCOSCLF              (1 << 2)  /* Bit 2:  RCOSCLF interrupt */
#define PRCM_OSCINT_RCOSCDLF             (1 << 3)  /* Bit 3:  RCOSCDLF interrupt */
#define PRCM_OSCINT_XOSCLF               (1 << 4)  /* Bit 4:  XOSCLF interrupt */
#define PRCM_OSCINT_XOSCDLF              (1 << 5)  /* Bit 5:  XOSCDLF interrupt */
#define PRCM_OSCINT_LFSRCDONE            (1 << 6)  /* Bit 6:  LFSRCDONE interrupt */
#define PRCM_OSCINT_HFSRCPEND            (1 << 7)  /* Bit 7:  HFSRCPEND interrupt  */

/****************************************************************************
 * Public Types
 ****************************************************************************/

/****************************************************************************
 * Public Data
 ****************************************************************************/

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

#endif /* __ARCH_ARM_SRC_TIVA_HARDWARE_CC13X2_CC26X2_CC13X2_CC26X2_PRCM_H */
