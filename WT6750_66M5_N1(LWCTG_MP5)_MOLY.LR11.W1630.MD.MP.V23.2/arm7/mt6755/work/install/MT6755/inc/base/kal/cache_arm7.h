#ifndef __CACHE_ARM7_H__
#define __CACHE_ARM7_H__

#ifdef ARM7EJS

#include <mach/basereg.h>
#include <base/kal/kal_release.h>
#include <base/drv/drv_common.h>
#include <stdarg.h>

// temporaryly added and should be removed after basereg.h updated
#define BASE_ADDR_ARM7TCM (0xE1000000)

/* Global ARM7 Cache Definition */
#define CACHE_MAX_SIZE                             0x00008000                   // 32 KB
#define CACHE_WAY_SIZE                             0x00002000                   //  8 KB
#define CACHE_LINE_SIZE                            0x00000020                   // 32  B
#define TCM_MAX_SIZE                               0x00002000                   //  8 KB

#if CHIPID == 6290
#define MEM_UNCACHE_MASK                           0x40000000
#elif CHIPID == 6593
#define MEM_UNCACHE_MASK                           0xF0000000
#elif CHIPID == 6291 || (CHIPID == 6755) || (CHIPID == 6797) || (CHIPID == 6757)
#define MEM_UNCACHE_MASK                           0xA0000000
#endif

#define MAX_WAY_NUM                                (4U)
#define MAX_LINE_NUM_IN_ONEWAY                     (256U)
#define MAX_SET_NUM                                (256U)
#define MAX_MPU_NUM                                (8U)
#define MAX_MCU_NUM                                (8U)

#define ARM7CACHE_BASE                             (BASE_ADDR_ARM7CACHE)
#define ARM7CACHE_CONTROL_REG                      (ARM7CACHE_BASE + 0x0000)    // CACHE_CON
#define ARM7CACHE_OPERATION_REG                    (ARM7CACHE_BASE + 0x0004)    // L1C_COP
#define ARM7CACHE_HIT_CNTR_REG                     (ARM7CACHE_BASE + 0x0008)    // L1C_HIT_CNTR
#define ARM7CACHE_ACC_CNTR_REG                     (ARM7CACHE_BASE + 0x000C)    // L1C_ACC_CNTR
#define ARM7CACHE_MISS_CNTR_REG                    (ARM7CACHE_BASE + 0x0010)    // L1C_MISS_CNTR
#define ARM7CACHE_WBK_FILL_CYCLE_CNTR_REG          (ARM7CACHE_BASE + 0x0014)    // L1C_WBK_FILL_CNTR
#define ARM7CACHE_TCM_CNTR_REG                     (ARM7CACHE_BASE + 0x0018)    // L1C_TCM_CNTR
#define ARM7CACHE_CYCLE_CNTR_REG                   (ARM7CACHE_BASE + 0x001C)    // L1C_CYCLE_CNTR
#define ARM7CACHE_MISC_REG                         (ARM7CACHE_BASE + 0x0020)    // L1C_MISC_REG

#define ARM7CACHE_MPU_BASE                         (BASE_ADDR_ARM7CACHE_MPU)
#define ARM7CACHE_MPU_PROT_REG(n)                  (ARM7CACHE_MPU_BASE + (n << 2)) // L1C_MPU_PROT(n)

#define ARM7CACHE_MCU_BASE                         (BASE_ADDR_ARM7CACHE_MCU)
#define ARM7CACHE_MCU_CACHE_REG(n)                 (ARM7CACHE_MCU_BASE + (n << 2)) // L1C_MPU_CACHE(n)

#define ARM7CACHE_CON_MC_EN                        (1UL << 0)                   // MCEN
#define ARM7CACHE_CON_MP_EN                        (1UL << 1)                   // MPEN
#define ARM7CACHE_CON_CACHE_TCM_EN                 (1UL << 3)                   // CACHE_TCM_EN
#define ARM7CACHE_CON_CNT_EN                       (1UL << 4)                   // CNTEN
#define ARM7CACHE_CON_CNTR_RESET                   (1UL << 5)                   // CNTR_RESET
#define ARM7CACHE_CON_CYC_EN                       (1UL << 8)                   // CYC_EN
#define ARM7CACHE_CON_CYC_CNTR_RESET               (1UL << 9)                   // CYC_CNTR_RESET

#define ARM7CACHE_COP_EN                           (1UL   << 0)
#define ARM7CACHE_COP_INVALIDATE_ALL               (0x1UL << 1)
#define ARM7CACHE_COP_INVALIDATE_LINE_BY_ADDR      (0x2UL << 1)
#define ARM7CACHE_COP_INVALIDATE_LINE_BY_SET_WAY   (0x4UL << 1)
#define ARM7CACHE_COP_CLEAN_ALL                    (0x9UL << 1)                 // Flush all
#define ARM7CACHE_COP_CLEAN_LINE_BY_ADDR           (0xAUL << 1)                 // Flush line by address
#define ARM7CACHE_COP_CLEAN_LINE_BY_SET_WAY        (0xCUL << 1)                 // Flush line by set and way

#define ARM7CACHE_MISC_PDN_MODE_ON                 (1UL << 0)
#define ARM7CACHE_MISC_PDN_RDY_BIT                 (1UL << 1)
#define ARM7CACHE_MISC_BUS_ERR_BIT                 (1UL << 2)
#define ARM7CACHE_MISC_REG_PHY_INT_EN              (1UL << 3)                   // Only use in FPGA to set to 0
                                                                                // Otherwise, need to set to 1
#define MPU_PROT_ADDRESS_MASK 0xFFFF0000
#define MPU_PROT_REGION_VALUE( _base, _readable, _writeable, _size, _en ) \
        ( ( (_base) & MPU_PROT_ADDRESS_MASK ) | ( (_readable) << 7 ) | ( (_writeable) << 6 ) | ( (_size) << 1 ) | (_en) )
#define SET_MPU_PROT_REGION( _region_num, _base, _readable, _writeable, _size, _en ) \
        DRV_WriteReg32( ARM7CACHE_MPU_PROT_REG( _region_num ), MPU_PROT_REGION_VALUE( _base, _readable, _writeable, _size, _en ))

#define MCU_CACHE_REGION_MASK 0xFFFF0000
#define MCU_CACHE_REGION_VALUE( _base, _cacheable, _size, _en )     \
        ( ( (_base) & MCU_CACHE_REGION_MASK ) | ( (_cacheable) << 6 ) | ( (_size) << 1 ) | (_en) )
#define SET_MCU_CACHE_REGION( _region_num, _base, _cacheable, _size, _en ) \
        DRV_WriteReg32( ARM7CACHE_MCU_CACHE_REG( _region_num ), MCU_CACHE_REGION_VALUE( _base, _cacheable, _size, _en ))

#define CACHEABLE_EN                               1UL
#define CACHEABLE_DISABLE                          0UL
#define READABLE_EN                                1UL
#define READABLE_DISABLE                           0UL
#define WRITEABLE_EN                               1UL
#define WRITEABLE_DISABLE                          0UL

#define REGION_EN                                  1UL
#define REGION_DISABLE                             0UL
#define REGION_SIZE_64K                            0x0UL
#define REGION_SIZE_128K                           0x1UL
#define REGION_SIZE_256K                           0x2UL
#define REGION_SIZE_512K                           0x3UL
#define REGION_SIZE_1M                             0x4UL
#define REGION_SIZE_2M                             0x5UL 
#define REGION_SIZE_4M                             0x6UL
#define REGION_SIZE_8M                             0x7UL
#define REGION_SIZE_16M                            0x8UL
#define REGION_SIZE_32M                            0x9UL

#define REGION_SIZE_NUM                            10

enum {
    MPU_64K = 0,
    MPU_128K,
    MPU_256K,
    MPU_512K,
    MPU_1M,
    MPU_2M,
    MPU_4M,
    MPU_8M,
    MPU_16M,
    MPU_32M,    
};

#define ARM7CACHE_MPU_PROT_ATTR_RxWx               (0x0UL << 6)
#define ARM7CACHE_MPU_PROT_ATTR_RxWo               (0x1UL << 6)
#define ARM7CACHE_MPU_PROT_ATTR_RoWx               (0x2UL << 6)
#define ARM7CACHE_MPU_PROT_ATTR_RoWo               (0x3UL << 6)
#define ARM7CACHE_MCU_CACHE_CEN                    (1UL << 6)

#if CHIPID == 6290
#define CREG_OFFSET 0x40000000
#define CREG_PERIPHERAL_OFFSET 0x80000000
#elif CHIPID == 6593
#define CREG_OFFSET 0xF0000000
#define CREG_PERIPHERAL_OFFSET 0x80000000
#elif CHIPID == 6291 || (CHIPID == 6755) || (CHIPID == 6797) || (CHIPID == 6757)
#define CREG_OFFSET 0xA0000000
#define CREG_PERIPHERAL_OFFSET 0x80000000
#endif

#if CHIPID == 6290
#define MAP2CREGPA(addr) ((kal_uint32)(addr) | ( CREG_OFFSET) ) // Map To Cached Region Physical Address
#define MAP2CREGVA(addr) ((kal_uint32)(addr)  & (~CREG_OFFSET) ) // Map To Cached Region Virtual Address
#define INT_QueryIsNonCachedRAM(addr, len) \
              ((((kal_uint32)(addr) & CREG_OFFSET) ^ CREG_OFFSET) == 0) && (((((kal_uint32)(addr) + (len)) & CREG_OFFSET) ^ CREG_OFFSET) == 0) && ((((kal_uint32)(addr) + (len)) & CREG_PERIPHERAL_OFFSET) == 0)
#define INT_QueryIsCachedRAM(addr, len) \
              ((((kal_uint32)(addr) & CREG_OFFSET) ^ CREG_OFFSET) != 0) && (((((kal_uint32)(addr) + (len)) & CREG_OFFSET) ^ CREG_OFFSET) != 0) && ((((kal_uint32)(addr) + (len)) & CREG_PERIPHERAL_OFFSET) == 0)

#elif CHIPID == 6593
#define MAP2CREGPA(addr) ((kal_uint32)(addr)  & (~CREG_OFFSET) ) // Map To Cached Region Physical Address
#define MAP2CREGVA(addr) ((kal_uint32)(addr) | ( CREG_OFFSET) ) // Map To Cached Region Virtual Address
#define INT_QueryIsNonCachedRAM(addr, len) \
              ((((kal_uint32)(addr) & CREG_OFFSET) ^ CREG_OFFSET) != 0) && (((((kal_uint32)(addr) + (len)) & CREG_OFFSET) ^ CREG_OFFSET) != 0)
#define INT_QueryIsCachedRAM(addr, len) \
              ((((kal_uint32)(addr) & CREG_OFFSET) ^ CREG_OFFSET) == 0) && (((((kal_uint32)(addr) + (len)) & CREG_OFFSET) ^ CREG_OFFSET) == 0)

#elif CHIPID == 6291 || (CHIPID == 6755) || (CHIPID == 6797) || (CHIPID == 6757)
#define MAP2CREGPA(addr) ((kal_uint32)(addr)  & (~CREG_OFFSET) ) // Map To Cached Region Physical Address
#define MAP2CREGVA(addr) ((kal_uint32)(addr) | ( CREG_OFFSET) ) // Map To Cached Region Virtual Address
#define INT_QueryIsNonCachedRAM(addr, len) \
              ((((kal_uint32)(addr) & CREG_OFFSET) ^ CREG_OFFSET) != 0) && (((((kal_uint32)(addr) + (len)) & CREG_OFFSET) ^ CREG_OFFSET) != 0)
#define INT_QueryIsCachedRAM(addr, len) \
              ((((kal_uint32)(addr) & CREG_OFFSET) ^ CREG_OFFSET) == 0) && (((((kal_uint32)(addr) + (len)) & CREG_OFFSET) ^ CREG_OFFSET) == 0) 

#endif

#define CPU_CACHE_LINE_SIZE 32                        // 4 ways * 8 words = 32 bytes (a line)
#define CPU_CACHE_LINE_BIT_OFFSET 5                   // 32 = 2 ^ 5
#define CPU_CACHE_LINE_SIZE_MASK 0x0000001F
#define CPU_CACHE_LINE_ALIGN_ADDR(_addr)           \
              ((_addr) & ~CPU_CACHE_LINE_SIZE_MASK)
#define CPU_CACHE_LINE_ALIGN_LEN(_addr, _len)      \
              ((CPU_CACHE_LINE_ALIGN_ADDR((_addr) + (_len) -1) - CPU_CACHE_LINE_ALIGN_ADDR((_addr))) + CPU_CACHE_LINE_SIZE)

#define ARM7CACHE_SET_ALIGN(_set)             ((_set << 5))
#define ARM7CACHE_WAY_ALIGN(_way)             ((0x1 << _way) << 16)

kal_uint32 phys_to_virt(void * address);
kal_uint32 virt_to_phys(void * address);
extern kal_int32 enable_cache(void);
extern kal_int32 disable_cache(void);
extern kal_uint32 is_cache_enabled(void);
extern void enable_mpu(void);
extern void disable_mpu(void);
extern kal_uint32 is_mpu_enabled(void);
extern void enable_counters(void);
extern void disable_counters(void);
extern void reset_counters(void);
extern kal_uint32 is_counters_enabled(void);
extern void enable_cycle_counter(void);
extern void disable_cycle_counter(void);
extern void reset_cycle_counter(void);
extern kal_uint32 get_cycle_counter(void);
extern kal_uint32 is_cycle_counter_enabled(void);
extern kal_int32 clean_dcache(kal_uint32 addr, kal_uint32 len);
extern kal_int32 clean_and_invalidate_dcache(kal_uint32 addr, kal_uint32 len);
extern kal_int32 invalidate_dcache(kal_uint32 addr, kal_uint32 len);
extern void invalidate_cache_all(void);
extern void invalidate_cache_line_by_address(kal_uint32 mva);
extern void invalidate_cache_line_by_set_way(kal_uint32 set, kal_uint32 way);
extern void invalidate_cache_lines_by_region(kal_uint32 base, kal_uint32 size); // invalidate lines by a region (SW)
extern void clean_cache_all(void);                                              // flush all
extern void clean_cache_line_by_address(kal_uint32 mva);                        // flush line by address
extern void clean_cache_line_by_set_way(kal_uint32 set, kal_uint32 way);        // flush line by set and way
extern void clean_cache_lines_by_region(kal_uint32 base, kal_uint32 size);      // flush lines by a region (SW)
extern void clean_and_invalidate_cache(void); // (SW)
extern void clean_and_invalidate_cache_lines_by_region(kal_uint32 base, kal_uint32 size); // (SW)

typedef struct drv_mpu {
    kal_char *name;
    kal_int32(*open) (struct drv_mpu * o);                            // reset counters, enable MPU, MCU, and disable timer
    kal_int32(*close) (struct drv_mpu * o);                           // disable MPU and MCU
    kal_int32(*ioctl) (struct drv_mpu * o, kal_int32 request, ...);   // All other functions
    kal_int32 err;
} drv_mpu_t;

extern drv_mpu_t* MPU_GetInstance();

typedef enum {
    MPU_IOCTL_GET,
    MPU_IOCTL_SET,
    MPU_IOCTL_INVALID_ALL,
    MPU_IOCTL_INVALID_LINE_BY_ADDR,
    MPU_IOCTL_INVALID_LINE_BY_SW,
    MPU_IOCTL_FLUSH_ALL,
    MPU_IOCTL_FLUSH_LINE_BY_ADDR,
    MPU_IOCTL_FLUSH_LINE_BY_SW,
    MPU_IOCTL_ENABLE_ALL_COUNTER,
    MPU_IOCTL_DISABLE_ALL_COUNTER,
    MPU_IOCTL_RESET_ALL_COUNTER,
    MPU_IOCTL_GET_HIT_COUNT,
    MPU_IOCTL_GET_ACCESS_COUNT,
    MPU_IOCTL_GET_MISS_COUNT,
    MPU_IOCTL_GET_WBK_FILL_CYC_COUNT,
    MPU_IOCTL_GET_TCM_COUNT,
    MPU_IOCTL_GET_ALL_COUNT, //Get 32-bit hit count, access count, miss count, /*writeback-refill count,*/ and TCM count
    MPU_IOCTL_START_TIMER,
    MPU_IOCTL_CONT_TIMER,
    MPU_IOCTL_STOP_TIMER,
    MPU_IOCTL_RESET_TIMER,
    MPU_IOCTL_GET_TIMER,
    MPU_IOCTL_STOP_AND_GET_TIMER, //Stop the timer and get this timing value
} mpu_ioctl_t;

extern kal_int32 disable_cacheable_region();

#endif  /* end of ARM7EJS*/

#endif  /* end of __CACHE_ARM7_H__ */

