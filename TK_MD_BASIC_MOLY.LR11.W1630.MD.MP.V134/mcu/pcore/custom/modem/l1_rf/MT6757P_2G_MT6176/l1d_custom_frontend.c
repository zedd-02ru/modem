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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   l1d_custom_frontend.c
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   2G front end data 
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Revision: $
 * $Modtime:  $
 * $Log:      $
 *
 * 11 22 2016 prakash.chaudhary
 * [MOLY00207476] [2GL1D][MT6750]2G TAS  antenna idx setting by band
 * 	
 * 	.
 *
 * 01 27 2016 money.kang
 * [MOLY00163003] [MakeFile] [New Project/Flavor Request] Create MT6757_SP(LWCTG).mak
 * change copy from MT6750_2G_MT6176
 * request from Peter Hsu (22893).
 *
 * 01 05 2016 dou.ju
 * [MOLY00155318] Switching Tx power feature 2G part
 * 	
 * 	.
 *
 * 10 21 2015 wiley.li
 * [MOLY00145797] [L1D][Modify] Add ramp profile rollback feature
 * 	.
 *
 * 09 15 2015 dou.ju
 * [MOLY00140126] [Jade][GL1D RF]DRDI code enhancement
 * 	.
 *
 * 07 30 2015 dou.ju
 * [MOLY00133157] [Jade] DRDI code modification FIX build error
 * 	.
 *
 * 	.
 *
 *
 *******************************************************************************/

#include "m12197_pcore.h"
#include "l1d_custom_def.h"
#include "l1d_custom_rf.h"
#include "l1d_rf_pcore.h"
#if IS_MIPI_SUPPORT
#include "l1d_custom_mipi.h"
#include "l1d_mipi_pcore.h"
#endif


#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2

#ifndef  GSM_ERR_DET_ID_SetDefault
#define  GSM_ERR_DET_ID_SetDefault        9  //<--temp use, each rf should define this in l1d_custom_rf.h
#endif


   #if IS_RF_MT6140D
#define RF_TYPE_SetDefault      1
   #elif IS_RF_AD6548
#define RF_TYPE_SetDefault      2
   #elif IS_RF_AD6546
#define RF_TYPE_SetDefault      3
   #elif IS_RF_MT6162
#define RF_TYPE_SetDefault      4
   #else
#define RF_TYPE_SetDefault      1
   #endif

   #if !IS_BSI_TRIG_OFFCHIP_BPI_SUPPORT
#define PDATA_GSM850_SR0_SetDefault 0
#define PDATA_GSM850_SR3_SetDefault 0
#define PDATA_GSM850_ST0_SetDefault 0
#define PDATA_GSM850_ST3_SetDefault 0
#define PDATA_GSM_SR0_SetDefault    0
#define PDATA_GSM_SR3_SetDefault    0
#define PDATA_GSM_ST0_SetDefault    0
#define PDATA_GSM_ST3_SetDefault    0
#define PDATA_DCS_SR0_SetDefault    0
#define PDATA_DCS_SR3_SetDefault    0
#define PDATA_DCS_ST0_SetDefault    0
#define PDATA_DCS_ST3_SetDefault    0
#define PDATA_PCS_SR0_SetDefault    0
#define PDATA_PCS_SR3_SetDefault    0
#define PDATA_PCS_ST0_SetDefault    0
#define PDATA_PCS_ST3_SetDefault    0
   #endif
/*-------------------------------------------------------For DRDI Start----------------------------------------------------------*/
const sL1D_RF_CUSTOM_INPUT_DATA l1d_rf_custom_input_data_SetDefault=
{
   0x12345678,                                                            // the special pattern of start position
   1,                                                                     // Struct Version ID
   RF_TYPE_SetDefault,                                                               // default set MT6140D_RF
   1,                                                                     // default is false, and will be changed  as true after tool update
   //sRF_BPI_VARIABLE
   {
      PDATA_GSM850_PR1_SetDefault,
      PDATA_GSM850_PR2_SetDefault,
      PDATA_GSM850_PR2B_SetDefault,
      PDATA_GSM850_PR3_SetDefault,
      PDATA_GSM850_PR3A_SetDefault,
      PDATA_GSM850_PT1_SetDefault,
      PDATA_GSM850_PT2_SetDefault,
      PDATA_GSM850_PT2B_SetDefault,
      PDATA_GSM850_PT3_SetDefault,
      PDATA_GSM850_PT3A_SetDefault,
      PDATA_GSM_PR1_SetDefault,
      PDATA_GSM_PR2_SetDefault,
      PDATA_GSM_PR2B_SetDefault,
      PDATA_GSM_PR3_SetDefault,
      PDATA_GSM_PR3A_SetDefault,
      PDATA_GSM_PT1_SetDefault,
      PDATA_GSM_PT2_SetDefault,
      PDATA_GSM_PT2B_SetDefault,
      PDATA_GSM_PT3_SetDefault,
      PDATA_GSM_PT3A_SetDefault,
      PDATA_DCS_PR1_SetDefault,
      PDATA_DCS_PR2_SetDefault,
      PDATA_DCS_PR2B_SetDefault,
      PDATA_DCS_PR3_SetDefault,
      PDATA_DCS_PR3A_SetDefault,
      PDATA_DCS_PT1_SetDefault,
      PDATA_DCS_PT2_SetDefault,
      PDATA_DCS_PT2B_SetDefault,
      PDATA_DCS_PT3_SetDefault,
      PDATA_DCS_PT3A_SetDefault,
      PDATA_PCS_PR1_SetDefault,
      PDATA_PCS_PR2_SetDefault,
      PDATA_PCS_PR2B_SetDefault,
      PDATA_PCS_PR3_SetDefault,
      PDATA_PCS_PR3A_SetDefault,
      PDATA_PCS_PT1_SetDefault,
      PDATA_PCS_PT2_SetDefault,
      PDATA_PCS_PT2B_SetDefault,
      PDATA_PCS_PT3_SetDefault,
      PDATA_PCS_PT3A_SetDefault,
      PDATA_GSM850_PR2M1_SetDefault,
      PDATA_GSM850_PR2M2_SetDefault,
      PDATA_GSM850_PR2M3_SetDefault,
      PDATA_GSM850_PT2M1_G8_SetDefault,
      PDATA_GSM850_PT2M2_G8_SetDefault,
      PDATA_GSM850_PT2M3_G8_SetDefault,
      PDATA_GSM850_PT2M1_8G_SetDefault,
      PDATA_GSM850_PT2M2_8G_SetDefault,
      PDATA_GSM850_PT2M3_8G_SetDefault,
      PDATA_GSM_PR2M1_SetDefault,
      PDATA_GSM_PR2M2_SetDefault,
      PDATA_GSM_PR2M3_SetDefault,
      PDATA_GSM_PT2M1_G8_SetDefault,
      PDATA_GSM_PT2M2_G8_SetDefault,
      PDATA_GSM_PT2M3_G8_SetDefault,
      PDATA_GSM_PT2M1_8G_SetDefault,
      PDATA_GSM_PT2M2_8G_SetDefault,
      PDATA_GSM_PT2M3_8G_SetDefault,
      PDATA_DCS_PR2M1_SetDefault,
      PDATA_DCS_PR2M2_SetDefault,
      PDATA_DCS_PR2M3_SetDefault,
      PDATA_DCS_PT2M1_G8_SetDefault,
      PDATA_DCS_PT2M2_G8_SetDefault,
      PDATA_DCS_PT2M3_G8_SetDefault,
      PDATA_DCS_PT2M1_8G_SetDefault,
      PDATA_DCS_PT2M2_8G_SetDefault,
      PDATA_DCS_PT2M3_8G_SetDefault,
      PDATA_PCS_PR2M1_SetDefault,
      PDATA_PCS_PR2M2_SetDefault,
      PDATA_PCS_PR2M3_SetDefault,
      PDATA_PCS_PT2M1_G8_SetDefault,
      PDATA_PCS_PT2M2_G8_SetDefault,
      PDATA_PCS_PT2M3_G8_SetDefault,
      PDATA_PCS_PT2M1_8G_SetDefault,
      PDATA_PCS_PT2M2_8G_SetDefault,
      PDATA_PCS_PT2M3_8G_SetDefault,
      PDATA_INIT_SetDefault,
      PDATA_IDLE_SetDefault,
      PDATA_GMSK_SetDefault,
      PDATA_8PSK_SetDefault,
      {  // sRF_PDATA_OFFCHIP
         { PDATA_GSM850_SR0_SetDefault, PDATA_GSM850_SR3_SetDefault, PDATA_GSM850_ST0_SetDefault, PDATA_GSM850_ST3_SetDefault, }, /* GSM850 */
         { PDATA_GSM_SR0_SetDefault,    PDATA_GSM_SR3_SetDefault,    PDATA_GSM_ST0_SetDefault,    PDATA_GSM_ST3_SetDefault,    }, /* GSM    */
         { PDATA_DCS_SR0_SetDefault,    PDATA_DCS_SR3_SetDefault,    PDATA_DCS_ST0_SetDefault,    PDATA_DCS_ST3_SetDefault,    }, /* DCS    */
         { PDATA_PCS_SR0_SetDefault,    PDATA_PCS_SR3_SetDefault,    PDATA_PCS_ST0_SetDefault,    PDATA_PCS_ST3_SetDefault,    }, /* PCS    */
      },
   },
   //sRF_TIMING_VARIABLE
   {
      QB_RX_FENA_2_FSYNC,
      QB_RX_FSYNC_2_FENA,
      QB_TX_FENA_2_FSYNC,
      QB_TX_FSYNC_2_FENA,
      QB_SR0_SetDefault,
      QB_SR1_SetDefault,
      QB_SR2_SetDefault,
      QB_SR3_SetDefault,
      QB_SR2M_SetDefault,
      QB_PR1_SetDefault,
      QB_PR2_SetDefault,
      QB_PR2B_SetDefault,
      QB_PR3_SetDefault,
      QB_PR3A_SetDefault,
      QB_PR2M1_SetDefault,
      QB_PR2M2_SetDefault,
      QB_ST0_SetDefault,
      QB_ST1_SetDefault,
      QB_ST2_SetDefault,
      QB_ST2B_SetDefault,
      QB_ST3_SetDefault,
      QB_ST2M_G8_SetDefault,
      QB_ST2M_8G_SetDefault,
      QB_PT1_SetDefault,
      QB_PT2_SetDefault,
      QB_PT2B_SetDefault,
      QB_PT3_SetDefault,
      QB_PT3A_SetDefault,
      QB_PT2M1_G8_SetDefault,
      QB_PT2M2_G8_SetDefault,
      QB_PT2M3_G8_SetDefault,
      QB_PT2M1_8G_SetDefault,
      QB_PT2M2_8G_SetDefault,
      QB_PT2M3_8G_SetDefault,
      QB_APCON_SetDefault,
      QB_APCMID_SetDefault,
      QB_APCOFF_SetDefault,
      QB_APCDACON_SetDefault,
      QR_BOFF_2_IDLE_SetDefault,
   },
   //sRF_APC_COMPENSATE_VARIABLE
   {
      BAT_VOLTAGE_SAMPLE_PERIOD_SECOND_SetDefault,     //BAT_VOLTAGE_SAMPLE_PERIOD,
      BAT_VOLTAGE_AVERAGE_COUNT_SetDefault,            //BAT_VOLTAGE_AVERAGE_COUNT,
      BAT_TEMPERATURE_SAMPLE_PERIOD_SECOND_SetDefault, //BAT_TEMPERATURE_SAMPLE_PERIOD,
      BAT_TEMPERATURE_AVERAGE_COUNT_SetDefault,        //BAT_TEMPERATURE_AVERAGE_COUNT,
      //(BAT_LOW_VOLTAGE_TRHESHOLD*10),       //BAT_LOW_VOLTAGE,
      //(BAT_HIGH_VOLTAGE_TRHESHOLD*10),      //BAT_HIGH_VOLTAGE,
      //BAT_LOW_TEMPERATURE_TRHESHOLD,        //BAT_LOW_TEMPERATURE,
      //BAT_HIGH_TEMPERATURE_TRHESHOLD,       //BAT_HIGH_TEMPERATURE,
      RF_TEMPERATURE_SAMPLE_PERIOD_SECOND_SetDefault,  //RF_TEMPERATURE_SAMPLE_PERIOD,     // OH
      RF_TEMPERATURE_AVERAGE_COUNT_SetDefault,         //RF_TEMPERATURE_AVERAGE_COUNT,     // OH
   },
   //sRF_PCL_VARIABLE
   {
      RFDEF,                            // txios_highpcl_850_GMSK;
      RFDEF,                            // txios_highpcl_900_GMSK;
      RFDEF,                            // txios_highpcl_DCS_GMSK;
      RFDEF,                            // txios_highpcl_PCS_GMSK;
      RFDEF,                            // txios_highpcl_850_EPSK;
      RFDEF,                            // txios_highpcl_900_EPSK;
      RFDEF,                            // txios_highpcl_DCS_EPSK;
      RFDEF,                            // txios_highpcl_PCS_EPSK;
      RFDEF,                            // txios_lowpcl_850_GMSK;
      RFDEF,                            // txios_lowpcl_900_GMSK;
      RFDEF,                            // txios_lowpcl_DCS_GMSK;
      RFDEF,                            // txios_lowpcl_PCS_GMSK;
      RFDEF,                            // txios_lowpcl_850_EPSK;
      RFDEF,                            // txios_lowpcl_900_EPSK;
      RFDEF,                            // txios_lowpcl_DCS_EPSK;
      RFDEF,                            // txios_lowpcl_PCS_EPSK;
   },
   //sRF_LBMOD_GC_VARIABLE
   {
      RFDEF,                            // lbmod_gc_highpcl_850_GMSK;
      RFDEF,                            // lbmod_gc_highpcl_900_GMSK;
      RFDEF,                            // lbmod_gc_highpcl_DCS_GMSK;
      RFDEF,                            // lbmod_gc_highpcl_PCS_GMSK;
      RFDEF,                            // lbmod_gc_highpcl_850_EPSK;
      RFDEF,                            // lbmod_gc_highpcl_900_EPSK;
      RFDEF,                            // lbmod_gc_highpcl_DCS_EPSK;
      RFDEF,                            // lbmod_gc_highpcl_PCS_EPSK;
      RFDEF,                            // lbmod_gc_lowpcl_850_GMSK;
      RFDEF,                            // lbmod_gc_lowpcl_900_GMSK;
      RFDEF,                            // lbmod_gc_lowpcl_DCS_GMSK;
      RFDEF,                            // lbmod_gc_lowpcl_PCS_GMSK;
      RFDEF,                            // lbmod_gc_lowpcl_850_EPSK;
      RFDEF,                            // lbmod_gc_lowpcl_900_EPSK;
      RFDEF,                            // lbmod_gc_lowpcl_DCS_EPSK;
      RFDEF,                            // lbmod_gc_lowpcl_PCS_EPSK;
   },
   //sRF_HBMOD_GC_VARIABLE
   {
      RFDEF,                             // hbmod_gc_highpcl_850_GMSK;
      RFDEF,                             // hbmod_gc_highpcl_900_GMSK;
      RFDEF,                             // hbmod_gc_highpcl_DCS_GMSK;
      RFDEF,                             // hbmod_gc_highpcl_PCS_GMSK;
      RFDEF,                             // hbmod_gc_highpcl_850_EPSK;
      RFDEF,                             // hbmod_gc_highpcl_900_EPSK;
      RFDEF,                             // hbmod_gc_highpcl_DCS_EPSK;
      RFDEF,                             // hbmod_gc_highpcl_PCS_EPSK;
      RFDEF,                             // hbmod_gc_lowpcl_850_GMSK;
      RFDEF,                             // hbmod_gc_lowpcl_900_GMSK;
      RFDEF,                             // hbmod_gc_lowpcl_DCS_GMSK;
      RFDEF,                             // hbmod_gc_lowpcl_PCS_GMSK;
      RFDEF,                             // hbmod_gc_lowpcl_850_EPSK;
      RFDEF,                             // hbmod_gc_lowpcl_900_EPSK;
      RFDEF,                             // hbmod_gc_lowpcl_DCS_EPSK;
      RFDEF,                             // hbmod_gc_lowpcl_PCS_EPSK;
   },
   //sRF_ITC_PCL_VARIABLE
   {
      RFDEF,                             // txitc_highpcl_850_GMSK;
      RFDEF,                             // txitc_highpcl_900_GMSK;
      RFDEF,                             // txitc_highpcl_DCS_GMSK;
      RFDEF,                             // txitc_highpcl_PCS_GMSK;
      RFDEF,                             // txitc_highpcl_850_EPSK;
      RFDEF,                             // txitc_highpcl_900_EPSK;
      RFDEF,                             // txitc_highpcl_DCS_EPSK;
      RFDEF,                             // txitc_highpcl_PCS_EPSK;
      RFDEF,                             // txitc_lowpcl_850_GMSK;
      RFDEF,                             // txitc_lowpcl_900_GMSK;
      RFDEF,                             // txitc_lowpcl_DCS_GMSK;
      RFDEF,                             // txitc_lowpcl_PCS_GMSK;
      RFDEF,                             // txitc_lowpcl_850_EPSK;
      RFDEF,                             // txitc_lowpcl_900_EPSK;
      RFDEF,                             // txitc_lowpcl_DCS_EPSK;
      RFDEF,                             // txitc_lowpcl_PCS_EPSK;
   },
   //sRF_TX_POWERFEEDBACK_VARIABLE
   {
      RFDEF_short,
      QB_TX_SAMPLE_OFFSET_GMSK,
      QB_TX_SAMPLE_OFFSET_EPSK,
      TXPC_EPSK_TP_SLOPE_LB_SetDefault,
      TXPC_EPSK_TP_SLOPE_HB_SetDefault,
   },
   //sRF_TX_POWER_ROLLBACK_VARIABLE
   //{
   //   {GSM850_TX_ROLLBACK_2T_GMSK, GSM850_TX_ROLLBACK_3T_GMSK, GSM850_TX_ROLLBACK_4T_GMSK, GSM850_TX_ROLLBACK_5T_GMSK},//GMSK
   //   {GSM_TX_ROLLBACK_2T_GMSK,    GSM_TX_ROLLBACK_3T_GMSK,    GSM_TX_ROLLBACK_4T_GMSK,    GSM_TX_ROLLBACK_5T_GMSK   },
   //   {DCS_TX_ROLLBACK_2T_GMSK,    DCS_TX_ROLLBACK_3T_GMSK,    DCS_TX_ROLLBACK_4T_GMSK,    DCS_TX_ROLLBACK_5T_GMSK   },
   //   {PCS_TX_ROLLBACK_2T_GMSK,    PCS_TX_ROLLBACK_3T_GMSK,    PCS_TX_ROLLBACK_4T_GMSK,    PCS_TX_ROLLBACK_5T_GMSK   },
   //   {GSM850_TX_ROLLBACK_2T_EPSK, GSM850_TX_ROLLBACK_3T_EPSK, GSM850_TX_ROLLBACK_4T_EPSK, GSM850_TX_ROLLBACK_5T_EPSK},//8PSK
   //   {GSM_TX_ROLLBACK_2T_EPSK,    GSM_TX_ROLLBACK_3T_EPSK,    GSM_TX_ROLLBACK_4T_EPSK,    GSM_TX_ROLLBACK_5T_EPSK   },
   //   {DCS_TX_ROLLBACK_2T_EPSK,    DCS_TX_ROLLBACK_3T_EPSK,    DCS_TX_ROLLBACK_4T_EPSK,    DCS_TX_ROLLBACK_5T_EPSK   },
   //   {PCS_TX_ROLLBACK_2T_EPSK,    PCS_TX_ROLLBACK_3T_EPSK,    PCS_TX_ROLLBACK_4T_EPSK,    PCS_TX_ROLLBACK_5T_EPSK   },
   //},
   //sRF_RX_BAND_VARIABLE;
   {
      GSM850_PATH_SEL_SetDefault,
      GSM_PATH_SEL_SetDefault,
      DCS_PATH_SEL_SetDefault,
      PCS_PATH_SEL_SetDefault,
   },
   //sRF_OTHERS_VARIABLE
   {
      //Custom_RF_XO_CapID,
      //PSI_EE,
      //C_PSI_STA,
      IS_EGSM900_DISABLE,	
      //GSM850_GSM900_SWAP,
      //DCS1800_PCS1900_SWAP,
      GSM_ERR_DET_ID_SetDefault, //OH
      TX_PROPAGATION_DELAY_SetDefault,
      TQ_EPSK_TX_DELAY,
      IS_2G_MIPI_ENABLE_SetDefault,
      IS_RAMPPROFILE_ROLLBACK_ENABLE_SetDefault, // enable rampprofile rollback
   },
   //sRF_AFC_TRACKING_VARIABLE
   {
      0,
      416,
      16,
   },
   //sRF_CLK_BUFFER_VARIABLE
   {
      CLK1_EN_SetDefault,
      CLK2_EN_SetDefault,
      CLK3_EN_SetDefault,
      CLK4_EN_SetDefault,
   },
   
   0x87654321,                         //the special pattern of end2 position

};

#endif //#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*-------------------------------------------------------For DRDI End----------------------------------------------------------*/

#if (IS_2G_TAS_SUPPORT||IS_2G_TAS_FOR_C2K_ONOFF_SUPPORT)
const sL1_TAS_CUSTOM_PARAMS L1_TAS_Custom_Params_SetDefault=
{
   L1D_FORCE_TX_ANTENNA_ENABLE_SetDefault,             /* 0: off 1: Don't change antenna                                             */
   L1D_FORCE_TX_ANTENNA_IDX_SetDefault,                /* The antenna which user forces to stay                                      */
   L1D_EN_TAS_SetDefault,                              /* 0: off   1: enable TS feature                                              */
   L1D_EN_TAS_WITH_TEST_SIM_SetDefault,                /* 0: off   1: enable TS feature with Test SIM                                */
   L1D_EN_BAND_SetDefault,                             /* b0:band 850,b1:band 900,b2:band 1800,b3:band 1900                          */
   L1D_ANT_SEL_INIT_SetDefault,                        /* Default antenna                                                            */
   L1D_EN_TAS_FOR_C2K_SetDefault,                      /* 0: off   1: enable TAS for C2K feature*/
};
   #if IS_2G_TAS_ANT_IDX_SET_ON_TEST_SIM
const sL1_TAS_INIT_ANT_PARAMS L1_TAS_Init_Ant_Params_SetDefault=
{
   0,
   L1D_TAS_INIT_ANT_GSM850_SetDefault,
   L1D_TAS_INIT_ANT_GSM900_SetDefault,
   L1D_TAS_INIT_ANT_DCS1800_SetDefault,
   L1D_TAS_INIT_ANT_PCS1900_SetDefault,
};
   #endif

const sL1_TAS_CUSTOM_PDATA L1_TAS_Custom_PData_SetDefault=
{
   PDATA_L1D_TAS_MASK_SetDefault,
   {
      //GSM400 // Not support
      {  0, 0, 0, 0, 0, 0, 0  },
      //GSM850
      {  PDATA_L1D_GSM850_TAS1_SetDefault,
         PDATA_L1D_GSM850_TAS2_SetDefault,
         PDATA_L1D_GSM850_TAS3_SetDefault,
         PDATA_L1D_GSM850_TAS4_SetDefault,
         PDATA_L1D_GSM850_TAS5_SetDefault,
         PDATA_L1D_GSM850_TAS6_SetDefault,
         PDATA_L1D_GSM850_TAS7_SetDefault
      },
      //GSM900
      {  PDATA_L1D_GSM900_TAS1_SetDefault,
         PDATA_L1D_GSM900_TAS2_SetDefault,
         PDATA_L1D_GSM900_TAS3_SetDefault,
         PDATA_L1D_GSM900_TAS4_SetDefault,
         PDATA_L1D_GSM900_TAS5_SetDefault,
         PDATA_L1D_GSM900_TAS6_SetDefault,
         PDATA_L1D_GSM900_TAS7_SetDefault
      },      
      //DCS1800
      {  PDATA_L1D_DCS1800_TAS1_SetDefault,
         PDATA_L1D_DCS1800_TAS2_SetDefault,
         PDATA_L1D_DCS1800_TAS3_SetDefault,
         PDATA_L1D_DCS1800_TAS4_SetDefault,
         PDATA_L1D_DCS1800_TAS5_SetDefault,
         PDATA_L1D_DCS1800_TAS6_SetDefault,
         PDATA_L1D_DCS1800_TAS7_SetDefault
      },
      //PCS1900
      {  PDATA_L1D_PCS1900_TAS1_SetDefault,
         PDATA_L1D_PCS1900_TAS2_SetDefault,
         PDATA_L1D_PCS1900_TAS3_SetDefault,
         PDATA_L1D_PCS1900_TAS4_SetDefault,
         PDATA_L1D_PCS1900_TAS5_SetDefault,
         PDATA_L1D_PCS1900_TAS6_SetDefault,
         PDATA_L1D_PCS1900_TAS7_SetDefault
      }
   }
};
#endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

