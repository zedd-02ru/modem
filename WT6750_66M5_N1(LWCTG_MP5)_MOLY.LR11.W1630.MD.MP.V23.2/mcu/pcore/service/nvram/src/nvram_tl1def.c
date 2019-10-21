/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *	nvram_mml1_default.c
 *
 * Project:
 * --------
 *   MT7206RF
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 *	
 *
 *******************************************************************************/
/*===============================================================================================*/

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "nvram_data_items.h"
#include "tl1d_custom_drdi.h"


tl1CustomDynamicInitMipiData *tl1_mipiData_ptr;

tl1CustomDynamicInitMipiData tl1CustomMipiDataDefault[] = {{
       &AST_TL1_RF_PARAMETER_DEFAULT_SetDefault[0],
	     &AST_TL1_RFFE_PARAMETER_DEFAULT_SetDefault[0],
	     &AST_TL1_SEQ_DEFAULT_SetDefault[0]  
}};

kal_bool tl1d_DRDI_had_done = KAL_FALSE;

#ifdef __RF_DRDI_CAPABILITY_SUPPORT__
void nvram_tl1_drdiPointerInit(kal_uint16 setIdx)
{
     tl1_mipiData_ptr = &(tl1CustomMipiData[setIdx]);
}
#endif

void nvram_tl1_drdiPointerInitDefault(kal_uint16 setIdx)
{
     tl1_mipiData_ptr = &(tl1CustomMipiDataDefault[0]);
}
kal_uint16 gSetIdx = 0xf;
kal_uint16 gDefaultPath = 0xf;

void nvram_tl1_drdi(void)
{
#ifdef __RF_DRDI_CAPABILITY_SUPPORT__	
   if(gTdsDrdiFlag)
   {
       if(!tl1d_DRDI_had_done)
       {
           if(MML1_RF_DRDI_CUSTOM_IsDynamicInitEnable())
           {
               kal_uint16 setIdx;
               setIdx = MML1_RF_DRDI_Dynamic_GetParamAddr(MML1_RF_3G_TDD);
               /* set the pointer to RF custom data by set index */
               gSetIdx = setIdx;
               nvram_tl1_drdiPointerInit(setIdx);
           }
           else
           {
           	   nvram_tl1_drdiPointerInit(0);
           }		   
           tl1d_DRDI_had_done = KAL_TRUE;
       }
   }	   
   else
   {
       nvram_tl1_drdiPointerInitDefault(0);
       gDefaultPath = 0xc;    
   } 
#else
       nvram_tl1_drdiPointerInitDefault(0);
       gDefaultPath = 0xb; 

#endif   
}

void nvram_get_tL1_default_value_to_write(nvram_lid_core_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size)
{
   nvram_tl1_drdi();
   
   tl1_mipiData_ptr->rfTable_p->tReserverData.uwPadding[0] = gSetIdx;
   tl1_mipiData_ptr->rfTable_p->tReserverData.uwPadding[1] = gDefaultPath;

   switch (lid)
   {
      case NVRAM_EF_AST_TL1_RF_PARAM_LID:
      {
         kal_mem_cpy(buffer, tl1_mipiData_ptr->rfTable_p, NVRAM_EF_AST_TL1_RF_PARAM_SIZE);
      }
      break;
      case NVRAM_EF_AST_TL1_RFFE_PARAM_LID:
      {
         kal_mem_cpy(buffer, tl1_mipiData_ptr->mipiTable_p, NVRAM_EF_AST_TL1_RFFE_PARAM_SIZE);
      }
      break;
      case NVRAM_EF_AST_TL1_RF_TIMESEQ_LID:
      {
         kal_mem_cpy(buffer, tl1_mipiData_ptr->timingTable_p, NVRAM_EF_AST_TL1_RF_TIMESEQ_SIZE);
      }
      break;

      default:
         ASSERT(KAL_FALSE);
      break;
   }
}


