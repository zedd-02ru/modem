#ifndef __DRV_PCCIF_ARM7_H__
#define __DRV_PCCIF_ARM7_H__

#include <base/drv/drv_common.h>
#include <mach/basereg.h>

#define __PCCIF_ARM7_ENABLE__
#define __PCCIF_ARM7_SELF_TEST__
/* option definition */
//#define __PCCIF_ARM7_SELF_TEST__



/* register definition */
#ifdef CORTEXR4

#define PCCIF_ARM7_SRAM_base(i)       (BASE_MADDR_PS2ARM7_PCCIF + 0x100)
#define PCCIF_ARM7_CTRL_RX_base(i)    (BASE_MADDR_PS2ARM7_PCCIF + 0x000)

#define PCCIF_ARM7_OPP_CTRL_TX_base(i)    (BASE_MADDR_ARM72PS_PCCIF + 0x000)
#define PCCIF_ARM7_CTRL_TX_base(i)    (BASE_MADDR_PS2ARM7_PCCIF + 0x000)

#else


#define PCCIF_ARM7_SRAM_base(i)       (BASE_MADDR_ARM72PS_PCCIF + 0x100)
#define PCCIF_ARM7_CTRL_RX_base(i)    (BASE_MADDR_ARM72PS_PCCIF + 0x000)

#define PCCIF_ARM7_OPP_CTRL_TX_base(i)    (BASE_MADDR_PS2ARM7_PCCIF + 0x000)
#define PCCIF_ARM7_CTRL_TX_base(i)    (BASE_MADDR_ARM72PS_PCCIF + 0x000)

#endif


#define PCCIF_ARM7_SRAM_SIZE       512

/* define HW register */
#define PCCIF_ARM7_CON(i)          ((volatile unsigned int *)((PCCIF_ARM7_CTRL_RX_base(i)) + 0x0000))
#define PCCIF_ARM7_OPP_BUSY(i)         ((volatile unsigned int *)((PCCIF_ARM7_OPP_CTRL_TX_base(i)) + 0x0004))
#define PCCIF_ARM7_BUSY(i)         ((volatile unsigned int *)((PCCIF_ARM7_CTRL_TX_base(i)) + 0x0004))
#define PCCIF_ARM7_START(i)        ((volatile unsigned int *)((PCCIF_ARM7_CTRL_TX_base(i)) + 0x0008))
#define PCCIF_ARM7_TCHNUM(i)       ((volatile unsigned int *)((PCCIF_ARM7_CTRL_TX_base(i)) + 0x000C))
#define PCCIF_ARM7_OPP_TCHNUM(i)       ((volatile unsigned int *)((PCCIF_ARM7_OPP_CTRL_TX_base(i)) + 0x000C))
#define PCCIF_ARM7_RCHNUM(i)       ((volatile unsigned int *)((PCCIF_ARM7_CTRL_RX_base(i)) + 0x0010))
#define PCCIF_ARM7_ACK(i)          ((volatile unsigned int *)((PCCIF_ARM7_CTRL_RX_base(i)) + 0x0014))
#define PCCIF_ARM7_EN(i, irq)    ((volatile unsigned int *)((PCCIF_ARM7_CTRL_TX_base(i)) + 0x0020 + (irq) * 4))

#define PCCIF_ARM7_IRQ_NUMBER      1
#define PCCIF_ARM7_MAX_CHANNEL     16
#define PCCIF_ARM7_CHANNEL_MASK    ((1UL << PCCIF_ARM7_MAX_CHANNEL) - 1)
#define PCCIF_ARM7_ALL_PHY_MASK    ((1 << PCCIF_ARM7_MAX_CHANNEL) - 1)

#define MDPCCIF_BOOT		(BASE_MADDR_ARM72PS_PCCIF + 0x100 + 512 - 4)
#define MDPCCIF_CTRL_MSG    MDPCCIF_BOOT
#define MDPCCIF_SHARED_ADDR	 (MDPCCIF_BOOT - 4)
#define MDPCCIF_DCM_MEMORY	 (MDPCCIF_SHARED_ADDR - 3*4)

/* type definition */
typedef enum {
    PCCIF_ARM7_SUCCESS = 0,
    PCCIF_ARM7_ERR_PARA,
    PCCIF_ARM7_ERR_CH_FULL,
} PCCIF_ARM7_RET_T;

enum {
    PCCIF_BOOT_KEY = 0xAABB8080,
    PCCIF_BOOT_DONE = 0xAABB8081,
    PCCIF_CTRL_POWER_DOWN,
    PCCIF_CTRL_POWER_DOWN_DONE,
    PCCIF_CTRL_END
};

#define PCCIF_ARM7_CH_INT_BITMAP 0x7	//0111 channel 0 and channel 1 and channel 2 will trigger interrupt

#define PCCIF_ARM7_CH_CTRL 	0
#define PCCIF_ARM7_CH_DATA 	1
#define PCCIF_ARM7_CH_LOG	2
#define PCCIF_ARM7_CH_MAX	3	//ch 1 and 2

#define PCCIF_ARM7_SHARED_MEMORY_SIZE (64*1024) // 64KByte

typedef enum
{
    PCCIF_ARM7_INIT          = 0x00000000,
    PCCIF_ARM7_BOOT_HS_PRE           = 0x00000001,
    PCCIF_ARM7_BOOT_HS 	= 0x00000002,
    PCCIF_ARM7_BOOT_DONE	= 0x00000003
}PCCIF_ARM7_BOOT_STATE;

typedef void (*PCCIF_ARM7_CALLBACK)(kal_uint32 ch);



/* interface */
// register callback for PCCIF interrupt
extern kal_int32 pccif_arm7_register_cb(PCCIF_ARM7_CALLBACK cb);    
// init PCCIF
extern void pccif_arm7_init();
// write 0xAABB8080 into PCCIF SRAM, and ack PCCIF
void pccif_arm7_boot_hs_pre(void);
// get shared memory address from PCCIF SRAM
void pccif_arm7_boot_hs(void);
// write 0xAABB8081 into PCCIF SRAM
void pccif_arm7_boot_done(void);
// for DCM software lock
kal_uint32 pccif_dcm_memory(void);

void pccif_arm7_reset();
kal_int32 pccif_set(kal_uint32 ch);
kal_uint32 pccif_get_rx_ch(void);
void pccif_ack(kal_uint32 ch);

#endif /* end of __DRV_PCCIF_ARM7_H__ */

