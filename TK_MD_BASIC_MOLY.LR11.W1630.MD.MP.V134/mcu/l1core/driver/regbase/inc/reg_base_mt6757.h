#ifndef __REG_BASE_MT6757_H__
#define __REG_BASE_MT6757_H__

/* From Designer's project.h*/

/*================== Begin of designer's project.h =========================*/

//AP-side Strongly-Order registers
#define BASE_MADDR_TOP_LEVEL_CLOCK_GENERATOR    (0xC0000000)
#define BASE_MADDR_INFRASYS_CONFIG_REGS         (0xC0001000)
#define BASE_MADDR_GPIO                         (0xC0005000)
#define BASE_MADDR_TOP_LEVEL_SLP_MANAGER        (0xC0006000)
#define BASE_MADDR_TOP_RGU                      (0xC0007000)
#define BASE_MADDR_AO_SEJ                       (0xC000A000)
#define BASE_MADDR_PMIC_WRAP                    (0xC000D000)
#define BASE_MADDR_AES_TOP0                     (0xC0016000)
#define BASE_MADDR_EFUSE                        (0xC0206000)
#define BASE_MADDR_L1_C2K_CCIRQ                 (0xC0211400)
#define BASE_MADDR_PS_C2K_CCIRQ                 (0xC0211000)
#define BASE_MADDR_C2K_L1_CCIRQ                 (0xC0213400)
#define BASE_MADDR_C2K_PS_CCIRQ                 (0xC0213000)
#define BASE_MADDR_EMI_BUS_INTERFACE            (0xC0219000)
#define BASE_MADDR_APINFRA_MD_SMI				(0xC021D000)
#define BASE_MADDR_BPI_BSI_SLV0                 (0xC021E000)
#define BASE_MADDR_BPI_BSI_SLV1                 (0xC021F000)
#define BASE_MADDR_BPI_BSI_SLV2                 (0xC0225000)
#define BASE_MADDR_MODEM_TEMP_SHARE_BASE        (0xC0018000)

//MD-side L1Core Strongly-ordered registers
#define L1_BASE_MADDR_GLOBAL_TS_SHADOW          (0xF2000000)
#define L1_BASE_MADDR_L1CIRQ                    (0xF6000000)
#define L1_BASE_MADDR_L1RGU                     (0xF6010000)
#define L1_BASE_MADDR_L1OSTIMER                 (0xF6020000)
#define L1_BASE_MADDR_L12PS_CCIRQ               (0xF6030000)
#define L1_BASE_MADDR_PS2L1_CCIRQ               (0xF6040000)
#define L1_BASE_MADDR_L1GPTM                    (0xF6050000)
#define L1_BASE_MADDR_L1CCIF                    (0xF6060000)
#define L1_BASE_MADDR_TOPSM                     (0xF6070000)
#define L1_BASE_MADDR_FREQM                     (0xF60A0000)
#define L1_BASE_MADDR_TDMA_SLP                  (0xF60B0000)
#define L1_BASE_MADDR_TDD_SLP                   (0xF60C0000)
#define L1_BASE_MADDR_RXTIMER                   (0xF60D0000)
#define L1_BASE_MADDR_LTETIMER                  (0xF60E0000)
#define L1_BASE_MADDR_MDL1_CONF                 (0xF60F0000)
#define L1_BASE_MADDR_MODEMSYS_TRACE_EVENT_CTRL (0xF6100000)
#define L1_BASE_MADDR_LTE_SLP                   (0xF6110000)
#define L1_BASE_MADDR_L1GPTM_LITE               (0xF6120000)
#define L1_BASE_MADDR_IDC_CTRL                  (0xF6130000)
#define L1_BASE_MADDR_PTP_THERMAL_CTRL          (0xF6140000)
#define L1_BASE_MADDR_SRAM_AO_CTRL              (0xF6150000)
#define L1_BASE_MADDR_ABB_MIXEDSYS              (0xF6160000)
#define L1_BASE_MADDR_MBIST_CONFIG              (0xF6170000)
#define L1_BASE_MADDR_L1MCU_CONF                (0xF6800000)
#define L1_BASE_MADDR_FCS                       (0xF6810000)
#define L1_BASE_MADDR_L1GDMA                    (0xF6820000)
#define L1_BASE_MADDR_L1ABM                     (0xF6830000)
#define L1_BASE_MADDR_CR4_BTSLV_APB             (0xF6840000)
#define L1_BASE_MADDR_L1ELM_TOP                 (0xF6860000)
#define L1_BASE_MADDR_L1MCU_BUSMOM              (0xF6870000)
#define L1_BASE_MADDR_L1MCU_ETM_PCMON           (0xF6880000)
#define L1_BASE_MADDR_IDC_UART                  (0xF6890000)
#define L1_BASE_MADDR_L1MCU_SMI_CONFIG          (0xF68A0000)
#define L1_BASE_MADDR_MDL1_BUS_CONFG            (0xF68B0000)
#define L1_BASE_MADDR_SRAM_AO_PSEL              (0xF68C0000)
#define L1_BASE_MADDR_CM_IDMA                   (0xF7000000)
#define L1_BASE_MADDR_PM_IDMA                   (0xF7100000)
#define L1_BASE_MADDR_DM_IDMA                   (0xF7200000)
#define L1_BASE_MADDR_SHORTMODE_IDMA            (0xF7300000)
#define L1_BASE_MADDR_AHB2DSPIO                 (0xF7400000)
#define L1_BASE_MADDR_MD2G_CONFG                (0xF7700000)
#define L1_BASE_MADDR_MD2G_MBIST_CONFG          (0xF7710000)
#define L1_BASE_MADDR_TDMA_BASE                 (0xF7720000)
#define L1_BASE_MADDR_APC                       (0xF7730000)
#define L1_BASE_MADDR_CSD_ACC                   (0xF7770000)
#define L1_BASE_MADDR_MD2G_BSI_BASE             (0xF7780000)
#define L1_BASE_MADDR_MD2G_BPI_BASE             (0xF7790000)
#define L1_BASE_MADDR_SHARE_D1                  (0xF77A0000)
#define L1_BASE_MADDR_IRDMA                     (0xF77B0000)
#define L1_BASE_MADDR_PATCH                     (0xF77C0000)
#define L1_BASE_MADDR_AFE                       (0xF77D0000)
#define L1_BASE_MADDR_BFE                       (0xF77E0000)
#define L1_BASE_MADDR_MD2G_MEM_CONFG            (0xF77F0000)
#define L1_BASE_MADDR_DFE_PERICTRL_BTSLV        (0xF7B51000)
#define L1_BASE_MADDR_DFE_CMIF                  (0xF7B58000)
#define L1_BASE_MADDR_DFE_WTL_TXK_MEAS          (0xF7C80000)
#define L1_BASE_MADDR_DFESYS_CFG                (0xF7E00000)
#define L1_BASE_MADDR_DFESYS_MBIST_CTRL         (0xF7E10000)
#define L1_BASE_MADDR_DFESYS_MEMCFG             (0xF7E20000)
#define L1_BASE_MADDR_DFE_BSI_W                 (0xF7E40000)
#define L1_BASE_MADDR_DFE_BPI_W                 (0xF7E50000)
#define L1_BASE_MADDR_DFE_BSI_T                 (0xF7E60000)
#define L1_BASE_MADDR_DFE_BPI_T                 (0xF7E70000)
#define L1_BASE_MADDR_DFE_EVENTGEN_W            (0xF7E80000)
#define L1_BASE_MADDR_DFE_TCU_T                 (0xF7E90000)
#define L1_BASE_MADDR_DFE_TXFDA_L               (0xF7EA0000)
#define L1_BASE_MADDR_DFE_DBG_WTL               (0xF7EC0000)
#define L1_BASE_MADDR_DFE_DBG_T                 (0xF7ED0000)
#define L1_BASE_MADDR_DFE_PCC_WTL               (0xF7EE0000)
#define L1_BASE_MADDR_DFE_W_TTR                 (0xF7F00000)
#define L1_BASE_MADDR_DFE_T_TTR                 (0xF7F10000)
#define L1_BASE_MADDR_DFE_W_TXCRP               (0xF7F20000)
#define L1_BASE_MADDR_DFE_T_TXCRP               (0xF7F30000)
#define L1_BASE_MADDR_DFE_WTL_TXDFE             (0xF7F40000)
#define L1_BASE_MADDR_DFE_WTL_TXET              (0xF7F50000)
#define L1_BASE_MADDR_DFE_WTL_TXK               (0xF7F60000)
#define L1_BASE_MADDR_DFE_WL_TXIRQ              (0xF7F70000)
#define L1_BASE_MADDR_DFE_WTL_RX_CTRL           (0xF7F80000)
#define L1_BASE_MADDR_DFE_WTL_RX_FC             (0xF7F90000)
#define L1_BASE_MADDR_DFE_WTL_RX_MES            (0xF7FA0000)
#define L1_BASE_MADDR_DFE_WTL_RX_MES_SRAM       (0xF7FB8000)
#define L1_BASE_MADDR_DFE_RXDFEIF_L             (0xF7FC0000)
#define L1_BASE_MADDR_DFE_LOG_WTL               (0xF7FD0000)
#define L1_BASE_MADDR_DFE_W_TXHCH               (0xF7FF0000)
#define L1_BASE_MADDR_CSTXB_CONFIG              (0xF8000000)
#define L1_BASE_MADDR_CSTXB_MBIST_CONFIG        (0xF8010000)
#define L1_BASE_MADDR_TXBRP_WT_TOP              (0xF8020000)
#define L1_BASE_MADDR_CS_FDD_WT_TOP             (0xF8030000)
#define L1_BASE_MADDR_CS_TDD_WT_TOP             (0xF8040000)
#define L1_BASE_MADDR_CS_WCT_P2P                (0xF8050000)
#define L1_BASE_MADDR_CS_TXBRP_SHARERAM         (0xF8400000)
#define L1_BASE_MADDR_LTXB_BPI_L                (0xF8800000)
#define L1_BASE_MADDR_LTXB_BSI_L                (0xF8810000)
#define L1_BASE_MADDR_LTXB_RSV1                 (0xF8840000)
#define L1_BASE_MADDR_LTXBSYS_CFG               (0xF8841000)
#define L1_BASE_MADDR_LTXBSYS_MBSIT_CFG         (0xF8842000)
#define L1_BASE_MADDR_LTXBSYS_DELSEL_CFG        (0xF8843000)
#define L1_BASE_MADDR_LTXBSYS_REPAIR_CFG        (0xF8844000)
#define L1_BASE_MADDR_LTXBSYS_ROM_CFG           (0xF8845000)
#define L1_BASE_MADDR_LTXBSYS_TX_CKRCV          (0xF8846000)
#define L1_BASE_MADDR_LTXBSYS_OFFCKCTL          (0xF8860000)
#define L1_BASE_MADDR_LTXBSYS_OFFRSTCTL         (0xF8861000)
#define L1_BASE_MADDR_LTXBSYS_BUSCBIP_CFG       (0xF8862000)
#define L1_BASE_MADDR_LTXBSYS_DBGMON            (0xF8863000)
#define L1_BASE_MADDR_LTXBSYS_SRAMCTL_CFG       (0xF8864000)
#define L1_BASE_MADDR_LTXB_TXBRP_L_TBSBUF       (0xF8850000)
#define L1_BASE_MADDR_LTXB_TXBRP_L_ACCGSGEN     (0xF8851000)
#define L1_BASE_MADDR_LTXB_TXBRP_L_ACCBCGEN     (0xF8852000)
#define L1_BASE_MADDR_LTXB_TXBRP_L_TXBRPCTL     (0xF8853000)
#define L1_BASE_MADDR_LTXB_TXBRP_L_TXENC        (0xF8854000)
#define L1_BASE_MADDR_LTXB_TXBRP_L_TXFDCTL      (0xF8855000)
#define L1_BASE_MADDR_LTXB_TXBRP_L_TXFFT        (0xF8856000)
#define L1_BASE_MADDR_LTXB_TXBRP_L_TXMODU       (0xF8857000)
#define L1_BASE_MADDR_LTXB_TXBRP_L_TXPREDFE     (0xF8858000)
#define L1_BASE_MADDR_LTXB_TXBRP_L_TXSCC        (0xF8859000)
#define L1_BASE_MADDR_LTXB_TXBRP_L_TXSCRAMB     (0xF885A000)
#define L1_BASE_MADDR_LTXB_TXBRP_L_TXSHMEM      (0xF885B000)
#define L1_BASE_MADDR_LTXB_TXBRP_L_TXTDCTL      (0xF885C000)
#define L1_BASE_MADDR_LTXB_TXBRP_L_ZCSEQ        (0xF885D000)
#define L1_BASE_MADDR_LTXB_TXBRP_L_CKCTL        (0xF885E000)
#define L1_BASE_MADDR_LTXB_RSV2                 (0xF885F000)
#define L1_BASE_MADDR_RXBRP_GLOBAL_CON          (0xF9280000)
#define L1_BASE_MADDR_RXBRP_MBIST_CON           (0xF9290000)
#define L1_BASE_MADDR_RXBRP_RSV1                (0xF92A0000)
#define L1_BASE_MADDR_RXBRP_RSV2                (0xF92B0000)
#define L1_BASE_MADDR_RXBRP_RSV3                (0xF92C0000)
#define L1_BASE_MADDR_RXBRP_MEMSLP_CONFIG       (0xF92A0000)
#define L1_BASE_MADDR_RXBRP_BRPSYS_AO_CONFIG    (0xF92B0000)
#define L1_BASE_MADDR_RXBRP_RSV                 (0xF92C0000)
#define L1_BASE_MADDR_RXBRP_PERICTRL_BTSLV      (0xF9351000)
#define L1_BASE_MADDR_RXBRP_CDIF                (0xF9358000)
#define L1_BASE_MADDR_RAKE_GSR_CTRL             (0xF9900000)
#define L1_BASE_MADDR_RAKE_GSR_CTRL_MEM         (0xF9910000)
#define L1_BASE_MADDR_RAKESYS_CONFIG            (0xF9A00000)
#define L1_BASE_MADDR_RAKESYS_MBIST_CONFIG      (0xF9A10000)
#define L1_BASE_MADDR_RAKESYS_MEM_CONFIG        (0xF9A20000)
#define L1_BASE_MADDR_RAKESYS_MEMSLP_CONFIG     (0xF9A30000)
#define L1_BASE_MADDR_RAKE_PERICTRL_BTSLV       (0xF9B51000)
#define L1_BASE_MADDR_RAKE_CDIF                 (0xF9B58000)
#define L1_BASE_MADDR_EQ1_CONFIG                (0xFA000000)
#define L1_BASE_MADDR_EQ_HSCTRL1                (0xFA010000)
#define L1_BASE_MADDR_EQ_HSEQ1                  (0xFA010000)
#define L1_BASE_MADDR_EQ_HSRP1                  (0xFA010000)
#define L1_BASE_MADDR_EQ_HSCE1                  (0xFA020000)
#define L1_BASE_MADDR_EQ1_MBIST_CONFIG          (0xFA030000)
#define L1_BASE_MADDR_EQ2_CONFIG                (0xFA800000)
#define L1_BASE_MADDR_EQ_HSCTRL2                (0xFA810000)
#define L1_BASE_MADDR_EQ_HSEQ2                  (0xFA810000)
#define L1_BASE_MADDR_EQ_HSRP2                  (0xFA810000)
#define L1_BASE_MADDR_EQ_HSCE2                  (0xFA820000)
#define L1_BASE_MADDR_EQ2_MBIST_CONFIG          (0xFA830000)
#define L1_BASE_MADDR_EQ3_CONFIG                (0xFB000000)
#define L1_BASE_MADDR_EQ_HSCTRL3                (0xFB010000)
#define L1_BASE_MADDR_EQ_HSEQ3                  (0xFB010000)
#define L1_BASE_MADDR_EQ_HSRP3                  (0xFB010000)
#define L1_BASE_MADDR_EQ_HSCE3                  (0xFB020000)
#define L1_BASE_MADDR_EQ3_MBIST_CONFIG          (0xFB030000)
#define L1_BASE_MADDR_TD1_CSCE                  (0xFB800100)
#define L1_BASE_MADDR_TD1_PP                    (0xFB800200)
#define L1_BASE_MADDR_TD1_DFE_BRIDGE            (0xFB800300)
#define L1_BASE_MADDR_TD1_JDA                   (0xFB800400)
#define L1_BASE_MADDR_TD1_BRP_JDA               (0xFB800600)
#define L1_BASE_MADDR_TD1_MBIST_CONFIG          (0xFB800700)
#define L1_BASE_MADDR_TD1_SYSC                  (0xFB800800)
#define L1_BASE_MADDR_TD1_SYS_MEMC              (0xFB810000)
#define L1_BASE_MADDR_CSSYS_MBIST_CFG           (0xFCF00000)
#define L1_BASE_MADDR_CSSYS_DELSEL_CFG          (0xFCF01000)
#define L1_BASE_MADDR_CSSYS_REPAIR_CFG          (0xFCF02000)
#define L1_BASE_MADDR_CSSYS_ROM_CFG             (0xFCF03000)
#define L1_BASE_MADDR_CS_L1CCS                  (0xFCF04000)
#define L1_BASE_MADDR_CS_DMATEST                (0xFCF01000)
#define L1_BASE_MADDR_CS_RSV1                   (0xFCF02000)
#define L1_BASE_MADDR_CS_RSV2                   (0xFCF03000)
#define L1_BASE_MADDR_CSSYS_MISC_CFG            (0xFCF08000)
#define L1_BASE_MADDR_CS_RSV3                   (0xFCF09000)
#define L1_BASE_MADDR_CSSYS_OFFCKCTL            (0xFCF10000)
#define L1_BASE_MADDR_CSSYS_OFFRSTCTL           (0xFCF11000)
#define L1_BASE_MADDR_CSSYS_BUSCBIP_CFG         (0xFCF12000)
#define L1_BASE_MADDR_CS_DBGMON                 (0xFCF13000)
#define L1_BASE_MADDR_CSSYS_SRAMCTL_CFG         (0xFCF14000)
#define L1_BASE_MADDR_MPC_DSPPM                 (0xFD000000)
#define L1_BASE_MADDR_MPC_DSPICM                (0xFD400000)
#define L1_BASE_MADDR_MPC_MPC2IMC_SSIF          (0xFD418000)
#define L1_BASE_MADDR_MPC_C2CRF                 (0xFD600000)
#define L1_BASE_MADDR_MPC_L1CSIF                (0xFD680000)
#define L1_BASE_MADDR_MPC_L1CSIF_MEM            (0xFD680000)
#define L1_BASE_MADDR_MPC_L1CSIF_REG            (0xFD6C0000)
#define L1_BASE_MADDR_MPCSYS_MBIST_CFG          (0xFD700000)
#define L1_BASE_MADDR_MPCSYS_DELSEL_CFG         (0xFD701000)
#define L1_BASE_MADDR_MPCSYS_REPAIR_CFG         (0xFD702000)
#define L1_BASE_MADDR_MPCSYS_ROM_CFG            (0xFD703000)
#define L1_BASE_MADDR_MPC_DMATEST               (0xFD701000)
#define L1_BASE_MADDR_MPC_RSV1                  (0xFD702000)
#define L1_BASE_MADDR_MPC_RSV2                  (0xFD703000)
#define L1_BASE_MADDR_MPC_RXTDB_MPC             (0xFD704000)
#define L1_BASE_MADDR_MPCSYS_MISC_CFG           (0xFD708000)
#define L1_BASE_MADDR_MPC_RSV3                  (0xFD709000)
#define L1_BASE_MADDR_MPC_DSPBTRUE              (0xFD70E000)
#define L1_BASE_MADDR_MPCSYS_OFFCKCTL           (0xFD710000)
#define L1_BASE_MADDR_MPCSYS_OFFRSTCTL          (0xFD711000)
#define L1_BASE_MADDR_MPCSYS_BUSCBIP_CFG        (0xFD712000)
#define L1_BASE_MADDR_MPC_DBGMON                (0xFD713000)
#define L1_BASE_MADDR_MPCSYS_SRAMCTL_CFG        (0xFD714000)
#define L1_BASE_MADDR_MPC_DSPBTDMA              (0xFD720000)
#define L1_BASE_MADDR_MPC_DSPLOG                (0xFD721000)
#define L1_BASE_MADDR_MPC_DSPCNWDMA             (0xFD722000)
#define L1_BASE_MADDR_IMC_DSPPM                 (0xFD800000)
#define L1_BASE_MADDR_IMC_DSPICM                (0xFDC00000)
#define L1_BASE_MADDR_IMC_IMC2ICC_SSIF          (0xFDC1E000)
#define L1_BASE_MADDR_IMC_IMC2MPC_SSIF          (0xFDC26000)
#define L1_BASE_MADDR_IMC_IMC2BRP_MSIF          (0xFDC2E000)
#define L1_BASE_MADDR_IMC_C2CRF                 (0xFDE00000)
#define L1_BASE_MADDR_IMC_L1CSIF                (0xFDE80000)
#define L1_BASE_MADDR_IMC_L1CSIF_MEM            (0xFDE80000)
#define L1_BASE_MADDR_IMC_L1CSIF_REG            (0xFDEC0000)
#define L1_BASE_MADDR_IMCSYS_MBIST_CFG          (0xFDF00000)
#define L1_BASE_MADDR_IMCSYS_DELSEL_CFG         (0xFDF01000)
#define L1_BASE_MADDR_IMCSYS_REPAIR_CFG         (0xFDF02000)
#define L1_BASE_MADDR_IMCSYS_ROM_CFG            (0xFDF03000)
#define L1_BASE_MADDR_IMC_FAKE_LTMR             (0xFDF04000)
#define L1_BASE_MADDR_IMC_DMATEST               (0xFDF01000)
#define L1_BASE_MADDR_IMC_RSV1                  (0xFDF02000)
#define L1_BASE_MADDR_IMC_RSV2                  (0xFDF03000)
#define L1_BASE_MADDR_IMCSYS_MISC_CFG           (0xFDF08000)
#define L1_BASE_MADDR_IMC_RSV3                  (0xFDF09000)
#define L1_BASE_MADDR_IMC_DSPBTRUE              (0xFDF0E000)
#define L1_BASE_MADDR_IMCSYS_OFFCKCTL           (0xFDF10000)
#define L1_BASE_MADDR_IMCSYS_OFFRSTCTL          (0xFDF11000)
#define L1_BASE_MADDR_IMCSYS_BUSCBIP_CFG        (0xFDF12000)
#define L1_BASE_MADDR_IMC_DBGMON                (0xFDF13000)
#define L1_BASE_MADDR_IMCSYS_SRAMCTL_CFG        (0xFDF14000)
#define L1_BASE_MADDR_IMC_CKCTL                 (0xFDF15000)
#define L1_BASE_MADDR_IMC_DSPBTDMA              (0xFDF20000)
#define L1_BASE_MADDR_IMC_DSPLOG                (0xFDF21000)
#define L1_BASE_MADDR_IMC_DSPCNWDMA             (0xFDF22000)
#define L1_BASE_MADDR_IMC_RXTDB_CR4             (0xFDF30000)
#define L1_BASE_MADDR_IMC_TDBCKRCV              (0xFDF40000)
#define L1_BASE_MADDR_MMUSYS_MBIST_CFG          (0xFE700000)
#define L1_BASE_MADDR_MMUSYS_DELSEL_CFG         (0xFE701000)
#define L1_BASE_MADDR_MMUSYS_REPAIR_CFG         (0xFE702000)
#define L1_BASE_MADDR_MMUSYS_ROM_CFG            (0xFE703000)
#define L1_BASE_MADDR_MMUSYS_MMU                (0xFE704000)
#define L1_BASE_MADDR_MMU_MMUCKRCV              (0xFE705000)
#define L1_BASE_MADDR_MMUSYS_MMU_MON            (0xFE706000)
#define L1_BASE_MADDR_MMUSYS_OFFCKCTL           (0xFE710000)
#define L1_BASE_MADDR_MMUSYS_OFFRSTCTL          (0xFE711000)
#define L1_BASE_MADDR_MMUSYS_BUSCBIP_CFG        (0xFE712000)
#define L1_BASE_MADDR_MMU_DBGMON                (0xFE713000)
#define L1_BASE_MADDR_MMU_DMATEST               (0xFE701000)
#define L1_BASE_MADDR_MMU_RSV1                  (0xFE702000)
#define L1_BASE_MADDR_MMU_RSV2                  (0xFE703000)
#define L1_BASE_MADDR_MMUSYS_MISC_CFG           (0xFE708000)
#define L1_BASE_MADDR_MMU_RSV3                  (0xFE709000)
#define L1_BASE_MADDR_MMUSYS_SRAMCTL_CFG        (0xFE714000)
#define L1_BASE_MADDR_MMU_MMUCKCTL              (0xFE715000)
#define L1_BASE_MADDR_MMU_LTEL1_SMI             (0xFE716000)
#define L1_BASE_MADDR_MMU_RXDMP_CR4             (0xFE720000)
#define L1_BASE_MADDR_ICC_DSPPM                 (0xFE800000)
#define L1_BASE_MADDR_ICC_DSPICM                (0xFEC00000)
#define L1_BASE_MADDR_ICC_ICC2IMC_SSIF          (0xFEC1E000)
#define L1_BASE_MADDR_ICC_C2CRF                 (0xFEE00000)
#define L1_BASE_MADDR_ICC_L1CSIF                (0xFEE80000)
#define L1_BASE_MADDR_ICC_L1CSIF_MEM            (0xFEE80000)
#define L1_BASE_MADDR_ICC_L1CSIF_REG            (0XFEEC0000)
#define L1_BASE_MADDR_ICCSYS_MBIST_CFG          (0xFEF00000)
#define L1_BASE_MADDR_ICCSYS_DELSEL_CFG         (0xFEF01000)
#define L1_BASE_MADDR_ICCSYS_REPAIR_CFG         (0xFEF02000)
#define L1_BASE_MADDR_ICC_ROM_CFG               (0xFEF03000)
#define L1_BASE_MADDR_ICCSYS_OFFCKCTL           (0xFEF10000)
#define L1_BASE_MADDR_ICCSYS_OFFRSTCTL          (0xFEF11000)
#define L1_BASE_MADDR_ICCSYS_BUSCBIP_CFG        (0xFEF12000)
#define L1_BASE_MADDR_ICC_DBGMON                (0xFEF13000)
#define L1_BASE_MADDR_ICCSYS_SRAMCTL_CFG        (0xFEF14000)
#define L1_BASE_MADDR_ICC_DSPBTDMA              (0xFEF20000)
#define L1_BASE_MADDR_ICC_DSPLOG                (0xFEF21000)
#define L1_BASE_MADDR_ICC_DSPCNWDMA             (0xFEF22000)
#define L1_BASE_MADDR_ICC_DMATEST               (0xFEF01000)
#define L1_BASE_MADDR_ICC_RSV1                  (0xFEF02000)
#define L1_BASE_MADDR_ICC_RSV2                  (0xFEF03000)
#define L1_BASE_MADDR_ICCSYS_MISC_CFG           (0xFEF08000)
#define L1_BASE_MADDR_ICC_RSV3                  (0xFEF09000)
#define L1_BASE_MADDR_ICC_DSPBTRUE              (0xFEF0E000)
#define L1_BASE_MADDR_BOOTSLAVE                 (0xFF000000)
#define L1_BASE_MADDR_MDUART0                   (0xF0010000)
#define L1_BASE_MADDR_MDUART1                   (0xF0330000)
#define L1_BASE_MADDR_MDUART2                   (0xF0340000)

//MD-side PSCore Strongly-ordered registers
#define BASE_MADDR_MDCFGCTL                     (0xF0000000)
#define BASE_MADDR_LTEL2SYS                     (0xF0800000)
#define BASE_MADDR_L2ULSBDMA                    (0xF0800000)
#define BASE_MADDR_L2ULHBDMA                    (0xF0810000)
#define BASE_MADDR_L2DLSBDMA                    (0xF0820000)
#define BASE_MADDR_L2DLHBDMA                    (0xF0830000)
#define BASE_MADDR_L2MBIST                      (0xF0840000)
#define BASE_MADDR_L2PSEUPHY                    (0xF0850000)
#define BASE_MADDR_L2HWLOG                      (0xF0854000)
#define BASE_MADDR_L2ULLOGDMA                   (0xF0858000)
#define BASE_MADDR_L2DLLOGDMA                   (0xF085C000)
#define BASE_MADDR_L2SOINDMA                    (0xF0860000)
#define BASE_MADDR_L2SOOUTDMA                   (0xF0870000)
#define BASE_MADDR_L2ULLMAC                     (0xF0880000)
#define BASE_MADDR_L2DLLMAC                     (0xF0890000)
#define BASE_MADDR_L2CALMAC                     (0xF0898000)
#define BASE_MADDR_L2ULFIFOMNG                  (0xF08A0000)
#define BASE_MADDR_L2DLFIFOMNG                  (0xF08A4000)
#define BASE_MADDR_L2SOFIFOMNG                  (0xF08A8000)
#define BASE_MADDR_L2SEC                        (0xF08B0000)
#define BASE_MADDR_L2ULSECCTL                   (0xF08B4000)
#define BASE_MADDR_L2DLSECCTL                   (0xF08B8000)
#define BASE_MADDR_L2SOSECCTL                   (0xF08BC000)
#define BASE_MADDR_L2MISC                       (0xF08C0000)
#define BASE_MADDR_L2DBGMON                     (0xF08D0000)
#define BASE_MADDR_L2ULBUFMNG                   (0xF08E0000)
#define BASE_MADDR_L2DLBUFMNG                   (0xF08F0000)
#define BASE_MADDR_MD32_BRP                     (0xF9000000)
#define BASE_MADDR_MD32_DFE                     (0xF7800000)
#define BASE_MADDR_MD32_RAKE                    (0xF9800000)
#define BASE_MADDR_PS_CTI                       (0xF00A8000)
#define BASE_MADDR_L1_CTI                       (0xF009B000)
#define BASE_MADDR_MD_CTI                       (0xF009C000)
#define BASE_MADDR_MDTOP_PLLMIXED               (0xF0140000)
#define BASE_MADDR_PSMDCIRQ                     (0xF0070000)//due to the same name proble BASE_MADDR_MDCIRQ
                                                            //rename to BASE_MADDR_PSMDCIRQ for bootup trace
#define BASE_MADDR_MDSYS_CLKCTL                 (0xF0120000)
#define BASE_MADDR_MDSMICFG						(0xF03A0000)


//Register base STRONGLY-ORDERED type support and rename for User's request
#define BASE_MADDR_MDCIRQ       (L1_BASE_MADDR_L1CIRQ)
#define L1Core_OSTIMER_base     (L1_BASE_MADDR_L1OSTIMER)
#define L1Core_TOPSM_base       (L1_BASE_MADDR_TOPSM)
#define TDMA_SLP_base           (L1_BASE_MADDR_TDMA_SLP)
#define L1_BASE_MADDR_WTIMER    (L1_BASE_MADDR_RXTIMER)
#define LTE_SLP_base            (L1_BASE_MADDR_LTE_SLP)
#define L1_BASE_MADDR_ASM       (L1_BASE_MADDR_L1ABM)
#define MDMCU_BUSMON_BASE       (L1_BASE_MADDR_L1MCU_BUSMOM)
#define BASE_MADDR_MDPCMON      (L1_BASE_MADDR_L1MCU_ETM_PCMON)
#define CONFIG_base             (L1_BASE_MADDR_MDL1_CONF)
#define BASE_MADDR_MDGPTM       (L1_BASE_MADDR_L1GPTM)
#define UART1_base              (L1_BASE_MADDR_MDUART0)
#define UART2_base              (L1_BASE_MADDR_MDUART1)
#define UART3_base              (L1_BASE_MADDR_MDUART2)
#define IDMA_base               (L1_BASE_MADDR_CM_IDMA)
#define DPRAM_CPU_base          (L1_BASE_MADDR_DM_IDMA)
#define FCS2G_base              (L1_BASE_MADDR_FCS)
#define SHAREG2_base            (L1_BASE_MADDR_SHARE_D1)
#define PATCH_base              (L1_BASE_MADDR_PATCH)
#define EFUSE_base              (BASE_MADDR_EFUSE)
#define BASE_MADDR_MDGDMA       (L1_BASE_MADDR_L1GDMA)
#define CSD_ACC_base            (L1_BASE_MADDR_CSD_ACC)
#define PS_CONFIG_base          (BASE_MADDR_MDCFGCTL)

//Register base DEVICE type support and rename for User's request
#define BASE_ADDR_MDCIRQ        ((L1_BASE_MADDR_L1CIRQ            & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define L1_BASE_ADDR_ASM        ((L1_BASE_MADDR_L1ABM             & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_MDPCMON       ((L1_BASE_MADDR_L1MCU_ETM_PCMON   & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_MDGPTM        ((L1_BASE_MADDR_L1GPTM            & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define L1_BASE_ADDR_IDC_CTRL   ((L1_BASE_MADDR_IDC_CTRL          & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)

#define BASE_ADDR_LTEL2SYS      ((BASE_MADDR_LTEL2SYS             & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2ULSBDMA     ((BASE_MADDR_L2ULSBDMA            & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2ULHBDMA     ((BASE_MADDR_L2ULHBDMA            & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2DLSBDMA     ((BASE_MADDR_L2DLSBDMA            & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2DLHBDMA     ((BASE_MADDR_L2DLHBDMA            & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2MBIST       ((BASE_MADDR_L2MBIST              & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2PSEUPHY     ((BASE_MADDR_L2PSEUPHY            & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2HWLOG       ((BASE_MADDR_L2HWLOG              & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2SOINDMA     ((BASE_MADDR_L2SOINDMA            & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2SOOUTDMA    ((BASE_MADDR_L2SOOUTDMA           & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2ULLMAC      ((BASE_MADDR_L2ULLMAC             & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2DLLMAC      ((BASE_MADDR_L2DLLMAC             & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2CALMAC      ((BASE_MADDR_L2CALMAC             & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2ULFIFOMNG   ((BASE_MADDR_L2ULFIFOMNG          & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2DLFIFOMNG   ((BASE_MADDR_L2DLFIFOMNG          & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2SOFIFOMNG   ((BASE_MADDR_L2SOFIFOMNG          & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2SEC         ((BASE_MADDR_L2SEC                & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2ULSECCTL    ((BASE_MADDR_L2ULSECCTL           & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2DLSECCTL    ((BASE_MADDR_L2DLSECCTL           & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2SOSECCTL    ((BASE_MADDR_L2SOSECCTL           & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2MISC        ((BASE_MADDR_L2MISC               & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2DBGMON      ((BASE_MADDR_L2DBGMON             & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2ULBUFMNG    ((BASE_MADDR_L2ULBUFMNG           & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2DLBUFMNG    ((BASE_MADDR_L2DLBUFMNG           & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_MDGDMA        ((BASE_MADDR_MDGDMA               & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2ULLOGDMA    ((BASE_MADDR_L2ULLOGDMA           & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)
#define BASE_ADDR_L2DLLOGDMA    ((BASE_MADDR_L2DLLOGDMA           & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)

#define MDSYS_PERI_ACC_TYPE_MASK    (0xF0000000)
#define MDSYS_PERI_NORMAL_TYPE      (0x60000000)
#define MDSYS_PERI_DEVICE_TYPE      (0x80000000)
#define MDSYS_PERI_SO_TYPE          (0xF0000000)
#define APSYS_PERI_DEVICE_TYPE      (0x90000000)


#endif /* end of __REG_BASE_MT6757_H__ */
