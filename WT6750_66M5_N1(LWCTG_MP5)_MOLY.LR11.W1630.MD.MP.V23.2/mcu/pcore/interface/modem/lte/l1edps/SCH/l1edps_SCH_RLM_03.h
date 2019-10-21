/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *  l1edps_SCH_RLM_03.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *  Parameters define value between SS and UE
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 05 04 2015 david.tang
 * [MOLY00109013] [MT6291][E1EVB][EL1S] Update l1edps files from CBr
 * .[l1edps] update l1edps from cbr - evb.v3
 *
 * 08 16 2013 vend_david.tang
 * [MOLY00032458] [MT6290E1][EL1S][L1EDPS COMMON] Refine L1S test procedure - 3
 * Update L1S from DEV branch.
 *
 * 07 22 2013 vend_david.tang
 * [MOLY00030358] [MT6290E1][EL1S][L1EDPS COMMON] Refine L1S test procedure - 2
 * modify L1S RLM header files.
 *
 * 06 26 2013 vend_david.tang
 * [MOLY00025363] [MT6290E1][L1EDPS COMMON] Refine L1S test procedure
 * . Modify L1S TC SCH_RLM_03 header files.
 *
 * 11 05 2012 jerry.ho
 * [MOLY00005322] TATAKA merge to MOLY
 * add LTE l1edps common header files
 ****************************************************************************/



#ifndef _L1SS_SCH_RLM_03_H
#define _L1SS_SCH_RLM_03_H

#include "l1edps_common_parameters.h"

//#undef PHYS_CELL_ID_BTS1
#undef SIB2_UL_BANDWIDTH_BTS1
#undef MIB_DL_BANDWIDTH_BTS1
#undef DL_EARFCN_BTS1
#undef CFI_VALUE_BTS1
#undef SIB2_N310_BTS1
#undef SIB2_N311_BTS1
#undef SIB2_T310_BTS1
#undef SIB2_T311_BTS1

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

//#define PHYS_CELL_ID_BTS1 0
#define SIB2_UL_BANDWIDTH_BTS1 BW_50_RB
#define MIB_DL_BANDWIDTH_BTS1 BW_50_RB
#define DL_EARFCN_BTS1 300
#define CFI_VALUE_BTS1 2
#define SIB2_N310_BTS1 N310_n1
#define SIB2_N311_BTS1 N311_n1
#define SIB2_T310_BTS1 T310_ms2000
#define SIB2_T311_BTS1 T311_ms1000

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#endif







