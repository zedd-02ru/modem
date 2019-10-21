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
 *   pcore_modem_4g_task_config.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   This file provides the task index and module index configuration.
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifdef TASK_PRIORITY_MACRO
 
/* DHLRT = TASK_PRIORITY_ERT + 1 */
#define TASK_PRIORITY_ERT          (KAL_PRIORITY_CLASS1 + 5)

#if defined(__U4G_ADAPTOR__) || defined(__EL1_IT__)
#define TASK_PRIORITY_EL1          (KAL_PRIORITY_CLASS5 + 0)
#define TASK_PRIORITY_MLL1         (KAL_PRIORITY_CLASS4 + 1)
#endif
#if defined (__ESL_COSIM_LTE__)
#define TASK_PRIORITY_EL2IT        (KAL_PRIORITY_CLASS5 + 2)
#else /* __ESL_COSIM_LTE__ */
#define TASK_PRIORITY_EL1IT        (KAL_PRIORITY_CLASS5 + 4)
#endif

#define TASK_PRIORITY_EL2          (KAL_PRIORITY_CLASS7 + 3)
#if !defined (__ESL_COSIM_LTE__)
#define TASK_PRIORITY_EL2IT        (KAL_PRIORITY_CLASS7 + 7)
#endif

#define TASK_PRIORITY_ERRC         (KAL_PRIORITY_CLASS8 + 4)
#define TASK_PRIORITY_D_ERRC       (KAL_PRIORITY_CLASS8 + 6)

#define TASK_PRIORITY_EMM          (KAL_PRIORITY_CLASS10 + 6)

#define TASK_PRIORITY_EVAL         (KAL_PRIORITY_CLASS12 + 7)
#define TASK_PRIORITY_ETC          (KAL_PRIORITY_CLASS12 + 9)

#define TASK_PRIORITY_LPP          (KAL_PRIORITY_CLASS15 + 6)

#ifdef __IMS_SUPPORT__
/* No IMCB task, it will to AP side */
#define TASK_PRIORITY_IMS_PROXY     (KAL_PRIORITY_CLASS17 + 6)
#endif

#define TASK_PRIORITY_IMC           (KAL_PRIORITY_CLASS17 + 7)

#define TASK_PRIORITY_SDM           (KAL_PRIORITY_CLASS17 + 8)
#define TASK_PRIORITY_VDM           (KAL_PRIORITY_CLASS17 + 9)

#if defined(__TASK_TFTLIB__)
#define TASK_PRIORITY_TFTLIB        (KAL_PRIORITY_CLASS18+ 1)
#endif

#define TASK_PRIORITY_WAAL          (KAL_PRIORITY_CLASS18 + 3)

#define TASK_PRIORITY_VMMI           (KAL_PRIORITY_CLASS21+ 5)

#if defined(DHL_TX_NULL) || defined(__MTK_TARGET__)
/* 
 * For test speed, when we don't need dhl, we just don't let dhl run 
 * But for Target build, we need DHL.
 * Please check TASK_PRIORITY_RESERVE_EUTEST_1 and TASK_PRIORITY_RESERVE_EUTEST_1 @ pcore_srv_task_config.h
 */
#define TASK_PRIORITY_EUTEST          (KAL_PRIORITY_CLASS23+ 5)
#else
/* For logging request, we need init eutest after dhl */
#define TASK_PRIORITY_EUTEST          (KAL_PRIORITY_CLASS23+ 7)
#endif





#else
 /*module id are divided into 3 parts. 
  * 1: module id that maps to task
  * 2: module id that maps to no task but can be used as src module id
  *  to allocate ilm, like HISR's module id
  * 3: module id that is used to print trace only.  * */
 
/*********************    Modem Start    ********************/
 
 /*******************  Modem 4G start  **********************/
 /*************************Task CFG Begin****************/
 /*task_indx_type*/
 /* this is a fake task for task id grouping*/
task_index(INDX_MODEM_4G_START = TASK_ID_MODEM_4G_CODE_BEGIN)
 //task_index(INDX_MODEM_START)
 
 /*module_type and mod_task_g*/
task_module_map(INDX_MODEM_4G_START, MOD_MODEM_4G_DUMMY_BEGIN = MOD_ID_MODEM_4G_CODE_BEGIN)
 /*task's parameters*/
 task_name("")
 task_queue_name("")
task_priority(KAL_TASK_INITIAL_PRIORITY , KAL_TASK_INITIAL_PRIORITY)
 task_stack_size(0)
 null_task_create_entry(NULL)
 task_stack_internalRAM(KAL_FALSE)
 task_external_queue_size(0)
 task_internal_queue_size(0)
 task_boot_mode(NORMAL_M)
 /*************************Task CFG END******************/
 
#ifdef __EUTEST_ENABLE__
/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_EUTEST) 
/*module_type and mod_task_g*/
task_module_map(INDX_EUTEST, MOD_DUMMY_EUTEST)
task_module_map(INDX_EUTEST, MOD_EUTEST)

/*task's parameters*/
task_name("eutest")
task_queue_name("eutest Q")
task_priority(TASK_PRIORITY_EUTEST, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(32*1024)
task_create_function(eutest_create)
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(128)
task_boot_mode(NORMAL_M)
/*************************Task CFG END******************/
#endif /*__EUTEST_ENABLE__*/

/*************************Task CFG Begin******************/
#if defined(__LTE_RAT__)
/*task_indx_type*/
task_index(INDX_ERT) 
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_ERT,MOD_DUMMY_ERT)

/*module_type and mod_task_g*/
task_module_map(INDX_ERT, MOD_ERLCUL)
task_module_map(INDX_ERT, MOD_EMAC)
task_module_map(INDX_ERT, MOD_ERT_WPR)
task_module_map(INDX_ERT, MOD_EL1TX)
task_module_map(INDX_ERT, MOD_LTE_TIMER)

//task's parameters
task_name("ERT")
task_queue_name("ERT Q")
task_priority(TASK_PRIORITY_ERT, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4096)
#if !defined(__EDYN_ENABLE__) || defined(ERT_NOT_PRESENT) || defined(__ERT_TASK_DISABLE__)
null_task_create_entry(NULL)
#else
task_create_function(ert_task_create)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(10)
task_boot_mode(NORMAL_M | FACTORY_M)
#endif/*__LTE_RAT__*/
/*************************Task CFG END******************/

#if defined(__U4G_ADAPTOR__) || defined(__EL1_IT__)
/*************************Task CFG Begin******************/
#if defined(__LTE_RAT__)
/*task_indx_type*/
task_index(INDX_EL1) 
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_EL1,MOD_DUMMY_EL1)

/*module_type and mod_task_g*/
task_module_map(INDX_EL1, MOD_EL1)

//task's parameters
task_name("EL1")
task_queue_name("EL1 Q")
task_priority(TASK_PRIORITY_EL1, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4096)
#if !defined(__EDYN_ENABLE__) || defined(EL1_NOT_PRESENT) || defined(__EL1_TASK_DISABLE__) || defined(__EL1_IT__)
#if defined(__EL1_IT__)
/* Start task for EL1 into PCORE to allow ILM between tasks (El1_IT, ERRC and EMAC etc )*/
  task_create_function(modis_el1_task_create)
#else
    null_task_create_entry(NULL)
#endif
#else
task_create_function(el1_task_create)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(20)
task_internal_queue_size(10)
task_boot_mode(NORMAL_M)
#endif/*__LTE_RAT__*/
/*************************Task CFG END******************/
#endif /* __U4G_ADAPTOR__ || __EL1_IT__ */

/*************************Task CFG Begin******************/
#if defined(__LTE_RAT__)
/*task_indx_type*/
task_index(INDX_EL2) 
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_EL2,MOD_DUMMY_EL2)

/*module_type and mod_task_g*/
task_module_map(INDX_EL2, MOD_ERLCDL)
task_module_map(INDX_EL2, MOD_EPDCP)
task_module_map(INDX_EL2, MOD_EL2TASK)
task_module_map(INDX_EL2, MOD_ROHC)
task_module_map(INDX_EL2, MOD_EL2TASK_EMAC)

//task's parameters
task_name("EL2")
task_queue_name("EL2 Q")
task_priority(TASK_PRIORITY_EL2, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4096)
#if !defined(__EDYN_ENABLE__) || defined(EL2_NOT_PRESENT) || defined(__EL2_TASK_DISABLE__)
null_task_create_entry(NULL)
#else
task_create_function(el2_task_create)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(80)
task_internal_queue_size(10)
task_boot_mode(NORMAL_M)
#endif/*__LTE_RAT__*/
/*************************Task CFG END******************/


/*************************Task CFG Begin******************/
/*task_indx_type*/
task_index(INDX_ERRC)                                     

#ifndef __L1EDPS_ENABLE__
/*module_type and mod_task_g*/                             
task_module_map(INDX_ERRC, MOD_ERRC)
task_module_map(INDX_ERRC, MOD_ERRC_EVTH)
task_module_map(INDX_ERRC, MOD_ERRC_CEL)
task_module_map(INDX_ERRC, MOD_ERRC_CHM)
task_module_map(INDX_ERRC, MOD_ERRC_CONN)
task_module_map(INDX_ERRC, MOD_ERRC_MOB)
task_module_map(INDX_ERRC, MOD_ERRC_RCM)
task_module_map(INDX_ERRC, MOD_ERRC_SPV)
task_module_map(INDX_ERRC, MOD_ERRC_SYS)	
task_module_map(INDX_ERRC, MOD_EAS)                          
#else
task_module_map(INDX_DUMMY_ERRC, MOD_ERRC)
task_module_map(INDX_DUMMY_ERRC, MOD_ERRC_EVTH)
task_module_map(INDX_DUMMY_ERRC, MOD_ERRC_CEL)
task_module_map(INDX_DUMMY_ERRC, MOD_ERRC_CHM)
task_module_map(INDX_DUMMY_ERRC, MOD_ERRC_CONN)
task_module_map(INDX_DUMMY_ERRC, MOD_ERRC_MOB)
task_module_map(INDX_DUMMY_ERRC, MOD_ERRC_RCM)
task_module_map(INDX_DUMMY_ERRC, MOD_ERRC_SPV)
task_module_map(INDX_DUMMY_ERRC, MOD_ERRC_SYS)	
task_module_map(INDX_DUMMY_ERRC, MOD_EAS) 
#endif

//task's parameters                                        
task_name("ERRC")                                         
task_queue_name("ERRC Q")                                 
task_priority(TASK_PRIORITY_ERRC,KAL_TASK_INITIAL_PRIORITY)                         
task_stack_size(5120)                                      

#if defined (__ERRC_ENABLE__) && !defined(__ERRC_TASK_DISABLE__)
    task_create_function(errc_create)                     
#elif ESIM_ON_OSCAR_RELEASE_TEST
    task_create_function(errc_task_create)  
#else
    null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)                          
task_external_queue_size(80)                               
task_internal_queue_size(80)                                
task_boot_mode(NORMAL_M | FACTORY_M)               
/*************************Task CFG END******************/  
/*************************Task CFG Beging******************/
#if defined(__LTE_RAT__) && defined(__L1EDPS_ENABLE__)
/*task_indx_type*/
task_index(INDX_DUMMY_ERRC)
//task's parameters                                        
task_name("D_ERRC")                                         
task_queue_name("D_ERRC Q")                                 
task_priority(TASK_PRIORITY_D_ERRC,KAL_TASK_INITIAL_PRIORITY)                         
task_stack_size(32768)                                      
#if defined(__DUMMYERRC_TASK_DISABLE__)
    null_task_create_entry(NULL)
#else
    task_create_function(dummyerrc_task_create)                     
#endif
task_stack_internalRAM(KAL_FALSE)                          
task_external_queue_size(80)                               
task_internal_queue_size(0)                                
task_boot_mode(NORMAL_M )   

#endif
/*************************Task CFG END******************/  
    
/*************************Task CFG Begin******************/
#if defined(__LTE_RAT__)

/*task_indx_type*/
task_index(INDX_EMM) 
/*module_type and mod_task_g*/

task_module_map(INDX_EMM, MOD_EMM)

// Loter: Add EMM Internal submodules
task_module_map(INDX_EMM, MOD_EMM_CALL)
task_module_map(INDX_EMM, MOD_EMM_CMNPROC)
task_module_map(INDX_EMM, MOD_EMM_CONN)
task_module_map(INDX_EMM, MOD_EMM_ERRCIF)
task_module_map(INDX_EMM, MOD_EMM_ESMIF)
task_module_map(INDX_EMM, MOD_EMM_ETCIF)
task_module_map(INDX_EMM, MOD_EMM_EVALIF)
task_module_map(INDX_EMM, MOD_EMM_EVTCTRL)
task_module_map(INDX_EMM, MOD_EMM_MMIF)
task_module_map(INDX_EMM, MOD_EMM_NASMSG)
task_module_map(INDX_EMM, MOD_EMM_PLMNSEL)
task_module_map(INDX_EMM, MOD_EMM_RATBAND)
task_module_map(INDX_EMM, MOD_EMM_RATCHG)
task_module_map(INDX_EMM, MOD_EMM_REG)
task_module_map(INDX_EMM, MOD_EMM_SEC)
task_module_map(INDX_EMM, MOD_EMM_SV)
task_module_map(INDX_EMM, MOD_EMM_TIMERIF)

//task's parameters
task_name("EMM")
task_queue_name("EMM Q")
task_priority(TASK_PRIORITY_EMM, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4096)

#if defined (__EMM_ENABLE__) && !defined(__EMM_TASK_DISABLE__)
    task_create_function(emm_create)                  
#else
    null_task_create_entry(NULL)
#endif

task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(50)
task_internal_queue_size(50)
task_boot_mode(NORMAL_M | FACTORY_M)

#endif/*__LTE_RAT__*/
/*************************Task CFG END******************/


/*************************Task CFG Begin******************/

/*task_indx_type*/
task_index(INDX_EVAL)

/*module_type and mod_task_g*/                             
task_module_map(INDX_EVAL, MOD_EVAL)

//task's parameters                                        
task_name("EVAL")                                         
task_queue_name("EVAL Q")                                 
task_priority(TASK_PRIORITY_EVAL, KAL_TASK_INITIAL_PRIORITY)                         
task_stack_size(1056)                                      

#if defined(__LTE_RAT__) && defined (__EVAL_ENABLE__) && !defined(__EVAL_TASK_DISABLE__)
    task_create_function(eval_create)                     
#else
    null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)                          
task_external_queue_size(20)                               
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)

/*************************Task CFG END******************/

/*************************Task CFG Begin******************/
#if defined(__LTE_RAT__)

/*task_indx_type*/
task_index(INDX_ETC)                                     

/*module_type and mod_task_g*/                             
task_module_map(INDX_ETC, MOD_ETC)

//task's parameters                                        
task_name("ETC")                                         
task_queue_name("ETC Q")                                 
task_priority(TASK_PRIORITY_ETC, KAL_TASK_INITIAL_PRIORITY)                         
task_stack_size(1250)                                      

#if defined (__ETC_ENABLE__) && !defined(__ETC_TASK_DISABLE__)
    task_create_function(etc_create)                     
#else
    null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)                          
task_external_queue_size(20)                               
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)

#endif/*__LTE_RAT__*/
/*************************Task CFG END******************/  

#if defined(__TASK_TFTLIB__)
/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_TFTLIB)

/*module_type and mod_task_g*/
task_module_map(INDX_TFTLIB, MOD_TFTLIB)
#if defined(__GEMINI__) || defined(__MMDS_DC__)
task_module_map(INDX_TFTLIB, MOD_TFTLIB2)
#if (GEMINI_PLUS >= 3)
task_module_map(INDX_TFTLIB, MOD_TFTLIB_3)
#if (GEMINI_PLUS >= 4)
task_module_map(INDX_TFTLIB, MOD_TFTLIB_4)
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ || __MMDS_DC__ */

/*task's parameter*/
task_name("TFTLIB")
task_queue_name("TFTLIB Q")
task_priority(TASK_PRIORITY_TFTLIB, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(65535)

task_create_function(tftlib_create)

task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
/*************************Task CFG END******************/
#endif

#if defined(__EL2_IT__) || defined(__EL2_FPGA_IT__) || defined(__L2TPS_TEST__) || defined(__ESL_COSIM_LTE__) || defined(__EMBMS_EL2_IT__)
/*************************Task CFG Begin******************/
/*task_indx_type*/
task_index(INDX_EL2IT) 
/*module_type and mod_task_g*/

task_module_map(INDX_EL2IT, MOD_EL2IT)

//task's parameters
task_name("EL2IT")
task_queue_name("EL2IT Q")
task_priority(TASK_PRIORITY_EL2IT, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(2048)
#ifdef __L2TPS_TEST__
task_create_function(l2tps_task_create)
#elif defined (__ESL_COSIM_LTE__)
null_task_create_entry(NULL)
#else
task_create_function(l2it_task_create)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(40)
task_internal_queue_size(10)
task_boot_mode(NORMAL_M)
/*************************Task CFG END******************/
#endif

#if defined(__EL1_IT__)
/*************************Task CFG Begin******************/
/*task_indx_type*/
task_index(INDX_EL1IT) 
/*module_type and mod_task_g*/

task_module_map(INDX_EL1IT, MOD_L1)
task_module_map(INDX_EL1IT, MOD_UL1)

//task's parameters
task_name("EL1IT")
task_queue_name("EL1IT Q")
task_priority(TASK_PRIORITY_EL1IT, KAL_TASK_INITIAL_PRIORITY)
#if defined(__ESL_COSIM_LTE__)
task_stack_size(16384)
#else
task_stack_size(2048)
#endif
task_create_function(l1it_task_create)
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(20)
task_internal_queue_size(10)
task_boot_mode(NORMAL_M)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
#if defined(__LTE_RAT__) || defined(__UMTS_RAT__)
/*task_indx_type*/
task_index(INDX_MLL1) 
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_MLL1,MOD_MLL1)
//this is for codegen

/*task's parameters*/
task_name("MLL1")
task_queue_name("MLL1 Q")
task_priority(TASK_PRIORITY_MLL1 , KAL_TASK_INITIAL_PRIORITY )
task_stack_size(2048)
#if !defined(ATEST_DRV_ENVIRON) && !defined(__MLL1_TASK_DISABLE__)
task_create_function(mll1_create)
#else
  null_task_create_entry(NULL)
#endif 
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
#endif /*__LTE_RAT__ || __UMTS_RAT__*/
/*************************Task CFG END******************/
#endif /* __EL1_IT__ */

/*************************Task CFG Begin****************/
#if defined(__UE_SIMULATOR__)
/*task_indx_type*/
task_index(INDX_VMMI_TASK) 
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_VMMI_TASK,MOD_DUMMY_VMMI_TASK)
/*module_type and mod_task_g*/
task_module_map(INDX_VMMI_TASK, MOD_VMMI_TASK)

/*task's parameters*/
task_name("VMMI_TASK")
task_queue_name("VMMI_TASK Q")

task_priority( TASK_PRIORITY_VMMI , KAL_TASK_INITIAL_PRIORITY)  /* check !!!! */
task_stack_size(1024)
task_create_function(Vmmi_Task_create)
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(20)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
#endif /* __UE_SIMULATOR__) */
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_LPP)
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_LPP, MOD_DUMMY_LPP)
/*module_type and mod_task_g*/
task_module_map(INDX_LPP, MOD_LPP)

/*task's parameters*/
task_name("LPP")
task_queue_name("LPP Q")
task_priority(TASK_PRIORITY_LPP, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4096)
#if defined(__LTE_RAT__) && defined(__LPP_SUPPORT__)
task_create_function(lpp_create)
#else
null_task_create_entry(NULL)
#endif /* defined(__LTE_RAT__) && defined(__LPP_SUPPORT__) */
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(20)
task_internal_queue_size(10)
task_boot_mode(NORMAL_M)
/*************************Task CFG END******************/


/* VOLTE Task */
/*************************Task CFG Begin******************/
/*task_indx_type*/
task_index(INDX_IMC)
/*module_type and mod_task_g*/                             
task_module_map(INDX_IMC, MOD_IMC)
#ifdef __GEMINI__
    task_module_map(INDX_IMC, MOD_IMC_2)
#if (GEMINI_PLUS >= 3)
    task_module_map(INDX_IMC, MOD_IMC_3)
#if (GEMINI_PLUS >= 4)
    task_module_map(INDX_IMC, MOD_IMC_4)
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */
 
task_module_map(INDX_IMC, MOD_IMCB)
#ifdef __GEMINI__
    task_module_map(INDX_IMC, MOD_IMCB_2)
#if (GEMINI_PLUS >= 3)
    task_module_map(INDX_IMC, MOD_IMCB_3)
#if (GEMINI_PLUS >= 4)
    task_module_map(INDX_IMC, MOD_IMCB_4)
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */
 
task_module_map(INDX_IMC, MOD_IMCSMS)
#ifdef __GEMINI__
    task_module_map(INDX_IMC, MOD_IMCSMS_2)
#if (GEMINI_PLUS >= 3)
    task_module_map(INDX_IMC, MOD_IMCSMS_3)
#if (GEMINI_PLUS >= 4)
    task_module_map(INDX_IMC, MOD_IMCSMS_4)
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */
 
//task's parameters                                        
task_name("IMC")                                         
task_queue_name("IMC Q")                                 
task_priority(TASK_PRIORITY_IMC, KAL_TASK_INITIAL_PRIORITY)                         
task_stack_size(6144)                                      

#ifdef __IMS_SUPPORT__
task_create_function(imc_task_create)
#else
null_task_create_entry(NULL)
#endif /* __IMS_SUPPORT__ */ 
                   
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(50)
task_internal_queue_size(50)
task_boot_mode(NORMAL_M)
/*************************Task CFG END******************/    
 
 
 #ifdef __IMS_SUPPORT__
/*************************Task CFG Begin******************/
/*task_indx_type*/
task_index(INDX_IMSP) 
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_IMSP,MOD_DUMMY_IMSP)
/*module_type and mod_task_g*/
task_module_map(INDX_IMSP, MOD_IMSP)
#ifdef __GEMINI__
task_module_map(INDX_IMSP, MOD_IMSP_2)
#if (GEMINI_PLUS >= 3)
task_module_map(INDX_IMSP, MOD_IMSP_3)
#if (GEMINI_PLUS >= 4)
task_module_map(INDX_IMSP, MOD_IMSP_4)
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */
 
//task's parameters
task_name("IMSP")
task_queue_name("IMSP Q")
task_priority(TASK_PRIORITY_IMS_PROXY , KAL_TASK_INITIAL_PRIORITY )
task_stack_size(3200)
 
 
#if defined(IMS_PROXY_NOT_PRESENT) || defined(__IMS_PROXY_TASK_DISABLE__)
null_task_create_entry(NULL)
#else 
task_create_function(ims_proxy_create)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(60)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
/*************************Task CFG END******************/
#endif /* __IMS_SUPPORT__ */

/*************************Task CFG Begin******************/
/*task_indx_type*/
task_index(INDX_SDM)
 
/*module_type and mod_task_g*/                             
task_module_map(INDX_SDM, MOD_SDM)
#ifdef __GEMINI__
task_module_map(INDX_SDM, MOD_SDM_2)
#if (GEMINI_PLUS >= 3)
task_module_map(INDX_SDM, MOD_SDM_3)
#if (GEMINI_PLUS >= 4)
task_module_map(INDX_SDM, MOD_SDM_4)
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */

//task's parameters                                        
task_name("SDM")
task_queue_name("SDM Q")
task_priority(TASK_PRIORITY_SDM, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(2592)

#ifdef __IMS_SUPPORT__
task_create_function(sdm_task_create)
#else
null_task_create_entry(NULL)
#endif /* __IMS_SUPPORT__ */ 
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(50)
task_internal_queue_size(50)
task_boot_mode(NORMAL_M)
/*************************Task CFG END******************/ 
 
 
/*************************Task CFG Begin******************/
/*task_indx_type*/
task_index(INDX_VDM)
 
/*module_type and mod_task_g*/                             
task_module_map(INDX_VDM, MOD_VDM)
#ifdef __GEMINI__
task_module_map(INDX_VDM, MOD_VDM_2)
#if (GEMINI_PLUS >= 3)
task_module_map(INDX_VDM, MOD_VDM_3)
#if (GEMINI_PLUS >= 4)
task_module_map(INDX_VDM, MOD_VDM_4)
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */

task_module_map(INDX_VDM, MOD_VDM_CTRL)
#ifdef __GEMINI__
task_module_map(INDX_VDM, MOD_VDM_CTRL_2)
#if (GEMINI_PLUS >= 3)
task_module_map(INDX_VDM, MOD_VDM_CTRL_3)
#if (GEMINI_PLUS >= 4)
task_module_map(INDX_VDM, MOD_VDM_CTRL_4)
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */

task_module_map(INDX_VDM, MOD_VDM_TRK)
#ifdef __GEMINI__
task_module_map(INDX_VDM, MOD_VDM_TRK_2)
#if (GEMINI_PLUS >= 3)
task_module_map(INDX_VDM, MOD_VDM_TRK_3)
#if (GEMINI_PLUS >= 4)
task_module_map(INDX_VDM, MOD_VDM_TRK_4)
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */

task_module_map(INDX_VDM, MOD_VDM_ADS)
#ifdef __GEMINI__
task_module_map(INDX_VDM, MOD_VDM_ADS_2)
#if (GEMINI_PLUS >= 3)
task_module_map(INDX_VDM, MOD_VDM_ADS_3)
#if (GEMINI_PLUS >= 4)
task_module_map(INDX_VDM, MOD_VDM_ADS_4)
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */

task_module_map(INDX_VDM, MOD_VDM_VCC)
#ifdef __GEMINI__
task_module_map(INDX_VDM, MOD_VDM_VCC_2)
#if (GEMINI_PLUS >= 3)
task_module_map(INDX_VDM, MOD_VDM_VCC_3)
#if (GEMINI_PLUS >= 4)
task_module_map(INDX_VDM, MOD_VDM_VCC_4)
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */

//task's parameters                                        
task_name("VDM")
task_queue_name("VDM Q")
task_priority(TASK_PRIORITY_VDM, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(1824)

#ifdef __IMS_SUPPORT__ 
task_create_function(vdm_task_create)
#else
null_task_create_entry(NULL)
#endif /* __IMS_SUPPORT__ */ 
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(50)
task_internal_queue_size(50)
task_boot_mode(NORMAL_M)
/*************************Task CFG END******************/ 


/*************************Task CFG Begin******************/
/*task_indx_type*/
task_index(INDX_WAAL)

/*module_type and mod_task_g*/
task_module_map(INDX_WAAL, MOD_WAAL)

//task's parameters
task_name("WAAL")
task_queue_name("WAAL Q")
task_priority(TASK_PRIORITY_WAAL, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(1536)

#if defined(__LWA_SUPPORT__)
task_create_function(waal_create)
#else
null_task_create_entry(NULL)
#endif

task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(30)
task_internal_queue_size(10)
task_boot_mode(NORMAL_M)
/*************************Task CFG END******************/


#if defined(ESIM_BUILD_CONFIG)
#if (ESIM_BUILD_CONFIG == ESIM_MULTI_MODE_ON_FIBERS) || (ESIM_BUILD_CONFIG == ESIM_SINGLE_MODE_ON_FIBERS)
/* Needed for el1sim with script - FLP - !__EL1SIM_WITH_MODIS__ around it ? */
MODULE_ID_MAP_TO_NULL_TASK_CAN_ALLOCATE_ILM(MOD_UE_ECPHY_ADAPTER)
#endif
#endif

// print trace module id is not in mod_task_g 
MODULE_ID_FOR_PRINT_TRACE(MOD_EMM_NMSRV)
MODULE_ID_FOR_PRINT_TRACE(MOD_EMM_OPIDSRV)
MODULE_ID_FOR_PRINT_TRACE(MOD_EMM_USIMSRV)
MODULE_ID_FOR_PRINT_TRACE(MOD_EMM_NVMSRV)
MODULE_ID_FOR_PRINT_TRACE(MOD_USBOSD)
#if !defined(__EL1_IT__)
MODULE_ID_MULTI_CORE_FOR_PRINT_TRACE(MOD_MLL1)
#endif

#if defined(__EL1_IT__)
MODULE_ID_FOR_PRINT_TRACE(MOD_EL1IT)
#endif /* end of __EL1_IT__ */

 /**** customer added task or module id is started  *****/



 /**** customer added task or module id is ended    *****/
 
 
 /*************************Task CFG Begin****************/
 /*task_indx_type*/
 /* this is a fake task for task id grouping*/
 task_index(TASK_ID_MODEM_4G_CODE_TAIL)
 /*module_type and mod_task_g*/
task_module_map(TASK_ID_MODEM_4G_CODE_TAIL, MODULE_TAG_MODEM_4G_DUMMY_TAIL)
 /*task's parameters*/
 task_name("")
 task_queue_name("")
task_priority(KAL_TASK_INITIAL_PRIORITY , KAL_TASK_INITIAL_PRIORITY)
 task_stack_size(0)
 null_task_create_entry(NULL)
 task_stack_internalRAM(KAL_FALSE)
 task_external_queue_size(0)
 task_internal_queue_size(0)
 task_boot_mode(NORMAL_M)
 /*************************Task CFG END******************/
 /**********************   Modem End   ********************/  
 
#endif /*TASK_PRIORITY_MACRO*/


