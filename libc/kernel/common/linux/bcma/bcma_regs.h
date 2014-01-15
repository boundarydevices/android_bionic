/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef LINUX_BCMA_REGS_H_
#define LINUX_BCMA_REGS_H_
#define BCMA_CLKCTLST 0x01E0
#define BCMA_CLKCTLST_FORCEALP 0x00000001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BCMA_CLKCTLST_FORCEHT 0x00000002
#define BCMA_CLKCTLST_FORCEILP 0x00000004
#define BCMA_CLKCTLST_HAVEALPREQ 0x00000008
#define BCMA_CLKCTLST_HAVEHTREQ 0x00000010
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BCMA_CLKCTLST_HWCROFF 0x00000020
#define BCMA_CLKCTLST_EXTRESREQ 0x00000700
#define BCMA_CLKCTLST_EXTRESREQ_SHIFT 8
#define BCMA_CLKCTLST_HAVEALP 0x00010000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BCMA_CLKCTLST_HAVEHT 0x00020000
#define BCMA_CLKCTLST_BP_ON_ALP 0x00040000
#define BCMA_CLKCTLST_BP_ON_HT 0x00080000
#define BCMA_CLKCTLST_EXTRESST 0x07000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BCMA_CLKCTLST_EXTRESST_SHIFT 24
#define BCMA_CLKCTLST_4328A0_HAVEHT 0x00010000
#define BCMA_CLKCTLST_4328A0_HAVEALP 0x00020000
#define BCMA_IOCTL 0x0408
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BCMA_IOCTL_CLK 0x0001
#define BCMA_IOCTL_FGC 0x0002
#define BCMA_IOCTL_CORE_BITS 0x3FFC
#define BCMA_IOCTL_PME_EN 0x4000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BCMA_IOCTL_BIST_EN 0x8000
#define BCMA_IOST 0x0500
#define BCMA_IOST_CORE_BITS 0x0FFF
#define BCMA_IOST_DMA64 0x1000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BCMA_IOST_GATED_CLK 0x2000
#define BCMA_IOST_BIST_ERROR 0x4000
#define BCMA_IOST_BIST_DONE 0x8000
#define BCMA_RESET_CTL 0x0800
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BCMA_RESET_CTL_RESET 0x0001
#define BCMA_RESET_ST 0x0804
#define BCMA_PCI_PMCSR 0x44
#define BCMA_PCI_PE 0x100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BCMA_PCI_BAR0_WIN 0x80
#define BCMA_PCI_BAR1_WIN 0x84
#define BCMA_PCI_SPROMCTL 0x88
#define BCMA_PCI_SPROMCTL_WE 0x10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BCMA_PCI_BAR1_CONTROL 0x8c
#define BCMA_PCI_IRQS 0x90
#define BCMA_PCI_IRQMASK 0x94
#define BCMA_PCI_BACKPLANE_IRQS 0x98
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BCMA_PCI_BAR0_WIN2 0xAC
#define BCMA_PCI_GPIO_IN 0xB0
#define BCMA_PCI_GPIO_OUT 0xB4
#define BCMA_PCI_GPIO_OUT_ENABLE 0xB8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BCMA_PCI_GPIO_SCS 0x10
#define BCMA_PCI_GPIO_HWRAD 0x20
#define BCMA_PCI_GPIO_XTAL 0x40
#define BCMA_PCI_GPIO_PLL 0x80
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BCMA_SOC_SDRAM_BASE 0x00000000U
#define BCMA_SOC_PCI_MEM 0x08000000U
#define BCMA_SOC_PCI_MEM_SZ (64 * 1024 * 1024)
#define BCMA_SOC_PCI_CFG 0x0c000000U
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BCMA_SOC_SDRAM_SWAPPED 0x10000000U
#define BCMA_SOC_SDRAM_R2 0x80000000U
#define BCMA_SOC_PCI_DMA 0x40000000U
#define BCMA_SOC_PCI_DMA2 0x80000000U
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BCMA_SOC_PCI_DMA_SZ 0x40000000U
#define BCMA_SOC_PCIE_DMA_L32 0x00000000U
#define BCMA_SOC_PCIE_DMA_H32 0x80000000U
#define BCMA_SOC_PCI1_MEM 0x40000000U
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BCMA_SOC_PCI1_CFG 0x44000000U
#define BCMA_SOC_PCIE1_DMA_H32 0xc0000000U
#define BCMA_SOC_FLASH1 0x1fc00000
#define BCMA_SOC_FLASH1_SZ 0x00400000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BCMA_SOC_FLASH2 0x1c000000
#define BCMA_SOC_FLASH2_SZ 0x02000000
#endif
