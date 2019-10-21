#ifndef _EXCEPTION_STRUCTURE_H_
#define _EXCEPTION_STRUCTURE_H_

#include <base/kal/kal_general_types.h>

typedef struct __attribute__((packed)) _arm7_cpu_regs {
    kal_uint32 spsr;
    kal_uint32 cpsr;
    kal_uint32 r0;
    kal_uint32 r1;
    kal_uint32 r2;
    kal_uint32 r3;
    kal_uint32 r4;
    kal_uint32 r5;
    kal_uint32 r6;
    kal_uint32 r7;
    kal_uint32 r8;
    kal_uint32 r9;
    kal_uint32 r10;
    kal_uint32 fp;
    kal_uint32 ip;
    kal_uint32 sp;
    kal_uint32 lr;
    kal_uint32 pc;
} arm7_cpu_regs_t;

typedef enum{
	EXCEPTION_PABT,
	EXCEPTION_DABT,
	EXCEPTION_UNDF
}exception_type_t;

enum {
    EX_STATUS_INIT = 0,
    EX_STATUS_INIT_DONE,
    EX_STATUS_TRIGGER_CTI,
    EX_STATUS_SAVE_EX_INFO,
    EX_STATUS_SAVE_EX_INFO_DONE,
    EX_STATUS_SAVE_SW_VERSION,
    EX_STATUS_SAVE_SW_VERSION_DONE,
    EX_STATUS_SAVE_TCM_DATA,
    EX_STATUS_SAVE_CPU_REGISTERS,
    EX_STATUS_SAVE_EX_INFO_TO_SRAM,
    EX_STATUS_SAVE_EX_INFO_TO_SRAM_DONE,
    EX_STATUS_CACHE_FLUSH,
    EX_STATUS_CACHE_FLUSH_DONE,
    EX_STATUS_READY,
    EX_STATUS_END,
};

enum {
    EX_REASON_CTI = 0,
    EX_REASON_ASSERT,
    EX_REASON_ABORT,
    EX_REASON_OTHERS,
    EX_REASON_UNKNOWN,
    EX_REASON_END,
};

typedef struct __attribute__((packed)) _assert_info {
    kal_uint32 arg1;
    kal_uint32 arg2;
    kal_uint32 arg3;
    kal_int32 line;
    kal_int8 file[64];
} assert_info_t;

typedef struct __attribute__((packed)) _fatal_error_info {
    kal_uint32 lr;
    kal_uint32 error_code;
} fatal_error_info_t;

typedef struct __attribute__((packed)) _ex_info {
    kal_uint32 ex_reason;
    union {
        assert_info_t assert;
        fatal_error_info_t fatal;
    } ex_info;
} ex_info_t;

/* Should sync to UMOLY */
typedef struct __attribute__((packed)) _ex_handshake_info {
    volatile kal_uint32 ex_status;
    ex_info_t info;
} ex_handshake_info_t;
/* Should sync to UMOLY */

typedef struct _exception_status {
    kal_int8 build_version[32];
    kal_int8 build_time[32];
    kal_int8 build_branch[32];
    kal_uint32 ex_status;
    kal_int32 ex_nested_count;
    ex_info_t info;
    ex_info_t nested_info;
} exception_status_t;

#endif
