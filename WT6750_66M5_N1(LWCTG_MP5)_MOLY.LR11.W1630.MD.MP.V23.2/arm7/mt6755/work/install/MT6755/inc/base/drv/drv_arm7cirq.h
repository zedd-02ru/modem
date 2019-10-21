#ifndef __DRV_ARM7CIRQ_H__
#define __DRV_ARM7CIRQ_H__

#ifdef ARM7EJS
#include <base/kal/kal_release.h>
#include <base/kal/isrentry.h>
#include <mach/basereg.h>


/* Global ARM7CIRQ Definition  */
#define MAX_ISR_NUM                   (32U)
#define ARM7CIRQ_LOWEST_PRI           (0xFU)
#define ARM7CIRQ_HIGHEST_PRI          (0x0U)
#define ARM7CIRQ_TOTAL_PRI_LEVEL      (16U)   /* 16 Priority Level */
#define ARM7CIRQ_TOTAL_PRI_LEVEL_MASK (0xFU)  /* Priority Level Mask */ 

#define ARM7CIRQ_BASE            (BASE_ADDR_ARM7CIRQ)
#define ARM7CIRQ_ISAR3100_REG    (ARM7CIRQ_BASE + 0x0000)
#define ARM7CIRQ_IMKR3100_REG    (ARM7CIRQ_BASE + 0x0004)
#define ARM7CIRQ_IMCR3100_REG    (ARM7CIRQ_BASE + 0x0008)
#define ARM7CIRQ_IMSR3100_REG    (ARM7CIRQ_BASE + 0x000C)
#define ARM7CIRQ_ISTR3100_REG    (ARM7CIRQ_BASE + 0x0010)
#define ARM7CIRQ_ISENR3100_REG   (ARM7CIRQ_BASE + 0x0014)
#define ARM7CIRQ_FIQCONR_REG     (ARM7CIRQ_BASE + 0x0018)
#define ARM7CIRQ_IVCTR3100_REG   (ARM7CIRQ_BASE + 0x001C)
#define ARM7CIRQ_INTID_CURR_REG  (ARM7CIRQ_BASE + 0x0020)
#define ARM7CIRQ_PRLV_CURR_REG   (ARM7CIRQ_BASE + 0x0024)

#define ARM7CIRQ_INTID_BEST_REG  (ARM7CIRQ_BASE + 0x0028)
#define ARM7CIRQ_PRLV_BEST_REG   (ARM7CIRQ_BASE + 0x002C)
#define ARM7CIRQ_INTID_SPUR_REG  (ARM7CIRQ_BASE + 0x0030)

#define ARM7CIRQ_CTRL_REG        (ARM7CIRQ_BASE + 0x0034)
#define ARM7CIRQ_DBG_REG         (ARM7CIRQ_BASE + 0x0038)
#define ARM7CIRQ_SW_PRIACK_REG   (ARM7CIRQ_BASE + 0x003C)
#define ARM7CIRQ_MIN_PRLV_REG    (ARM7CIRQ_BASE + 0x0040)

#define ARM7CIRQ_PRLV_BASE       (ARM7CIRQ_BASE + 0x0044)
#define ARM7CIRQ_PRLV_REG(n)     (ARM7CIRQ_PRLV_BASE + (n)*4 )

//#define MDCIRQ_VEC_BASE    (MDCIRQ_BASE+0x0154)
//#define MDCIRQ_VEC_ADDR(n) (MDCIRQ_VEC_BASE + (n)*4 )

//#define MDCIRQ_DEFAULT_VEC_ADR (MDCIRQ_VEC_ADDR(MAX_ISR_NUM))


/* ARM7CIRQ_FIQCONR Field */
#define ARM7CIRQ_FIQCONR_FIQ_MASK     (1UL << 0)
#define ARM7CIRQ_FIQCONR_FIQ_SEL(n)   ((n) << 8) /* n = 0 ~ MAX_ISR_NUM-1 */

/* ARM7CIRQ_CTRL_REG Field */
#define ARM7CIRQ_CTRL_REG_NESTED_INT_EN      (1UL << 0)

#define ARM7CIRQ_SEN_PULSE            (KAL_TRUE)
#define ARM7CIRQ_SEN_LEVEL            (KAL_FALSE)


/*
#define ARM7CIRQ_ISAR_BASE  ARM7CIRQ_ISAR3100_REG
#define ARM7CIRQ_IMKR_BASE  ARM7CIRQ_IMKR3100_REG
#define ARM7CIRQ_IMCR_BASE  ARM7CIRQ_IMCR3100_REG
#define ARM7CIRQ_IMSR_BASE  ARM7CIRQ_IMSR3100_REG
#define ARM7CIRQ_ISTR_BASE  ARM7CIRQ_ISTR3100_REG
#define ARM7CIRQ_ISENR_BASE ARM7CIRQ_ISENR3100_REG
#define ARM7CIRQ_IVCTR_BASE ARM7CIRQ_IVCTR3100_REG
*/

/*#define ARM7CIRQ_WriteReg32_Vector(base_addr, vector, value)                     \
do{                                                                              \
    DRV_WriteReg32(base_addr,value);                                     \
}while(0)

#define ARM7CIRQ_SetRegBit_Vector(base_addr, vector)                           \
do{                                                                          \
    kal_uint32 tmp;                                                          \
    tmp = DRV_Reg32(base_addr) | (1<<(vector));                   \
    DRV_WriteReg32(base_addr,tmp);				    	\
}while(0)

#define ARM7CIRQ_GetRegBit_Vector(base_addr, vector)                           \
(                                                               \
    ( (DRV_Reg32(base_addr)     >> (vector)) & 1)                     \
)


#define ARM7CIRQ_ClrRegBit_Vector(base_addr, vector)                           \
do{ 									 \
    kal_uint32 tmp; 							\
    tmp = DRV_Reg32(base_addr) & (~(1<<vector));		\
    DRV_WriteReg32(base_addr,tmp);					\
}while(0)

#define ARM7CIRQ_WrSetRegBit_Vector(base_addr, vector)                         \
do{ 									 \
    DRV_WriteReg32(base_addr, 1<<vector);		    	\
}while(0)

//!??
#define ARM7CIRQ_WrClrRegBit_Vector(base_addr, vector)                         \
	ARM7CIRQ_WrSetRegBit_Vector(base_addr, vector)
*/
//#define IS_VIC_MODE()             drv_mdcirq_get_vic_mode()
#define IS_NESTED_SUPPORT()       drv_arm7cirq_get_nested_interrupt_mode()
#define IRQ_SETMASK_BIT(v)        DRV_WriteReg32( ARM7CIRQ_IMSR3100_REG, (0x1 << v))
#define IRQ_CLRMASK_BIT(v)        DRV_WriteReg32( ARM7CIRQ_IMCR3100_REG, (0x1 << v))
#define IRQ_Deactivate_LISR(v)    DRV_WriteReg32( ARM7CIRQ_ISTR3100_REG, (DRV_Reg32(ARM7CIRQ_ISTR3100_REG) & (~(0x1 << v))))

#define IRQ_Activate_LISR(v)      \
do { \
    DRV_WriteReg32( ARM7CIRQ_ISTR3100_REG, (DRV_Reg32(ARM7CIRQ_ISTR3100_REG) | (0x1 << v))); \
    if (((DRV_Reg32(ARM7CIRQ_ISENR3100_REG) >> v) & 0x1) == 0 ) { \
        DRV_Reg32(ARM7CIRQ_ISAR3100_REG); \
        if (((DRV_Reg32(ARM7CIRQ_ISAR3100_REG) >> v) & 0x1) != 1 ) { \
            ASSERT(0); \
        } \
    } \
} while(0);
// sw patch for non post-write arm7cirq issue

#define IRQPending_Status(v)      ((DRV_Reg32(ARM7CIRQ_ISAR3100_REG) >> v) & 0x1)
#define IRQ_SET_SENSITIVE(c, l)   drv_arm7cirq_set_sensitivity(c, l)
//#define IRQ_SET_SECURE_FIQ(enb)   /* Do Not Support */
//#define IRQ_SETID_SECURE(id, enb) /* Do Not Support */
#define IRQMask_Status(v)         ((DRV_Reg32(ARM7CIRQ_IMKR3100_REG) >> v) & 0x1)

#define IRQ_PRIORITY_ACK(v)       IRQClearInt(v);\
                                                    DRV_WriteReg32(ARM7CIRQ_SW_PRIACK_REG, 1)
                                                 

//typedef void (*lisr_entry)(void);

/* extern functions/variables */
extern lisr_entry lisr_dispatch_tbl[MAX_ISR_NUM];

extern void          drv_arm7cirq_reset(void);
extern void          drv_arm7cirq_set_sensitivity(kal_uint8 vector, kal_bool edge);
extern void          drv_arm7cirq_set_vector_priority(kal_uint32 vector, kal_uint32 priority);
extern void          drv_arm7cirq_set_min_priority(kal_uint32 priority);
//extern void          drv_mdcirq_set_vic_mode(kal_uint32 enable); /* Do Not Support*/
//extern kal_uint32    drv_mdcirq_get_vic_mode(void); /* Do Not Support*/
extern void          drv_arm7cirq_set_nested_interrupt_mode(kal_uint32 enable);
extern kal_uint32    drv_arm7cirq_get_nested_interrupt_mode(void);
extern void          IRQClearInt(kal_uint8 vector);

#endif /* end of ARM7EJS */

#endif /* end of __DRV_ARM7CIRQ_H__ */

