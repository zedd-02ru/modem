#ifndef __REG_MDCIRQ_H__
#define __REG_MDCIRQ_H__

#ifdef CORTEXR4

#include <mach/basereg.h>

#if defined(MT6291) || defined(MT6755) || defined(MT6757)

//#if (PSCORE)
#define MDCIRQ_128_64_VERSION 1
//#endif

#else //else of MT6291
#if CHIP_VER==0
#define MDCIRQ_128_64_VERSION 0
#else
#define MDCIRQ_128_64_VERSION 1
#endif
#endif

#if MDCIRQ_128_64_VERSION

/* Global MDCIRQ Definition  */
#define MAX_ISR_NUM                 128
#define MDCIRQ_LOWEST_PRI           (0x3FU)
#define MDCIRQ_HIGHEST_PRI          (0x0U)
#define MDCIRQ_TOTAL_PRI_LEVEL      (64U)   /* Priority Level */
#define MDCIRQ_TOTAL_PRI_LEVEL_MASK (0xFFFFFFFFFFFFFFFFULL)   /* Priority Level Mask*/


#if defined(PSCORE)
#define MDCIRQ_BASE             (BASE_ADDR_MDCIRQ)
#define MDOSTIMER_BASE          (BASE_ADDR_MDOSTIMER)
#define MDTOPSM_FORCIRQ_BASE    (BASE_ADDR_MDTOPSM)
#elif defined(L1CORE)
#define MDCIRQ_BASE             (L1_BASE_ADDR_L1CIRQ)
#define MDOSTIMER_BASE          (L1_BASE_ADDR_L1OSTIMER)
#define MDTOPSM_FORCIRQ_BASE    (L1_BASE_ADDR_TOPSM)
#else
#error 
#endif
#define MDCIRQ_ISAR3100    (MDCIRQ_BASE + 0x0000) //INT status
#define MDCIRQ_ISAR6332    (MDCIRQ_BASE + 0x0004) //INT status
#define MDCIRQ_ISAR9564    (MDCIRQ_BASE + 0x0008) //INT status
#define MDCIRQ_ISAR12796   (MDCIRQ_BASE + 0x000C) //INT status
#define MDCIRQ_IMKR3100    (MDCIRQ_BASE + 0x0010) //mask status
#define MDCIRQ_IMKR6332    (MDCIRQ_BASE + 0x0014) //mask status
#define MDCIRQ_IMKR9564    (MDCIRQ_BASE + 0x0018) //mask status
#define MDCIRQ_IMKR12796   (MDCIRQ_BASE + 0x001C) //mask status
#define MDCIRQ_IMCR3100    (MDCIRQ_BASE + 0x0020) //mask clr
#define MDCIRQ_IMCR6332    (MDCIRQ_BASE + 0x0024) //mask clr
#define MDCIRQ_IMCR9564    (MDCIRQ_BASE + 0x0028) //mask clr
#define MDCIRQ_IMCR12796   (MDCIRQ_BASE + 0x002C) //mask clr
#define MDCIRQ_IMSR3100    (MDCIRQ_BASE + 0x0030) //mask set
#define MDCIRQ_IMSR6332    (MDCIRQ_BASE + 0x0034) //mask set
#define MDCIRQ_IMSR9564    (MDCIRQ_BASE + 0x0038) //mask set
#define MDCIRQ_IMSR12796   (MDCIRQ_BASE + 0x003C) //mask set
#define MDCIRQ_ISTR3100    (MDCIRQ_BASE + 0x0040) //sw trigger
#define MDCIRQ_ISTR6332    (MDCIRQ_BASE + 0x0044) //sw trigger
#define MDCIRQ_ISTR9564    (MDCIRQ_BASE + 0x0048) //sw trigger
#define MDCIRQ_ISTR12796   (MDCIRQ_BASE + 0x004C) //sw trigger
#define MDCIRQ_ISENR3100   (MDCIRQ_BASE + 0x0050) //sensitivity 0:pulse, 1:level
#define MDCIRQ_ISENR6332   (MDCIRQ_BASE + 0x0054) //sensitivity 0:pulse, 1:level
#define MDCIRQ_ISENR9564   (MDCIRQ_BASE + 0x0058) //sensitivity 0:pulse, 1:level
#define MDCIRQ_ISENR12796  (MDCIRQ_BASE + 0x005C) //sensitivity 0:pulse, 1:level
#define MDCIRQ_FIQCONR     (MDCIRQ_BASE + 0x0060) //FIQ control
#define MDCIRQ_IVCTR3100   (MDCIRQ_BASE + 0x0064) //valid interrupt status, consider IRQ mask
#define MDCIRQ_IVCTR6332   (MDCIRQ_BASE + 0x0068) //valid interrupt status, consider IRQ mask
#define MDCIRQ_IVCTR9564   (MDCIRQ_BASE + 0x006C) //valid interrupt status, consider IRQ mask
#define MDCIRQ_IVCTR12796  (MDCIRQ_BASE + 0x0070) //valid interrupt status, consider IRQ mask
#define MDCIRQ_INTID_CURR  (MDCIRQ_BASE + 0x0074) //current INT ID
#define MDCIRQ_PRLV_CURR   (MDCIRQ_BASE + 0x0078) //current priority level
#define MDCIRQ_INTID_SPUR  (MDCIRQ_BASE + 0x007C) //spurious INT ID
#define MDCIRQ_CTRL_REG    (MDCIRQ_BASE + 0x0080) //VIC 1: enable, 0:disable
#define MDCIRQ_DBG         (MDCIRQ_BASE + 0x0084) //debug register
#define MDCIRQ_SW_PRIACK   (MDCIRQ_BASE + 0x0088) //write 1 to ack ISR
#define MDCIRQ_MIN_PRLV    (MDCIRQ_BASE + 0x008C) //minimal priority level
#define MDCIRQ_PRLV_BASE   (MDCIRQ_BASE + 0x0090) //IRQ priority base
#define MDCIRQ_PRLV(n)     (MDCIRQ_PRLV_BASE + ((n>>2)<<2) ) // each IRQ priority
#define MDCIRQ_VEC_BASE    (MDCIRQ_BASE+0x0290) //base of vector address
//#define MDCIRQ_VEC_ADDR(n) (MDCIRQ_VEC_BASE + (n)*4 )
#define MDCIRQ_VEC_OFFSET   (MDCIRQ_BASE+0x0294) //offset of vector address
//#define MDCIRQ_DEFAULT_VEC_ADR (MDCIRQ_VEC_ADDR(MAX_ISR_NUM))
#define MDCIRQ_DEFAULT_VEC_ADR (MDCIRQ_BASE+0x0490) //reserved
#define MDCIRQ_DUMMY   (MDCIRQ_BASE+0x0498)         //reserved


#else /* else of MDCIRQ_128_64_VERSION */

/* Global MDCIRQ Definition  */
#define MAX_ISR_NUM                 96
#define MDCIRQ_LOWEST_PRI           (0x0FU)
#define MDCIRQ_HIGHEST_PRI          (0x0U)
#define MDCIRQ_TOTAL_PRI_LEVEL      (16U)   /* Priority Level */
#define MDCIRQ_TOTAL_PRI_LEVEL_MASK (0x0000FFFFULL)   /* Priority Level Mask*/


#define MDCIRQ_BASE        (BASE_ADDR_MDCIRQ)
#define MDCIRQ_ISAR9564    (MDCIRQ_BASE + 0x0000)
#define MDCIRQ_ISAR6332    (MDCIRQ_BASE + 0x0004)
#define MDCIRQ_ISAR3100    (MDCIRQ_BASE + 0x0008)
#define MDCIRQ_IMKR9564    (MDCIRQ_BASE + 0x000C)
#define MDCIRQ_IMKR6332    (MDCIRQ_BASE + 0x0010)
#define MDCIRQ_IMKR3100    (MDCIRQ_BASE + 0x0014)
#define MDCIRQ_IMCR9564    (MDCIRQ_BASE + 0x0018)
#define MDCIRQ_IMCR6332    (MDCIRQ_BASE + 0x001C)
#define MDCIRQ_IMCR3100    (MDCIRQ_BASE + 0x0020)
#define MDCIRQ_IMSR9564    (MDCIRQ_BASE + 0x0024)
#define MDCIRQ_IMSR6332    (MDCIRQ_BASE + 0x0028)
#define MDCIRQ_IMSR3100    (MDCIRQ_BASE + 0x002C)
#define MDCIRQ_ISTR9564    (MDCIRQ_BASE + 0x0030)
#define MDCIRQ_ISTR6332    (MDCIRQ_BASE + 0x0034)
#define MDCIRQ_ISTR3100    (MDCIRQ_BASE + 0x0038)
#define MDCIRQ_ISENR9564   (MDCIRQ_BASE + 0x003C)
#define MDCIRQ_ISENR6332   (MDCIRQ_BASE + 0x0040)
#define MDCIRQ_ISENR3100   (MDCIRQ_BASE + 0x0044)
#define MDCIRQ_FIQCONR     (MDCIRQ_BASE + 0x0048)
#define MDCIRQ_IVCTR9564   (MDCIRQ_BASE + 0x004C)
#define MDCIRQ_IVCTR6332   (MDCIRQ_BASE + 0x0050)
#define MDCIRQ_IVCTR3100   (MDCIRQ_BASE + 0x0054)
#define MDCIRQ_INTID_CURR  (MDCIRQ_BASE + 0x0058)
#define MDCIRQ_PRLV_CURR   (MDCIRQ_BASE + 0x005C)
#define MDCIRQ_INTID_SPUR  (MDCIRQ_BASE + 0x0060)
#define MDCIRQ_CTRL_REG    (MDCIRQ_BASE + 0x0064)
#define MDCIRQ_DBG         (MDCIRQ_BASE + 0x0068)
#define MDCIRQ_SW_PRIACK   (MDCIRQ_BASE + 0x006C)
#define MDCIRQ_MIN_PRLV    (MDCIRQ_BASE + 0x0070)
#define MDCIRQ_PRLV_BASE   (MDCIRQ_BASE + 0x0074)
#define MDCIRQ_PRLV(n)     (MDCIRQ_PRLV_BASE + (n)*4 )
#define MDCIRQ_VEC_BASE    (MDCIRQ_BASE+0x01F4)
#define MDCIRQ_VEC_ADDR(n) (MDCIRQ_VEC_BASE + (n)*4 )
#define MDCIRQ_DEFAULT_VEC_ADR (MDCIRQ_VEC_ADDR(MAX_ISR_NUM))

#endif /* end of "else of MDCIRQ_128_64_VERSION" */


/* MDCIRQ_FIQCONR Field */
#define MDCIRQ_FIQCONR_FIQ_MASK     (1UL << 0)
#define MDCIRQ_FIQCONR_FIQ_SEL(n)   ((n) << 8) /* n = 0 ~ MAX_ISR_NUM-1 */

/* MDCIRQ_CTRL_REG Field */
#define MDCIRQ_CTRL_REG_VIC_EN      (1UL << 0)

#define MDCIRQ_SEN_PULSE            (KAL_TRUE)
#define MDCIRQ_SEN_LEVEL            (KAL_FALSE)



#define MDCIRQ_ISAR_BASE  MDCIRQ_ISAR3100
#define MDCIRQ_IMKR_BASE  MDCIRQ_IMKR3100
#define MDCIRQ_IMCR_BASE  MDCIRQ_IMCR3100
#define MDCIRQ_IMSR_BASE  MDCIRQ_IMSR3100
#define MDCIRQ_ISTR_BASE  MDCIRQ_ISTR3100
#define MDCIRQ_ISENR_BASE MDCIRQ_ISENR3100
#define MDCIRQ_IVCTR_BASE MDCIRQ_IVCTR3100

#endif /* end of CORTEXR4 */

#endif /* end of __DRV_MDCIRQ_H__ */

