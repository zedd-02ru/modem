#ifndef __INTRCTRL_H__
#define __INTRCTRL_H__

#if defined(CORTEXA9)||defined(CORTEXA7)
    #include <base/drv/drv_apgic.h>
#elif defined(CORTEXR4) /* end of  defined(CORTEXA9)||defined(CORTEXA7) */
    #include <base/drv/drv_mdcirq.h>
#elif defined(ARM7EJS) /* end of defined(CORTEXR4) */
    #include <base/drv/drv_arm7cirq.h>
#endif /* end of defined(ARM7EJS) */

#define EDGE_SENSITIVE           KAL_TRUE
#define LEVEL_SENSITIVE          KAL_FALSE

extern void IRQ_Register_LISR(kal_uint32 code, void (*reg_lisr)(kal_uint32 vector), char* description);
extern void IRQ_Unregister_LISR(kal_uint32 irqvector);

extern void IRQMask(kal_uint8 vector);
extern void IRQUnmask(kal_uint8 vector);
extern void IRQSensitivity(kal_uint8 code, kal_bool edge);
extern void IRQClearInt(kal_uint8);
extern void FIQSel(kal_uint32 vector);
extern void FIQMask(void);
extern void FIQUnmask(void);
extern void FIQ_Register_LISR(void (*reg_lisr)(kal_uint32));

extern void Activate_LISR(kal_uint32 vector);
extern void Deactivate_LISR(kal_uint32 vector);
extern void SYS_ClearInt(kal_uint8 code); /* SS Only */
extern kal_uint32 SaveAndSetIRQMask(void);
extern void RestoreIRQMask(kal_uint32);

/* FIQ_Register_LISR2: AP Only */
extern void FIQ_Register_LISR2(kal_uint32 code, void (*reg_lisr)(kal_uint32), char* description);


/* FIQ_Register_LISR2: MDCIRQ/APGIC UT Only */
void irq_befPriAck_cb_register(void (*cb)(kal_uint32));
void irq_aftPriAck_cb_register(void (*cb)(kal_uint32));
void irq_befPriAck_cb_unregister(void);
void irq_aftPriAck_cb_unregister(void);

void irq_befGetID_cb_register(void (*cb)(void));
void irq_aftGetID_cb_register(void (*cb)(kal_uint32));
void irq_befGetID_cb_unregister(void);
void irq_aftGetID_cb_unregister(void);

typedef struct IRQ_MASK_VALUE_STRUCT
{
    kal_uint32 irq_mask[MAX_ISR_NUM/32];
    kal_uint32 fiq_mask;
} IRQ_MASK_VALUE_T;



#endif /* end of __INTRCTRL_H__ */


