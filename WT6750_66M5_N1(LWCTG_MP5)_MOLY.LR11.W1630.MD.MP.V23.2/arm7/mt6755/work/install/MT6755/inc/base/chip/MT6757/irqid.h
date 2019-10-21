#ifndef __IRQID_H__
#define __IRQID_H__
/* AP IRQID LIST */
#define AP_IRQID_APOSTIMER	(0)
#define AP_IRQID_APTOPSM	(1)
#define AP_IRQID_APWDT	(2)
#define AP_IRQID_MDWDT	(3)
#define AP_IRQID_PMIC_WRAP (4)
#define AP_IRQID_SDIO	(5)
#define AP_IRQID_UART_AP	(6)
#define AP_IRQID_LED	(7)
#define AP_IRQID_GPTM1	(8)
#define AP_IRQID_GPTM2	(9)
#define AP_IRQID_GPTM3	(10)
#define AP_IRQID_GPTM4	(11)
#define AP_IRQID_EINT0	(12)
#define AP_IRQID_EINT1	(13)
#define AP_IRQID_EINT2	(14)
#define AP_IRQID_EINT3	(15)
#define AP_IRQID_EINT_SHARE	(16)
#define AP_IRQID_RTC	(17)
#define AP_IRQID_BUSMON_MCU	(18)
#define AP_IRQID_ECT	(19)
#define AP_IRQID_RAMC_REFR	(20)

#define AP_IRQID_I2C_1	(24)
#define AP_IRQID_USIM1	(25)
#define AP_IRQID_USIM2	(26)
#define AP_IRQID_BUS_ERR	(28)
#define AP_IRQID_AUXADC	(29)
#define AP_IRQID_PLL_REQ	(32)

#define AP_IRQID_SOE	(36) //IPSEC
#define AP_IRQID_GDMA0	(37)
#define AP_IRQID_GDMA1	(38)
#define AP_IRQID_GDMA2	(39)
#define AP_IRQID_GDMA3	(40)
#define AP_IRQID_EHPI0	(42)
#define AP_IRQID_NFI	(43)
#define AP_IRQID_UART_SH0	(44)
#define AP_IRQID_UART_SH1	(45)
#define AP_IRQID_CLDMA	(46)
#define AP_IRQID_TRNG	(47)
#define AP_IRQID_BUSMON_INFRA	(48)
#define AP_IRQID_SPI	(53)
#define AP_IRQID_AXI_ERR	(54)
#define AP_IRQID_USB3	(55)
#define AP_IRQID_PCCIF0_INT0	(56)
#define AP_IRQID_PCCIF0_INT1	(57)
#define AP_IRQID_PCCIF0_INT2	(58)
#define AP_IRQID_PCCIF0_INT3	(59)

/*begin of MD PS core IRQID LIST*/
#if (PSCORE)
/* MD2PSCIRQ*/

#define MD_IRQID_OST          		(0)
#define MD_IRQID_FRC          		(1)
#define MD_IRQID_LMAC_RAR     		(2)
#define MD_IRQID_LMAC_EAR     		(3)
#define MD_IRQID_MDWDT        		(4)
#define MD_IRQID_NFI          		(5)
#define MD_IRQID_L2COPRO      		(6)
#define MD_IRQID_MDGPTM_EVENT1      (7)
#define MD_IRQID_MDGPTM_EVENT2      (8)
#define MD_IRQID_MDGPTM_EVENT3      (9)
#define MD_IRQID_MDGPTM_EVENT4      (10)
#define MD_IRQID_MDGPTM_EVENT5      (11)
#define MD_IRQID_MDGPTM_EVENT6      (12)
#define MD_IRQID_MDUART      		(13)
#define MD_IRQID_PERIUART0     		(14)
#define MD_IRQID_BUSMON       		(15)
#define MD_IRQID_I2C_0        		(16)
#define MD_IRQID_USIM0        		(17)
#define MD_IRQID_USIM1        		(18)
#define MD_IRQID_PERIUART1   		(19)
#define MD_IRQID_MDGDMA0      		(20)
#define MD_IRQID_MDGDMA1      		(21)
#define MD_IRQID_MDGDMA2      		(22)
#define MD_IRQID_MDGDMA3      		(23)
#define MD_IRQID_EINT0        		(24)
#define MD_IRQID_EINT1        		(25)
#define MD_IRQID_EINT2        		(26)
#define MD_IRQID_EINT3        		(27)
#define MD_IRQID_EINT_SHARE   		(28)
#define MD_IRQID_BUS_ERR      		(29)
#define MD_IRQID_MD_TOPSM        	(30)
#define MD_IRQID_DEM_TRIG_INT 		(31) 
#define MD_IRQID_RSV_0   			(32)
#define MD_IRQID_RSV_1   			(33)
#define MD_IRQID_RSV_2   			(34)
#define MD_IRQID_RSV_3   			(35)
#define MD_IRQID_RSV_4   			(36)
#define MD_IRQID_RSV_5   			(37)
#define MD_IRQID_RSV_6   			(38)
#define MD_IRQID_RSV_7   			(39)
#define MD_IRQID_ARM7_WDT_INT 		(40)
#define MD_IRQID_PERFCNT      		(41)
#define MD_IRQID_PMU				(42)  
#define MD_IRQID_ECT          		(43)  
#define MD_IRQID_PS_L1_WDT_INT   	(44)
#define MD_IRQID_PS_ARM7_WDT_INT   	(45)
#define MD_IRQID_CLDMA    			(46)
#define MD_IRQID_ADOE    			(47)
#define MD_IRQID_MDLITE_GPTM   		(48)
	
/*AP2PSCIRQ*/
#define MD_IRQID_APWDT        (50)  
#define MD_IRQID_SPI          (53)
#define MD_IRQID_USB2_0       (54)
#define MD_IRQID_USB3         (55)
#define MD_IRQID_SDIO         (56)
#define MD_IRQID_MSDC0        (57)
#define MD_IRQID_EHPI0        (58)
#define MD_IRQID_RTC          (59)
#define MD_IRQID_MSDC1        (61)
#define MD_IRQID_PFC_INT_LV   (62)
#define MD_IRQID_AUXACD       (63)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
#define MD_IRQID_LED	      (64)


/*Modeml1sys2PSCIRQ*/
#define MD_IRQID_DSP_L1DMA                	(70)
#define MD_IRQID_SHARE_D12MINT2           	(71)
#define MD_IRQID_LTE_TIMER_EMAC_SF_TICK   	(72)
#define MD_IRQID_IRDBG_MCU_INT_B    		(73)
#define MD_IRQID_MODEMSYS_TRACE    			(74)
#define MD_IRQID_L1_ADOE_INT  				(75)
#define MD_IRQID_BC_IRQ_B  					(80)
#define MD_IRQID_IRQID_UEA_UIA_IRQ_B  		(81)
#define MD_IRQID_IRQID_UPA_ACC_IRQ_B  		(82)
#define MD_IRQID_IRQID_DPA_ACC_IRQ_B  		(83)


/*CCIRQ2PSCIRQ*/
#define MD_IRQID_CCIRQ_12P_0    (85)
#define MD_IRQID_CCIRQ_12P_1    (86)
#define MD_IRQID_CCIRQ_12P_2    (87)
#define MD_IRQID_CCIRQ_12P_3    (88)
#define MD_IRQID_CCIRQ_12P_4    (89)
#define MD_IRQID_CCIRQ_12P_5    (90)
#define MD_IRQID_CCIRQ_12P_6    (91)
#define MD_IRQID_CCIRQ_12P_7    (92)
#define MD_IRQID_CCIRQ_12P_8    (93)
#define MD_IRQID_CCIRQ_12P_9    (94)
#define MD_IRQID_CCIRQ_12P_10   (95)
#define MD_IRQID_CCIRQ_12P_11   (96)
#define MD_IRQID_CCIRQ_12P_12   (97)
#define MD_IRQID_CCIRQ_12P_13   (98)
#define MD_IRQID_CCIRQ_12P_14   (99)
#define MD_IRQID_CCIRQ_12P_15   (100)

/*PCCIRQ2PSCIRQ*/
#define MD_IRQID_PCCIF_AP_IRQ              (105)
#define MD_IRQID_PCCIF_MD32_IRQ            (106)
#define MD_IRQID_PCCIF_ARM7_IRQ            (107)
#define MD_IRQID_PCCIF_MD32_PRIORITY_IRQ0  (108)
#define MD_IRQID_PCCIF_MD32_PRIORITY_IRQ1  (109)
#define MD_IRQID_PCCIF_MD32_PRIORITY_IRQ2  (110)
#define MD_IRQID_PCCIF_MD32_PRIORITY_IRQ3  (111)
#define MD_IRQID_SOE                       (116)

//To fix build fail, the interrupt is remove from 6291
#define MD_IRQID_INVALID  (0xFF)
#define MD_IRQID_PCMON MD_IRQID_INVALID
#define MD_IRQID_IDC2ARM MD_IRQID_INVALID
#define L1_IDC_UART_IRQ_B MD_IRQID_INVALID
#define L1_IDC_PM_INT MD_IRQID_INVALID


/*end of MD PS core IRQID LIST*/

#elif defined(L1CORE)
#define L1_BSI_TOP_IRQ_B (0)              
#define L1_EL1_SW_EVENT_T (1)             
#define L1_EL1_SW_EVENT_3 (2)             
#define L1_EL1_SW_EVENT_2 (3)             
#define L1_EL1_SW_EVENT_1 (4)             
#define L1_EL1_SW_EVENT_0 (5)             
#define L1_WTIMER_IRQ_B (6)               
#define L1_RTR_SLT_IRQ_B (7)              
#define L1_RTR_FRAME_IRQ_B (8)            
#define L1_TDMA_WAKEUP_IRQ_B (9)          
#define L1_TDD_WAKEUP_IRQ_B (10)          
#define L1_MDL1_TOPSM_IRQ_B (11)          
#define L1_FREQM_IRQ_B (12)               
#define L1_DEM_TRIG_L1_INT_LE_B (13)      
#define L1_MPC_DSP_IRQ_B_0 (14)           
#define L1_MPC_DSP_IRQ_B_1 (15)           
#define L1_IMC_MMU_IRQ_B_1 (16)           
#define L1_IMC_MMU_IRQ_B_0 (17)           
#define L1_IMC_DSP_IRQ_B_1 (18)           
#define L1_IMC_DSP_IRQ_B_0 (19)           
#define L1_ICC_DSP_IRQ_B_0 (20)           
#define L1_ICC_DSP_IRQ_B_1 (21)           
#define L1_OST_INT_LV (22)                
#define L1_MPC_SRAM_CTRL_IRQ_B (23)       
#define L1_L1M_DFE_CMIF_M2C_IRQ_B_0 (24)  
#define L1_L1M_DFE_CMIF_M2C_IRQ_B_1 (25)  
#define L1_L1M_DFE_CMIF_M2C_IRQ_B_2 (26)  
#define L1_TCU_SW_INT2 (27)               
#define L1_TCU_SW_INT1 (28)               
#define L1_TDMA_CTIRQ3_B (29)             
#define L1_TDMA_CTIRQ2_B (30)             
#define L1_TDMA_CTIRQ1_B (31)             
#define L1_SHARE_D12MINT1_B (32)          
#define L1_INR_RAKE_CMIF_M2C_IRQ_B_0 (33) 
#define L1_INR_RAKE_CMIF_M2C_IRQ_B_1 (34) 
#define L1_INR_TD2_BRP_DMA_IRQ_B (35)     
#define L1_INR_TD2_PP_IRQ_B (36)          
#define L1_INR_TD2_JDA_IRQ_B (37)         
#define L1_INR_TD2_CSCE_IRQ_B (38)        
#define L1_INR_TD2_DFE_BRG_IRQ_B (39)     
#define L1_INR_TD1_BRP_DMA_IRQ_B (40)     
#define L1_INR_TD1_PP_IRQ_B (41)          
#define L1_INR_TD1_JDA_IRQ_B (42)         
#define L1_INR_TD1_CSCE_IRQ_B (43)        
#define L1_INR_TD1_DFE_BRG_IRQ_B (44)     
#define L1_BRP_BRP_CMIF_M2C_IRQ_B_0 (45)  
#define L1_BRP_BRP_CMIF_M2C_IRQ_B_1 (46)  
#define L1_BRP_BRP_CMIF_M2C_IRQ_B_2 (47)  
#define L1_LTEL1_CS_IRQ_B (48)            
#define L1_MMU_SRAM_CTRL_IRQ_B (49)       
#define L1_IMC_RXTDB_IRQ_B (50)           
#define L1_IMC_RXDMP_IRQ_B (51)           
#define L1_IMC_SRAM_CTRL_IRQ_B (52)       
#define L1_ICC_SRAM_CTRL_IRQ_B (53)       
#define L1_GDMA_IRQ_B (54)                
#define L1_NPMUIRQ (55)                   
#define L1_CSTXB_TDD_CS_IRQ_B (56)        
#define L1_CSTXB_FDD_CS_IRQ_B (57)        
#define L1_LTXB_TXENC_ERROR_IRQ_B (58)    
#define L1_LTXB_BSI_L_AB_IRQ_B (59)       
#define L1_LTXB_BSI_L_C_IRQ_B (60)        
#define L1_LTXB_BSI_L_D_IRQ_B (61)        
#define L1_L1MCU_ECT_IRQ_B (62)           
#define L1_RXDFEIF_L_IRQ_B (63)           
#define L1_BUSMON_MATCH_INT_B (64)        
#define L1_CS_SRAM_CTRL_IRQ_B (65)        
#define L1_MDL1_GPT_IRQ_B (66)            
#define L1_L1_BUS_DEC_ERR_IRQ_B (67)      
#define L1_SLPCTL_EVENT_B (68)            
#define L1_PTP_FSM_INT_B (69)             
#define L1_PTP_THERM_INT_B (70)           
#define L1_L1_LTE_WAKEUP_IRQ_B (71)       
#define L1_BUS_2X_DEC_ERR_LEVEL (72)      
#define L1_ADOE_INT_B (73)                
                     
#define MD_IRQID_MDGPTM_EVENT1		(74)                           
#define MD_IRQID_MDGPTM_EVENT2 		(75)                           
#define MD_IRQID_MDGPTM_EVENT3 		(76)                           
#define MD_IRQID_MDGPTM_EVENT4 		(77)                           
#define MD_IRQID_MDGPTM_EVENT5 		(78)                           
#define MD_IRQID_MDGPTM_EVENT6 		(79)      
                     
#define L1_PS2L1_RCCIF_INT_B_0 (80)       
#define L1_PS2L1_RCCIF_INT_B_1 (81)       
#define L1_PS2L1_RCCIF_INT_B_2 (82)       
#define L1_PS2L1_RCCIF_INT_B_3 (83)       
#define L1_PS2L1_RCCIF_INT_B_4 (84)       
#define L1_PS2L1_RCCIF_INT_B_5 (85)       
#define L1_PS2L1_RCCIF_INT_B_6 (86)       
#define L1_PS2L1_RCCIF_INT_B_7 (87)       
#define L1_PS2L1_RCCIF_INT_B_8 (88)       
#define L1_PS2L1_RCCIF_INT_B_9 (89)       
#define L1_PS2L1_RCCIF_INT_B_10 (90)      
#define L1_PS2L1_RCCIF_INT_B_11 (91)      
#define L1_PS2L1_RCCIF_INT_B_12 (92)      
#define L1_PS2L1_RCCIF_INT_B_13 (93)      
#define L1_PS2L1_RCCIF_INT_B_14 (94)      
#define L1_PS2L1_RCCIF_INT_B_15 (95)      
#define L1_C2K2L1_RCCIF_INT_B_0 (96)      
#define L1_C2K2L1_RCCIF_INT_B_1 (97)      
#define L1_C2K2L1_RCCIF_INT_B_2 (98)      
#define L1_C2K2L1_RCCIF_INT_B_3 (99)      
#define L1_C2K2L1_RCCIF_INT_B_4 (100)     
#define L1_C2K2L1_RCCIF_INT_B_5 (101)     
#define L1_C2K2L1_RCCIF_INT_B_6 (102)     
#define L1_C2K2L1_RCCIF_INT_B_7 (103)     
#define L1_SW_IRQID_104 (104)             
#define L1_SW_IRQID_105 (105)             
#define L1_SW_IRQID_106 (106)             
#define L1_SW_IRQID_107 (107)             
#define L1_PS_MODEMSYS_TRACE_IRQ_B (108)  
#define L1_PS_SSUSB_DEV_INT_LV (109)      
#define L1_PS_MDUART1_IRQ (110)           
#define L1_PS_MDUART0_IRQ (111)           
#define L1_MDH2L1_RCCIF_INT_B_0 (112)     
#define L1_MDH2L1_RCCIF_INT_B_1 (113)     
#define L1_MDH2L1_RCCIF_INT_B_2 (114)     
#define L1_MDH2L1_RCCIF_INT_B_3 (115)     
#define L1_MDH2L1_RCCIF_INT_B_4 (116)     
#define L1_MDH2L1_RCCIF_INT_B_5 (117)     
#define L1_MDH2L1_RCCIF_INT_B_6 (118)     
#define L1_MDH2L1_RCCIF_INT_B_7 (119)     
#define L1_SW_IRQID_120 (120)             
#define L1_SW_IRQID_121 (121)             
#define L1_SW_IRQID_122 (122)             
#define L1_PPC_CIRQ (123)                 
#define L1_CORE_BUS_DEC_ERR_LEVEL (124)   
#define L1_DFE_PCC_FULL_IRQ_B (125)       
#define L1_IDC_PM_INT (126)               
#define L1_IDC_UART_IRQ_B (127)           

//For compile build pass
#define MD_IRQID_OST				L1_OST_INT_LV       
#define MD_IRQID_MD_TOPSM        	L1_MDL1_TOPSM_IRQ_B

#define MD_IRQID_INVALID  (0xFF)

#define MD_IRQID_RTC          		MD_IRQID_INVALID


#define MD_IRQID_PERFCNT      		MD_IRQID_INVALID

#define MD_IRQID_MDUART      		(27)
#define MD_IRQID_PERIUART0			(28)
#define MD_IRQID_PERIUART1   		(41)
#define MD_IRQID_IDC2ARM		L1_IDC_UART_IRQ_B
#define MD_IRQID_L1_ADOE_INT  				(75)

#define MD_IRQID_MDGDMA0      		L1_GDMA_IRQ_B
#define MD_IRQID_MDGDMA1      		MD_IRQID_INVALID
#define MD_IRQID_MDGDMA2      		MD_IRQID_INVALID
#define MD_IRQID_MDGDMA3      		MD_IRQID_INVALID

#define MD_IRQID_PCMON 				MD_IRQID_INVALID
                      
#define MD_IRQID_EINT0        		MD_IRQID_INVALID
#define MD_IRQID_EINT1        		MD_IRQID_INVALID
#define MD_IRQID_EINT2        		MD_IRQID_INVALID
#define MD_IRQID_EINT3        		MD_IRQID_INVALID
#define MD_IRQID_EINT_SHARE   		MD_IRQID_INVALID
#define MD_IRQID_CLDMA    		MD_IRQID_INVALID
#define MD_IRQID_LED			MD_IRQID_INVALID
#define MD_IRQID_PCCIF_AP_IRQ		MD_IRQID_INVALID
#define MD_IRQID_PCCIF_ARM7_IRQ		MD_IRQID_INVALID


     
#endif    // end of L1Core Case



/* ARM7 IRQID LIST */
#define ARM7_IRQID_D2M_INT      (30)
#define ARM7_IRQID_EINT_SHARE	(28)
#define ARM7_IRQID_EINT3	(27)
#define ARM7_IRQID_BUSMON_INT	(26)
#define ARM7_IRQID_SDIO	(25)
#define ARM7_IRQID_USB30	(24)
#define ARM7_IRQID_OSTIMER_INT	(23)
//#define ARM7_IRQID_SLV_ACC_ERR	(22)
#define ARM7_IRQID_BUS_DECODE_ERR	(21)
#define ARM7_IRQID_MDGDMA3	(20)
#define ARM7_IRQID_MDGDMA2	(19)
#define ARM7_IRQID_MDGDMA1	(18)
#define ARM7_IRQID_MDGDMA0	(17)
#define ARM7_IRQID_EINT2	(16)
#define ARM7_IRQID_EINT1	(15)
#define ARM7_IRQID_EINT0	(14)
#define ARM7_IRQID_UART_SH1	(13)
#define ARM7_IRQID_UART_SH0	(12)
#define ARM7_IRQID_UART_MD	      (11)
#define ARM7_IRQID_MDGPTM6	(10)
#define ARM7_IRQID_MDGPTM5	(9)
#define ARM7_IRQID_MDGPTM4	(8)
#define ARM7_IRQID_MDGPTM3	(7)
#define ARM7_IRQID_MDGPTM2	(6)
#define ARM7_IRQID_MDGPTM1	(5)
#define ARM7_IRQID_PS_ARM7_ECT_IRQ	(4)
#define ARM7_IRQID_PCCIF_IRQ	(3)
#define ARM7_IRQID_L2COPRO	(2)
#define ARM7_IRQID_LMAC_EAR	(1)
#define ARM7_IRQID_LMAC_RAR	(0)

/* MODEM 2/3G modem, SW triggered Interrupt CODE definition */
#define IRQ_SW_LISR1_CODE     MD_IRQID_RSV_0
#define IRQ_SW_LISR2_CODE     MD_IRQID_RSV_1
#define IRQ_SW_LISR3_CODE     MD_IRQID_RSV_2
#define IRQ_SW_LISR4_CODE     MD_IRQID_RSV_3
#define IRQ_SW_LISR5_CODE     MD_IRQID_RSV_4
#define IRQ_SW_LISR6_CODE     MD_IRQID_RSV_5
#define IRQ_SW_LISR7_CODE     MD_IRQID_RSV_6
#define IRQ_SW_LISR8_CODE     MD_IRQID_RSV_7
//#define IRQ_SW_LISR9_CODE     MD_IRQID_RSV_10
//#define IRQ_SW_LISR10_CODE    MD_IRQID_RSV_11
//#define IRQ_SW_LISR11_CODE    MD_IRQID_RSV_12
#define IRQ_SW_CODE_END       IRQ_SW_LISR8_CODE





#define IRQ_RXADC_OVLD_ANT1_CODE   MD_IRQID_MODEMSYS_00
#define IRQ_RXADC_OVLD_ANT0_CODE   MD_IRQID_MODEMSYS_01
#define IRQ_RXBRP_HS_CODE          MD_IRQID_MODEMSYS_02
#define IRQ_LOG3G_CODE             MD_IRQID_MODEMSYS_03   /* log3g_buf_irq_b */
#define IRQ_SEARCHER_CODE          MD_IRQID_MODEMSYS_04
#define IRQ_PI_CODE                MD_IRQID_MODEMSYS_05
#define IRQ_AI_CODE                MD_IRQID_MODEMSYS_06
#define IRQ_TFCI_1_CODE            MD_IRQID_MODEMSYS_07
#define IRQ_TFCI_0_CODE            MD_IRQID_MODEMSYS_08
#define IRQ_RXBRP_CCB_CODE         MD_IRQID_MODEMSYS_09
#define IRQ_RXBRP_CC1_CODE         MD_IRQID_MODEMSYS_10
#define IRQ_RXBRP_CC0_CODE         MD_IRQID_MODEMSYS_11
#define IRQ_F8F9_CODE              MD_IRQID_MODEMSYS_12   /* uea_uia_irq_b */
#define IRQ_L2DPA_CODE             MD_IRQID_MODEMSYS_13
#define IRQ_L2UPA_CODE             MD_IRQID_MODEMSYS_14
#define IRQ_BITCP_CODE             MD_IRQID_MODEMSYS_15
#define IRQ_TXUPC_DSP_CODE         MD_IRQID_MODEMSYS_16   /* txupc_dsp_irq_b */
#define IRQ_HSDPA_BC_CODE          MD_IRQID_MODEMSYS_17
#define IRQ_PFC_DEC_CODE           MD_IRQID_MODEMSYS_18
#define IRQ_PFC_ENC_CODE           MD_IRQID_MODEMSYS_19
#define IRQ_WTIMER_CODE            MD_IRQID_MODEMSYS_20
#define IRQ_RTR_SLT_CODE           MD_IRQID_MODEMSYS_21
#define IRQ_RTR_FRAME_CODE         MD_IRQID_MODEMSYS_22
/*#define TOPSM_2G                   MD_IRQID_MODEMSYS_23*/
#define IRQ_MD_SLEEP_CODE          MD_IRQID_MODEMSYS_24   /* topsm_irq_b, slp_ctrl_irq_b */
#define IRQ_CTIRQ3_CODE            MD_IRQID_MODEMSYS_25
#define IRQ_CTIRQ2_CODE            MD_IRQID_MODEMSYS_26
#define IRQ_CTIRQ1_CODE            MD_IRQID_MODEMSYS_27
#define IRQ_TDMA_CODE              MD_IRQID_MODEMSYS_28
#define IRQ_IRDEBUG_CODE           MD_IRQID_MODEMSYS_29
#define IRQ_DSP2CPU_CODE           MD_IRQID_MODEMSYS_30   /* share_d12_mint_B */


#endif /*end of __IRQID_H__*/
