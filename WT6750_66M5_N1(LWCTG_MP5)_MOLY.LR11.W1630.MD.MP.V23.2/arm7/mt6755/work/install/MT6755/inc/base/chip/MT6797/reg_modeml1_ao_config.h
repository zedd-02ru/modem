#ifndef __REG_MODEML1_AO_CONFIG_H__
#define __REG_MODEML1_AO_CONFIG_H__

#define MDL1AO_BASE (L1_BASE_MADDR_MDL1_CONF)

#define MDL1AO_PERI_CG_CON              (MDL1AO_BASE + 0x0)
#define MDL1AO_PERI_CG_SET              (MDL1AO_BASE + 0x4)
#define MDL1AO_PERI_CG_CLR              (MDL1AO_BASE + 0x8)
    #define PDN_INTF_CLK                (1 << 14)
    #define PDN_CIRQ                    (1 << 13)
    #define PDN_OSTIMER                 (1 << 12)
    #define PDN_GPT_LITE                (1 << 11)
    #define PDN_GPTM                    (1 << 10)
    #define PDN_FM                      (1 << 9)
    #define PDN_PTP_CTRL                (1 << 8)
    #define PDN_LTE_SLP                 (1 << 7)
    #define PDN_IDC_CTRL                (1 << 6)
    #define PDN_LTE_TIMER               (1 << 5)
    #define PDN_FDD_TIMER               (1 << 4)
    #define PDN_BSI_TOP                 (1 << 3)
    #define PDN_TDMA_SLP                (1 << 2)
    #define PDN_TDD_SLP                 (1 << 1)
    #define PDN_BPI_TOP                 (1 << 0)
#define MDL1AO_BOOT_VECTOR              (MDL1AO_BASE + 0x100)
#define MDL1AO_BOOT_VECTOR_KEY          (MDL1AO_BASE + 0x104)
#define MDL1AO_CR4_INIT                 (MDL1AO_BASE + 0x108)
#define MDL1AO_L1MCUSYS_BUS_CON2        (MDL1AO_BASE + 0x208)
#define MDL1AO_MDL12L1MCU_BUS_CONFIG    (MDL1AO_BASE + 0x210)
#define MDL1AO_L1MCUSYS_DBG_SEL         (MDL1AO_BASE + 0x300)

#endif // __REG_MODEML1_AO_CONFIG_H__