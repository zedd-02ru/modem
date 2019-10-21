/*******************************************************************************
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
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
*******************************************************************************/


 /*******************************************************************************
 * Filename:
 * ---------
 *   l1_types_public.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   Layer1 global types
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Revision:   1.21  $
 * $Modtime:   Aug 05 2005 10:12:46  $
 * $Log:   //mtkvs01/vmdata/Maui_sw/archives/mcu/l1/common/l1_types_public.h-arc  $
 *
 * 06 27 2016 yw.chen
 * [MOLY00186768] [L1D] Modified DIGCON4 Control Flow
 * .
 *
 * 03 02 2016 vineet.g
 * [MOLY00167038] TAS1.1 feature
 *
 * 01 21 2016 siyu.li
 * [MOLY00159775] 2G TAS  antenna idx setting by band
 * .
 *
 * 05 29 2015 rick.wu
 * [MOLY00111246] L+W MM Gemini+ xL1SIM Changes to UMOLY trunk
 * .
 *
 * 05 29 2015 sherman.chung
 * [MOLY00116464] [UMOLY] 2G L1 TAS Check in
 * .
 *
 * 05 29 2015 rick.wu
 * [MOLY00116464] [UMOLY] 2G L1 TAS Check in
 * .
 *
 * 05 05 2015 arkadeep.sett
 * [MOLY00111246] L+W MM Gemini+ xL1SIM Changes to UMOLY trunk
 * 	Propagating L1C and RTB changes for LW_GEMINI from chi-chung.lin Gemini sanity branch to UMOLY trunk
 *
 * 04 20 2015 samuel.yang
 * [MOLY00108029] [TK6291] META mode related modifications
 * .
 *
 * 02 10 2015 yi-ying.lin
 * [MOLY00095496] [L1D][Modify] TK6291 CC NVRAM and custom data modification L1D part
 * 	.
 *
 * 11 07 2014 rick.wu
 * [MOLY00083549] [MT6291] Merge GL1 codes from MT6291_DEV to UMOLY
 * Merge L1C, dummyPS, make and some header files
 *
 * 05 23 2014 rick.wu
 * [MOLY00003141] [Additional SB] New additional SB check in and modify
 * New version check in
 *
 * 02 20 2014 hsin-chun.chen
 * [MOLY00056612] [MT6582LTE][SGLTE][CMCC FT][HZ] DUT Assert fail: modem/gl1/l1_dm/l1c/m11301.c 2302 0x0 0x0 0x0 - L1_2 when TTLIA
 * 	.
 *
 * 01 22 2014 hsin-chun.chen
 * [MOLY00054353] Mapping GAS_n to GL1_n in SGLTE and SGLTE DSDS in accordance with MM.GEMINI check in
 * 	<saved by Perforce>
 *
 * 01 22 2014 rick.wu
 * [MOLY00054324] [4G Gemini][Merge] MOLY.MM.GEMINI.DEV Merge back to MOLY
 * .
 *
 * 03 08 2013 samuel.yang
 * [MOLY00011583] [L1TST][Modify] Resize UTS steps for 2G only project
 * .
 *
 * 01 29 2013 samuel.yang
 * [MOLY00009391] [L1TST][Modify] FHC enhancement interface for combining multi-bands to decrease calibration time
 * .
 * 
 * 08 28 2012 samuel.yang
 * [MOLY00002781] [L1D][Modify] Revise MSBB2 coding
 * .
 * 
 * 08 15 2012 sy.yeh
 * [MOLY00001800] [GL1][LL1] R8 APBCR check in
 * . remove __GERAN_R8__ from l1_types_public.h since it is a modem internal option.
 *
 * 01 06 2012 sy.yeh
 * removed!
 * .
 *
 * 12 02 2011 victo.chen
 * removed!
 * .
 *
 * 06 08 2011 samuel.yang
 * removed!
 * .
 *
 *******************************************************************************/

#ifndef l1_types_public_h
#define l1_types_public_h

#include "l1_option.h"
#include "l1_public_defs.h"
#include "mph_types.h"
#include "kal_general_types.h"

#include "l1_gemini_def.h"

typedef kal_int8   int8;
typedef kal_int16  int16;
typedef kal_int32  int32;
typedef kal_int64  int64;
typedef kal_int32  intx;
typedef kal_uint8  uint8;
typedef kal_uint16 uint16;
typedef kal_uint32 uint32;
typedef kal_uint32 uintx;
typedef kal_bool   bool;

#define false KAL_FALSE
#define true  KAL_TRUE


/* --- GSM primitive types ------------------------------------------------- */

typedef int16  Gain; /* in 0.125 dB *//* !!important: please update the copy in m12194.c */
typedef uint32 TimeStamp; /* redefine in l1-CORE_PRIVATE.H */

/*
@enum ReportType_FT | Type of a report for factory testing.
*/
typedef enum
{
   ReportFTNone,             /* @emem No valid report. */
   ReportFTReportPeriodDone, /* @emem End of report period. */
   ReportFTPowerScanDone,    /* @emem Power scan results. */
   ReportFTFCCh,             /* @emem FCCh result. */
#if MD_DRV_IS_FHC_SUPPORT
   ReportFTDTS,
   ReportFTUTS,
#endif
#if MD_DRV_IS_NSFT_SUPPORT
   ReportFTNSFT,
#endif
   ReportFTEnd               /* @emem No valid report. Marks end of <t ReportType> enumeration */
} ReportType_FT;

/* For Gemini*/
typedef enum
{
    L1C_SIM1    = 0x00
#if defined(__GL1_GEMINI__)
    ,L1C_SIM2    = 0x01
#endif    
#if (GL1_GEMINI_NUM >= 3)
    ,L1C_SIM3    = 0x02
#endif    
#if (GL1_GEMINI_NUM >= 4)
    ,L1C_SIM4    = 0x03
#endif
    ,L1C_SIM_NUM
} l1c_sim_mode_enum;


/* Create a general enum for LWG or LTG to represent the number of MM SIMs.
Currently only WCDMA may have SIMx service */
typedef enum
{
#ifdef __GL1_MULTI_MODE__
    L1C_MM_SIM1    = 0x00,
#if defined(__GL1_GEMINI_WCDMA__)
    L1C_MM_SIM2    = 0x01,
#endif    
#if (GL1_GEMINI_WCDMA_NUM >= 3)
    L1C_MM_SIM3    = 0x02,
#endif    
#if (GL1_GEMINI_WCDMA_NUM >= 4)
    L1C_MM_SIM4    = 0x03,
#endif
#endif /* __GL1_MULTI_MODE__ */
    L1C_MM_SIM_NUM
} l1c_mm_sim_mode_enum;
/*
@struct Time | GSM time.
*/
typedef struct
{
   FrameNumber frame; /* @field Frame number */
   intx        ebits; /* @field Eighth bits */
} Time;

typedef struct MeasurementsStruct Measurements;
struct MeasurementsStruct
{
/* --- must be initialised by called of L1I_StartMeasurements() --- */

   /* not changed by measurement manager */

   ARFCN       ( *get )( Measurements* meas, int index );
   void        ( *put )( Measurements* meas, int index, Power power );
   void        ( *done )( Measurements* meas, intx measurementsDone );

   intx           indexCount;
   intx           measurementCount; /* number of measurements to be performed */

/* --- private data of measurement manager --- */

   intx           started;      /* total number of measurements started */
   intx           finished;     /* total number of measurements completed */
   intx           sessionLimit; /* total number of measurments to be done before session ends */
   intx           startIndex;
   intx           resultIndex;
#if IS_GL1_NEW_GEMINI
   uint8          runIndex;   /* record the index of session run*/
#endif /* IS_GL1_NEW_GEMINI */
   bool           is_stopped;
#if defined(__GL1_GEMINI__)
   l1c_sim_mode_enum  sim_mode;
#endif
};

#if MD_DRV_IS_FHC_SUPPORT

#define L1_MAX_DTS_STEP_CNT  100
   #if defined(__UMTS_RAT__)
#define L1_MAX_UTS_STEP_CNT  100
   #else
#define L1_MAX_UTS_STEP_CNT   50
   #endif

typedef struct
{
    int32         power[L1_MAX_DTS_STEP_CNT-2];
    int16         valid_sample[L1_MAX_DTS_STEP_CNT-2];
    bool          ok;
} ResultDSSPL;

typedef struct
{
    int32         freq_offset[33];  // only valid when 33 stage calibration is True
    int32         deviation[33];    // only valid when 33 stage calibration is True
    int16         fcb_ok_number[33];
    int32         capid;            // only valid when capid calibration is True
    int16         init_dac_value;   // only valid when 33 stage calibration is False
    int32         slope;            // only valid when 33 stage calibration is False
    bool          ok;
} ResultDSSAfc;

typedef struct
{
    int32         cload_freq_offset;
    bool          ok;
    bool          is_perform_cal;
} ResultDSSLPM;

typedef struct
{
    ResultDSSPL   PLResult;
    ResultDSSAfc  AfcResult;
    ResultDSSLPM  LPMResult;
//  bool          ok;
} ResultDTS;
#endif


typedef enum
{
   AdditionalSB,
   PeekSB,
   ThermalSB
} SBType;  //The same with L1I_Str_ServingSB


/*
@struct SChData | Report data for sync burst reporting.
*/
typedef struct
{
   ARFCN     arfcn;
   bool      ok;            /* @field Sync burst status. Set by the baseband driver.
                               @flag false | Burst was bad. Other fields in this structure are invalid.
                               @flag true | Burst was OK. Other fields in this structure are valid. */
   bool      fcb_ok;
   intx      frameDelay;    /* @field Frame where sync burst has been received relative to the frame where <f L1T_FCChStart> was called. . Set by the baseband driver. */
   intx      ebitDelay;     /* @field Position of sync burst relative to current frame start in eighth bits. Set by the baseband driver. */
   BlockData data[ 4 ];     /* @field Sync burst data. Set by the baseband driver. */

   Time      bsTimingOffset; /* @field Timing offset of the base station relative to the mobiles current
                                       synchronisation. Calculated by layer1 */
   FrameNumber bsFrame;      /* @field Frame number decoded from the sync burst. Calculated by layer1. */
   BSIC      bsic;           /* @field BSIC number decoded from the sync burst. Calculated by layer1. */
   Time      rxTime;         /* @field Time the sync burst has been received. Calculated by layer1. */

   bool      hardwareUnavailable; /* special flag returned by SChT only if SCh was aborted because hardware
                                     was occupied by higher priority operation */
   bool      extBsic;        /* @field A flag to indicate if Extended measurement BSIC */
   bool      manual;         /* @distinguish manual or surrounding */
   bool      enhancePM;      /* default value is false*/
                             /* Set true for usage enhanced power measurement to update AGC ahead of FB/SB search in blind handover*/

/* Tier-1 Modem */  int16     snr;
/* Tier-1 Modem */  intx      bitErrorCount;

  uint8 bsic_tid; /* for distinguish from different transaction  */

#ifdef __UMTS_RAT__
   bool      ready_to_report;   /* True if L1C is ready to report SCh result to L1A, false otherwise. */
   TimeStamp timeStamp; 
#endif
#ifdef __GL1_MULTI_MODE__
   uint8 fbWinOffDelay;  /* FB win will be closed after "fbWinOffDelay" CT1 when L1C gets FCCh report. */
#endif 
} SChData;

typedef struct
{
   int32              power;
   int32              iOffset;
   int32              qOffset;
   int32              deviation;
   int32              validSamples;
   Gain               usedGain;
   Measurements       meas;
} PM_TST_Data;

/*
@union ReportData | Contains report information for factory testing
*/
typedef union
{
   SChData                *sch;          /* @field Results of FCB and SB search */
   PM_TST_Data            *pm_tst;       /* @field power meas results in test mode */
#if MD_DRV_IS_FHC_SUPPORT
   ResultDTS              *dts_result;
#endif
} ReportData_FT;

/*
@struct Report | Results of operations for factory testing.
*/
typedef struct
{
   ReportType_FT  type; /* @field Type of report */
   ReportData_FT  data; /* @field Contains information dependent on the <e Report.type> field */
} Report_FT;

/*
@struct sBBTXCfg | used to set/get run-time BBTX param
*/
typedef struct
{
   int8   TxTrimI;
   int8   TxTrimQ;
   int8   TxOffsetI;
   int8   TxOffsetQ;
   int8   TxCalbias;
   int8   TxIQSwap;
   int8   TxCMV;
   int8   TxGain;
   int8   TxCalrcsel;
   int8   TxPhasesel;
   int8   TxDccoarseI;
   int8   TxDccoarseQ;
} sBBTXCfg;

typedef enum
{
   GL1_ANTENNA_0,
   GL1_ANTENNA_1,
   GL1_ANTENNA_MAX = GL1_ANTENNA_1
} AntennaStatus;

typedef struct
{
   AntennaStatus        status;
} TransmitAntenna;

typedef struct
{
   kal_bool     FORCE_TX_ANTENNA_ENABLE;  /* 0: off 1: Don't change antenna                                          */
   kal_uint8    FORCE_TX_ANTENNA_IDX;     /* The antenna which user forces to stay                                   */
   kal_bool     EN_TAS;                   /* 0: off   1: enable TS feature                                           */
   kal_bool     EN_TAS_WITH_TEST_SIM;     /* 0: off   1: enable TS feature                                           */
   kal_uint8    EN_BAND;                  /* b0:band 850,b1:band 900,b2:band 1800,b3:band 1900                       */
   kal_uint8    ANT_SEL_INIT;             /* Default antenna                                                         */
   kal_bool     EN_TAS_FOR_C2K;           /* 0: off   1: enable TAS for C2K feature                                   */
} TASPublicParams;

typedef struct
{
   kal_int16     TH_RXLEV;				   /* Enable TAS if RXLEV < TH_RXLEV										  */
   kal_int16     TH_RXLEV_PS;			   /* Enable TAS if RXLEV < TH_RXLEV_PS in PTM             	*/
   kal_int16     S_RXLEV;                  /* Hysteresis for RXLEV comparison between 2 antennas(dB)     */
   kal_int32     FORCE_CHANGE_IDLE; 	   /* Maximal period that adopted antenna remains unchanged at idle mode	  */
   kal_int32     FORCE_CHANGE_DEDICATED;   /* Maximal period that adopted antenna remains unchanged at dedicated mod  */
   kal_int32     PERIOD_IDLE;              /* Checking period of TAS criterion at idle mode 						  */  
   kal_int32     PERIOD_DEDICATED;         /* Checking period of TAS criterion at dedicated mode; unit: 208 frames	  */
   kal_uint16    TH_SNR;                  /* SNR threshold, used in criterion 1                                                  */
   kal_uint8     TH_PCL[FrequencyBandCount]; /* PCL threshold, used in criterion 1 in connected mode                             */
   kal_uint8     S_SNR_BLOCK;             /* Hysteresis for block-average SNR comparison between 2 antennas, need to divide by 8 */
   kal_uint8     S_SNR_SMOOTH;            /* Hysteresis for smoothing SNR comparison between 2 antennas, need to divide by 8     */
   kal_bool      FORCE_POWER_SCAN_ANT;    /* 0: off    1: Force antenna utilizing in power scan state */
} TASPrivateParams;

typedef struct
{
   kal_uint8 TAS_INIT_ANT_IDX[FrequencyBandCount];  
} TASInitANTParams;
typedef TASPublicParams    sL1_TAS_CUSTOM_PARAMS ;
typedef TASPrivateParams   sL1_TAS_LIB_PARAMS ;
typedef TASInitANTParams   sL1_TAS_INIT_ANT_PARAMS;

typedef enum
{
   CONT_TX_ALL_ZEROS
  ,CONT_TX_ALL_ONES
  ,CONT_TX_ALTERNATE_BITS
  ,CONT_TX_PSEUDO_RANDOM
  ,CONT_TX_PATTERN_WITHOUT_TSC
} ContTxPattern;

typedef enum
{
   AB_TX_RANDOM_WITH_SYNC_SEQ
  ,NB_TX_ALL_ZEROS_WITHOUT_TSC
  ,NB_TX_ALL_ONES_WITHOUT_TSC
  ,NB_TX_ALTER_BITS_WITHOUT_TSC
  ,NB_TX_RANDOM_WITH_TSC
  ,NB_TX_PATTERN_WITHOUT_TSC
  ,NB_TX_FIXED_RANDOM_WITH_TSC
  ,NB_TX_FIXED_ALL_ZEROS_WITH_TSC
  ,NB_TX_FIXED_ALTER_BITS_WITH_TSC
  ,NB_TX_FIXED_ALL_ONES_WITH_TSC
  ,NB_TX_FIXED_OE_PATTERN_WITH_TSC
} APCTxPattern;

typedef enum
{
   TDD_TX_START    = 0,
   TDD_TX_END,
   GSM_ABB_INIT,
   GSM_TX,
   GSM_POWER_OFF
} L1D_APC_ENABLE_STATE;

void L1D_RF_Set_Mixedsys_2G_APC_Select( L1D_APC_ENABLE_STATE TX_State );

#endif