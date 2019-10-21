/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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

/*****************************************************************************
 *
 * Filename:
 * ---------
 * u1ld_custom_rf.c
 *
 * Project:
 * --------
 * TK6291
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *

===============================================================================*/
#include "ul1d_rf_public.h"
#include "ul1d_custom_rf.h"
#include "ul1d_custom_rf_ca.h"


UMTS_FE_ROUTE_TABLE_T UMTS_FE_ROUTE_TBL_SetDefault[UMTS_RF_FRONT_END_NUM_MAX] =
{
   /* Single Band FE Route Table */
   UMTS_SB_FE_SETTING(RX_BAND_INDICATOR_0, SetDefault),
   UMTS_SB_FE_SETTING(RX_BAND_INDICATOR_1, SetDefault),
   UMTS_SB_FE_SETTING(RX_BAND_INDICATOR_2, SetDefault),
   UMTS_SB_FE_SETTING(RX_BAND_INDICATOR_3, SetDefault),
   UMTS_SB_FE_SETTING(RX_BAND_INDICATOR_4, SetDefault),

   /* CA Band FE Route Table*/
   UMTS_CA_FE_SETTING(RX_CABAND_IND_00, SetDefault),
   UMTS_CA_FE_SETTING(RX_CABAND_IND_01, SetDefault),
   UMTS_CA_FE_SETTING(RX_CABAND_IND_02, SetDefault),
   UMTS_CA_FE_SETTING(RX_CABAND_IND_03, SetDefault),
   UMTS_CA_FE_SETTING(RX_CABAND_IND_04, SetDefault)};


/////////////////////////////////////////////


