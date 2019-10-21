#ifndef _EXCEPTION_H_
#define _EXCEPTION_H_

#include <base/kal/kal_release.h>
#include <base/drv/drv_arm7cirq.h>
#include <base/kal/intrCtrl.h>
#include <base/drv/drv_pccif_arm7.h>
#include <base/kal/exception_structure.h>

extern void GetCPURegisters(arm7_cpu_regs_t *regs);

#define EX_HANDSHAKE_BASE ((kal_uint32 *)PCCIF_ARM7_SRAM_base(0))
#define EX_SET_HS_STATUS(status) do { \
    arm7_ex_log.ex_status = status; \
    ex_hs_info_ptr->ex_status = status; \
} while (0)

#ifndef USE_THUMB_MODE
#define retrieve_regs(regs) /* regs must be assigned to r0 */ do { \
    __asm__(        \
        ".code 32 \n\t" \
        "PUSH {r1} \n\t" \
        "STR r0, [%[value],#8] \n\t" \
        "STR r1, [%[value],#12] \n\t" \
        "STR r2, [%[value],#16] \n\t" \
        "STR r3, [%[value],#20] \n\t" \
        "STR r4, [%[value],#24] \n\t" \
        "STR r5, [%[value],#28] \n\t" \
        "STR r6, [%[value],#32] \n\t" \
        "STR r7, [%[value],#36] \n\t" \
        "STR r8, [%[value],#40] \n\t" \
        "STR r9, [%[value],#44] \n\t" \
        "STR r10, [%[value],#48] \n\t" \
        "STR r11, [%[value],#52] \n\t" \
        "STR r12, [%[value],#56] \n\t" \
        "STR r13, [%[value],#60] \n\t" \
        "STR r14, [%[value],#64] \n\t" \
        "STR r15, [%[value],#68] \n\t" \
        "MRS r1, cpsr \n\t" \
        "STR r1, [%[value],#4] \n\t" \
        "MRS r1, spsr \n\t" \
        "STR r1, [%[value]] \n\t" \
        "POP {r1} \n\t" \
        : \
        : [value]"r" (regs) \
        : \
    ); \
} while (0)
#else
#define retrieve_regs(regs) GetCPURegisters(regs)
#endif

typedef void (*fp)(void);
typedef void (*abt_handler_fp)(kal_uint32 fsr, kal_uint32 far, kal_uint32 lr);
typedef void (*undf_handler_fp)(kal_uint32 *lr);

extern void exception_register_handler_cb(exception_type_t type, fp handler_cb);
extern void exception_unregister_handler_cb(exception_type_t type);
extern void arm7_exception(kal_uint32 reason, const kal_int8 *file, kal_int32 line, kal_uint32 lr, kal_uint32 arg1, kal_uint32 arg2, kal_uint32 arg3);

#endif
