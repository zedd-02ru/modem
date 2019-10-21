#ifndef __DRV_COMMON_H__
#define __DRV_COMMON_H__

#include <base/kal/kal_release.h>
#include <base/kal/sync_data.h>

#define DRV_WriteReg(addr,data)     ((*(volatile kal_uint16 *)(addr)) = (kal_uint16)(data))
#define DRV_Reg(addr)                (*(volatile kal_uint16 *)(addr))
#define DRV_WriteReg32(addr,data)   ((*(volatile kal_uint32 *)(addr)) = (kal_uint32)(data))

#define DRV_Reg32(addr)              (*(volatile kal_uint32 *)(addr))
#define DRV_WriteReg8(addr,data)    ((*(volatile kal_uint8 *) (addr)) = (kal_uint8)(data))
#define DRV_Reg8(addr)               (*(volatile kal_uint8 *) (addr))


#define DRV_SetReg8(addr, data)     (DRV_WriteReg8(addr, DRV_Reg8(addr)|(data)))
#define DRV_ClrReg8(addr, data)     (DRV_WriteReg8(addr, DRV_Reg8(addr)&~(data)))
#define DRV_SetReg(addr, data)      (DRV_WriteReg(addr, DRV_Reg(addr)|(data)))
#define DRV_ClrReg(addr, data)      (DRV_WriteReg(addr, DRV_Reg(addr)&~(data)))
#define DRV_SetReg32(addr, data)    (DRV_WriteReg32(addr, DRV_Reg32(addr)|(data)))
#define DRV_ClrReg32(addr, data)    (DRV_WriteReg32(addr, DRV_Reg32(addr)&~(data)))

#if defined(MT6290)
    #define SOREG_OFFSET 0xF0000000   //Strongly Order Region
#elif defined(MT6291) || defined(MT6755) || defined(MT6797) || defined(MT6757)
   
#else
    #define COMMON_PLATFORM_MAP
#endif

/* DRV_WriteReg32_NPW, DRV_WriteReg32_NPW_RB provide non-post-write operation
   Abbreviation:
       NPW: Non Post Write
       RB : Read Back
   Description:
       1. DRV_WriteReg32_NPW: In System with strongly order memory attribute
          (write response from target hardware IP), we just write the data
          into the strongly order region (write_addr | 0xF000_0000)
       2. DRV_WriteReg32_NPW: In System without strongly order memory atribute,
          we write the data into the write_addr and read the write_addr
          back to avoid the write data is buffered in bus fabric
       3. DRV_WriteReg32_NPW_RB: In some hardware IP design, reading the 
          write_addr has some side-effects, in order to avoid this situation, 
          DRV_WriteReg32_NPW_RB is provided and the read_addr of 
          DRV_WriteReg32_NPW_RB is assigned by the user.
          User must confirm that all previous write operations are finished 
          before the data of read_addr ready.
          For example, write_addr in IP-A, read_addr in IP-B can't make sure the
          IP-A write operation is finished. write_addr/read_addr must be in the 
          same IP.
       4. DRV_WriteReg32_NPW_RB: For system with strongly order memory
          attribute, DRV_WriteReg32_NPW_RB does NOT read the read_addr
          (the same behavior with DRV_WriteReg32_NPW).
       5. Memory barrier operations (DMB/DSB in ARM Arch.) are not included in 
          DRV_WriteReg32_NPW_RB and DRV_WriteReg32_NPW.
 */

#if defined(MT6290)
    #define DRV_WriteReg32_NPW_RB(write_addr, data, read_addr)         \
        DRV_WriteReg32(((kal_uint32)(write_addr))|SOREG_OFFSET, data);
    #define DRV_WriteReg32_NPW(write_addr, data)                       \
        DRV_WriteReg32_NPW_RB(write_addr, data, write_addr)
    #define DRV_SetReg32_NPW(write_addr, data)  \
        DRV_WriteReg32(((kal_uint32)(write_addr))|SOREG_OFFSET, DRV_Reg32(write_addr) | (data))
    #define DRV_ClrReg32_NPW(write_addr, data)  \
        DRV_WriteReg32(((kal_uint32)(write_addr))|SOREG_OFFSET, DRV_Reg32(write_addr) & (~(data)))

#elif defined(MT6291) || defined(MT6755) || defined(MT6797) || defined(MT6757)
    #define DRV_WriteReg32_NPW_RB(write_addr, data, read_addr)		     \
    do{ 															     \
    	if((((kal_uint32)write_addr)>>28)==0x6 || (((kal_uint32)write_addr)>>28)==0x8  )        \
    	{															     \
    		DRV_WriteReg32(((kal_uint32)write_addr)|(0xF0000000), (data));	         \
    	}															     \
    	else if( (((kal_uint32)write_addr)>>28)==0x9 )							     \
    	{															     \
    		DRV_WriteReg32(((((kal_uint32)write_addr) << 4) >> 4)|0xC0000000, (data));\
    	}															     \
    	/* Strongly Order: 0xC0000000~0xFFFFFFFF */           		     \
    	else if( ((((kal_uint32)write_addr)>>28)>=0xC)  )                        \
    	{															   \
    		DRV_WriteReg32((write_addr), (data));					   \
    	}															   \
    	else														   \
    	{															   \
    		ASSERT(0);												   \
    	}															   \
    }while(0);

    #define DRV_WriteReg32_NPW(write_addr, data)					   \
    	DRV_WriteReg32_NPW_RB(write_addr, data, write_addr)
    #define DRV_SetReg32_NPW(write_addr, data)						   \
    	DRV_WriteReg32_NPW(((kal_uint32)(write_addr)), DRV_Reg32(write_addr) | (data))
    #define DRV_ClrReg32_NPW(write_addr, data)						   \
    	DRV_WriteReg32_NPW(((kal_uint32)(write_addr)), DRV_Reg32(write_addr) & (~(data)))    


#elif defined(COMMON_PLATFORM_MAP)
    #define DRV_WriteReg32_NPW_RB(write_addr, data, read_addr)         \
    do{                                                                \
        if((write_addr)>=0x88000000U && (write_addr)<=0x8FFFFFFFU)     \
        {                                                              \
            DRV_WriteReg32((write_addr)&(~(0x08000000)), (data));      \
        }                                                              \
        else if( ((write_addr)>>28)==0xB )                             \
        {                                                              \
            DRV_WriteReg32((write_addr)&(~(0x10000000)), (data));      \
        }                                                              \
        /* Strongly Order: 0x80000000~0x87FFFFFF/0xA0000000 */         \
        else if( (((write_addr)>>28)==8) || (((write_addr)>>28)==0xA) )    \
        {                                                              \
            DRV_WriteReg32((write_addr), (data));                      \
        }                                                              \
        else                                                           \
        {                                                              \
            ASSERT(0);                                                 \
        }                                                              \
    }while(0);

    #define DRV_WriteReg32_NPW(write_addr, data)                       \
        DRV_WriteReg32_NPW_RB(write_addr, data, write_addr)
    #define DRV_SetReg32_NPW(write_addr, data)                         \
        DRV_WriteReg32_NPW(((kal_uint32)(write_addr)), DRV_Reg32(write_addr) | (data))
    #define DRV_ClrReg32_NPW(write_addr, data)                         \
        DRV_WriteReg32_NPW(((kal_uint32)(write_addr)), DRV_Reg32(write_addr) & (~(data)))
#else
	/* TBC */
	#error "NPW API: unsupported CHIP"
#endif /* end of TK6280/MT6290/others */


#define DRV_MEMORY_BARRIER()            Data_Sync_Barrier()

#define RESET_SECTION_N(seq)           __attribute__ ((used, section (".reset"#seq)))
#define MODULE_RESET_N(entryname, seq) void * __reset_##entryname RESET_SECTION_N(seq) = (entryname)
#define MODULE_RESET(entryname) MODULE_RESET_N(entryname, 3)

#if defined(__ARMCC_VERSION)
    #define LINK_SECTION(x)             __attribute__ ((section (x)))
#elif defined(__GNUC__) /* end of __ARMCC_VERSION */
    #define LINK_SECTION(x)             __attribute__ ((section (x)))
#elif defined(_MSC_VER) && (_MSC_VER >= 1500)
    #define LINK_SECTION(x)
#else  /* end of __GNUC__ */
    #error "Unsupported Compiler"
#endif

#define DEVDRV_LS_INTSRAM_ROCODE           LINK_SECTION(".md_tcm_code")




#endif  /* end of __DRV_COMMON_H__ */

