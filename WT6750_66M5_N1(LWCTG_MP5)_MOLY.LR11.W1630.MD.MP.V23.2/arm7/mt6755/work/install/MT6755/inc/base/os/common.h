/*********************************************************************
  * LEGAL DISCLAIMER
  *
  * (Header of MediaTek Software/Firmware Release or Documentation)
  *
  * BY OPENING OR USING THIS FILE, BUYER HEREBY UNEQUIVOCALLY
  * ACKNOWLEDGES AND AGREES THAT THE SOFTWARE/FIRMWARE AND ITS
  * DOCUMENTATIONS ("MEDIATEK SOFTWARE") RECEIVED FROM MEDIATEK AND/OR
  * ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON AN "AS-IS" BASIS ONLY.
  * MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, EXPRESS OR
  * IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
  * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
  * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY
  * WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH
  * MAY BE USED BY, INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK
  * SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY
  * WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO NOT BE
  * RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
  * SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
  *
  * BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
  * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED
  * HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE
  * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR
  * SERVICE CHARGE PAID BY BUYER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE
  * AT ISSUE.
  *
  * THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN
  * ACCORDANCE WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING
  * ITS CONFLICT OF LAWS PRINCIPLES.
  **********************************************************************
  */

#ifndef __COMMON_H__
#define __COMMON_H__

#include <base/kal/kal_release.h>
#include <mach/basereg.h>

/****************************************************************************
                Definitions
 ***************************************************************************/

extern kal_uint32 __DATA_LOAD_NC_ADDR, __DATA_LOAD_ADDR;
extern kal_uint32 __DATA_START, __DATA_END;

#define __MD_SYS_SECTION__(S) __attribute__((section (#S)))
#define __HVT_MD_SYS__ __MD_SYS_SECTION__(.hvt_md_system)

#define SECTION_N(seq)           __attribute__ ((used, section (".module_entry"#seq)))
#define MODULE_N(entryname, seq) void * __entry_##entryname SECTION_N(seq) = (entryname)
#define MODULE(entryname)        MODULE_N(entryname, 3)

#define BEFORE_RESET_SECTION_N(seq)         __attribute__ ((used, section (".entry_breset"#seq)))
#define BEFORE_RESET_N(entryname, seq) void * __entry_##entryname BEFORE_RESET_SECTION_N(seq) = (entryname)
#define BEFORE_RESET(entryname)        BEFORE_RESET_N(entryname, 3)

#if defined(SYS_CTRL_TCM)
#define ARM7_TCM_CODE __attribute__((section(".arm7_tcm_code"))) __attribute__((noinline))
#define ARM7_TCM_DATA __attribute__((section(".arm7_tcm_data"))) __attribute__((used))
#else
#define ARM7_TCM_CODE
#define ARM7_TCM_DATA
#endif

#define EXCEPTION_DATA __attribute__((section(".exception_data"))) __attribute__((used))

#define GFH_HEADER_SECTION __attribute__((section(".gfh_header"))) __attribute__((used))
#define GFH_HEADER_EXT_SECTION __attribute__((section(".gfh_header_ext"))) __attribute__((used))
#define GFH_SIGNATURE_SECTION __attribute__((section(".gfh_signature"))) __attribute__((used))

#define DELAY_LOOP(n)                                                          \
do{                                                                               \
    volatile register kal_uint32 _delay_loop;                                     \
    for(_delay_loop = 0; _delay_loop < n; _delay_loop++) { ; }                    \
}while(0)

/* Refer to RFC5424 */
typedef enum {
    MSG_EMERGENCY = 0,        // Emergency: system is unusable
    MSG_ALERT,                // Alert: action must be taken immediately
    MSG_CRITICAL,            // Critical: critical conditions
    MSG_ERR,                // Error: error conditions
    MSG_WARN,                // Warning: warning conditions
    MSG_NOTICE,                // Notice: normal but significant condition
    MSG_INFO,                // Informational: informational messages
    MSG_DBG                    // Debug: debug-level messages
} msg_lvl_t;

#ifndef MSG_ENABLE
#define MSG_ENABLE       1
#endif

#ifndef MSG_LEVEL
    #define MSG_LEVEL        MSG_INFO
#endif

#define MSG(lvl, formatStr, args...)\
        do {\
            if ((0 != MSG_ENABLE) && (lvl <= MSG_LEVEL)) {\
                kal_printf(formatStr, ##args);\
            }\
        }while(0);

/* For peterson's lock */
typedef struct _petersonslock {
    volatile kal_uint32 flag[2];
    volatile kal_uint32 turn;
} petersonslock_t;

void p_lock_init(void);
void p_lock_acquire(kal_uint32 id);
void p_lock_release(kal_uint32 id);

#define P_LOCK_ACQUIRE() p_lock_acquire(1) // ARM7_ID=1
#define P_LOCK_RELEASE() p_lock_release(1) // ARM7_ID=1

typedef kal_uint32 (*entry_fn_ptr)(kal_int32 flags, kal_int32 parameter);
typedef kal_uint32 (*reset_fp) (void);

void os_udelay(unsigned long usec);
unsigned int upper_power_of_two(unsigned int v);
void os_mpu_set_region(unsigned int addr, unsigned int length, unsigned int readable, unsigned int writeable);
void finish(void);
void finish_failed(void);

unsigned int is_system_down(void);
void set_system_down(void (*power_down)(void));
void system_down(void);

void arm7_wakeup_get(void);
void arm7_wakeup_put(void);
kal_uint32 arm7_can_sleep(void);

#define OST_FRC_BASE (BASE_ADDR_MDTOPSM + 0x88)
#define OST_FRC      DRV_Reg32(OST_FRC_BASE)
#define UDELAY(usec) os_udelay(usec)
#define MPU_SET_SHARED_REGION(addr, length) os_mpu_set_region(addr, length, 1, 1)

#endif /* end of __COMMON_H__ */

