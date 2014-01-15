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
#ifndef __LINUX_MTD_NDFC_H
#define __LINUX_MTD_NDFC_H
#define NDFC_CMD 0x00
#define NDFC_ALE 0x04
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NDFC_DATA 0x08
#define NDFC_ECC 0x10
#define NDFC_BCFG0 0x30
#define NDFC_BCFG1 0x34
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NDFC_BCFG2 0x38
#define NDFC_BCFG3 0x3c
#define NDFC_CCR 0x40
#define NDFC_STAT 0x44
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NDFC_HWCTL 0x48
#define NDFC_REVID 0x50
#define NDFC_STAT_IS_READY 0x01000000
#define NDFC_CCR_RESET_CE 0x80000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NDFC_CCR_RESET_ECC 0x40000000
#define NDFC_CCR_RIE 0x20000000
#define NDFC_CCR_REN 0x10000000
#define NDFC_CCR_ROMEN 0x08000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NDFC_CCR_ARE 0x04000000
#define NDFC_CCR_BS(x) (((x) & 0x3) << 24)
#define NDFC_CCR_BS_MASK 0x03000000
#define NDFC_CCR_ARAC0 0x00000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NDFC_CCR_ARAC1 0x00001000
#define NDFC_CCR_ARAC2 0x00002000
#define NDFC_CCR_ARAC3 0x00003000
#define NDFC_CCR_ARAC_MASK 0x00003000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NDFC_CCR_RPG 0x0000C000
#define NDFC_CCR_EBCC 0x00000004
#define NDFC_CCR_DHC 0x00000002
#define NDFC_BxCFG_EN 0x80000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NDFC_BxCFG_CED 0x40000000
#define NDFC_BxCFG_SZ_MASK 0x08000000
#define NDFC_BxCFG_SZ_8BIT 0x00000000
#define NDFC_BxCFG_SZ_16BIT 0x08000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NDFC_MAX_BANKS 4
struct ndfc_controller_settings {
 uint32_t ccr_settings;
 uint64_t ndfc_erpn;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ndfc_chip_settings {
 uint32_t bank_settings;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
