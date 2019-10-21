/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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
*******************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *    c2k_rsva_enums.h
 *
 * Project:
 * --------
 *    SRLTE
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 ******************************************************************************/
#ifndef _C2K_RSVA_ENUMS_H_
#define _C2K_RSVA_ENUMS_H_


// #ifdef __CDMA2000_RAT__

/*----------------------------------------------------------------------------*/
/*                             MD3 CSS <--> MD1 RSVAC                         */
/*----------------------------------------------------------------------------*/

typedef enum {
    CSS_FREQ_SCAN_FINISHED,
    CSS_FREQ_SCAN_PREEMPTED
}css_freq_scan_stop_cause_enum;

typedef enum {
    CSS_E911_CALL,
    CSS_USER_TRIGGER_SEARCH,
    CSS_ORDINARY_SEARCH,
    CSS_FREQ_SCAN_NULL
}css_freq_scan_type_enum;


/*----------------------------------------------------------------------------*/
/*                              MD3 PSW <--> MD1 RSVAS                        */
/*----------------------------------------------------------------------------*/
typedef enum {
    RSVAS_ID_NONE     = 0x00FFFFFF
        
    ,RSVAS_ID_SIM1_GAS   = 0x010000FF
    ,RSVAS_ID_SIM1_UAS   = 0x020001FF
    ,RSVAS_ID_SIM1_EAS   = 0x030002FF
    ,RSVAS_ID_SIM1_EVDO  = 0x040003FF
    ,RSVAS_ID_SIM1_1XRTT = 0x050004FF
    ,RSVAS_ID_SIM1_NAS   = 0x0600FF01
    ,RSVAS_ID_SIM1_L4C   = 0x0700FF02

    ,RSVAS_ID_SIM2_GAS   = 0x080100FF
    ,RSVAS_ID_SIM2_UAS   = 0x090101FF
    ,RSVAS_ID_SIM2_EAS   = 0x0A0102FF
    ,RSVAS_ID_SIM2_EVDO  = 0x0B0103FF
    ,RSVAS_ID_SIM2_1XRTT = 0x0C0104FF
    ,RSVAS_ID_SIM2_NAS   = 0x0D01FF01
    ,RSVAS_ID_SIM2_L4C   = 0x0E01FF02

    ,RSVAS_ID_SIM3_GAS   = 0x0F0200FF
    ,RSVAS_ID_SIM3_UAS   = 0x100201FF
    ,RSVAS_ID_SIM3_EAS   = 0x110202FF
    ,RSVAS_ID_SIM3_EVDO  = 0x120203FF
    ,RSVAS_ID_SIM3_1XRTT = 0x130204FF
    ,RSVAS_ID_SIM3_NAS   = 0x1402FF01
    ,RSVAS_ID_SIM3_L4C   = 0x1502FF02

    ,RSVAS_ID_SIM4_GAS   = 0x160300FF
    ,RSVAS_ID_SIM4_UAS   = 0x170301FF
    ,RSVAS_ID_SIM4_EAS   = 0x180302FF
    ,RSVAS_ID_SIM4_EVDO  = 0x190303FF
    ,RSVAS_ID_SIM4_1XRTT = 0x1A0304FF
    ,RSVAS_ID_SIM4_NAS   = 0x1B03FF01
    ,RSVAS_ID_SIM4_L4C   = 0x1C03FF02

} rsvas_id_enum;

typedef enum
{
    RSVAS_SERVICE_TYPE_NONE           = 0x0000FFFF
    ,RSVAS_SERVICE_TYPE_UNSPECIFIED   = 0x0001FFFF
#if defined(__MONITOR_PEER_PAGING_IN_CELL_PCH__)
    ,RSVAS_SERVICE_TYPE_KEEP          = 0x0002FFFF
#endif /* __MONITOR_PEER_PAGING_IN_CELL_PCH__ */

    ,RSVAS_SERVICE_TYPE_CS            = 0x00000101
    ,RSVAS_SERVICE_TYPE_PS            = 0x00000202
    ,RSVAS_SERVICE_TYPE_AS            = 0x00000404
    ,RSVAS_SERVICE_TYPE_HPS           = 0x00000808

    //For MO/MT, EMM notify EAS to do CSFB, CS+PS service may be occupied at the same time
    ,RSVAS_SERVICE_TYPE_CS_PS         = (RSVAS_SERVICE_TYPE_CS|RSVAS_SERVICE_TYPE_PS)
    ,RSVAS_SERVICE_TYPE_CS_HPS        = (RSVAS_SERVICE_TYPE_CS|RSVAS_SERVICE_TYPE_HPS)
    ,RSVAS_SERVICE_TYPE_PS_HPS        = (RSVAS_SERVICE_TYPE_PS|RSVAS_SERVICE_TYPE_HPS)
    ,RSVAS_SERVICE_TYPE_CS_PS_HPS     = (RSVAS_SERVICE_TYPE_CS|RSVAS_SERVICE_TYPE_PS|RSVAS_SERVICE_TYPE_HPS)
    
    ,RSVAS_SERVICE_TYPE_CS_ALL        = 0x000001AA
    ,RSVAS_SERVICE_TYPE_PS_ALL        = 0x000002AA
    ,RSVAS_SERVICE_TYPE_AS_ALL        = 0x000004AA
    ,RSVAS_SERVICE_TYPE_HPS_ALL       = 0x000008AA

    ,RSVAS_SERVICE_TYPE_CS_PS_ALL     = (RSVAS_SERVICE_TYPE_CS_ALL|RSVAS_SERVICE_TYPE_PS_ALL)
    ,RSVAS_SERVICE_TYPE_CS_HPS_ALL    = (RSVAS_SERVICE_TYPE_CS_ALL|RSVAS_SERVICE_TYPE_HPS_ALL)
    ,RSVAS_SERVICE_TYPE_PS_HPS_ALL    = (RSVAS_SERVICE_TYPE_PS_ALL|RSVAS_SERVICE_TYPE_HPS_ALL)
    ,RSVAS_SERVICE_TYPE_CS_PS_HPS_ALL = (RSVAS_SERVICE_TYPE_CS_ALL|RSVAS_SERVICE_TYPE_PS_ALL|RSVAS_SERVICE_TYPE_HPS_ALL)
    ,RSVAS_SERVICE_TYPE_CS_PS_AS_ALL  = (RSVAS_SERVICE_TYPE_CS_ALL|RSVAS_SERVICE_TYPE_PS_ALL|RSVAS_SERVICE_TYPE_AS_ALL)
    ,RSVAS_SERVICE_TYPE_CS_PS_HPS_AS_ALL  = (RSVAS_SERVICE_TYPE_CS_ALL|RSVAS_SERVICE_TYPE_PS_ALL|RSVAS_SERVICE_TYPE_HPS_ALL|RSVAS_SERVICE_TYPE_AS_ALL)

} rsvas_service_type_enum;

typedef enum {
    RSVAS_SIM1  = 0
    ,RSVAS_SIM2 = 1
    ,RSVAS_SIM3 = 2
    ,RSVAS_SIM4 = 3
} rsvas_sim_enum;

typedef enum
{
    CAS_RSVAS_REQUEST_NORMAL                = 0
    ,CAS_SRLTE_ENHANCEMENT                  = 6
    ,CAS_SRLTE_ENHANCEMENT_TOLERENT         = 7 /* not used */
} cas_rsvas_request_type_enum;

// #endif /* __CDMA2000_RAT__ */

#endif /* _C2K_RSVA_ENUMS_H_ */
