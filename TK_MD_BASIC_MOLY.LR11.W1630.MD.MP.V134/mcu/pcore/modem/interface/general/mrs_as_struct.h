/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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
 *   mrs_as_struct.h
 *
 * Project:
 * --------
 *   Multimode
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 * ----------------------------------------------------------------------------
 * $Log:$
 *
 * 01 08 2016 wenlong.an
 * [MOLY00153524] [6291] Vivo BlackList feature
 * vivo black cell list - tdd csce part
 *
 * 12 22 2015 morton.lin
 * [MOLY00153975] [MT6755][L+W][Overnight][FDD][HK][LAT2] CU SIM can not camp on 4G NW in 234G mode, but LTE only can  camp on 4G
 * [MRS] Reduce LTE support bands for legacy network interoperability issue (merge back)
 *
 * 12 10 2015 tim.huang
 * [MOLY00150157] VZ_REQ_LTEDATA_38498 (MT6291 Verizon Jun-2015 baseline)
 * .
 *
 * 09 18 2015 ming.lee
 * [MOLY00140707] [GAS][PLMN search enhancement II] Search info reuse
 * .
 *
 * 09 04 2015 roland.li
 * [MOLY00139861] [MT6291][SBM] New Feature : Disable LTE B41 for roaming out side of Japan.
 * [MRS] code sync MOLY00127446.
 *
 * 07 14 2015 bruce.li
 * [MOLY00128246] [eCSFB]LU Reduction Enhancement
 * Implemented 2 enhancements: 
 * 1. If there is successful call on the black cell, add it to bleach list; 
 *    the priority order is: white list > bleach list > gray list > black list;
 * 2. If the decoded BSIC of white cell or bleach cell does not match the stored,
 *    add it to retry list; the retry list would be tried after white list and 
 *     bleach list have been done.
 *
 * 06 21 2015 alan.peng
 * [MOLY00122048] [6795] Request new feature to improve registration time of roaming case
 * _MRS part.
 *
 * 02 16 2015 doug.shih
 * [MOLY00091463] [MT6291] ERRC RCM/MRS development
 * MOLY CR Code Sync to UMOLY (OA domain): 
 * [MOLY00079131] AT&T requirement connection reject
 * [MOLY00083427] [ERRC][MOB] UMTS proximity indication
 * [MOLY00084324] [ROHC] Modem load with configurable compile options: profile support and context number
 * [MOLY00084416] [eCSFB]LU Reduction feature
 * [MOLY00091967] Merge C2K IRAT code (CT specific UE cap SBP setting).
 *
 * 11 14 2014 henry.lai
 * [MOLY00079072] [MT6291] Change EARFCN from kal_uint16 to kal_uint32 for CEL part
 *
 * 03 28 2014 shin.chen
 * [MOLY00059825] [MOLY] Multimode LLA change
 * .
 *
 * 10 23 2013 adeline.chang
 * [MOLY00042471] [MT6290] CSFB_enhancements inject message extension
 * [MT6290] CSFB_enhancements inject message extension.
 *
 * 10 21 2013 vend_yuhhwang.yu
 * [MOLY00040050] [MultiMode] Dynamic band selection
 * .
 *
 * 08 30 2013 adeline.chang
 * [MOLY00030187] [MT6290] CSFB Enhancement Implementation for Autonomous Fast Return
 * [MT6290] CSFB Enhancement Implementation for Autonomous Fast Return - add new MRS API.
 *
 * 07 17 2013 adeline.chang
 * [MOLY00030187] [MT6290] CSFB Enhancement Implementation for Autonomous Fast Return
 * .
 *
 * 01 22 2013 david.niu
 * [MOLY00009205] [MRS] Code checked-in for MOLY branch
 * .
 * 
 ******************************************************************************/
#ifndef _MRS_AS_STRUCT_H
#define _MRS_AS_STRUCT_H

#include "mrs_as_enums.h"
#include "kal_public_defs.h"
#include "global_type.h"
#include "l3_inc_enums.h"
#include "mcd_l3_inc_struct.h"

#define AFR_FREQ_MAX_NUM 8
#define MAX_NUM_MULTI_MCC 6

/* MRS uses this primitive to inform AS about white list change */
typedef struct {
  LOCAL_PARA_HDR
  csg_white_list_update_cause update_cause;
  kal_bool acsgl_changed;
  kal_bool ocsgl_changed;
} mrs_as_csg_white_list_update_ind_struct;

/* MRS uses this primitive to synch LLA status with AS */
typedef struct {
  LOCAL_PARA_HDR
  //lower_layer_availability_enum l1_availibility_status;
} mrs_lower_layer_availability_update_ind_struct;

/* GAS synch LLA status with MRS */
typedef struct {
  LOCAL_PARA_HDR
  lower_layer_availability_enum l1_availibility_status;
} mrs_gas_lower_layer_availability_update_req_struct;

/* UAS synch LLA status with MRS */
typedef struct {
  LOCAL_PARA_HDR
  lower_layer_availability_enum l1_availibility_status;
} mrs_uas_lower_layer_availability_update_req_struct;

/* EAS synch LLA status with MRS */
typedef struct {
  LOCAL_PARA_HDR
  lower_layer_availability_enum l1_availibility_status;
} mrs_eas_lower_layer_availability_update_req_struct;

/* Inform GAS band setting is changed */
typedef struct {
  LOCAL_PARA_HDR
} mrs_gas_band_setting_update_ind_struct;

/* Inform UAS band setting is changed */
typedef struct {
  LOCAL_PARA_HDR
} mrs_uas_band_setting_update_ind_struct;

/* Inform EAS band setting is changed */
typedef struct {
  LOCAL_PARA_HDR
} mrs_eas_band_setting_update_ind_struct;

/* Inform EAS band contral */
typedef struct {
  LOCAL_PARA_HDR
  kal_uint16 band;
  eas_band_control_enum ctrl_info;
} mrs_eas_band_ctrl_ind_struct;

typedef struct mrs_plmn_id
{
   kal_uint8 mcc1;
   kal_uint8 mcc2;
   kal_uint8 mcc3;
   kal_uint8 mnc1;
   kal_uint8 mnc2;
   kal_uint8 mnc3;
} mrs_plmn_id;

typedef struct
{
    kal_uint8    plmn_id_len;
    mrs_plmn_id  plmn_id[MAX_NUM_MULTI_PLMN];
} mrs_plmn_id_list;

/* MRS notifies UAS of the transmission of INTER RAT HANDOVER INFO in GSM */
typedef struct {
   LOCAL_PARA_HDR
} mrs_uas_umts_ho_info_rsp_struct;

typedef struct
{
   /* [b1: not used] [b2: reduce lau, enable] [b3: defer si13, enable] [b4: 2g afr, enable] [b5: 3g afr, enable] */
   /* [b6: CSFB_2G_FDD_eCSFB, disable] [b7: CSFB_3G_FDD_eCSFB, disable] [b8: CSFB_2G_TDD_eCSFB, enable] [b9: CSFB_3G_TDD_eCSFB, disable] */
   /* [b10 ~ b16: reserved] */
   kal_uint16       csfb_enhancement_item_status;
   /* [b1: not used] [b2: reduce lau, disable] [b3: defer si13, enable] [b4: 2g afr, disable] [b5: 3g afr, disable] */
   /* [b6: CSFB_2G_FDD_eCSFB, disable] [b7: CSFB_3G_FDD_eCSFB, disable] [b8: CSFB_2G_TDD_eCSFB, disable] [b9: CSFB_3G_TDD_eCSFB, disable] */
   /* [b10 ~ b16: reserved] */
   kal_uint16       csfb_enhancement_item_status_in_test_mode; 
   kal_bool        is_csfb_ongoing;
   kal_uint8       num;
   EARFCN          afr_list[AFR_FREQ_MAX_NUM];
} mrs_afr_main_struct;

typedef struct {
    mrs_plmn_id plmn_id;
    kal_uint8 la_code[2];
} mrs_lai_struct;

typedef struct
{
    kal_uint16 arfcn;
    kal_uint8 bsic;
}mrs_gas_cell_struct;

typedef struct
{
    mrs_gas_cell_struct gas_cell;
    mrs_lai_struct lai;
	kal_bool is_call_successful;
}mrs_gas_cell_inf_struct;

typedef struct
{
    kal_uint16 uarfcn;
    kal_uint16 psc;
}mrs_uas_cell_struct;

typedef struct
{
   mrs_uas_cell_struct uas_cell;
   mrs_lai_struct lai;
}mrs_uas_cell_inf_struct;

typedef struct {
    kal_bool            valid;
    MRS_RAT_MODE_TYPE   rat;
    mrs_plmn_id         plmn_id;
    kal_uint16          lac_or_tac;
    kal_uint32          cell_id;
} mrs_as_black_cell_struct;

/* inform xAS black cell list added/cleared. */
typedef struct {
  LOCAL_PARA_HDR
} mrs_uas_add_black_cell_ind_struct;

typedef struct {
  LOCAL_PARA_HDR
} mrs_gas_add_black_cell_ind_struct;

typedef struct {
  LOCAL_PARA_HDR
} mrs_uas_clear_black_cell_ind_struct;

typedef struct {
  LOCAL_PARA_HDR
} mrs_gas_clear_black_cell_ind_struct;

typedef struct mrs_mcc_id
{
   kal_uint8 mcc1;
   kal_uint8 mcc2;
   kal_uint8 mcc3;
} mrs_mcc_id;

/* AS use this struct to get MCC from MRS */
typedef struct mrs_as_mcc_struct
{
    kal_uint8 mrs_as_mcc_count;
    mrs_mcc_id multi_mcc_id[MAX_NUM_MULTI_MCC];
} mrs_as_mcc_struct;

/* MRS use this struct to set and save MCC from NAS */
typedef struct 
{
    kal_uint8 multi_plmn_count;
    mrs_plmn_id multi_plmn_id[MAX_NUM_MULTI_PLMN];
} mrs_nas_mcc_struct;

typedef struct
{
    /* Fast Mode Switch, record the latest serving cell's essential SI
       for fast camp on for FDD/TDD mode switch. */
    mrs_gas_fast_mode_switch_status_enum fast_mode_switch_status;
    kal_uint8 bsic;
    kal_uint16 arfcn;
    plmn_id_struct plmn_id;
    kal_uint8 si_raw_data_valid_bitmap;
    kal_uint8 si1_raw_data[GAS_SI_RAW_DATA_LEN];
    kal_uint8 si2_raw_data[GAS_SI_RAW_DATA_LEN];
    kal_uint8 si2bis_raw_data[GAS_SI_RAW_DATA_LEN];
    kal_uint8 si3_raw_data[GAS_SI_RAW_DATA_LEN];
    kal_uint8 si4_raw_data[GAS_SI_RAW_DATA_LEN];
#ifdef __PS_SERVICE__
    kal_uint8 si13_raw_data[GAS_SI_RAW_DATA_LEN];
#endif /* __PS_SERVICE__ */
} mrs_gas_shared_info_struct;

/* MRS use this struct to set and get PLMN status from NAS
 * is_roaming: current PLMN is roaming or not
 */
typedef struct
{
    kal_bool is_roaming;
} mrs_nas_plmn_info_struct;

#endif /* _MRS_AS_STRUCT_H */
