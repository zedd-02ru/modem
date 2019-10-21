#ifndef __CACHE_SW_H__
#define __CACHE_SW_H__

/* DCache region offset */
#ifdef MT6290
#define CREG_OFFSET             0x40000000
#define CREG_PERIPHERAL_OFFSET  0x80000000
#elif defined MT6593
#define CREG_OFFSET             0xF0000000
#define CREG_PERIPHERAL_OFFSET  0x80000000
#else /*MT6291*/
#define SRAMREG_OFFSET          0x70000000
#define CREG_OFFSET             0xA0000000
#define CREG_PERIPHERAL_OFFSET  0x80000000
#endif

#ifdef MT6290
/* Map To Cached ReGion Physical Address */
#define MAP2CREGPA(addr) ((kal_uint32)(addr) | ( CREG_OFFSET) )
#define MAP2CREGVA(addr) ((kal_uint32)(addr)  & (~CREG_OFFSET) )

#define INT_QueryIsNonCachedRAM(addr, len) \
	((((kal_uint32)(addr) & CREG_OFFSET) ^ CREG_OFFSET) == 0) && (((((kal_uint32)(addr) + (len)) & CREG_OFFSET) ^ CREG_OFFSET) == 0) && ((((kal_uint32)(addr) + (len)) & CREG_PERIPHERAL_OFFSET) == 0)
#define INT_QueryIsCachedRAM(addr, len) \
	((((kal_uint32)(addr) & CREG_OFFSET) ^ CREG_OFFSET) != 0) && (((((kal_uint32)(addr) + (len)) & CREG_OFFSET) ^ CREG_OFFSET) != 0) && ((((kal_uint32)(addr) + (len)) & CREG_PERIPHERAL_OFFSET) == 0)

#else /*MT6593 or MT6291*/
#define MAP2CREGPA(addr) ((kal_uint32)(addr)  & (~CREG_OFFSET) )
#define MAP2CREGVA(addr) ((kal_uint32)(addr) | ( CREG_OFFSET) )

#define INT_QueryIsNonCachedRAM(addr, len) \
	(((((kal_uint32)(addr) & CREG_OFFSET) ^ CREG_OFFSET) != 0) && (((((kal_uint32)(addr) + (len)) & CREG_OFFSET) ^ CREG_OFFSET) != 0))
#define INT_QueryIsCachedRAM(addr, len) \
	(((((kal_uint32)(addr) & CREG_OFFSET) ^ CREG_OFFSET) == 0) && (((((kal_uint32)(addr) + (len)) & CREG_OFFSET) ^ CREG_OFFSET) == 0))

#define INT_QueryIsNonSRAM(addr, len) \
	(((((kal_uint32)(addr) & SRAMREG_OFFSET) ^ SRAMREG_OFFSET) != 0) && (((((kal_uint32)(addr) + (len)) & SRAMREG_OFFSET) ^ SRAMREG_OFFSET) != 0))
#define INT_QueryIsSRAM(addr, len) \
	(((((kal_uint32)(addr) & SRAMREG_OFFSET) ^ SRAMREG_OFFSET) == 0) && (((((kal_uint32)(addr) + (len)) & SRAMREG_OFFSET) ^ SRAMREG_OFFSET) == 0))

#endif


#ifdef CORTEXA7
#define CPU_CACHE_LINE_SIZE 64
#define CPU_CACHE_LINE_BIT_OFFSET 6
#define CPU_CACHE_LINE_SIZE_MASK 0x0000003F

#define MMU_MEM_ATTR_STRONGLY_ORDERED       ((0x0 << 12) | (0x0 << 2))
#define MMU_MEM_ATTR_DEVICE_TYPE            ((0x0 << 12) | (0x1 << 2))
#define MMU_MEM_ATTR_NORMAL_NOCACHE         ((0x1 << 12) | (0x0 << 2))
#define MMU_MEM_ATTR_NORMAL_WT_NOWA         ((0x0 << 12) | (0x2 << 2))
#define MMU_MEM_ATTR_NORMAL_WB_NOWA         ((0x0 << 12) | (0x3 << 2))
#define MMU_MEM_ATTR_NORMAL_WB_WA           ((0x1 << 12) | (0x3 << 2))

#define MMU_MEM_AP_RW       ((0x0 << 15) | (0x3 << 10))
#define MMU_MEM_AP_RO       ((0x1 << 15) | (0x2 << 10))
#define MMU_MEM_AP_NO       ((0x0 << 15) | (0x0 << 10))

#define MMU_MEM_XN_EN       (0x1 << 4)
#define MMU_MEM_XN_DIS      (0x0 << 4)
#else
#define CPU_CACHE_LINE_SIZE 32
#define CPU_CACHE_LINE_BIT_OFFSET 5
#define CPU_CACHE_LINE_SIZE_MASK 0x0000001F
#endif

#define CPU_CACHE_LINE_ALIGN_ADDR(_addr)	\
		((_addr) & ~CPU_CACHE_LINE_SIZE_MASK) 		
#define CPU_CACHE_LINE_ALIGN_LEN(_addr, _len)	\
		((CPU_CACHE_LINE_ALIGN_ADDR((_addr) + (_len) -1) - CPU_CACHE_LINE_ALIGN_ADDR((_addr))) + CPU_CACHE_LINE_SIZE)


extern kal_int32 clean_dcache(kal_uint32 addr, kal_uint32 len);
extern kal_int32 clean_and_invalidate_dcache(kal_uint32 addr, kal_uint32 len);
extern kal_int32 invalidate_dcache(kal_uint32 addr, kal_uint32 len);
extern kal_int32 invalidate_icache(kal_uint32 addr, kal_uint32 len);
extern kal_int32 enable_cache(void);
extern kal_int32 disable_cache(void);
extern kal_uint32 virt_to_phys(void * address);
extern kal_uint32 phys_to_virt(void * address);
#ifdef CORTEXA7
extern void set_mmu_l1cache(kal_uint32 base, kal_uint32 size, kal_uint32 attr);
#endif

#endif  /* end of __CACHE_SW_H__ */
