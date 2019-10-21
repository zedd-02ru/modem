/*****************************************************************************
 *
 * Filename:
 * ---------
 *   cs_sram_ctrl_mpc_defs.h
 *
 * Project:
 * --------
 *   R11GX Project depend on makefile configuration
 *
 * Description:
 * ------------
 *   History for each file.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by Perforce. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by Perforce. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*
**********************************************************************************************************************************************************
*[File         ]       cs_sram_ctrl_mpc_defs.h
*[Version      ]       v1.0
*[Revision Date]       2014-12-23
*[Author       ]       Boky Chen
*[Description  ]
*    The program is for sram control header file.
*
*[Copyright]
*    Copyright (C) 2005 MediaTek Incorporation. All Rights Reserved.
**********************************************************************************************************************************************************
*/

#ifndef __CS_SRAM_CTRL_MPC_DEFS_H__
#define __CS_SRAM_CTRL_MPC_DEFS_H__

#include "reg_base.h"

#if defined(TK6291)

    #define CS_SRAM_CTRL_MPC_CTRL_0     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+0)
    #define CS_SRAM_CTRL_MPC_CTRL_1     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+4)
    #define CS_SRAM_CTRL_MPC_CTRL_2     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+8)
    #define CS_SRAM_CTRL_MPC_CTRL_3     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+12)
    #define CS_SRAM_CTRL_MPC_CTRL_4     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+16)
    #define CS_SRAM_CTRL_MPC_CTRL_5     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+20)
    #define CS_SRAM_CTRL_MPC_CTRL_6     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+24)
    #define CS_SRAM_CTRL_MPC_CTRL_7     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+28)
    #define CS_SRAM_CTRL_MPC_CTRL_8     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+32)
    #define CS_SRAM_CTRL_MPC_CTRL_9     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+36)
    #define CS_SRAM_CTRL_MPC_INFO_0     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+40)
    #define CS_SRAM_CTRL_MPC_INFO_1     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+44)
    #define CS_SRAM_CTRL_MPC_INFO_2     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+48)
    #define CS_SRAM_CTRL_MPC_INFO_3     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+52)
    #define CS_SRAM_CTRL_MPC_INFO_4     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+56)
    #define CS_SRAM_CTRL_MPC_INFO_5     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+60)
    #define CS_SRAM_CTRL_MPC_INFO_6     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+64)
    #define CS_SRAM_CTRL_MPC_DELSEL_0   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+68)
    #define CS_SRAM_CTRL_MPC_DELSEL_1   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+72)
    #define CS_SRAM_CTRL_MPC_DELSEL_2   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+76)
    #define CS_SRAM_CTRL_MPC_DELSEL_3   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+80)
    #define CS_SRAM_CTRL_MPC_DELSEL_4   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+84)
    #define CS_SRAM_CTRL_MPC_DELSEL_5   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+88)
    #define CS_SRAM_CTRL_MPC_DELSEL_6   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+92)
    #define CS_SRAM_CTRL_MPC_DELSEL_7   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+96)
    #define CS_SRAM_CTRL_MPC_FUSE_0     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+100)
    #define CS_SRAM_CTRL_MPC_FUSE_1     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+104)
    #define CS_SRAM_CTRL_MPC_FUSE_2     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+108)
    #define CS_SRAM_CTRL_MPC_FUSE_3     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+112)
    #define CS_SRAM_CTRL_MPC_FUSE_4     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+116)
    #define CS_SRAM_CTRL_MPC_FUSE_5     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+120)
    #define CS_SRAM_CTRL_MPC_STATUS_0   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+124)
    #define CS_SRAM_CTRL_MPC_RD_CFG_0   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+128)
    #define CS_SRAM_CTRL_MPC_RD_CFG_1   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+132)
    #define CS_SRAM_CTRL_MPC_RD_CFG_2   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+136)
    #define CS_SRAM_CTRL_MPC_RD_CFG_3   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+140)
    #define CS_SRAM_CTRL_MPC_RD_CFG_4   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+144)
    #define CS_SRAM_CTRL_MPC_RD_CFG_5   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+148)
    #define CS_SRAM_CTRL_MPC_RD_CFG_6   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+152)
    #define CS_SRAM_CTRL_MPC_EIRQ_EN    (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+156)
    #define CS_SRAM_CTRL_MPC_EIRQ_STS   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+160)
#elif defined(MT6755) || defined(MT6797) || defined(MT6750) || defined(MT6757) || defined(MT6750S)

    #define CS_SRAM_CTRL_MPC_CTRL_0     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+0)
    #define CS_SRAM_CTRL_MPC_CTRL_1     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+4)
    #define CS_SRAM_CTRL_MPC_CTRL_2     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+8)
    #define CS_SRAM_CTRL_MPC_CTRL_3     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+12)
    #define CS_SRAM_CTRL_MPC_CTRL_4     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+16)
    #define CS_SRAM_CTRL_MPC_CTRL_5     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+20)
    #define CS_SRAM_CTRL_MPC_CTRL_6     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+24)
    #define CS_SRAM_CTRL_MPC_CTRL_7     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+28)
    #define CS_SRAM_CTRL_MPC_CTRL_8     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+32)
    #define CS_SRAM_CTRL_MPC_CTRL_9     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+36)
    #define CS_SRAM_CTRL_MPC_INFO_0     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+40)
    #define CS_SRAM_CTRL_MPC_INFO_1     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+44)
    #define CS_SRAM_CTRL_MPC_INFO_2     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+48)
    #define CS_SRAM_CTRL_MPC_INFO_3     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+52)
    #define CS_SRAM_CTRL_MPC_INFO_4     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+56)
    #define CS_SRAM_CTRL_MPC_INFO_5     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+60)
    #define CS_SRAM_CTRL_MPC_INFO_6     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+64)
    #define CS_SRAM_CTRL_MPC_DELSEL_0   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+68)
    #define CS_SRAM_CTRL_MPC_DELSEL_1   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+72)
    #define CS_SRAM_CTRL_MPC_DELSEL_2   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+76)
    #define CS_SRAM_CTRL_MPC_DELSEL_3   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+80)
    #define CS_SRAM_CTRL_MPC_DELSEL_4   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+84)
    #define CS_SRAM_CTRL_MPC_DELSEL_5   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+88)
    #define CS_SRAM_CTRL_MPC_DELSEL_6   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+92)
    #define CS_SRAM_CTRL_MPC_DELSEL_7   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+96)
    #define CS_SRAM_CTRL_MPC_FUSE_CTRL_0     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+100)
    #define CS_SRAM_CTRL_MPC_FUSE_CTRL_1     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+104)
    #define CS_SRAM_CTRL_MPC_FUSE_CTRL_2     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+108)
    #define CS_SRAM_CTRL_MPC_FUSE_0     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+112)
    #define CS_SRAM_CTRL_MPC_FUSE_1     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+116)
    #define CS_SRAM_CTRL_MPC_FUSE_2     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+120)
    #define CS_SRAM_CTRL_MPC_FUSE_3     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+124)
    #define CS_SRAM_CTRL_MPC_FUSE_4     (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+128)
    #define CS_SRAM_CTRL_MPC_STATUS_0   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+132)
    #define CS_SRAM_CTRL_MPC_RD_CFG_0   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+136)
    #define CS_SRAM_CTRL_MPC_RD_CFG_1   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+140)
    #define CS_SRAM_CTRL_MPC_RD_CFG_2   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+144)
    #define CS_SRAM_CTRL_MPC_RD_CFG_3   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+148)
    #define CS_SRAM_CTRL_MPC_RD_CFG_4   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+152)
    #define CS_SRAM_CTRL_MPC_RD_CFG_5   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+156)
    #define CS_SRAM_CTRL_MPC_RD_CFG_6   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+160)
    #define CS_SRAM_CTRL_MPC_EIRQ_EN    (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+164)
    #define CS_SRAM_CTRL_MPC_EIRQ_STS   (L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG+168)
#else
    #error "unknown chip option!!!"
#endif

#endif  //__CS_SRAM_CTRL_MPC_DEFS_H__
