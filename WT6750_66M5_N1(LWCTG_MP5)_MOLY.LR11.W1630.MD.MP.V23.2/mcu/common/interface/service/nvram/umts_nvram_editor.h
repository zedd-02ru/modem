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
 * 
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __UMTS_NVRAM_EDITOR_H__
#define __UMTS_NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "nvram_common.h"
#include "umts_nvram_def.h"
//#include "nas_nvram_editor.h"

#if (defined(__3G_CSG_SUPPORT__) || defined(__LTE_RAT__))

#define NVRAM_EF_UMTS_CSG_FINGERPRINT_ENTRY_MAX_NUM 8
#define NVRAM_EF_UMTS_CSG_FINGERPRINT_FREQ_MAX_NUM 4
#define NVRAM_EF_UMTS_CSG_FINGERPRINT_CELL_MAX_NUM 32 /* 4 freq * 32 cell = 128 records */

typedef struct
{
    kal_uint16  frequency;
    kal_uint8   num_cell;
    kal_uint16  physical_cell_id[NVRAM_EF_UMTS_CSG_FINGERPRINT_CELL_MAX_NUM];
    kal_uint32  cell_id[NVRAM_EF_UMTS_CSG_FINGERPRINT_CELL_MAX_NUM];
}nvram_ef_umts_fingerprint_CSG_recored_struct;

typedef struct
{
    kal_uint8                       ratmode;
    nvram_plmn_id_struct            csg_plmn;
    kal_uint32                      csg_id;
    kal_uint32                      csg_cell_id;
    kal_uint32                      csg_frequency;
    kal_uint16                      csg_physical_cell_id;
    
    kal_uint32                      timestamp;
    kal_bool                        isUpdateRequired;
    
    kal_uint8                       num_freq;
    nvram_ef_umts_fingerprint_CSG_recored_struct record[NVRAM_EF_UMTS_CSG_FINGERPRINT_FREQ_MAX_NUM];
}nvram_ef_umts_fingerprint_CSG_cell_struct;

typedef struct
{
    kal_uint8 num_record;
    nvram_ef_umts_fingerprint_CSG_cell_struct  CSG_phy_cell[NVRAM_EF_UMTS_CSG_FINGERPRINT_ENTRY_MAX_NUM];
}nvram_ef_umts_fingerprint_entry_struct;
#endif


#ifdef __UMTS_RAT__
	#if defined(__UMTS_FDD_MODE__) && defined(__UMTS_R7__)
	typedef struct
	{
	    nvram_plmn_id_struct disable_PLMN[NVRAM_MAX_UMTS_DMCR_DISABLE_PLMN_NUM];    
	} nvram_ef_umts_dmcr_setting_struct;
	
	typedef struct
	{
	    nvram_plmn_id_struct enable_PLMN[NVRAM_MAX_UMTS_SIB_SKIP_ENABLE_PLMN_NUM];
	} nvram_ef_umts_sib_skip_setting_struct;
	#endif /* __UMTS_FDD_MODE__ && __UMTS_R7__ */
#endif


#if defined(__UMTS_RAT__) && defined(__UMTS_FDD_MODE__) && defined(__UMTS_R7__)
#define NVRAM_EF_UMTS_DMCR_SETTING_LID_VERNO                 "000"
#define NVRAM_EF_UMTS_SIB_SKIP_SETTING_LID_VERNO             "000"
#endif /* __UMTS_RAT__ && __UMTS_FDD_MODE__ && __UMTS_R7__ */

//#ifdef __BAND_PRIORITY_SEARCH__
#if defined(__UMTS_RAT__) && defined(__UMTS_FDD_MODE__)
#define NVRAM_EF_UMTS_BAND_PRIORITY_LID_VERNO                "000"
#endif /* __UMTS_RAT__ && __UMTS_FDD_MODE_ */
//#endif /* __BAND_PRIORITY_SEARCH__ */

#define NVRAM_EF_UMTS_IMSI_LID_VERNO                         "000"
#define NVRAM_EF_UMTS_PLMN_LID_VERNO                         "000"
#define NVRAM_EF_UMTS_START_HFN_FDD_LID_VERNO                    "000"
#define NVRAM_EF_UMTS_START_HFN_TDD_LID_VERNO                    "000"
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID_VERNO        "019"
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_LID_VERNO        "019"
#define NVRAM_EF_UMTS_FREQUENCY_REPOSITORY_LID_VERNO         "005"
#define NVRAM_EF_UMTS_URR_CONFIGURATION_LID_VERNO            "001"

#if (defined(__3G_CSG_SUPPORT__) || defined(__LTE_RAT__))
#define NVRAM_EF_UMTS_FINGERPRINT_INFO_LID_VERNO             "000"
#endif




#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA

 #ifndef __L1_STANDALONE__

#ifdef __UMTS_RAT__
/* currently useless
LID_BIT VER_LID(NVRAM_EF_UMTS_PLMN_LID) nvram_ef_umts_plmn_struct * NVRAM_EF_UMTS_PLMN_TOTAL{};
*/
LID_BIT VER_LID(NVRAM_EF_UMTS_IMSI_LID) nvram_ef_umts_imsi_struct * NVRAM_EF_UMTS_IMSI_TOTAL{};
LID_BIT VER_LID(NVRAM_EF_UMTS_START_HFN_FDD_LID) nvram_ef_umts_start_hfn_fdd_struct * NVRAM_EF_UMTS_START_HFN_FDD_TOTAL{};
LID_BIT VER_LID(NVRAM_EF_UMTS_START_HFN_TDD_LID) nvram_ef_umts_start_hfn_tdd_struct * NVRAM_EF_UMTS_START_HFN_TDD_TOTAL{};
LID_BIT VER_LID(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID) nvram_ef_umts_usime_rrc_dynamic_fdd_struct * NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_TOTAL{};
LID_BIT VER_LID(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_LID) nvram_ef_umts_usime_rrc_dynamic_tdd_struct * NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_TOTAL{};
LID_BIT VER_LID(NVRAM_EF_UMTS_FREQUENCY_REPOSITORY_LID) nvram_ef_umts_frequency_repository_struct * NVRAM_EF_UMTS_FREQUENCY_REPOSITORY_TOTAL{};

//#if defined(__UMTS_TDD128_MODE__) && defined(__UMTS_R7__)
#if (defined(__UMTS_TDD128_MODE__) && defined(__UMTS_R7__)) || (defined(__SEARCH_ALL_EHPLMN_TOGETHER__))
LID_BIT VER_LID(NVRAM_EF_UMTS_URR_CONFIGURATION_LID) nvram_ef_umts_urr_configuration_struct * NVRAM_EF_UMTS_URR_CONFIGURATION_TOTAL{};
#endif

#if defined(__UMTS_FDD_MODE__) && defined(__UMTS_R7__)
LID_BIT VER_LID(NVRAM_EF_UMTS_DMCR_SETTING_LID) nvram_ef_umts_dmcr_setting_struct * NVRAM_EF_UMTS_DMCR_SETTING_TOTAL{};
LID_BIT VER_LID(NVRAM_EF_UMTS_SIB_SKIP_SETTING_LID) nvram_ef_umts_sib_skip_setting_struct * NVRAM_EF_UMTS_SIB_SKIP_SETTING_TOTAL{};
#endif /* __UMTS_FDD_MODE__ && __UMTS_R7__ */

#endif /* __UMTS_RAT__ */

#if (defined(__3G_CSG_SUPPORT__) || defined(__LTE_RAT__))
LID_BIT VER_LID(NVRAM_EF_UMTS_FINGERPRINT_INFO_LID) nvram_ef_umts_fingerprint_entry_struct * NVRAM_EF_UMTS_FINGERPRINT_INFO_TOTAL{};
#endif

//#ifdef __BAND_PRIORITY_SEARCH__
#if defined(__UMTS_RAT__) && defined(__UMTS_FDD_MODE__)
LID_BIT VER_LID(NVRAM_EF_UMTS_BAND_PRIORITY_LID) nvram_ef_umts_band_priority_struct * NVRAM_EF_UMTS_BAND_PRIORITY_TOTAL{};
#endif /* __UMTS_RAT__ && __UMTS_FDD_MODE_ */
//#endif /* __BAND_PRIORITY_SEARCH__ */

#endif /* __L1_STANDALONE__ */


END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __UMTS_NVRAM_EDITOR_H__ */
