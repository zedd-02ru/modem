#ifndef __DRV_ARM7OST_H__
#define __DRV_ARM7OST_H__

#ifdef ARM7EJS
#include <base/kal/cache_arm7.h>

// ARM7OST functions
#ifndef USE_THUMB_MODE
#define MCU_ENTER_POWER_SAVING_MODE() \
{ \
   do { \
    clean_and_invalidate_cache(); \
    disable_cache(); \
    asm volatile ( \
        "MOV  r3, #0x0\r\n"\
        "MOV  r0, %0\r\n"\
        "LDR  r1, [r0]\r\n"\
        "ORR  r1, r1, #1\r\n"\
        "MOV  r0, r0\r\n"\
        "MOV  r0, r0\r\n"\
        "MOV  r0, r0\r\n"\
        "MOV  r0, r0\r\n"\
        "MOV  r0, r0\r\n"\
        "MOV  r0, r0\r\n"\
        "MOV  r0, r0\r\n"\
        "MOV  r0, r0\r\n"\
        "STR  r1, [r0]\r\n"\
        "ADD  r3, r3, #0x1\r\n"\
        "ADD  r3, r3, #0x2\r\n"\
        "ADD  r3, r3, #0x4\r\n"\
        "ADD  r3, r3, #0x8\r\n"\
        "ADD  r3, r3, #0x10\r\n"\
        "ADD  r3, r3, #0x20\r\n"\
        "ADD  r3, r3, #0x40\r\n"\
        "ADD  r3, r3, #0x80\r\n"\
/*        "ADD  r3, r3, #0x100\r\n"\
        "ADD  r3, r3, #0x200\r\n"\
        "ADD  r3, r3, #0x400\r\n"\
        "ADD  r3, r3, #0x800\r\n"\
        "ADD  r3, r3, #0x1000\r\n"\
*/        : \
        :"r" (ARM7CACHE_MISC_REG) \
        :"cc", "r0", "r1", "r3" \
    ); \
    enable_cache(); \
    } while(0);\
}
#else
#define MCU_ENTER_POWER_SAVING_MODE() \
{ \
   do { \
    clean_and_invalidate_cache(); \
    disable_cache(); \
    asm volatile ( \
        "MOV  r3, #0x0\r\n"\
        "MOV  r0, %0\r\n"\
        "LDR  r1, [r0]\r\n"\
        "MOV  r3, #0x1\r\n"\
        "ORR  r1, r1, r3\r\n"\
        "MOV  r3, #0x0\r\n"\
        "MOV  r0, r0\r\n"\
        "MOV  r0, r0\r\n"\
        "MOV  r0, r0\r\n"\
        "MOV  r0, r0\r\n"\
        "MOV  r0, r0\r\n"\
        "MOV  r0, r0\r\n"\
        "MOV  r0, r0\r\n"\
        "MOV  r0, r0\r\n"\
        "STR  r1, [r0]\r\n"\
        "ADD  r3, r3, #0x1\r\n"\
        "ADD  r3, r3, #0x2\r\n"\
        "ADD  r3, r3, #0x4\r\n"\
        "ADD  r3, r3, #0x8\r\n"\
        "ADD  r3, r3, #0x10\r\n"\
        "ADD  r3, r3, #0x20\r\n"\
        "ADD  r3, r3, #0x40\r\n"\
        "ADD  r3, r3, #0x80\r\n"\
/*        "ADD  r3, r3, #0x100\r\n"\
        "ADD  r3, r3, #0x200\r\n"\
        "ADD  r3, r3, #0x400\r\n"\
        "ADD  r3, r3, #0x800\r\n"\
        "ADD  r3, r3, #0x1000\r\n"\
*/        : \
        :"r" (ARM7CACHE_MISC_REG) \
        :"cc", "r0", "r1", "r3" \
    ); \
    enable_cache(); \
    } while(0);\
}
#endif


#endif /* end of ARM7EJS */

#endif /* end of __DRV_ARM7OST_H__ */
