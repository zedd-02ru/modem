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
 *   L1Trc.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Layer 1 trace interface
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 02 15 2016 chenhung.liao
 * [MOLY00155804] [LR11] Upgrade xl1sim to Jade
 * Merging  Move API EL1D_Context_Check to L1SimContextCheck@2058353
 * 	
 * 	//UMOLY_CBr/lucas.hsu/LR11.W1603.MD.MP_W16.06.LTE.p9.0205/mcu/...
 * 	
 * 	to //UMOLY/BRANCHES_LR11/LR11.W1603.MD.MP/mcu/...
 *
 * 02 01 2016 jy.pan
 * [MOLY00163543] Check if L1 trace is printed in DIRQ.
 * Check if L1 trace is printed in DIRQ.
 *
 * 11 23 2015 hk.yang
 * [MOLY00149936] [DHL]Improve L1 trace throughput, reduce buffer space
 * [LR11] improve L1 trace throughput.
 *
 * 09 21 2015 yu-hsiang.peng
 * [MOLY00142553] [DHL] fix build warning for LR11 MP/Trunk
 * [LR11.Trunk] Fix build warning to zero requested by project team
 *
 * 07 22 2015 eason.lai
 * [MOLY00130157] [TK6291][DHL] smart logging migration
 * 	fixed dhl_trace.c assert @ 1340
 *
 * 07 22 2015 eason.lai
 * [MOLY00130157] [TK6291][DHL] smart logging migration
 * 	.
 *
 * 07 10 2015 eason.lai
 * merge code
 *
 * 05 15 2015 eason.lai
 * [MOLY00113901] [TK6291][DHL] change pcore/l1core l1trace buffer size
 * 	base on PAE result, pcore 8KB, l1core 64KB
 *
 * 04 26 2015 eason.lai
 * [MOLY00109038] [TK6291E1][pre 1st Call][UMOLY][4G][FDD] There's no assert/fatal error message on "System Trace(L1CORE)" window
 * 	1. fixed l1core assert log missing by the potential problem.
 * 	2. start to support l1core l1 filer store in NVRAM
 *
 * 04 15 2015 eason.lai
 * [MOLY00107803] [TK6291][DHL] PAE simulation code and option patch back.
 * 	as CR title.
 *
 * 04 09 2015 eason.lai
 * [MOLY00105513] [TK6291][DHL] introduce GPD/SPD wrapper
 * 	     GPD/SPD wrapper and L2copro log dma
 *
 * 03 17 2015 eason.lai
 * [MOLY00084440] [MT6291][DHL] Patch back UMOLY trunk from MT6291_DEV
 * move L1 trace buffer to L2SRAM, and change tst ring buffer as cacheable
 *
 * 02 10 2015 eason.lai
 * [MOLY00095350] [TK6291][DHL] enable 64us timestamp in modis/uesim
 * 	move l2 trace timestamp marco to be function call
 *
 * 11 24 2014 eason.lai
 * [MOLY00084440] [MT6291][DHL] Patch back UMOLY trunk from MT6291_DEV
 * FMA global timer
 *
 * 11 14 2014 eason.lai
 * [MOLY00084440] [MT6291][DHL] Patch back UMOLY trunk from MT6291_DEV
 *  first time patch back
 *
 * 06 09 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * re-enable l1 boxster.
 *
 * 05 07 2014 eason.lai
 * [MOLY00064969] [DHL]expand tab to 4 spaces to have better typesettings
 * .
 *
 * 04 29 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * rollback L1boxster to align ELT support.
 *
 * 04 16 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * disable l1boxster on modis.
 *
 * 04 16 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * enable l1boxster by default.
 *
 * 04 15 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * Disable l1boxster by default due to incorrect usage of L1 trace API in AST L1 module.
 *
 * 04 15 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * fix modis build error.
 *
 * 04 15 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * fix modis build error.
 *
 * 04 15 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * enable L1Boxster support and optimization.
 *
 * 04 07 2014 eason.lai
 * [MOLY00061900] [DHL][K95 MD2] merge code from DEV branch
 *  .
 *
 * 03 24 2014 ken.liu
 * [MOLY00060207] [DHL] support L2 log buffer in TCM
 * support l2 buffer from tcm sections.
 *
 * 03 13 2014 ken.liu
 * [MOLY00059075] [xL1SIM] Patch back to MOLY
 * add TRC_L2_PAD define.
 *
 * 03 10 2014 willie.pan
 * [MOLY00059007] [MT6290E2][EL1] Sync DSP log and L1 trace by A time
 *  .
 *
 * 03 07 2014 ken.liu
 * [MOLY00058420] [DHL] Fast interrupt mask/unmask via inline assembly for L2 trace
 * enable __L2_LOGGING_IRQ_LOC__.
 *
 * 03 06 2014 ken.liu
 * [MOLY00058420] [DHL] Fast interrupt mask/unmask via inline assembly for L2 trace
 * fix modis build error.
 *
 * 03 06 2014 ken.liu
 * [MOLY00058420] [DHL] Fast interrupt mask/unmask via inline assembly for L2 trace
 * replace l2 trace interrupt mask/unmask with inline assembly.
 *
 * 02 26 2014 eason.lai
 * [MOLY00057680] [L2][HMU][DHL] L2 trace and L2 timestamp support
 * Provide L2 trace timestamp API and change L2 trace type number
 *
 * 08 26 2013 mojo.lai
 * [MOLY00035110] Fix DHL L1 trace decode fail issue
 *
 * 05 15 2013 ken.liu
 * [MOLY00020676] [MT6290 Bring-up] Layer 2 trace enum arg and filter support
 * enable l2 trace enum support.
 *
 * 04 30 2013 ken.liu
 * [MOLY00021076] [MT6290 Bring-up] DHL flush log uses too much CPU time before entering idle task
 * sync from MT6290E1_FirstCall.
 *
 * 03 08 2013 ken.liu
 * [MOLY00009212] LTE Multimode merge back to MOLY
 * 1. add dhl_EM_logger api.
 * 2. resend exception log on first tool connection.
 *
 * 01 24 2013 ken.liu
 * [MOLY00005322] TATAKA merge to MOLY
 * enable flush log on assert
 *
 * 12 26 2012 ken.liu
 * [MOLY00005322] TATAKA merge to MOLY
 * sync TST new api trc_UpdateTimeStamp.
 *
 * 11 29 2012 ken.liu
 * [MOLY00005322] TATAKA merge to MOLY
 * sync section attribute for layer 1 trace and l1 sim task/hisr config for DHL.
 *
 * 11 07 2012 ken.liu
 * [MOLY00005322] TATAKA merge to MOLY
 * dhl module check-in.
 ****************************************************************************/

#if defined (L1_CATCHER) && (!defined(L1_SIM) || defined(__UE_SIMULATOR__))
#ifndef _L1TRC_H
#define _L1TRC_H

#include "kal_general_types.h"
#include "kal_public_api.h"

#if defined(__MTK_TARGET__) && !defined(__UE_SIMULATOR__)
  #if !(defined(__GSM_RAT__) && defined(__MD2__))
    typedef int cgen_use_L1Boxster;
    #define __L1BOXSTER_TURBO__
  #endif
#endif
typedef int cgen_use_L2Boxster;

#if defined(__L1CORE__)
/**
 *   Enable checksum
 *   define here for feeding into codegen when customer release / subsidiary
 **/
// L1core is not supproted L2 trace
#define __L2_TRACE_DISABLE__ 
// L1core L1trace is placed on L2SRAM
#define __L1_TRACE_BUFFER_SRAM__
#endif

#if defined(GEN_FOR_PC)

/**
 * L1trace filter memory section configures
 * first 4 elements:
 *    #pragma arm section code = "INTSRAM_ROCODE", rwdata = "L2SRAM_RW" , rodata = "L2SRAM_RODATA" , zidata = "L2SRAM_ZI"
 * the last element:
 *    __attribute__((section("L2SRAM_RW")))
 **/
typedef enum {
#if defined(__L1_TRACE_BUFFER_SRAM__)
  #if defined(__L1_TRACE_CODE_SRAM__)
    L2SRAM_ROCODE,
  #else
    INTSRAM_ROCODE,
  #endif
    L2SRAM_RW,
    L2SRAM_RODATA,
    L2SRAM_ZI,
    L2SRAM_RW
#else
  #if defined(__L1_TRACE_CODE_SRAM__)
    L2SRAM_ROCODE,
  #else
    INTSRAM_ROCODE,
  #endif
    INTSRAM_RW,
    INTSRAM_RODATA,
    INTSRAM_ZI,
    INTSRAM_RW
#endif
} CGEN_L1_TRACE_MEM_SECTION;

/**
 * L2trace filter memory section configures
 * first 4 elements:
 *    #pragma arm section code = "INTSRAM_ROCODE", rwdata = "L2SRAM_RW" , rodata = "L2SRAM_RODATA" , zidata = "L2SRAM_ZI"
 * the last element:
 *    __attribute__((section("L2SRAM_RW")))
 * Notes:
 *    The L2 trace buffer are maintain in L2 stored in TCM. This option only changes filter buffer.
 **/
typedef enum {
#if defined(__L2_TRACE_BUFFER_SRAM__)
  #if defined(__L2_TRACE_CODE_SRAM__)
    L2SRAM_ROCODE,
  #else
    INTSRAM_ROCODE,
  #endif
    L2SRAM_RW,
    L2SRAM_RODATA,
    L2SRAM_ZI,
    L2SRAM_RW
#else
  #if defined(__L2_TRACE_CODE_SRAM__)
    L2SRAM_ROCODE,
  #else
    INTSRAM_ROCODE,
  #endif
    INTSRAM_RW,
    INTSRAM_RODATA,
    INTSRAM_ZI,
    INTSRAM_RW
#endif
} CGEN_L2_TRACE_MEM_SECTION;

#endif 

typedef void (*trc_setfilterfunc)(unsigned char *);
#define TRC_FILTER_FUNC_ARRAY       trc_filterfuncarray
//extern unsigned short trc_filterfuncnbr;
#define TRC_NBR_MODULE              trc_filterfuncnbr
#define TRC_BUFFER                  trc_buf
#define TRC_TASK_BUFFER             trc_buf
#define TRC_ISR_BUFFER              trc_buf
#define TRC_BUFFER_PTR              trc_bufptr
#define TRC_L2_BUFFER               trc_l2_buf
#define TRC_L2_BUFFER_PTR           trc_l2_bufptr
#define TRC_SET_FILTER_FUNC         trc_setfilterfunc   

#define TRC_START_FILL_TASK TRC_START_FILL
#define TRC_END_FILL_TASK   TRC_END_FILL
#define TRC_START_FILL_ISR  TRC_START_FILL
#define TRC_END_FILL_ISR    TRC_END_FILL

#define TRC_L2_PAD (0xFA)
#define TRC_BOXSTER_PAD (0xFA)

extern kal_uint32 SaveAndSetIRQMask(void);        
extern void RestoreIRQMask(kal_uint32);

#define TRC_START_FILL(NoBytes)                         \
    kal_uint32 savedMask=0;                             \
    kal_uint32 TRC_LOCAL = 0;                           \
    kal_uint8 *TRC_BUF = 0;                             \
    savedMask = SaveAndSetIRQMask();                    \
    TRC_LOCAL = trc_bufptr;                             \
    TRC_BUF = trc_buf;                                  \
    if (TRC_LOCAL + NoBytes + 4 > L1TRC_BUFFER_SIZE) {  \
        if (trc_lostTraces < 0xFF) trc_lostTraces += 1; \
        RestoreIRQMask(savedMask);                      \
        return;                                         \
    }                                                   \
    do {} while(0)
    
#define TRC_END_FILL                                  \
    trc_bufptr = TRC_LOCAL;                           \
    *trc_cur_count = *trc_cur_count + 1;              \
    RestoreIRQMask(savedMask);                        \
    do{}while(0)

#if defined(__MTK_TARGET__)
#define __L2_LOGGING_IRQ_LOC__
#include "intrCtrl.h"

#define TRC_START_FILL_L2(NoBytes)                                       \
    kal_uint32 newmask=0, oldmask=0;                                         \
    LOCK_CPU_INTERRUPT(oldmask, newmask);                                 \
    if (trc_l2_buf_write_ptr + NoBytes + 4 > trc_l2_buf_end) {           \
      if (!trc_l2_alloc()) {                                             \
          if (trc_l2_lost_trace_count < 0xFF) trc_l2_lost_trace_count++; \
          UNLOCK_CPU_INTERRUPT(oldmask);                                 \
          return;                                                        \
      }                                                                  \
    }                                                                    \
    do {} while(0)
    
    
#define TRC_END_FILL_L2                               \
    *trc_l2_cur_count = *trc_l2_cur_count + 1;        \
    UNLOCK_CPU_INTERRUPT(oldmask);                    \
    do{}while(0)

#else
#define TRC_START_FILL_L2(NoBytes)                                       \
    extern kal_uint32 SaveAndSetIRQMask(void);                           \
    extern void RestoreIRQMask(kal_uint32);                              \
    kal_uint32 savedMask = SaveAndSetIRQMask();                          \
    if (trc_l2_buf_write_ptr + NoBytes + 4 > trc_l2_buf_end) {           \
      if (!trc_l2_alloc()) {                                             \
          if (trc_l2_lost_trace_count < 0xFF) trc_l2_lost_trace_count++; \
          RestoreIRQMask(savedMask);                                     \
          return;                                                        \
      }                                                                  \
    }                                                                    \
    do {} while(0)
    
    
#define TRC_END_FILL_L2                               \
    *trc_l2_cur_count = *trc_l2_cur_count + 1;        \
    RestoreIRQMask(savedMask);                        \
    do{}while(0)
#endif

/*******************/
/* Variable        */
/*******************/
#if defined (__MTK_TARGET__)
  #if defined(__L1_TRACE_CODE_SRAM__)
    #define __L1Func __attribute__ ((section ("L2SRAM_ROCODE"))) 
  #else 
    #define __L1Func __attribute__ ((section ("INTSRAM_ROCODE"))) 
  #endif
#else
  #define __L1Func
#endif

#ifdef TRC_C
  #if defined (__MTK_TARGET__)
    #if defined(__L1_TRACE_BUFFER_SRAM__)
      #define TRC_EXT __attribute__ ((section ("L2SRAM_ZI"))) 
    #else
      #define TRC_EXT __attribute__ ((zero_init, section ("INTSRAM_ZI")))
    #endif
  #else
    #define TRC_EXT 
  #endif
#else
  #define TRC_EXT extern
#endif

#if defined(__MTK_TARGET__)
  #if defined (__LTE_RAT__)
    #if defined(__PCORE__)
      #define L1TRC_BUFFER_SIZE (1<<12)
    #else /* __L1CORE__ */      
      #define L1TRC_BUFFER_SIZE (1<<14)
    #endif /* end of __PCORE__ */
  #else
    #if defined(MT6268T) || defined(MT6268H) || ( defined(MT6752) && defined(__MD2__) ) || defined(MT6571)
      #define L1TRC_BUFFER_SIZE (1<<10)
    #else   //#if defined(MT6268T) || defined(MT6268H) || ( defined(MT6752) && defined(__MD2__) )^M
      #define L1TRC_BUFFER_SIZE (1<<12)
    #endif  //#if defined(MT6268T) || defined(MT6268H) || ( defined(MT6752) && defined(__MD2__) )^M
  #endif
#else
#define L1TRC_BUFFER_SIZE (1<<15)
#endif

/* Task level buffer */
TRC_EXT kal_uint8   trc_buffers[2][L1TRC_BUFFER_SIZE];
TRC_EXT kal_uint8   *trc_buf;
TRC_EXT kal_uint8   *trc_buf_in_process;
TRC_EXT kal_uint32  trc_buf_len_in_process;
TRC_EXT kal_uint32  trc_bufptr;
#if defined(__L1BOXSTER_S__) || defined(__L1BOXSTER_TURBO__)
TRC_EXT kal_uint8   *trc_buf_write_ptr;
#endif
TRC_EXT kal_uint8   trc_lostTraces;
TRC_EXT kal_uint8   prev_trc_lostTraces;
TRC_EXT kal_uint8   trc_lostBuffers;
TRC_EXT kal_uint16   trc_count[2];
TRC_EXT kal_uint16   *trc_cur_count;
TRC_EXT kal_uint16   trc_count_in_process;
TRC_EXT kal_bool    trc_buffer_lock;

/* L2 buffer pool*/
#define L2TRC_MAX_BUF_CNT (32)
TRC_EXT kal_uint8   *trc_l2_buffers[L2TRC_MAX_BUF_CNT];
TRC_EXT kal_uint32  trc_l2_buf_idx;
TRC_EXT kal_uint32  trc_l2_buf_count;
TRC_EXT kal_uint32  trc_l2_buf_size;
TRC_EXT kal_uint32  trc_l2_buf_in_use;
TRC_EXT kal_uint32  trc_l2_buf_in_use_sent;
TRC_EXT kal_int32   trc_l2_buf_in_use_start_idx;
TRC_EXT kal_uint16  trc_l2_buf_size_in_use[L2TRC_MAX_BUF_CNT];

TRC_EXT kal_uint8   *trc_l2_buf;
TRC_EXT kal_uint8   *trc_l2_buf_write_ptr;
TRC_EXT kal_uint8   *trc_l2_buf_end;

TRC_EXT kal_uint32  trc_l2_bufptr;
TRC_EXT kal_uint8   trc_l2_lost_trace_count;
TRC_EXT kal_uint8   trc_l2_lost_buffer_count;

TRC_EXT kal_uint16   trc_l2_count[L2TRC_MAX_BUF_CNT];
TRC_EXT kal_uint16   *trc_l2_cur_count;

/************/
/*Functions */
/************/
void Trc_Init(void);
void trc_trigger(void);
void trc_fillFrameNumber_multiple(kal_uint32 framenumber, kal_uint32 ebit, kal_uint32 time, kal_uint32 sim_index);
void trc_UFillFrameNumber_multiple(kal_uint16 framenumber, kal_uint32 ebit, kal_int16 bsfn, kal_uint32 time, kal_uint32 sim_index);
void trc_4g_trigger(void);
void trc_fill_4g_time(kal_uint32 phytimer, kal_uint16 sample, kal_uint32 time, kal_uint16 sfn, kal_uint8 subframe);
void trc_fill_4g_time_2(kal_uint32 phytimer, kal_uint16 sample, kal_uint32 time, kal_uint16 sfn, kal_uint8 subframe, kal_uint32 _4g_time);
void trc_UpdateTimeStamp(kal_uint32 time);

void trc_handover(kal_uint32 handovertime, kal_uint32 framenumber);
void trc_Uhandover(kal_uint32 handovertime, kal_uint32 framenumber);
void trc_setfilter(kal_uint8 *setting, kal_uint32 len);
void trc_set_l1_filter(kal_uint8 *setting, kal_uint32 len);
void trc_set_l2_filter(kal_uint8 *setting, kal_uint32 len);
kal_int32 trc_getfilter(kal_uint8 *buffer, kal_int32 len);

/* pool should be located in non-cacheable area */
void trc_l2_init(kal_uint8 *pool[], kal_int32 size, kal_int32 count);
void trc_l2_flush(); 

/* internal alloc function (can only be called from thread-safe context)  */
kal_bool trc_l2_alloc();

void l2trc_send_1_word(long v1);
void l2trc_send_2_word(long v1, long v2);
void l2trc_send_3_word(long v1, long v2, long v3);
void l2trc_send_4_word(long v1, long v2, long v3, long v4);
void l2trc_send_5_word(long v1, long v2, long v3, long v4, long v5);
void l2trc_send_6_word(long v1, long v2, long v3, long v4, long v5, long v6);
void l2trc_send_7_word(long v1, long v2, long v3, long v4, long v5, long v6, long v7);

extern kal_uint32 tst_cur_timestamp;
extern kal_uint32 tst_cur_celltime;
extern kal_uint32 tst_cur_abstick;

#if defined(__PCORE__)
  #define DHL_L1_Trace_Filter DHL_L1_PCORE_Trace_Filter
  #define Set_DHL_L1_Filter Set_DHL_L1_PCORE_Filter
#else
  #define DHL_L1_Trace_Filter DHL_L1_SLAVE_Trace_Filter
  #define Set_DHL_L1_Filter Set_DHL_L1_SLAVE_Filter
#endif

/**
 * L2 time trace to sync with L1 traces,
 * herit L1 time as mod(0), and increase msg_idx to 8 ==> 0x0800 (little-endian)
 **/
// Export for L2 use
// must update cell time and ABS tick before fill function to prevent l2 flush interrupt
// to make ELT timing order incorrect
void l2trc_update_4G_time(kal_uint32 celltime, kal_uint32 abstick);
// Export for HIF GPT use
void l2trc_fill_4G_time();

/*******************************/
/* Macro for retrieving values */
/*******************************/
/* TRC_MAKE_CHAR */
#define TRC_MAKE_CHAR(buffer, offset, value)        \
    do {                                            \
      *(TRC_BUF+offset) = value;                     \
      offset += 1;                                  \
    } while(0)


/* TRC_MAKE_BYTE */
#define TRC_MAKE_BYTE TRC_MAKE_CHAR

/* TRC_MAKE_UBYTE */
#define TRC_MAKE_UBYTE TRC_MAKE_CHAR

/* TRC_MAKE_SHORT */
#define TRC_MAKE_SHORT(buffer, offset, value)   \
    do {                                        \
        *(TRC_BUF+offset+0) = value & 0xFF;      \
        *(TRC_BUF+offset+1) = ((value)>>8) & 0xFF; \
        offset += 2;                            \
    } while(0)
    
/* TRC_MAKE_USHORT */
#define TRC_MAKE_USHORT TRC_MAKE_SHORT
    
/* TRC_MAKE_LONG */
#define TRC_MAKE_LONG(buffer, offset, value)       \
    do {                                           \
        *(TRC_BUF+offset) = ((value)) & 0xFF;     \
        *(TRC_BUF+offset+1) = ((value)>> 8) & 0xFF; \
        *(TRC_BUF+offset+2) = ((value)>>16) & 0xFF; \
        *(TRC_BUF+offset+3)   = ((value)>>24) & 0xFF; \
        offset += 4;                               \
    } while(0)
    
/* TRC_MAKE_ULONG */
#define TRC_MAKE_ULONG TRC_MAKE_LONG

/* TRC_MAKE_FN */
#define TRC_MAKE_FN(buffer, offset, value)          \
    do {                                            \
        *(TRC_BUF+offset) = ((value) )    & 0xFF;  \
        *(TRC_BUF+offset+1) = ((value)>> 8) & 0xFF;  \
        *(TRC_BUF+offset+2)   = ((value)>>16) & 0xFF;  \
        offset += 3;                                \
    } while(0)

//For LMU related macros compatible
#define TRC_END_FILL_TASK_0w TRC_END_FILL
#define TRC_END_FILL_TASK_1w TRC_END_FILL
#define TRC_END_FILL_TASK_2w TRC_END_FILL
#define TRC_END_FILL_TASK_3w TRC_END_FILL
#define TRC_END_FILL_TASK_4w TRC_END_FILL
#define TRC_END_FILL_TASK_5w TRC_END_FILL
#define TRC_END_FILL_TASK_6w TRC_END_FILL
#define TRC_END_FILL_TASK_7w TRC_END_FILL

#define TRC_END_FILL_ISR_0w TRC_END_FILL
#define TRC_END_FILL_ISR_1w TRC_END_FILL
#define TRC_END_FILL_ISR_2w TRC_END_FILL
#define TRC_END_FILL_ISR_3w TRC_END_FILL
#define TRC_END_FILL_ISR_4w TRC_END_FILL
#define TRC_END_FILL_ISR_5w TRC_END_FILL
#define TRC_END_FILL_ISR_6w TRC_END_FILL
#define TRC_END_FILL_ISR_7w TRC_END_FILL
#define TRC_MAKE_CHAR_0c TRC_MAKE_CHAR
#define TRC_MAKE_CHAR_1c TRC_MAKE_CHAR
#define TRC_MAKE_CHAR_2c TRC_MAKE_CHAR
#define TRC_MAKE_CHAR_3c TRC_MAKE_CHAR

#define TRC_MAKE_SHORT_0c TRC_MAKE_SHORT
#define TRC_MAKE_SHORT_1c TRC_MAKE_SHORT
#define TRC_MAKE_SHORT_2c TRC_MAKE_SHORT
#define TRC_MAKE_SHORT_3c TRC_MAKE_SHORT

#define TRC_MAKE_FN_0c TRC_MAKE_FN
#define TRC_MAKE_FN_1c TRC_MAKE_FN
#define TRC_MAKE_FN_2c TRC_MAKE_FN
#define TRC_MAKE_FN_3c TRC_MAKE_FN

#define TRC_MAKE_LONG_0c TRC_MAKE_LONG
#define TRC_MAKE_LONG_1c TRC_MAKE_LONG
#define TRC_MAKE_LONG_2c TRC_MAKE_LONG
#define TRC_MAKE_LONG_3c TRC_MAKE_LONG  

#define TRC_PAD_CHAR(...)
#define TRC_PAD_SHORT(...)
#define TRC_PAD_FN(...)

#define TRC_ISR_BUFFER_FULL(...)
#define TRC_TASK_BUFFER_FULL(...)

#if defined(__L1BOXSTER__) || defined(__L1BOXSTER_S__) || defined(__L1BOXSTER_TURBO__) 

void TRC_SEND_1_DATA(kal_uint32 v1);
void TRC_SEND_2_DATA(kal_uint32 v1, kal_uint32 v2);
void TRC_SEND_3_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3);
void TRC_SEND_4_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4);
void TRC_SEND_5_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5);
void TRC_SEND_6_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6);
void TRC_SEND_7_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                  kal_uint32 v7);
void TRC_SEND_8_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                  kal_uint32 v7, kal_uint32 v8);
void TRC_SEND_9_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                  kal_uint32 v7, kal_uint32 v8, kal_uint32 v9);
void TRC_SEND_10_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10);
void TRC_SEND_11_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11);
void TRC_SEND_12_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12);
void TRC_SEND_13_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13);
void TRC_SEND_14_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14);
void TRC_SEND_15_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14, kal_uint32 v15);
void TRC_SEND_16_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16);
void TRC_SEND_17_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17);
void TRC_SEND_18_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18);
void TRC_SEND_19_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                                   kal_uint32 v19);
void TRC_SEND_20_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                                   kal_uint32 v19, kal_uint32 v20);
void TRC_SEND_21_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                                   kal_uint32 v19, kal_uint32 v20, kal_uint32 v21);
void TRC_SEND_22_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                                   kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22);
void TRC_SEND_23_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                                   kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23);
void TRC_SEND_24_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                                   kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24);
void TRC_SEND_25_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                                   kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                                   kal_uint32 v25);
void TRC_SEND_26_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                                   kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                                   kal_uint32 v25, kal_uint32 v26);
void TRC_SEND_27_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                                   kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                                   kal_uint32 v25, kal_uint32 v26, kal_uint32 v27);
void TRC_SEND_28_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                                   kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                                   kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28);
void TRC_SEND_29_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                                   kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                                   kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29);
void TRC_SEND_30_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                                   kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                                   kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30);
void TRC_SEND_31_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                                   kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                                   kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30,
                                   kal_uint32 v31);
void TRC_SEND_32_DATA(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                                   kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                                   kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                                   kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                                   kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30,
                                   kal_uint32 v31, kal_uint32 v32);


#if defined(__L1BOXSTER_TURBO__)
    #define TRC_START_FILL_V2(NoBytes)                     \
        kal_uint32 newmask=0, oldmask=0;                       \
        LOCK_CPU_INTERRUPT(oldmask, newmask);              \
        if (trc_bufptr + NoBytes + 4 > L1TRC_BUFFER_SIZE) {\
          if (trc_lostTraces < 0xFF) trc_lostTraces += 1;  \
              UNLOCK_CPU_INTERRUPT(oldmask);               \
          return;                                          \
        }                                                  \
        do {} while(0)
        
    #define TRC_END_FILL_V2(NoBytes)                      \
        *trc_cur_count = *trc_cur_count + 1;              \
        UNLOCK_CPU_INTERRUPT(oldmask);                    \
        do {} while(0)

#elif defined(__L1BOXSTER_S__)
    #define TRC_START_FILL_V2(NoBytes)                    \
        kal_uint32 savedMask=0;                           \
        savedMask = SaveAndSetIRQMask();                  \
        if (trc_bufptr + NoBytes + 4 > L1TRC_BUFFER_SIZE) {\
          if (trc_lostTraces < 0xFF) trc_lostTraces += 1; \
          RestoreIRQMask(savedMask);                      \
          return;                                         \
        }                                                 \
        do {} while(0)
        
        
    #define TRC_END_FILL_V2(NoBytes)                      \
        *trc_cur_count = *trc_cur_count + 1;              \
        RestoreIRQMask(savedMask);                        \
        do {} while(0)
#else
//Willie: L1 Logging Boxster
#define TRC_WRITE_WORD_TCM_START kal_uint32 *outputPtr = (kal_uint32*)(trc_buf + trc_bufptr);
//Note that buffer is 8-bit based
#define TRC_WRITE_WORD_TCM(value) do{ *outputPtr = value; outputPtr++;}while(0)
#define TRC_WRITE_WORD_TCM_END(no_bytes) do{ trc_bufptr += no_bytes; }while(0)

//Willie: Eliminate LMU related code
//No ALC case
#define TRC_START_FILL_V2(no_bytes)                                           \
      kal_uint32 saved_mask=0;                                                \
      saved_mask = SaveAndSetIRQMask();                                       \
      if(!trc_check_vacancy((no_bytes))) {                                    \
          RestoreIRQMask(saved_mask);                                         \
          return;                                                             \
      }                                                                       \
      do {} while(0)  

#define TRC_END_FILL_V2(no_bytes)  \
    *trc_cur_count = *trc_cur_count + 1; \
    RestoreIRQMask(saved_mask); \
    do {} while(0)
#endif

//Use MACRO
#define TRC_MERGE_2S_MACRO(v1, v2) ( (kal_uint32)(v1&0xFFFF) + ( ((kal_uint32)v2)<<16 ))
#define TRC_MERGE_1S2C_MACRO(v1, v2, v3) ( (kal_uint32)(v1&0xFFFF) + ( ( (kal_uint32)(v2&0xFF) )<<16) + ( ((kal_uint32)v3)<<24) )
#define TRC_MERGE_4C_MACRO(v1, v2, v3, v4) ( (kal_uint32)(v1&0xFF) + ( ((kal_uint32)(v2&0xFF))<<8) + ( ((kal_uint32)(v3&0xFF))<<16) + ( ((kal_uint32)v4)<<24))

kal_uint32 TRC_MERGE_2S_FUNC( kal_uint16 v1, kal_uint16 v2 );
kal_uint32 TRC_MERGE_1S2C_FUNC( kal_uint16 v1, kal_char v2 , kal_char v3);
kal_uint32 TRC_MERGE_4C_FUNC( kal_char v1, kal_char v2 , kal_char v3, kal_char v4);

#define TRC_MERGE_2S(v1, v2) TRC_MERGE_2S_MACRO((v1), (v2))
#define TRC_MERGE_1S2C(v1, v2, v3) TRC_MERGE_1S2C_MACRO((v1), (v2), (v3))
#define TRC_MERGE_4C(v1, v2, v3, v4) TRC_MERGE_4C_FUNC((v1), (v2), (v3), (v4))

#endif

#endif //_L1TRC_H
#elif defined (L1_SIM) /* #if defined(L1_CATCHER) && !defined(L1_SIM) */
#ifndef __L1TRC_L1SIM_H
#define __L1TRC_L1SIM_H

#include "kal_public_api.h"

#define TRC_L2_PAD (0xFA)

#define TRC_START_FILL_TASK TRC_START_FILL
#define TRC_END_FILL_TASK   TRC_END_FILL
#define TRC_START_FILL_ISR  TRC_START_FILL
#define TRC_END_FILL_ISR    TRC_END_FILL

//LMU compatible definitions
#define TRC_END_FILL_TASK_0w TRC_END_FILL
#define TRC_END_FILL_TASK_1w TRC_END_FILL
#define TRC_END_FILL_TASK_2w TRC_END_FILL
#define TRC_END_FILL_TASK_3w TRC_END_FILL
#define TRC_END_FILL_TASK_4w TRC_END_FILL
#define TRC_END_FILL_TASK_5w TRC_END_FILL
#define TRC_END_FILL_TASK_6w TRC_END_FILL
#define TRC_END_FILL_TASK_7w TRC_END_FILL

#define TRC_END_FILL_ISR_0w TRC_END_FILL
#define TRC_END_FILL_ISR_1w TRC_END_FILL
#define TRC_END_FILL_ISR_2w TRC_END_FILL
#define TRC_END_FILL_ISR_3w TRC_END_FILL
#define TRC_END_FILL_ISR_4w TRC_END_FILL
#define TRC_END_FILL_ISR_5w TRC_END_FILL
#define TRC_END_FILL_ISR_6w TRC_END_FILL
#define TRC_END_FILL_ISR_7w TRC_END_FILL

typedef void (*trc_setfilterfunc)(unsigned char *);

#define TRC_SET_FILTER_FUNC         trc_setfilterfunc   
extern TRC_SET_FILTER_FUNC TRC_FILTER_FUNC_ARRAY[];
extern unsigned short TRC_NBR_MODULE;
#if defined(__LTE_L1SIM__) && defined(__DUMMY_EL1C_EXISTS__)
#include "ltool.h"
#define TRC_START_FILL(NoBytes)                             \
    extern int Catcher_Enable;                              \
    kal_char tmpBuf[256];                                   \
    kal_uint32 cur_idx = 6;                                 \
    ASSERT_TRACE0((L1SimContextCheck(L1SIM_CONTEXT_CHECK_NONE, L1SIM_CONTEXT_CHECK_TASK, NULL, NULL) ||             \
                   L1SimContextCheck(L1SIM_CONTEXT_CHECK_IRQ_ENABLE, L1SIM_CONTEXT_CHECK_NONE, NULL, NULL)) ||    \
                  (strstr((kal_char*)__FUNCTION__, "MML1_BB_TRC_") != NULL) ||           \
                  (strstr((kal_char*)__FUNCTION__, "EL1D_TRC_LPWR_") != NULL) ||         \
                  (strstr((kal_char*)__FUNCTION__, "TPPA_TRC") != NULL),                 \
                  "L1 trace can't be printed in disable IRQ section!");                  \
    if (Catcher_Enable != 1) return;                        \
    tmpBuf[0] = (kal_char)0;                                \
    tmpBuf[1] = 0x8;                                        \
    tmpBuf[2] = (kal_char)((NoBytes + 2) & 0xff);           \
    tmpBuf[3] = (kal_char)(((NoBytes + 2) >> 8) & 0xff);    \
    tmpBuf[4] = (kal_char)1;                                \
    tmpBuf[5] = (kal_char)0;                                \
    do {} while (0)
#else
#define TRC_START_FILL(NoBytes)                             \
    extern int Catcher_Enable;                              \
    kal_char tmpBuf[256];                                   \
    kal_uint32 cur_idx = 6;                                 \
    if (Catcher_Enable != 1) return;                        \
    tmpBuf[0] = (kal_char)0;                                \
    tmpBuf[1] = 0x8;                                        \
    tmpBuf[2] = (kal_char)((NoBytes + 2) & 0xff);           \
    tmpBuf[3] = (kal_char)(((NoBytes + 2) >> 8) & 0xff);    \
    tmpBuf[4] = (kal_char)1;                                \
    tmpBuf[5] = (kal_char)0;                                \
    do {} while (0)
#endif
#define TRC_END_FILL                                        \
    do {                                                    \
        extern int SendToCatcher(char *buf, int size);      \
        SendToCatcher(tmpBuf, cur_idx);                     \
    } while (0)

//Fill data bytes
#define TRC_MAKE_CHAR(buffer, offset, value)        \
    do {                                            \
      tmpBuf[cur_idx++] = (kal_char) value;         \
    } while(0)

/* TRC_MAKE_BYTE */
#define TRC_MAKE_BYTE TRC_MAKE_CHAR

/* TRC_MAKE_UBYTE */
#define TRC_MAKE_UBYTE TRC_MAKE_CHAR

/* TRC_MAKE_SHORT */
#define TRC_MAKE_SHORT(buffer, offset, value)                      \
    do {                                                           \
        tmpBuf[cur_idx++] = (kal_char) (value &0xFF);              \
        tmpBuf[cur_idx++] = (kal_char) (((value)>>8) & 0xFF);      \
    } while(0)
    
/* TRC_MAKE_USHORT */
#define TRC_MAKE_USHORT TRC_MAKE_SHORT
    
/* TRC_MAKE_LONG */
#define TRC_MAKE_LONG(buffer, offset, value)                    \
    do {                                                        \
        tmpBuf[cur_idx++] = (kal_char) (value & 0xFF);          \
        tmpBuf[cur_idx++] = (kal_char) (((value)>>8) & 0xFF);   \
        tmpBuf[cur_idx++] = (kal_char) (((value)>>16) & 0xFF);  \
        tmpBuf[cur_idx++] = (kal_char) (((value)>>24) & 0xFF);  \
    } while(0)
    
/* TRC_MAKE_ULONG */
#define TRC_MAKE_ULONG TRC_MAKE_LONG

/* TRC_MAKE_FN */
#define TRC_MAKE_FN(buffer, offset, value)                       \
    do {                                                         \
        tmpBuf[cur_idx++] = (kal_char) (value & 0xFF);           \
        tmpBuf[cur_idx++] = (kal_char) (((value)>>8) & 0xFF);    \
        tmpBuf[cur_idx++] = (kal_char) (((value)>>16) & 0xFF);   \
    } while(0)


//For LMU related macros compatible
#define TRC_MAKE_CHAR_0c TRC_MAKE_CHAR
#define TRC_MAKE_CHAR_1c TRC_MAKE_CHAR
#define TRC_MAKE_CHAR_2c TRC_MAKE_CHAR
#define TRC_MAKE_CHAR_3c TRC_MAKE_CHAR

#define TRC_MAKE_SHORT_0c TRC_MAKE_SHORT
#define TRC_MAKE_SHORT_1c TRC_MAKE_SHORT
#define TRC_MAKE_SHORT_2c TRC_MAKE_SHORT
#define TRC_MAKE_SHORT_3c TRC_MAKE_SHORT

#define TRC_MAKE_FN_0c TRC_MAKE_FN
#define TRC_MAKE_FN_1c TRC_MAKE_FN
#define TRC_MAKE_FN_2c TRC_MAKE_FN
#define TRC_MAKE_FN_3c TRC_MAKE_FN

#define TRC_MAKE_LONG_0c TRC_MAKE_LONG
#define TRC_MAKE_LONG_1c TRC_MAKE_LONG
#define TRC_MAKE_LONG_2c TRC_MAKE_LONG
#define TRC_MAKE_LONG_3c TRC_MAKE_LONG  

#define TRC_ISR_BUFFER_FULL(TRC_LOCAL)
#define TRC_TASK_BUFFER_FULL(TRC_LOCAL)
#define TRC_PAD_CHAR
#define TRC_PAD_SHORT
#define TRC_PAD_FN

#endif // __L1TRC_L1SIM_H

#endif /* #if defined(L1_CATCHER) && !defined(L1_SIM) */