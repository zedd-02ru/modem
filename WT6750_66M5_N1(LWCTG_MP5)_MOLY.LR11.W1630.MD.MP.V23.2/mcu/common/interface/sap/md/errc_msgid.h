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
 *   errc_msgid.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   LTE Layer 1 and Protocol Stack related message identity definition
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 03 10 2017 chih-chien.lin
 * [MOLY00234195] [Virtual CR][Jade Minus-N][SRLTE][CT 5M A][VZW MMO][FT][SH][VZW MMO feature]In the 3G environment, 1X PS business probability drop network
 * interface
 *
 * 10 24 2016 helen.hsieh
 * [MOLY00209002] [91LWA][MP5][MOB] Sercomm/ITRI NVIOT bug fix
 *
 * 10 06 2016 tsung-wei.tu
 * [MOLY00206349] [91LWA][MP5][ERRC Common] rel-13 LWA feature check-in
 * .
 *
 * 09 07 2016 po-yu.huang
 * [MOLY00193710] [6291][VOLTE enhancement]Enhancement A3 report (B/O/P) extend to more operator
 * 	Step 2 OA
 * 	.
 *
 * 08 30 2016 ivy.wang
 * [MOLY00200197] New Feature UL64QAM on 6291
 * .
 *
 * 07 22 2016 bo-yao.tsai
 * [MOLY00187032] [6291][MBMS] Gap Usage Enhancement ERRC CONN (Header part)
 * 	MP5 OA domain
 *
 * 07 04 2016 jack.chu
 * [MOLY00186029] [VZW_LC_IOT][PH1 Cabled IOT, NV IOT][Ericsson][ELT][High-Light] SIB2 sometimes can not be shown in ELT
 * 	
 * 	.
 *
 * 05 24 2016 gui-liu.wang
 * [MOLY00181059] [MT6755][Jade L6][MP2][RTD][34G][Performance Index][19][4G3 Reselection] interface/header file
 *
 * 04 28 2016 kun-lin.wu
 * [MOLY00176324] Multiple-PS/Remote-SIM interfaces phase2 ERRC part
 *
 * 04 11 2016 kun-lin.wu
 * [MOLY00172946] Multiple-PS/Remote-SIM interfaces ERRC part
 *
 * 03 09 2016 chih-chien.lin
 * [MOLY00167983] [MT6755][Jade L6][MP2][CSFB DSDS][HSR][FDD][HSR][4G_Moving][Case Fail][LAT2]PLMN List time is lose to reference phone
 * fast plmn list
 *
 * 03 04 2016 kun-lin.wu
 * [MOLY00167477] [PH1_VZW][joint-camp][Radio_Protocol][eMBMS] VZW LC TC 2.5 - eMBMS Channel Capacity
 *
 * 02 23 2016 yi-han.chung
 * [MOLY00165778] [ERRC][CEL] Add stop control for specific measure req
 *
 * 02 23 2016 chester-zd.huang
 * [MOLY00165954] [6291 HSR] Protocol / Lower Layer Common Header/Interface
 * [6291 HSR] Protocol / Lower Layer Common Header/Interface-ERRC Common Part.
 *
 * 02 23 2016 morton.lin
 * [MOLY00165954] [6291 HSR] Protocol / Lower Layer Common Header/Interface
 * CMCC requirement: HSFR CTRL ERRC-EL1 IF (W1603MP)
 *
 * 02 23 2016 morton.lin
 * [MOLY00165947] [6291 HSR] Protocol Enhancement (Header/Interface)
 * CMCC requirement: HSFR CTRL (SBP, NVRAM and MRS) (W1603MP)
 *
 * 02 19 2016 doug.shih
 * [MOLY00150211] [VzW][VZ_REQ_LTEMMO_38695] LTE Scanning Enhancement
 * ERRC CEL LTE scan in C2K idle and PS active procedure control (OA domain).
 *
 * 02 18 2016 ivy.wang
 * [MOLY00165236] [PH1_VZW][FLD][Radio_Protocol] VZ_REQ_LTEDATA_37821 Autonomous Gaps
 * .
 *
 * 02 04 2016 bo-yao.tsai
 * [MOLY00164081] �iCA�j�b�t�m��?�i�E�X��?��???�u�I?�A???���M?��4G+
 * 	OPPO 4G+ icon: add msg
 * 	-scell info from eMAC
 *
 * 02 03 2016 shin.chen
 * [MOLY00164031] [VzW]LTE SIB8/16 for AGPS fine time aiding
 * .
 *
 * 02 01 2016 morton.lin
 * [MOLY00163548] [Change feature] Inject fake EUTRA Capability functionality
 * [ERRC][RCM] Inject fake UE EUTRA Capability phase-in (W1603MP)
 *
 * 01 12 2016 ivy.wang
 * [MOLY00155801] [CA] Enable/Disable CA by AT+ECASW (ERRC)
 * .
 *
 * 01 11 2016 ethan.han
 * [MOLY00159615] [MT6755][VzW][chipset][RDIT][Intertek][RnS][LTE][SuppSig][2.41.1] Case Fail due to no TAU after RRCConnectionReconfiguration
 * 	
 * 	.
 *
 * 01 11 2016 yenchih.yang
 * [MOLY00156440] [LGE request] Signal Strength Monitoring Across Threshold
 * .
 *
 * 01 05 2016 elle.sun
 * [MOLY00155978] [MOB][VzW EM] MDMI EM code check-in
 * 	
 * 	.
 *
 * 01 04 2016 chester-zd.huang
 * [MOLY00154368] [MT6755][L+W][Overnight][FDD][MTBF][L1CORE] Assert fail: errc_conn_main.c 849 0x22 0x0 0x0 �V ERRC
 * 	
 * 	Add MSG_ID_ERRC_EL1_ABORT_HO_CNF.
 *
 * 12 21 2015 tereasa.huang
 * [MOLY00153524] [6291] Vivo BlackList feature
 * [ERRC][MOB] Clear black cell list.
 *
 * 12 11 2015 doug.shih
 * [MOLY00144447] Operator Feature/Requirement
 * [VZ_e911_30202] EMC no IR and IRAT conflict handle - EAS part (OA domain).
 *
 * 12 01 2015 tereasa.huang
 * [MOLY00151138] [91] SRVCC CDRX enhancement feature: ERRC part
 * .
 *
 * 11 19 2015 yenchih.yang
 * [MOLY00149628] MD1/MD3 power down procedure - AS workaround handshake flow
 * .
 *
 * 10 13 2015 roland.li
 * [MOLY00133440] [ERRC][RCM]Configurable CA combination
 * 	.
 *
 * 10 12 2015 morton.lin
 * [MOLY00144901] [ERRC] bCSFB feature check-in for TMO-US
 * [ERRC][SPV] bCSFB feature check-in for TMO-US (LR11)
 *
 * 10 07 2015 ming.shen
 * [MOLY00144381] [ERRC] VzW feature sync to LR11
 * .
 *
 * 09 25 2015 mark.ng
 * [MOLY00143156] [MT6755][E1][GCF][Anite][3G][FDD][CSG][6.3.1.1] Test Fail
 * manual csg search on LR11
 *
 * 09 23 2015 ethan.han
 * [MOLY00142775] [ERRC][CEL] LTE code sync
 * 	.
 *
 * 09 04 2015 ethan.han
 * [MOLY00139861] [MT6291][SBM] New Feature : Disable LTE B41 for roaming out side of Japan.
 * 	.
 *
 * 09 02 2015 yenchih.yang
 * [MOLY00099648] [VoLTE] Voice quality patch - ERRC
 * .
 *
 * 08 21 2015 henry.lai
 * [MOLY00138170] [MT6291] MBMS Scell Self-Finding Mechanism
 * 	.
 *
 * 08 20 2015 sheng-lung.liu
 * [MOLY00097009] [WFC][Volunteer patch] LTECSR_network init
 * Roll back for not ready call drop enhancement
 *
 * 08 04 2015 roland.li
 * [MOLY00129071] [ERRC][RCM] Dynamic SBP
 * 	.
 *
 * 08 04 2015 roland.li
 * [MOLY00129071] [ERRC][RCM] Dynamic SBP
 * .
 *
 * 06 17 2015 esko.oikarinen
 * [MOLY00118255] [MT6291] ERRC message identifier for DABUWAN code merge
 *
 * 06 16 2015 henry.lai
 * [MOLY00113082] [MT6291] ERRC CEL development
 * .
 *
 * 06 05 2015 morton.lin
 * [MOLY00095623] [eRRC] Gemini virtual mode
 * [6291][ERRC][SPV] eMBMS Gemini 2PS feature improvements
 *
 * 06 01 2015 henry.lai
 * [MOLY00092508] [MT6291][LTE-C2K] AS Inter RAT feature
 * .
 *
 * 05 22 2015 chun-fan.tsai
 * [MOLY00098916] [MT6291] MBMS reception on SCELL
 * eRRC CONN MBMS on SCELL (Phase 1)(OA Domain)
 *
 * 05 19 2015 cooper.lin
 * [MOLY00114149] [MT6291][L234 NW-UE SIM][4G][LTE-A MDT] FDD MDT 8.6.2.3a failed due to RRCConnectionSetupComplete content mismatch
 * Add loggedMeasCfg MSG ID for EVTH to use
 *
 * 04 28 2015 george.chang
 * [MOLY00109714] [6291] MOB MDT check in to UMOLY TRUNK
 * 	.
 *
 * 04 16 2015 doug.shih
 * [MOLY00092508] [MT6291][LTE-C2K] AS Inter RAT feature
 * Merge C2K AS IRAT - CEL Part (OA domain).
 *
 * 04 09 2015 chun-fan.tsai
 * [MOLY00098916] [MT6291] MBMS reception on SCELL
 * CONN/CEL new interface - MBMS_SCELL_REQ/CNF
 *
 * 04 09 2015 chun-fan.tsai
 * [MOLY00098916] [MT6291] MBMS reception on SCELL
 * ERRC/EL1 new interface - SCELL_FOUND_IND
 *
 * 04 07 2015 ming.shen
 * [MOLY00106111] [6291] Sync MOLY to UMOLY - SPV W1510-13
 *
 * 03 09 2015 cooper.lin
 * [MOLY00090532] [MT6291] Change Feature Check-in
 * EM, Mode Switch interface check-in
 *
 * 03 09 2015 george.chang
 * [MOLY00098177] [6291] MDT check in to UMOLY TRUNK
 * 	.
 *
 * 02 16 2015 tereasa.huang
 * [MOLY00095623] [eRRC] Gemini virtual mode
 * Virtual mode interface.
 *
 * 02 12 2015 cooper.lin
 * [MOLY00090532] [MT6291] Change Feature Check-in
 * MDT check-in
 *
 * 02 05 2015 cooper.lin
 * [MOLY00090532] [MT6291] Change Feature Check-in
 * Code sync from MOLY (W15.06)
 *
 * 01 16 2015 david.niu
 * [MOLY00087934] [MT6291][LPP OTDOA Development] Inter-freq RSTD measurement indication
 * .
 *
 * 12 19 2014 birui.li
 * [MOLY00087677] [U3G][TDD][UAS RRCE] modifications for U3G
 * merge from peng-an CBr.
 *
 * 12 16 2014 claud.li
 * [MOLY00087795] [MEME] universal bin check in
 * [Universal bin][FDD][MEME/EAS/GAS] interface
 *
 * 12 12 2014 yuhhwang.yu
 * [MOLY00087211] [CISE] add CSG fingerprint compile option and bug fix
 * . CISE codes
 *
 * 11 12 2014 cooper.lin
 * [MOLY00068710] [MT6291_DEV] Sync MOLY to MT6291_DEV
 * Merge MT6291_DEV code to UMOLY trunk.
 *
 * 11 12 2014 chi-chung.lin
 * [MOLY00068710] [MT6291_DEV] Sync MOLY to MT6291_DEV
 * [CHM] code sync from MT6291_DEV to UMOLY
 *
 * 11 12 2014 yingwei.huang
 * [MOLY00073932] [MT6291_DEV] EDDA implementation -- interface part.	.
 *
 * 11 12 2014 henry.lai
 * [MOLY00079071] [MT6291][U4G] Low Power Modification for CEL Paging
 * .
 *
 * 07 21 2014 william.chang
 * [MOLY00072876] [WW FT][K95 V1.2][4G Gemini][FT][Hangzhou]Externel (EE),0,0,99,/data/core/,1,modem,md0:[ASSERT] file:rsvas_fsm.c line:3776
 * .
 *
 * 05 28 2014 william.chang
 * [MOLY00067209] [LTE Gemini] Add interface for EMM to occupy CS semaphore for Attach procedure
 * .
 *
 * 05 28 2014 william.chang
 * [MOLY00067209] [LTE Gemini] Add interface for EMM to occupy CS semaphore for Attach procedure
 * .
 *
 * 04 30 2014 william.chang
 * [MOLY00064308] Modify EVAL ERRC msg name for VOLTE gemini
 * .
 *
 * 04 02 2014 cookie.chen
 * [MOLY00060012] AT+ECBMR to remove modem CB records
 * .
 *
 * 03 28 2014 william.chang
 * [MOLY00061184] [4G Gemini] Notify AS when IRCCO stage2 cause is updated by NASu1rwduu`wvpghlqg|rliildh+fmdkb
 *
 * 03 28 2014 jasper.chen
 * [MOLY00060988] [LPP CP] LPP code check-in for A-GNSS and eCID feature
 * 	Check in ECID ERRC modifications (OA domain)
 *
 * 03 06 2014 aaron.liu
 * [MOLY00056483] [MT6582LTE][SGLTE][CMCC FT][GZ]
 * Add PLMN SEARCH Abort Interface:
 * 1.MSG_ID_EVAL_ERRC_PLMN_SEARCH_ABORT_REQ
 * 2.MSG_ID_NWSEL_EVAL_PLMN_SEARCH_ABORT_REQ
 *
 * 03 03 2014 peter.chien
 * [MOLY00058082] [CEL][CONN] Change IDLE_CNF to CH_STATUS_CNF
 * Merging
 *  	
 * 	//MOLY_CBr/cookie.chen/MOLY_W14.09.LTE.p1/mcu/interface/sap/md/errc_msgid.h
 *  	
 * 	to //MOLY/TRUNK/MOLY/mcu/interface/sap/md/errc_msgid.h
 *
 * 01 22 2014 jeremy.chen
 * [MOLY00054589] [MT6290E2] add RLF indication from ERLC-DL
 * reaname ERRC_ERLCUL_STATUS_IND to ERRC_ERLC_RLF_IND
 *
 * 01 22 2014 william.chang
 * [MOLY00054324] [4G Gemini][Merge] MOLY.MM.GEMINI.DEV Merge back to MOLY
 * . Check-in Interface part of LTE GEMINI
 *
 * 01 13 2014 aaron.liu
 * [MOLY00053379] [MT6290][VOLTE][ERRC]New feature : IMS emergency
 * Add ERRC Interface.
 *
 * 12 30 2013 menghau.wu
 * [MOLY00051454] [ERRC][CEL] write PLMN list stored cell into NVRAM
 * Add Stored cell info related NVRAM context
 *
 * 11 29 2013 menghau.wu
 * [MOLY00048344] [MT6290][ERRC] Add learned mcc info context to NVRAM/RCM
 * 	add nvram file for learned mcc info
 *
 * 11 13 2013 jed.lee
 * [MOLY00046027] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 * B3&B39 conn part.
 *
 * 11 13 2013 adeline.chang
 * [MOLY00046027] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 * .
 *
 * 10 21 2013 hong-yuan.yang
 * [MOLY00040050] [MultiMode] Dynamic band selection
 * .
 *
 * 10 02 2013 maruco.tu
 * [MOLY00039031] [ERRC][CEL]Inject implement
 * remove leave_4g.
 *
 * 09 25 2013 maruco.tu
 * [MOLY00039031] [ERRC][CEL]Inject implement
 * inject message(new message:MSG_ID_ERRC_CEL_INJECT_LEAVE_LTE_IND)
 *
 * 09 24 2013 peter.chien
 * [MOLY00038599] ERRC MOB CONN inject message feature
 * .Add interface
 *
 * 08 06 2013 adeline.chang
 * [MOLY00031695] Modify CHM/RCM code for UT enhancement .
 * .
 *
 * 08 01 2013 dennis.weng
 * [MOLY00032020] [ERRC][CEL] new carrier search flow check-in
 * .
 *
 * 07 24 2013 dennis.weng
 * [MOLY00031020] [MMDS_DC] Merge MMDC interface to MOLY
 * merge GAS_EAS_EARFCN_LIST_UPDATE_REQ
 *
 * 07 22 2013 stanleyhy.chen
 * [MOLY00029602] [New Feature] NBR_CELL_INFO and TA_INFO related interfaces
 * Add ERRC_EMAC_TA_INFO_INVALID_IND
 *
 * 07 12 2013 stanleyhy.chen
 * [MOLY00029602] [New Feature] NBR_CELL_INFO and TA_INFO related interfaces
 * TA_INFO and NBR_CELL_INFO interfaces for LPP feature
 *
 * 05 27 2013 jed.lee
 * [MOLY00023911] TDS MoDIS MM IT code merge
 * .
 *
 * 05 13 2013 shih-chieh.liao
 * [MOLY00022028] LTE MM.IT errc merge to MOLY
 * merge mrs
 *
 * 04 01 2013 shih-chieh.liao
 * [MOLY00011934] LTE MM IT CBr merge to MOLY
 * .asn1 replacement
 *
 * 01 24 2013 william.chang
 * [MOLY00009163] LTE Multimode merge back to MOLY
 * .Merge from MM preIT CBr
 *
 * 01 23 2013 hong-yuan.yang
 * [MOLY00009163] LTE Multimode merge back to MOLY
 * LTE multimode merge back to moly
 ****************************************************************************/
#include "module_msg_range.h"

#ifndef _ERRC_MSGID_H
#define _ERRC_MSGID_H


MODULE_MSG_BEGIN( MSG_ID_ERRC_CODE_BEGIN )


MSG_ID_EXEVT_RCV_BEGIN = MSG_ID_ERRC_CODE_BEGIN,
MSG_ID_EMM_ERRC_ACTIVATION_REQ,
MSG_ID_EMM_ERRC_RAT_BAND_REQ,
MSG_ID_EMM_ERRC_ESTABLISH_REQ,
MSG_ID_EMM_ERRC_RELEASE_REQ,
MSG_ID_EMM_ERRC_RELEASE_RSP,
MSG_ID_EMM_ERRC_DATA_REQ,
MSG_ID_EMM_ERRC_KEY_UPDATE_REQ,
MSG_ID_EMM_ERRC_TEST_REQ,
MSG_ID_EMM_ERRC_CELLSELECT_REQ,
MSG_ID_EMM_ERRC_PLMNLIST_REQ,
MSG_ID_EMM_ERRC_PLMN_LIST_STATUS_UPDATE_REQ,
MSG_ID_EMM_ERRC_RESUME_REQ,
MSG_ID_EMM_ERRC_NWSEL_STATUS_UPDATE_REQ,
MSG_ID_EMM_ERRC_REG_STATUS_UPDATE_REQ,
MSG_ID_EMM_ERRC_RAT_CHANGE_REQ,
MSG_ID_EMM_ERRC_RAT_CHANGE_RSP,
MSG_ID_EMM_ERRC_STANDBY_REQ,
MSG_ID_EMM_ERRC_PARAM_UPDATE_REQ,
MSG_ID_EMM_ERRC_QOS_UPDATE_REQ,
MSG_ID_EMM_ERRC_CSG_LIST_REQ,
MSG_ID_EMM_ERRC_CSG_LIST_STOP_REQ,
MSG_ID_EMM_ERRC_NULL_SECURITY_ACCEPT_REQ,
MSG_ID_EMM_ERRC_CSG_WHITE_LIST_UPDT_REQ,
MSG_ID_EMM_ERRC_SIM_FILE_UPDATE_REQ,
MSG_ID_EMM_ERRC_CSFB_NTF,
MSG_ID_EMM_ERRC_GEMINI_CSFB_STATUS_REQ,
MSG_ID_EMM_ERRC_CHECK_SERVING_SUITABILITY_REQ,
MSG_ID_EMM_ERRC_SEARCH_PREFERENCE_UPDATE_REQ,
MSG_ID_EMM_ERRC_RAT_CHANGE_CAUSE_UPDATE_REQ,
MSG_ID_EMM_ERRC_GEMINI_LR_REQ,
MSG_ID_EMM_ERRC_GEMINI_SERVICE_REQ,
MSG_ID_EMM_ERRC_MBMS_PACKET_COUNTER_REQ,
MSG_ID_EMM_ERRC_DUPLEX_MODE_CHANGE_REQ,
MSG_ID_EMM_ERRC_UPDATE_UE_LOCATION_INFORMATION_REQ,
MSG_ID_ERRC_LBS_GNSS_POS_IND,
MSG_ID_LBS_ERRC_READ_TIME_SIB_REQ,
MSG_ID_EMM_ERRC_C2K_IRAT_COMPLETE_REQ,
MSG_ID_EVAL_ERRC_ADJUST_MEAS_REQ,
MSG_ID_EVAL_ERRC_ETWS_SETTING_REQ,
MSG_ID_EVAL_ERRC_CBCH_REQ,
MSG_ID_EVAL_ERRC_CB_UPDATE_REQ,
MSG_ID_EVAL_ERRC_HPLMN_INFO_UPDATE_REQ,
MSG_ID_EVAL_ERRC_MMDC_MODE_UPDATE_REQ,
MSG_ID_EVAL_ERRC_LTE_NEIGHBOR_CELL_INFO_REQ,
MSG_ID_EVAL_ERRC_C2K_NORMAL_SERVICE_REQ,
MSG_ID_EVAL_ERRC_NBR_CELL_INFO_START_REQ,
MSG_ID_EVAL_ERRC_NBR_CELL_INFO_STOP_REQ,
MSG_ID_EVAL_ERRC_GET_SSAC_PARAM_REQ,
MSG_ID_EVAL_ERRC_VDM_VOICE_STATUS_REQ,
MSG_ID_EVAL_ERRC_PLMN_SEARCH_ABORT_REQ,
MSG_ID_EVAL_ERRC_CB_MSG_REMOVAL_REQ,
MSG_ID_EVAL_ERRC_MRU_UPDATE_REQ,
MSG_ID_EVAL_ERRC_CSG_AUTO_SEARCH_MODE_REQ,
MSG_ID_MBMSAL_ERRC_MBMS_CONFIG_REQ,
MSG_ID_EVAL_ERRC_PLMNLIST_ABORT_REQ,
MSG_ID_EVAL_ERRC_ERLM_CONTROL_REQ,
MSG_ID_EVAL_ERRC_EMC_SESSION_START_REQ,
MSG_ID_EVAL_ERRC_EMC_SESSION_STOP_REQ,
MSG_ID_ERRC_SIM_PROTECT_REQ,
MSG_ID_SAT_EAS_NMR_REQ,
MSG_ID_ERRC_EL1_SET_RAT_CNF,
MSG_ID_ERRC_EL1_CARRIER_SEARCH_CNF,
MSG_ID_ERRC_EL1_CARRIER_SEARCH_IND,
MSG_ID_ERRC_EL1_SPECIFIC_MEASURE_CNF,
MSG_ID_ERRC_EL1_SPECIFIC_MEASURE_IND,
MSG_ID_ERRC_EL1_RADIO_MEASURE_CNF,
MSG_ID_ERRC_EL1_RADIO_MEASURE_IND,
MSG_ID_ERRC_EL1_SIB_FRAME_SYNC_IND,
MSG_ID_ERRC_EL1_NBRCELL_EM_INFO,
MSG_ID_LMOB_MOB_POWER_LEVEL_IND,
MSG_ID_LMOB_MOB_RADIO_MEASURE_IND,
MSG_ID_LMOB_MOB_NBRCELL_EM_INFO,
MSG_ID_LMOB_MOB_CEL_RESEL_IND,
MSG_ID_LMOB_MOB_CEL_OOS_IND,
MSG_ID_LMOB_MOB_CEL_NEED_IR_CHANGE_STATUS_IND,
MSG_ID_LMOB_MOB_SCSI_INFO_IND,
MSG_ID_LMOB_MOB_REJ_INFO_IND,
MSG_ID_LMOB_MOB_RADIO_MEASURE_CNF,
MSG_ID_LMOB_MOB_OOS_SCSI_INFO_REQ,
MSG_ID_LMOB_MOB_NBR_CELL_INFO_IND,
MSG_ID_LMOB_MOB_CONFIG_UCELL_MEAS_REQ,
MSG_ID_LMOB_MOB_CONFIG_UCELL_PRIO_MEAS_REQ,
MSG_ID_LMOB_MOB_UCELL_MEAS_IND,
MSG_ID_LMOB_MOB_CONFIG_GCELL_MEAS_REQ,
MSG_ID_LMOB_MOB_CONFIG_GCELL_PRIO_MEAS_REQ,
MSG_ID_LMOB_MOB_GCELL_MEAS_IND,
MSG_ID_LMOB_MOB_GCELL_BSIC_IND,
MSG_ID_LMOB_MOB_CONFIG_CCELL_MEAS_REQ,
MSG_ID_LMOB_MOB_CONFIG_CCELL_PRIO_MEAS_REQ,
MSG_ID_LMOB_MOB_CCELL_MEAS_IND,
MSG_ID_LMOB_MOB_UAS_LTE_MEASUREMENT_CNF,
MSG_ID_LMOB_MOB_GAS_LTE_MEASUREMENT_CNF,
MSG_ID_LMOB_MOB_CAS_LTE_MEASUREMENT_CNF,
MSG_ID_LMOB_MOB_MEAS_INTRARAT_INFO_IND,
MSG_ID_LMOB_MOB_MEAS_INTERRAT_UTRAN_INFO_IND,
MSG_ID_LMOB_MOB_MEAS_INTERRAT_GERAN_INFO_IND,
MSG_ID_LMOB_MOB_MEAS_INTERRAT_C2K_INFO_IND,
MSG_ID_LMOB_MOB_SYNCH_STATUS_CNF,
MSG_ID_LMOB_MOB_CONN_FAKE_IRCCO_GCELL_IND,
MSG_ID_LMOB_MOB_PRS_GAP_IND,
MSG_ID_LMOB_MOB_GCELL_BSIC_ENH_IND,
MSG_ID_MOB_LMOB_MEAS_LOGGING_IND,
MSG_ID_MOB_LMOB_ESTFAIL_REPORT_CNF,
MSG_ID_ERRC_EL1_CPHY_CFG_CNF,
MSG_ID_ERRC_EL1_RL_MONITOR_CNF,
MSG_ID_ERRC_EL1_RLF_IND,
MSG_ID_ERRC_EL1_BCCH_IND,
MSG_ID_ERRC_EL1_NBR_BCCH_MEAS_IND,
MSG_ID_ERRC_EL1_SPECIFIC_CELL_SEARCH_CNF,
MSG_ID_ERRC_CEL_SPECIFIC_CELL_SRCH_CNF,
MSG_ID_ERRC_CONN_SPECIFIC_CELL_SRCH_CNF,
MSG_ID_ERRC_EL1_SPECIFIC_CELL_SEARCH_IND,
MSG_ID_ERRC_CEL_SPECIFIC_CELL_SRCH_IND,
MSG_ID_ERRC_CONN_SPECIFIC_CELL_SRCH_IND,
MSG_ID_ERRC_EL1_RSSI_SNIFFER_CNF,
MSG_ID_ERRC_EL1_RSSI_SNIFFER_IND,
MSG_ID_ERRC_EL1_PCH_CRCNG_IND, /* Need to remove for TK6291 U4G */
MSG_ID_ERRC_EL1_AUTO_GAP_ON_CNF,
MSG_ID_ERRC_EL1_AUTO_GAP_OFF_CNF,
MSG_ID_ERRC_EL1_ACTIVE_AFC_IND,
MSG_ID_ERRC_EL1_HST_IND,
MSG_ID_ERRC_EL1_IDC_IND,
MSG_ID_ERRC_EL1_SCELL_FOUND_IND,
MSG_ID_ERRC_EL1_ABORT_HO_CNF,
MSG_ID_ERRC_EL1_VIRTUAL_MODE_CNF,
MSG_ID_ERRC_EL1_GAP_STATUS_IND,
MSG_ID_ERRC_EMAC_CONTENTION_IND,
MSG_ID_ERRC_EMAC_RA_ERROR_IND,
MSG_ID_ERRC_EMAC_ESTFAIL_REPORT_CNF,
MSG_ID_ERRC_CONN_RRC_TRIGER_RAERR,
MSG_ID_ERRC_EVTH_CHM_NON_RRC_TRIGER_RAERR,
MSG_ID_ERRC_EMAC_CONFIG_CNF,
MSG_ID_ERRC_EMAC_L1_UL_REL_IND,
MSG_ID_ERRC_EMAC_RA_INFO_IND,
MSG_ID_ERRC_EMAC_SI_IND,
MSG_ID_ERRC_EMAC_TA_INFO_CNF,
MSG_ID_ERRC_EMAC_TA_INFO_IND,
MSG_ID_ERRC_EMAC_TA_INFO_INVALID_IND,
MSG_ID_LPP_ERRC_ECID_MEAS_REQ,
MSG_ID_LPP_ERRC_ECID_MEAS_ABORT_REQ,
MSG_ID_ERRC_EVTH_SYS_SI,
MSG_ID_ERRC_EVTH_SYS_SIB1,
MSG_ID_ERRC_EVTH_SYS_BCCH_ASN1_DEC_ERR,
MSG_ID_ERRC_EVTH_SYS_BCCH_UNDEFINE,
MSG_ID_ERRC_LAS_PAGING_IND,
MSG_ID_ERRC_EMAC_CCCH_DATA_IND,
MSG_ID_ERRC_EMAC_CA_ACTIVATE_IND,
MSG_ID_ERRC_EVTH_CONN_CONN_REEST,
MSG_ID_ERRC_EVTH_CONN_CONN_REEST_REJ,
MSG_ID_ERRC_EVTH_CONN_CONN_REJ,
MSG_ID_ERRC_EVTH_CONN_CONN_SETUP,
MSG_ID_ERRC_EVTH_CONN_CCCH_ASN1_DEC_ERR,
MSG_ID_ERRC_EVTH_CONN_CCCH_UNDEFINE,
MSG_ID_ERRC_EPDCP_MCCH_DATA_IND,
MSG_ID_ERRC_EVTH_CONN_MBSFN_AREA_CFG,
MSG_ID_ERRC_EVTH_CONN_MBMS_CNT_REQ,
MSG_ID_ERRC_ERLCUL_CONFIG_CNF,
MSG_ID_ERRC_ERLCDL_CONFIG_CNF,
MSG_ID_ERRC_ERLC_RLF_IND,
MSG_ID_ERRC_ERLCUL_SRB1_ACK_CNF,
MSG_ID_ERRC_EPDCP_CONFIG_CNF,
MSG_ID_ERRC_EPDCP_DCCH_DATA_CNF,
MSG_ID_ERRC_EPDCP_RLC_ACK_IND,
MSG_ID_ERRC_EPDCP_DCCH_DATA_IND,
MSG_ID_ERRC_EVTH_CONN_DL_INFO_TRANS,
MSG_ID_ERRC_EVTH_CONN_MOB_FROM_EUTRA_CMD,
MSG_ID_ERRC_EVTH_CONN_CONN_RECONF,
MSG_ID_ERRC_EVTH_CONN_RECONF_PRECHK,
MSG_ID_ERRC_EVTH_CONN_CONN_REL,
MSG_ID_ERRC_EVTH_CONN_SECURITY_MODE_CMD,
MSG_ID_ERRC_EVTH_RCM_UE_CAPA_ENQ,
MSG_ID_ERRC_EVTH_CONN_COUNTER_CHECK,
MSG_ID_ERRC_EVTH_CONN_UE_INFO_REQ,
MSG_ID_ERRC_EVTH_CONN_DCCH_ASN1_DEC_ERR,
MSG_ID_ERRC_EVTH_CONN_IRAT_DCCH_ASN1_DEC_ERR,
MSG_ID_ERRC_EVTH_CONN_DCCH_INTG_CHK_ERR,
MSG_ID_ERRC_EVTH_CONN_DCCH_UNDEFINE,
MSG_ID_ERRC_EVTH_MOB_LOGGED_MEAS_CFG,
MSG_ID_ERRC_EPDCP_TEST_CNF,
MSG_ID_ERRC_EPDCP_CNTINFO_CNF,
MSG_ID_ERRC_EPDCP_DETECTION_TIMER_TIMEOUT_IND,
MSG_ID_ERRC_EPDCP_PS_DATA_INACTIVE_TIME_IND,
MSG_ID_ERRC_EPDCP_MTCH_PC_CNF,
MSG_ID_ERRC_TIMER_TRIG_TIMEOUT_REQ,
MSG_ID_ERRC_EVTH_RCM_CSG_WHITE_LIST_UPDATE_IND,
MSG_ID_ERRC_EVTH_RCM_NVRAM_READ_CNF,
MSG_ID_ERRC_EVTH_RCM_NVRAM_WRITE_CNF,
MSG_ID_ERRC_EVTH_RCM_BAND_UPDATE_IND,
MSG_ID_ERRC_EVTH_RCM_SBP_RECONFIG_REQ,
MSG_ID_ERRC_EVTH_CEL_LOWER_LAYER_AVAILABILITY_UPDATE_IND,
MSG_ID_ERRC_EVTH_RCM_DISABLE_B39_IND,
MSG_ID_ERRC_EVTH_RCM_ENABLE_B39_IND,
MSG_ID_ERRC_EVTH_RCM_BAND_CTRL_IND,
MSG_ID_ERRC_EVTH_CEL_C2K_EARFCN_LIST_UPDATE_REQ,
MSG_ID_UAS_EAS_HANDOVER_ECELL_REQ,
MSG_ID_ERRC_EVTH_CONN_IRAT_RECONF,
MSG_ID_UAS_EAS_ABORT_HO_ECELL_REQ,
MSG_ID_MRS_EAS_UMTS_HO_INFO_IND,
MSG_ID_MRS_EAS_CLEAR_BLACK_CELL_IND,
MSG_ID_EAS_UAS_HANDOVER_UCELL_CNF,
MSG_ID_EAS_GAS_HANDOVER_GCELL_CNF,
MSG_ID_EAS_UAS_HO_ACTIVATE_UCELL_CNF,
MSG_ID_EAS_GAS_HO_ACTIVATE_GCELL_CNF,
MSG_ID_GAS_EAS_EVALUATE_ECELL_REQ,
MSG_ID_UAS_EAS_EVALUATE_ECELL_REQ,
MSG_ID_ERRC_CEL_CAS_EAS_EVALUATE_ECELL_REQ,
MSG_ID_GAS_EAS_EVALUATE_ECELL_STOP_REQ,
MSG_ID_UAS_EAS_EVALUATE_ECELL_STOP_REQ,
MSG_ID_ERRC_CEL_CAS_EAS_EVALUATE_ECELL_STOP_REQ,
MSG_ID_EAS_GAS_EVALUATE_GCELL_CNF,
MSG_ID_EAS_UAS_EVALUATE_UCELL_CNF,
MSG_ID_EAS_GAS_EVALUATE_GCELL_STOP_CNF,
MSG_ID_EAS_UAS_EVALUATE_UCELL_STOP_CNF,
MSG_ID_EAS_GAS_ACTIVATE_GCELL_CNF,
MSG_ID_EAS_UAS_ACTIVATE_UCELL_CNF,
MSG_ID_ERRC_CEL_EAS_CAS_ACTIVATE_CCELL_CNF,
MSG_ID_GAS_EAS_READY_TIMER_STATUS_IND,
MSG_ID_GAS_EAS_EVALUATE_CSG_ECELL_REQ,
MSG_ID_UAS_EAS_EVALUATE_CSG_ECELL_REQ,
MSG_ID_GAS_EAS_SEARCH_CSG_ECELL_REQ,
MSG_ID_UAS_EAS_SEARCH_CSG_ECELL_REQ,
MSG_ID_EAS_UAS_EVALUATE_CSG_UCELL_CNF,
MSG_ID_EAS_UAS_SEARCH_CSG_UCELL_CNF,
MSG_ID_UAS_EAS_LTE_MEASUREMENT_REQ,
MSG_ID_GAS_EAS_LTE_MEASUREMENT_REQ,
MSG_ID_ERRC_MOB_CAS_EAS_LTE_MEASUREMENT_REQ,
MSG_ID_UAS_EAS_LTE_HPS_QUALIFY_CELL_IND,
MSG_ID_GAS_EAS_LTE_HPS_QUALIFY_CELL_IND,
MSG_ID_ERRC_MOB_CAS_EAS_LTE_HPS_QUALIFY_CELL_IND,
MSG_ID_EAS_FDD_UAS_CONFIG_UCELL_MEAS_CNF,
MSG_ID_EAS_TDD_UAS_CONFIG_UCELL_MEAS_CNF,
MSG_ID_EAS_GAS_CONFIG_GCELL_MEAS_CNF,
MSG_ID_ERRC_MOB_EAS_CAS_CONFIG_CCELL_MEAS_CNF,
MSG_ID_EAS_FDD_UAS_CONFIG_UCELL_PRIO_MEAS_CNF,
MSG_ID_EAS_TDD_UAS_CONFIG_UCELL_PRIO_MEAS_CNF,
MSG_ID_EAS_GAS_CONFIG_GCELL_PRIO_MEAS_CNF,
MSG_ID_EAS_FDD_UAS_UCELL_MEAS_IND,
MSG_ID_EAS_TDD_UAS_UCELL_MEAS_IND,
MSG_ID_EAS_GAS_GCELL_MEAS_IND,
MSG_ID_EAS_GAS_GCELL_BSIC_IND,
MSG_ID_EAS_UAS_REPORT_CGI_CNF,
MSG_ID_EAS_GAS_REPORT_CGI_CNF,
MSG_ID_ERRC_MOB_EAS_CAS_REPORT_CGI_CNF,
MSG_ID_UAS_EAS_BACKGROUND_SEARCH_START_REQ,
MSG_ID_UAS_EAS_BACKGROUND_SEARCH_STOP_REQ,
MSG_ID_GAS_EAS_BACKGROUND_SEARCH_START_REQ,
MSG_ID_GAS_EAS_BACKGROUND_SEARCH_STOP_REQ,
MSG_ID_UAS_EAS_BUILD_FINGERPRINT_REQ,
MSG_ID_UAS_EAS_ABORT_FINGERPRINT_IND,
MSG_ID_EAS_UAS_BUILD_FINGERPRINT_CNF,
MSG_ID_EAS_GAS_BUILD_FINGERPRINT_CNF,
MSG_ID_GAS_EAS_EARFCN_LIST_UPDATE_REQ,
MSG_ID_RSVAS_EAS_SERVICE_RES_OCCUPY_IND,
MSG_ID_RSVAS_EAS_SUSPEND_SERVICE_REQ,
MSG_ID_RSVAS_EAS_RESUME_SERVICE_REQ,
MSG_ID_RSVAS_EAS_ABORT_SERVICE_REQ,
MSG_ID_RSVAS_EAS_ABORT_SERVICE_COMPLETE_IND,
MSG_ID_RSVAS_EAS_VIRTUAL_SUSPEND_SERVICE_REQ,
MSG_ID_RSVAS_EAS_VIRTUAL_SUSPEND_SERVICE_COMPLETE_IND,
MSG_ID_RSVAS_EAS_VIRTUAL_RESUME_SERVICE_REQ,
MSG_ID_RSVAS_EAS_VIRTUAL_SUSPEND_STATUS_IND,
MSG_ID_ERRC_SPV_CAS_EAS_C2K_POWER_ON_IND,
MSG_ID_ERRC_SPV_CAS_EAS_C2K_POWER_OFF_IND,
MSG_ID_RSVAE_EAS_FREQUENCY_SCAN_ACCEPT_IND,
MSG_ID_RSVAE_EAS_FREQUENCY_SCAN_PREEMPT_IND,
MSG_ID_LTECSR_ERRC_VOLTE_STATUS_NTF,
MSG_ID_EVAL_ERRC_IMS_CALL_STATUS_REQ,
MSG_ID_LTECSR_ERRC_VOLTE_CALL_SILENCE_NTF,
MSG_ID_EVAL_ERRC_EDDA_REQ,
MSG_ID_EVAL_ERRC_LTECA_BAND_SETTING_REQ,
MSG_ID_EVAL_ERRC_LTECA_MODE_SETTING_REQ,
MSG_ID_EVAL_ERRC_OMADM_UPDATE_REQ,
MSG_ID_EVAL_ERRC_MODULATION_UPDATE_REQ,
MSG_ID_EAS_GAS_BSIC_ENH_IND,
MSG_ID_L4C_CELL_POWER_THRESHOLD_CONFIG_REQ,
MSG_ID_WAAL_ERRC_WLAN_CAPABILITY_IND,
MSG_ID_WAAL_ERRC_WLAN_LWA_CONNECT_CNF,
MSG_ID_WAAL_ERRC_WLAN_LWA_LOST_IND,
MSG_ID_WAAL_ERRC_WLAN_LWA_DISCONNECT_CNF,
MSG_ID_WAAL_ERRC_WLAN_MEASUREMENT_IND,
MSG_ID_ERRC_CEL_CLC_ERRC_EVDO_PS_CONNECTION_STATUS_IND,
MSG_ID_ERRC_CEL_PSW_ERRC_1XRTT_PS_CONNECTION_STATUS_IND,
MSG_ID_ERRC_ERLCUL_SWITCH_VIRTUAL_CONNECTED_CNF,
MSG_ID_ERRC_ERLCDL_SWITCH_VIRTUAL_CONNECTED_CNF,
MSG_ID_ERRC_EPDCP_SWITCH_VIRTUAL_CONNECTED_CNF,
MSG_ID_RSVAS_EAS_VIRTUAL_CONNECTED_SUSPEND_REQ,
MSG_ID_RSVAS_EAS_VIRTUAL_CONNECTED_RESUME_REQ,
MSG_ID_EXEVT_RCV_END,
MSG_ID_INEVT_BEGIN,
MSG_ID_ERRC_SPV_RCM_INIT_REQ,
MSG_ID_ERRC_SPV_RCM_INIT_CNF,
MSG_ID_ERRC_SPV_RCM_RAT_BAND_REQ,
MSG_ID_ERRC_SPV_RCM_RAT_BAND_CNF,
MSG_ID_ERRC_SPV_RCM_USIM_REQ,
MSG_ID_ERRC_SPV_RCM_USIM_CNF,
MSG_ID_ERRC_ANY_RCM_CONTEXT_WRITE_IND,
MSG_ID_ERRC_ANY_SPV_CHANGE_STATE_REQ,
MSG_ID_ERRC_ANY_SPV_CHANGE_STATE_CNF,
MSG_ID_ERRC_SPV_RCM_PARAM_REQ,
MSG_ID_ERRC_SPV_RCM_PARAM_CNF,
MSG_ID_ERRC_SPV_CEL_PARAM_REQ,
MSG_ID_ERRC_SPV_CEL_PARAM_CNF,
MSG_ID_ERRC_SPV_CONN_KEY_UPDT_REQ,
MSG_ID_ERRC_SPV_CONN_KEY_UPDT_CNF,
MSG_ID_ERRC_SPV_CONN_MBMS_SERVSESS_REQ,
MSG_ID_ERRC_SPV_CONN_MBMS_SERVSESS_CNF,
MSG_ID_ERRC_SPV_CONN_TEST_REQ,
MSG_ID_ERRC_SPV_CONN_TEST_CNF,
MSG_ID_ERRC_SPV_ANY_MBMS_EVENT_IND,
MSG_ID_ERRC_ANY_SPV_MBMS_EVENT_IND,
MSG_ID_ERRC_SPV_CONN_STATUS_UPDATE_REQ,
MSG_ID_ERRC_SPV_ANY_STBY_REQ,
MSG_ID_ERRC_SPV_ANY_STBY_CNF,
MSG_ID_ERRC_SPV_ANY_STANDBY_CMPL_IND,
MSG_ID_ERRC_SPV_ANY_RAT_CHANGE_REQ,
MSG_ID_ERRC_SPV_ANY_RAT_CHANGE_CNF,
MSG_ID_ERRC_ANY_SPV_RAT_CHANGE_IND,
MSG_ID_ERRC_ANY_SPV_RAT_CHANGE_RES,
MSG_ID_ERRC_SPV_ANY_FLIGHT_MODE_REQ,
MSG_ID_ERRC_SPV_ANY_FLIGHT_MODE_CNF,
MSG_ID_ERRC_SPV_ANY_IRTOLTE_SUCCESS_IND,
MSG_ID_ERRC_SPV_CONN_SERVICE_RES_OCCUPY_IND,
MSG_ID_ERRC_SPV_ANY_GEMINI_SUSPEND_REQ,
MSG_ID_ERRC_SPV_ANY_GEMINI_SUSPEND_CNF,
MSG_ID_ERRC_SPV_ANY_GEMINI_RESUME_REQ,
MSG_ID_ERRC_SPV_ANY_GEMINI_RESUME_CNF,
MSG_ID_ERRC_SPV_ANY_GEMINI_RESUME_COMPLETE_IND,
MSG_ID_ERRC_SPV_ANY_GEMINI_VIRTUAL_SUSPEND_REQ,
MSG_ID_ERRC_SPV_ANY_GEMINI_VIRTUAL_SUSPEND_CNF,
MSG_ID_ERRC_SPV_ANY_GEMINI_VIRTUAL_SUSPEND_COMPLETE_IND,
MSG_ID_ERRC_SPV_ANY_GEMINI_VIRTUAL_RESUME_REQ,
MSG_ID_ERRC_SPV_ANY_GEMINI_ABORT_REQ,
MSG_ID_ERRC_SPV_ANY_GEMINI_ABORT_CNF,
MSG_ID_ERRC_SPV_ANY_GEMINI_ABORT_COMPLETE_IND,
MSG_ID_ERRC_SPV_RCM_DUPLEX_MODE_CHANGE_REQ,
MSG_ID_ERRC_SPV_RCM_DUPLEX_MODE_CHANGE_CNF,
MSG_ID_ERRC_CEL_SYS_BCCH_ACT_REQ,
MSG_ID_ERRC_CEL_SYS_BCCH_ACT_CNF,
MSG_ID_ERRC_CEL_SYS_BCCH_DEACT_IND,
MSG_ID_ERRC_SYS_CEL_BCCH_RCVD_IND,
MSG_ID_ERRC_CEL_SYS_DB_UPDT_IND,
MSG_ID_ERRC_CEL_SYS_SOFT_IDX_CHG_IND,
MSG_ID_ERRC_CEL_SYS_PWS_ACT_IND,
MSG_ID_ERRC_CEL_SYS_PWS_DEACT_IND,
MSG_ID_ERRC_SYS_CEL_PWS_RCVD_IND,
MSG_ID_ERRC_SYS_CEL_BCCH_EXPR_IND,
MSG_ID_ERRC_CEL_SYS_CLEAR_DEDICATED_SIB,
MSG_ID_ERRC_CEL_CONN_IDLE_IND,
MSG_ID_ERRC_CONN_CEL_RRC_CONNECTED_REQ,
MSG_ID_ERRC_CONN_CEL_RRC_CONNECTED_CNF,
MSG_ID_ERRC_CONN_CEL_IDLE_REQ,
MSG_ID_ERRC_CEL_CONN_CH_STATUS_IND,
MSG_ID_ERRC_CONN_CEL_REEST_REQ,
MSG_ID_ERRC_CONN_CEL_REEST_CNF,
MSG_ID_ERRC_CONN_CEL_HO_UPDATE_CELL_IND,
MSG_ID_ERRC_CEL_CONN_UPDT_MIB_IND,
MSG_ID_ERRC_CEL_CONN_UPDT_SIB_IND,
MSG_ID_ERRC_CONN_CEL_CNCT_NG_IND,
MSG_ID_ERRC_CEL_CONN_CELL_NO_SUITABLE_IND,
MSG_ID_ERRC_CONN_CEL_REEST_CMPL_REQ,
MSG_ID_ERRC_CONN_CEL_REEST_CMPL_CNF,
MSG_ID_ERRC_CONN_CEL_EST_JDG_REQ,
MSG_ID_ERRC_CONN_CEL_EST_JDG_CNF,
MSG_ID_ERRC_CONN_CEL_CCO_RESULT_IND,
MSG_ID_ERRC_CONN_CEL_MBMS_SCELL_REQ,
MSG_ID_ERRC_CONN_CEL_MBMS_SCELL_CNF,
MSG_ID_ERRC_CONN_MOB_ESTFAIL_REPORT_REQ,
MSG_ID_ERRC_CONN_MOB_ESTFAIL_REPORT_CNF,
MSG_ID_ERRC_CONN_MOB_WLAN_LOST_IND,
MSG_ID_ERRC_CEL_CONN_IRCCO_ABORT_EST_IND,
MSG_ID_ERRC_CEL_CONN_STATE_UNSYNC_IND,
MSG_ID_ERRC_CEL_MOB_KCELLS_REQ,
MSG_ID_ERRC_CEL_MOB_KCELLS_CNF,
MSG_ID_ERRC_MOB_CEL_RESEL_IND,
MSG_ID_ERRC_MOB_CEL_OOS_IND,
MSG_ID_ERRC_CEL_MOB_CELL_REJ_IND,
MSG_ID_ERRC_CEL_MOB_CELL_RJCT_CLR_IND,
MSG_ID_ERRC_MOB_CEL_REST_LIST_IND,
MSG_ID_ERRC_MOB_CEL_NEED_IR_CHANGE_STATUS_IND,
MSG_ID_ERRC_CEL_MOB_UPDATE_CAUSE_IND,
MSG_ID_ERRC_RCM_MOB_USIM_IND,
MSG_ID_ERRC_MOB_CEL_SI_MEAS_IND,
MSG_ID_ERRC_ANY_MOB_MEAS_PRE_CTRL_REQ,
MSG_ID_ERRC_ANY_MOB_MEAS_PRE_CTRL_CNF,
MSG_ID_ERRC_ANY_MOB_MEAS_POST_CTRL_REQ,
MSG_ID_ERRC_ANY_MOB_MEAS_POST_CTRL_CNF,
MSG_ID_ERRC_MOB_CONN_GAP_INTERNAL_CHG_IND,
MSG_ID_ERRC_CEL_MOB_MEAS_REQ,
MSG_ID_ERRC_CEL_MOB_MEAS_CNF,
MSG_ID_ERRC_MOB_CEL_RPT_CGI_REQ,
MSG_ID_ERRC_MOB_CEL_RPT_CGI_CNF,
MSG_ID_ERRC_CEL_MOB_CSG_STATUS_IND,
MSG_ID_ERRC_CEL_MOB_EMERGENCY_STATUS_IND,
MSG_ID_ERRC_ANY_MOB_IR_MEAS_CTRL_REQ,
MSG_ID_ERRC_CEL_MOB_IR_REDIRECT_TO_LTE_IND,
MSG_ID_ERRC_CEL_MOB_MBMS_SCELL_SEARCH_REQ,
MSG_ID_ERRC_CEL_MOB_MBMS_SCELL_SEARCH_CNF,
MSG_ID_ERRC_CEL_MOB_MBMS_SCELL_SEARCH_IND,
MSG_ID_ERRC_ANY_CHM_CH_CTRL_REQ,
MSG_ID_ERRC_ANY_CHM_CH_CTRL_CNF,
MSG_ID_ERRC_CHM_CONN_L1_CTRLING_IND,
MSG_ID_ERRC_CHM_CONN_RLF_IND,
MSG_ID_ERRC_CHM_SYS_BCCH_DL_SYNC_FAIL_IND,
MSG_ID_ERRC_CONN_CHM_LPBK_REQ,
MSG_ID_ERRC_CONN_CHM_LPBK_CNF,
MSG_ID_ERRC_CONN_ANY_SUS_REQ,
MSG_ID_ERRC_CONN_ANY_SUS_CNF,
MSG_ID_ERRC_CONN_ANY_RSM_REQ,
MSG_ID_ERRC_CONN_ANY_RSM_CNF,
MSG_ID_ERRC_ANY_CONN_REEST_IND,
MSG_ID_ERRC_TIMER_EXPR_IND,
MSG_ID_ERRC_TIMER_START_IND,
MSG_ID_ERRC_TIMER_STOP_IND,
MSG_ID_ERRC_RCM_CONN_PWS_CAPA_UPDT_IND,
MSG_ID_ERRC_RCM_ANY_CSG_WHITELIST_UPDATE_IND,
MSG_ID_ERRC_RCM_ANY_ACC_UPDATE_IND,
MSG_ID_ERRC_RCM_ANY_DISABLE_B39_IND,
MSG_ID_ERRC_RCM_ANY_ENABLE_B39_IND,
MSG_ID_ERRC_RCM_CEL_START_HSR_SNIFFER,
MSG_ID_ERRC_RCM_CEL_STOP_HSR_SNIFFER,
MSG_ID_ERRC_MOD_GLOBAL_VAR,
MSG_ID_ERRC_GET_VAR_ADDR,
MSG_ID_ERRC_RETURN_VAR_ADDR,
MSG_ID_ERRC_BCCH_SIB_PTR,
MSG_ID_ERRC_MIB_DATA,
MSG_ID_ERRC_SIB1_DATA,
MSG_ID_ERRC_SIB2_DATA,
MSG_ID_ERRC_SIB3_DATA,
MSG_ID_ERRC_SIB4_DATA,
MSG_ID_ERRC_SIB4_CSG_DATA,
MSG_ID_ERRC_SIB5_DATA,
MSG_ID_ERRC_SIB6_DATA,
MSG_ID_ERRC_SIB7_DATA,
MSG_ID_ERRC_SIB8_DATA,
MSG_ID_ERRC_SIB9_DATA,
MSG_ID_ERRC_SIB10_DATA,
MSG_ID_ERRC_SIB11_DATA,
MSG_ID_ERRC_SIB12_DATA,
MSG_ID_ERRC_SIB13_DATA,
MSG_ID_ERRC_SIB14_DATA,
MSG_ID_ERRC_SIB15_DATA,
MSG_ID_ERRC_SIB16_DATA,
MSG_ID_ERRC_SYS_STS_TBL,
MSG_ID_ERRC_SYS_BCCH_TBL_CTRL_INF,
MSG_ID_ERRC_SYS_PWS_RECEPTION_TBL,
MSG_ID_ERRC_SYS_STORED_INF,
MSG_ID_ERRC_SYS_DLIST_HEAD_INF,
MSG_ID_ERRC_NVM_TBL,
MSG_ID_ERRC_SIM_INFO,
MSG_ID_ERRC_UE_CAPA_MNG_TBL,
MSG_ID_ERRC_PWS_SETTING_TBL,
MSG_ID_ERRC_SPV_TBL,
MSG_ID_ERRC_CHM_CTRL_TBL,
MSG_ID_ERRC_CHM_L1_TABLE,
MSG_ID_ERRC_CHM_L2_TABLE,
MSG_ID_ERRC_FINGERPRINT_RECORD,
MSG_ID_ERRC_LEARNED_MCC_RECORD,
MSG_ID_ERRC_STORED_CELL_INF,
MSG_ID_ERRC_STORED_CARR_DATA,
MSG_ID_ERRC_RCM_TEST,
MSG_ID_ERRC_MRS_API_RESULT,
MSG_ID_ERRC_CHM_API_RESULT,
MSG_ID_ERRC_SPV_API_RESULT,
MSG_ID_ERRC_COMMON_API_RESULT,
MSG_ID_ERRC_CONN_LEAVE_CONNECTED_MODE_IND,
MSG_ID_ERRC_MOB_CONN_FAKE_IRCCO_GCELL_IND,
MSG_ID_ERRC_MRU_TABLE,
MSG_ID_ERRC_MBMS_TBL,
MSG_ID_ERRC_SPV_ANY_C2K_POWER_ON_IND,
MSG_ID_ERRC_SPV_ANY_C2K_POWER_OFF_IND,
MSG_ID_ERRC_SYS_CEL_DEDICATED_SIB1_IND,
MSG_ID_ERRC_RCM_UE_EUTRA_CAP_INFO,
MSG_ID_ERRC_SPV_CEL_RSIM_RESUME_CMPL_IND,
MSG_ID_ERRC_SPV_CONN_VIRTUAL_CONNECTED_SUSPEND_REQ,
MSG_ID_ERRC_SPV_CONN_VIRTUAL_CONNECTED_SUSPEND_CNF,
MSG_ID_ERRC_SPV_CONN_VIRTUAL_CONNECTED_RESUME_REQ,
MSG_ID_ERRC_SPV_CONN_VIRTUAL_CONNECTED_RESUME_CNF,
MSG_ID_ERRC_SIB2_STORED_DATA,
MSG_ID_ERRC_SIB3_STORED_DATA,
MSG_ID_ERRC_SIB4_STORED_DATA,
MSG_ID_ERRC_SIB5_STORED_DATA,
MSG_ID_ERRC_SIB6_STORED_DATA,
MSG_ID_ERRC_SIB7_STORED_DATA,
MSG_ID_ERRC_SIB9_STORED_DATA,
MSG_ID_ERRC_SIB13_STORED_DATA,
MSG_ID_ERRC_SIB15_STORED_DATA,
MSG_ID_ERRC_CHM_LWA_CONFIGURATION,
MSG_ID_INEVT_END,

MODULE_MSG_END( MSG_ID_ERRC_CODE_TAIL )

#endif /* _ERRC_MSGID_H */
