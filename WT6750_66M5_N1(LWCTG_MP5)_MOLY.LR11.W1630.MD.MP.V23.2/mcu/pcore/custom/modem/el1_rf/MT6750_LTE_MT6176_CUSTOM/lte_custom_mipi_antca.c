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
*    lte_custom_mipi_antca.c
*
* Project:
* --------
*    MT6291
*
* Description:
* ------------
*
*
* Author:
* -------
 * -------
*
*============================================================================*/


#include "el1d_rf_ca.h"
#include "lte_custom_rf_ca.h"
#include "lte_custom_mipi.h"
#include "el1d_rf_custom_data.h"

//ANT joe 
#if IS_MIPI_ANT_TUNER_SUPPORT
//event part
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_1A_3A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF   , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_1A_5A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF   , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_1A_8A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_1A_26A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_1A_28A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_2A_2A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_2A_4A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_2A_5A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_1A_7A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_1A_20A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_2A_29A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_2A_30A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_3A_3A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_3A_5A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_3A_7A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_3A_8A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_3A_20A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_3A_26A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_3A_28A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_4A_4A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_4A_5A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_4A_12A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_4A_17A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_4A_29A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_5A_7A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_5A_12A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_5A_17A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_5A_30A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_7A_7A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_7A_20A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_7A_28A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_8A_20A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_12A_30A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_17A_30A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_29A_30A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_39A_41A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_41A_41A_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_NONE_MIPI_ANT_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_SetDefault },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_SetDefault },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
                        
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//Data start, no need to by subband expand, offset also just follow event offset
LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_1A_3A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0x01, 0x61 },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0x02, 0x62 },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0x03, 0x63 },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0x04, 0x64 },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_1A_5A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0x01, 0xAB },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0x02, 0xBB },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0x03, 0xCB },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0x04, 0xDB },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};
LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_1A_8A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_1A_26A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_1A_28A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_2A_2A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_2A_4A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_2A_5A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_1A_7A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_1A_20A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_2A_29A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_2A_30A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_3A_3A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_3A_5A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_3A_7A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0x05, 0x05 },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_3A_8A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};
LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_3A_20A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};
LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_3A_26A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_3A_28A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_4A_4A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_4A_5A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_4A_12A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xCC },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xDD },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_4A_17A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xCC },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xDD },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_4A_29A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_5A_7A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_5A_12A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_5A_17A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_5A_30A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_7A_7A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_7A_20A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_7A_28A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};
LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_8A_20A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_12A_30A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_17A_30A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_29A_30A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_39A_41A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0x06, 0x06 },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_41A_41A_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

LTE_MIPI_DATA_TABLE_T LTE_CACFG_CA_NONE_MIPI_ANT_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 2  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   //{ /* 3  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0   , 0xFF, 0xFF },
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                , 0   , 0    },
};

//CA part
kal_uint32  LTE_MIPI_ANTCA_EVENT_SIZE_TABLE_SetDefault[LTE_TARGET_MAX_SUPPORT_CA_BAND_NUM] =
{
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_00, SetDefault)),  /*Index 21*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_01, SetDefault)),  /*Index 22*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_02, SetDefault)),  /*Index 23*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_03, SetDefault)),  /*Index 24*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_04, SetDefault)),  /*Index 25*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_05, SetDefault)),  /*Index 26*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_06, SetDefault)),  /*Index 27*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_07, SetDefault)),  /*Index 28*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_08, SetDefault)),  /*Index 29*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_09, SetDefault)),  /*Index 30*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_10, SetDefault)),  /*Index 31*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_11, SetDefault)),  /*Index 32*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_12, SetDefault)),  /*Index 33*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_13, SetDefault)),  /*Index 34*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_14, SetDefault)),  /*Index 35*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_15, SetDefault)),  /*Index 36*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_16, SetDefault)),  /*Index 37*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_17, SetDefault)),  /*Index 38*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_18, SetDefault)),  /*Index 39*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_19, SetDefault)),  /*Index 40*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_20, SetDefault)),  /*Index 41*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_21, SetDefault)),  /*Index 42*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_22, SetDefault)),  /*Index 43*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_23, SetDefault)),  /*Index 44*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_24, SetDefault)),  /*Index 45*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_25, SetDefault)),  /*Index 46*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_26, SetDefault)),  /*Index 47*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_27, SetDefault)),  /*Index 48*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_28, SetDefault)),  /*Index 49*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_29, SetDefault)),  /*Index 50*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_30, SetDefault)),  /*Index 51*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_31, SetDefault)),  /*Index 52*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_32, SetDefault)),  /*Index 53*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_33, SetDefault)),  /*Index 54*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_34, SetDefault)),  /*Index 55*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_35, SetDefault)),  /*Index 56*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_36, SetDefault)),  /*Index 57*/
         sizeof(LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_37, SetDefault)),  /*Index 58*/   
};

LTE_MIPI_EVENT_TABLE_T*  LTE_MIPI_ANTCA_EVENT_TABLE_SetDefault[LTE_TARGET_MAX_SUPPORT_CA_BAND_NUM] =
{

         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_00, SetDefault),  /*Index 21*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_01, SetDefault),  /*Index 22*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_02, SetDefault),  /*Index 23*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_03, SetDefault),  /*Index 24*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_04, SetDefault),  /*Index 25*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_05, SetDefault),  /*Index 26*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_06, SetDefault),  /*Index 27*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_07, SetDefault),  /*Index 28*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_08, SetDefault),  /*Index 29*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_09, SetDefault),  /*Index 30*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_10, SetDefault),  /*Index 31*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_11, SetDefault),  /*Index 32*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_12, SetDefault),  /*Index 33*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_13, SetDefault),  /*Index 34*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_14, SetDefault),  /*Index 35*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_15, SetDefault),  /*Index 36*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_16, SetDefault),  /*Index 37*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_17, SetDefault),  /*Index 38*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_18, SetDefault),  /*Index 39*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_19, SetDefault),  /*Index 40*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_20, SetDefault),  /*Index 41*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_21, SetDefault),  /*Index 42*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_22, SetDefault),  /*Index 43*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_23, SetDefault),  /*Index 44*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_24, SetDefault),  /*Index 45*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_25, SetDefault),  /*Index 46*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_26, SetDefault),  /*Index 47*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_27, SetDefault),  /*Index 48*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_28, SetDefault),  /*Index 49*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_29, SetDefault),  /*Index 50*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_30, SetDefault),  /*Index 51*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_31, SetDefault),  /*Index 52*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_32, SetDefault),  /*Index 53*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_33, SetDefault),  /*Index 54*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_34, SetDefault),  /*Index 55*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_35, SetDefault),  /*Index 56*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_36, SetDefault),  /*Index 57*/
         LTE_ANTCA_EVENT_SETTING(LTE_CACFG_IND_37, SetDefault),  /*Index 58*/
   
};


kal_uint32  LTE_MIPI_ANTCA_DATA_SIZE_TABLE_SetDefault[LTE_TARGET_MAX_SUPPORT_CA_BAND_NUM] =
{
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_00, SetDefault)),  /*Index 21*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_01, SetDefault)),  /*Index 22*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_02, SetDefault)),  /*Index 23*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_03, SetDefault)),  /*Index 24*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_04, SetDefault)),  /*Index 25*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_05, SetDefault)),  /*Index 26*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_06, SetDefault)),  /*Index 27*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_07, SetDefault)),  /*Index 28*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_08, SetDefault)),  /*Index 29*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_09, SetDefault)),  /*Index 30*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_10, SetDefault)),  /*Index 31*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_11, SetDefault)),  /*Index 32*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_12, SetDefault)),  /*Index 33*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_13, SetDefault)),  /*Index 34*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_14, SetDefault)),  /*Index 35*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_15, SetDefault)),  /*Index 36*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_16, SetDefault)),  /*Index 37*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_17, SetDefault)),  /*Index 38*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_18, SetDefault)),  /*Index 39*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_19, SetDefault)),  /*Index 40*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_20, SetDefault)),  /*Index 41*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_21, SetDefault)),  /*Index 42*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_22, SetDefault)),  /*Index 43*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_23, SetDefault)),  /*Index 44*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_24, SetDefault)),  /*Index 45*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_25, SetDefault)),  /*Index 46*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_26, SetDefault)),  /*Index 47*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_27, SetDefault)),  /*Index 48*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_28, SetDefault)),  /*Index 49*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_29, SetDefault)),  /*Index 50*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_30, SetDefault)),  /*Index 51*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_31, SetDefault)),  /*Index 52*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_32, SetDefault)),  /*Index 53*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_33, SetDefault)),  /*Index 54*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_34, SetDefault)),  /*Index 55*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_35, SetDefault)),  /*Index 56*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_36, SetDefault)),  /*Index 57*/
         sizeof(LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_37, SetDefault)),  /*Index 58*/ 
};


LTE_MIPI_DATA_TABLE_T*  LTE_MIPI_ANTCA_DATA_TABLE_SetDefault[LTE_TARGET_MAX_SUPPORT_CA_BAND_NUM] =
{
   LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_00, SetDefault),  /*Index 21*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_01, SetDefault),  /*Index 22*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_02, SetDefault),  /*Index 23*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_03, SetDefault),  /*Index 24*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_04, SetDefault),  /*Index 25*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_05, SetDefault),  /*Index 26*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_06, SetDefault),  /*Index 27*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_07, SetDefault),  /*Index 28*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_08, SetDefault),  /*Index 29*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_09, SetDefault),  /*Index 30*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_10, SetDefault),  /*Index 31*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_11, SetDefault),  /*Index 32*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_12, SetDefault),  /*Index 33*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_13, SetDefault),  /*Index 34*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_14, SetDefault),  /*Index 35*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_15, SetDefault),  /*Index 36*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_16, SetDefault),  /*Index 37*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_17, SetDefault),  /*Index 38*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_18, SetDefault),  /*Index 39*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_19, SetDefault),  /*Index 40*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_20, SetDefault),  /*Index 41*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_21, SetDefault),  /*Index 42*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_22, SetDefault),  /*Index 43*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_23, SetDefault),  /*Index 44*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_24, SetDefault),  /*Index 45*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_25, SetDefault),  /*Index 46*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_26, SetDefault),  /*Index 47*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_27, SetDefault),  /*Index 48*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_28, SetDefault),  /*Index 49*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_29, SetDefault),  /*Index 50*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_30, SetDefault),  /*Index 51*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_31, SetDefault),  /*Index 52*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_32, SetDefault),  /*Index 53*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_33, SetDefault),  /*Index 54*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_34, SetDefault),  /*Index 55*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_35, SetDefault),  /*Index 56*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_36, SetDefault),  /*Index 57*/
         LTE_ANTCA_DATA_SETTING(LTE_CACFG_IND_37, SetDefault),  /*Index 58*/
};



#endif
//end
