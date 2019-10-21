/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   l1d_reg.h
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   Definition of H/W register address used in L1D
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Revision:   1.46  $
 * $Modtime:   Aug 02 2005 13:45:22  $
 * $Log:   //mtkvs01/vmdata/Maui_sw/archives/mcu/l1/l1d/l1d_reg.h-arc  $
 *
 * 12 21 2015 prakash.chaudhary
 * [MOLY00145948] [MT6755][2GL1D][modify]CTM and CLK_GATING_BUILD_ERR bypass removal
 * 	
 * 	.
 *
 * 12 09 2015 wiley.li
 * [MOLY00152446] [L1D][Modify] Raise VS1 voltage for JADE- PMIC6353 (Enable by compile option __INCREASE_VS1_VOLTAGE_SUPPORT__)
 * 	
 * 	.
 *
 * 10 20 2015 prakash.chaudhary
 * [MOLY00145948] [MT6755][2GL1D][modify]CTM and CLK_GATING_BUILD_ERR bypass removal
 * 	.Rolled back
 *
 * 10 20 2015 prakash.chaudhary
 * [MOLY00145928] [MT6755][2GL1D][modify]2G RF conflict check
 * 	.
 *
 * 08 31 2015 umesh.donta
 * [MOLY00139728] Hard Real Time check modification,only for event triggered from TDMA.
 * 	.
 *
 * 07 08 2015 th.yeh
 * [MOLY00127028] [L1D][Modify] Refine TK6291 BB driver
 * .
 *
 * 06 18 2015 prakash.chaudhary
 * [MOLY00122406] [L1D][modify]Check in BB driver for Jade BB porting
 * 	.
 *
 * 03 23 2015 th.yeh
 * [MOLY00100085] [L1D][Modify] Add md2g_mem_config driver to TK6291 BB driver
 * .
 *
 * 03 10 2015 th.yeh
 * [MOLY00097507] [L1D][Modify] Bypass TK6291 1st phone call error
 * .
 *
 * 02 26 2015 th.yeh
 * [MOLY00096996] [L1D][Modify] Apply MD2G HW clock gating setting for TK6291.
 * .
 *
 * 02 17 2015 th.yeh
 * [MOLY00096471] [L1D][Modify] TK6291 BB driver refined
 * .
 *
 * 02 16 2015 ola.lee
 * [MOLY00091988] [L1D] Update MT6176 2G RF Driver
 * 	.
 *
 * 02 02 2015 ola.lee
 * [MOLY00091988] [L1D] Update MT6176 2G RF Driver
 *
 * 01 28 2015 th.yeh
 * [MOLY00085815] [L1D][Modify] TK6291 BB driver porting
 * .
 *
 * 12 01 2014 th.yeh
 * [MOLY00085815] [L1D][Modify] TK6291 BB driver porting
 * .
 *
 * 12 01 2014 th.yeh
 * [MOLY00085815] [L1D][Modify] TK6291 BB driver porting
 * .
 *
 * 11 26 2014 th.yeh
 * [MOLY00085814] [L1D][Modify] GL1D l1core call pcore API elimination
 * .
 *
 * 11 11 2014 th.yeh
 * [MOLY00052131] [L1D][Modify] PS/L1D dual-core modem interface development
 * .
 *
 * 11 06 2014 hosen.chen
 * [MOLY00080383] [L1D][Modify] Check in 2G modem sim related file
 * 	.
 *
 * 07 01 2014 yi-ying.lin
 * [MOLY00069088] [MT6752] Bring up integration
 * 	.
 *
 * 05 29 2014 yi-ying.lin
 * [MOLY00067365] [L1D][Modify] MT6752 L1D driver developement.
 *
 * 05 19 2014 yi-ying.lin
 * [MOLY00065703] [L1D] Add MT6752(K2) Chip option to avoid build error
 * 	.
 *
 * 05 19 2014 yi-ying.lin
 * [MOLY00065703] [L1D] Add MT6752(K2) Chip option to avoid build error
 * 	.
 *
 * 02 14 2014 ola.lee
 * [MOLY00055425] [L1SM] Suppress sleep mode build warning according to current software architechture
 * 	.
 *
 * 02 12 2014 ola.lee
 * [MOLY00055425] [L1SM] Suppress sleep mode build warning according to current software architechture
 * 	.
 *
 * 01 22 2014 ola.lee
 * [MOLY00054402] [MT6290E2][MML1 RF] Add clock gating before BSISPI init setting
 * 	.
 *
 * 12 24 2013 hosen.chen
 * [MOLY00046159] [L1D][Modify] Check in code of MT6595 2G modem driver modification
 * 	.
 *
 * 12 16 2013 hosen.chen
 * [MOLY00046159] [L1D][Modify] Check in code of MT6595 2G modem driver modification
 * 	.
 *
 * 12 09 2013 hosen.chen
 * [MOLY00046159] [L1D][Modify] Check in code of MT6595 2G modem driver modification
 * 	.
 *
 * 09 17 2013 sean.yang
 * [MOLY00038197] [MT6290E1][82LTE][EVB][Overnight][1] Fatal Error (0xb31, 0x20336f) - MED
 * 	.
 *
 * 08 14 2013 yi-ying.lin
 * [MOLY00028415] [82LTE.SMT.DEV] 6166/6169 2G calibration feature development
 * .
 *
 * 07 17 2013 chunyen.wu
 * [MOLY00030116] [L1D][Modify] MIPI load on MT6290
 * .
 *
 * 06 20 2013 sean.yang
 * [MOLY00026625] [eSIM] check in change for eSIM migrate to MOLY
 * .
 *
 * 06 14 2013 chunyen.wu
 * [MOLY00025476] [Multimode AFC] Extend multimode AFC control API to 4G
 * .
 *
 * 05 07 2013 sean.yang
 * [MOLY00020786] [MT6290 PO admit] Modify the MM timing sync register definition
 * .
 *
 * 05 02 2013 hosen.chen
 * [MOLY00021318] [L1D][Modify] Fix the UESIM build error
 * .
 *
 * 04 22 2013 hosen.chen
 * [MOLY00020463] [L1D][Modify] Check in code of MT6290 phone call modification
 * .
 *
 * 04 03 2013 hosen.chen
 * [MOLY00012945] [MT6290 Bring-up] Check in code of MT6290
 * .
 *
 * 04 02 2013 hosen.chen
 * [MOLY00012945] [L1D][Modify] Check in code of MT6290
 * .
 *
 * 03 28 2013 hosen.chen
 * [MOLY00012945] [L1D][Modify] Check in code of MT6290
 * .
 *
 * 03 21 2013 sean.yang
 * [MOLY00012412] [L1D][Modify] Fix the MT6290 Multimode build problem
 * .
 *
 * 02 19 2013 yi-ying.lin
 * [MOLY00010333] [L1D][Modify] fixed MT6290 build error
 * .
 *
 * 11 20 2012 yi-ying.lin
 * [MOLY00006411] [MT6280][check-in request] Modification for R-cal modification and E3 minor version check requirement
 * .
 *
 * 08 24 2012 samuel.yang
 * [MOLY00002639] [L1D][Modify] Separate l1d_reg.h into two parts of "for l1 internal use" and "for other module use"
 * .
 *
 * 06 22 2012 samuel.yang
 * removed!
 * .
 *
 * 06 19 2012 yuyang.hsiao
 * removed!
 * .
 *
 * 06 14 2012 samuel.yang
 * removed!
 * .
 *
 * 06 05 2012 chang-kuan.lin
 * removed!
 * .
 *
 * 05 29 2012 samuel.yang
 * removed!
 * .
 *
 * 05 25 2012 samuel.yang
 * removed!
 * .
 *
 * 05 10 2012 samuel.yang
 * removed!
 * .
 *
 * 05 10 2012 yuyang.hsiao
 * removed!
 * .
 *
 * 04 27 2012 samuel.yang
 * removed!
 * .
 *
 * 04 03 2012 samuel.yang
 * removed!
 * .
 *
 * 03 16 2012 weining.chien
 * removed!
 * .
 *
 * 03 16 2012 yuyang.hsiao
 * removed!
 * .
 *
 * 01 16 2012 weining.chien
 * removed!
 * .
 *
 * 12 23 2011 cs.wu
 * removed!
 * .
 *
 * 12 05 2011 cs.wu
 * removed!
 * .
 *
 * 11 28 2011 cs.wu
 * removed!
 * .
 *
 * 11 17 2011 chang-kuan.lin
 * removed!
 * .
 *
 * 11 08 2011 jason.lai
 * removed!
 * .
 *
 * 10 21 2011 th.yeh
 * removed!
 * .
 *
 * 08 10 2011 sean.yang
 * removed!
 * .
 *
 * 08 05 2011 cs.wu
 * removed!
 * .
 *
 * 07 19 2011 victo.chen
 * removed!
 * .
 *
 * 06 18 2011 victo.chen
 * removed!
 * .
 *
 * 06 16 2011 sean.yang
 * removed!
 * .
 *
 * 06 10 2011 cs.wu
 * removed!
 * .
 *
 * 05 20 2011 cs.wu
 * removed!
 * .
 *
 * 04 15 2011 victo.chen
 * removed!
 * .
 *
 * 02 22 2011 weining.chien
 * removed!
 * .
 *
 * 02 15 2011 yr.chiang
 * removed!
 * .
 *
 * 01 26 2011 sean.yang
 * removed!
 * .
 *
 * 01 25 2011 victo.chen
 * removed!
 * .
 *
 * 01 04 2011 sean.yang
 * removed!
 * .
 *
 * 01 04 2011 sean.yang
 * removed!
 * .
 *
 * 01 04 2011 jason.lai
 * removed!
 * .
 *
 * 12 26 2010 cs.wu
 * removed!
 * .
 *
 * 12 15 2010 chang-kuan.lin
 * removed!
 * .
 *
 * 12 13 2010 victor.chang
 * removed!
 * modify the AGPS register for MT6276_E2.
 *
 * 12 10 2010 weining.chien
 * removed!
 * .
 *
 * 12 09 2010 weining.chien
 * removed!
 * .
 *
 * 12 08 2010 chuwei.lo
 * removed!
 * .
 *
 * 12 01 2010 yr.chiang
 * removed!
 * .
 *
 * 11 24 2010 sean.yang
 * removed!
 * .
 *
 * 11 23 2010 jason.lai
 * removed!
 * .
 *
 * 11 21 2010 cs.wu
 * removed!
 * .
 *
 * 11 19 2010 jason.lai
 * removed!
 * .
 *
 * 11 16 2010 max.weng
 * removed!
 * .
 *
 * 11 10 2010 yr.chiang
 * removed!
 * .
 *
 * 11 10 2010 yr.chiang
 * removed!
 * .
 *
 * 11 09 2010 max.weng
 * removed!
 * .
 *
 * 11 07 2010 cs.wu
 * removed!
 * .
 *
 * 10 22 2010 jason.lai
 * removed!
 * .
 *
 * 10 15 2010 cs.wu
 * removed!
 * .
 *
 * 10 10 2010 cs.wu
 * removed!
 * .
 *
 * 08 22 2010 ziv.tsai
 * removed!
 * .
 *
 * 08 08 2010 weining.chien
 * removed!
 * .
 *
 * 08 07 2010 samuel.yang
 * removed!
 * .
 *
 * 07 30 2010 victor.chang
 * removed!
 * Add  UL1D / L1D code modification for MT6276 AGPS support.
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * All HW register read/write should use volatile
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * Fix CLK_OUT address
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * [L1D][Modify] Check in #include  "m12171.h" for MT6253T MPLL FH Driver
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * Increase TDMA_end for l1sim.
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * First Check-in 2G/3G Dual Mode Sleep Mode
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * Fix RTCCOUNT to APBADDR32
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * Move SM registers definitions from l1dsm.h to l1_reg.h
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * remove the interrupt controller related define
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * Check in for the simulation environment
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * Solve the TX_IQ_SWAP bug for MT6228 S02
 *
 * removed!
 * removed!
 * Add the compile option for MT6230
 *
 * removed!
 * removed!
 * Modify for the TX IQ swap of MT6229_S01
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * Upgrade the MT6229 DBD algorithm
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 *    Rev 1.46   Aug 02 2005 13:49:00   mtk00939
 * Update TDMA register definition
 *
 *    Rev 1.45   Jul 08 2005 16:53:02   mtk00939
 * [L1D][Modify]L1D add code for MT6139C and META related code
 *
 *    Rev 1.44   May 17 2005 15:09:02   mtk00939
 * Update MT6228 register definition
 *
 *    Rev 1.43   May 17 2005 00:34:20   BM_Trunk
 * Karlos:
 * add copyright and disclaimer statement
 *
 *    Rev 1.42   Jan 18 2005 00:37:58   BM
 * append new line in W05.04
 *
 *    Rev 1.41   Mar 04 2004 18:24:56   mtk00240
 * Add GPIO register address definition for mt6219
 * Resolution for 4107: [L1D] Add GPIO register address definition for mt6219
 *
 *    Rev 1.40   Oct 25 2003 15:48:20   mtk00240
 * Add GPIO related register definition
 * Resolution for 3196: [L1D][Enhance] Add code to support mt6218B
 *
 *    Rev 1.39   Oct 17 2003 17:29:40   mtk00489
 * [L1D][Enhanced]L1D split Sherif register definitions from l1d_reg.h to l1d_reg_dsp.h for customer release
 * Resolution for 3137: [L1D][Enhanced]L1D split Sherif register definitions from l1d_reg.h to l1d_reg_dsp.h for customer release
 *
 *    Rev 1.38   Oct 01 2003 15:17:32   mtk00585
 * [L1D][Modify]L1D modify code for MT6219
 * Resolution for 3037: [L1D][Modify]L1D modify code for MT6219
 *
 *    Rev 1.37   Jun 26 2003 15:22:16   mtk00240
 * L1D modify some code to support MT6218
 * Resolution for 2116: [L1D][Enhance] L1D modify some code to support MT6218
 *
 *    Rev 1.36   May 12 2003 21:36:56   mtk00489
 * [L1D][Enhanced]L1D modify L1D_RecordHwRegisters() / m12192.c(aero) / l1d_reg.h to make compiler happy.
 * Resolution for 1770: [L1D][Enhanced]L1D modify L1D_RecordHwRegisters() / m12192.c(aero) / l1d_reg.h to make compiler happy.
 *
 *    Rev 1.35   Feb 10 2003 17:13:26   mtk00489
 * L1D supports AMR and L1D_LP2 supports MT6218 cosim
 * Resolution for 639: L1D supports AMR and L1D_LP2 supports MT6218 cosim
 *
 *    Rev 1.34   13 Dec 2002 17:46:00   mtk00240
 * L1D add register defintion for MT6218
 * Resolution for 588: L1D add register defintion for MT6218
 *
 *    Rev 1.33   11 Dec 2002 11:10:08   mtk00240
 * L1D add register defintion for MT6218
 * Resolution for 588: L1D add register defintion for MT6218
 *
 *    Rev 1.32   09 Dec 2002 08:52:34   mtk00240
 * Modify the definition of APC registers for MT6218
 * Resolution for 581: L1D add code to support MT6218
 *
 *    Rev 1.31   05 Dec 2002 11:10:08   mtk00240
 * L1D modified some filed name for AMR
 * Resolution for 581: L1D add code to support MT6218
 *
 *    Rev 1.30   05 Dec 2002 10:50:28   mtk00240
 * L1D add code to support MT6218
 * Resolution for 581: L1D add code to support MT6218
 *
 *    Rev 1.29   07 Nov 2002 14:29:28   mtk00240
 * L1D set initial value of some registers to raise the performance of MT6205
 * Resolution for 553: L1D set initial value of some registers to raise the performance of MT6205
 *
 *    Rev 1.28   01 Nov 2002 11:16:58   mtk00240
 * L1D change registers definition for MT6218
 * Resolution for 545: L1D change registers definition for MT6218
 *
 *    Rev 1.27   26 Sep 2002 11:48:50   mtk00240
 * L1D fill 2 parameters on sherif for DSP patch of overcoming 200K adjacent
 * Resolution for 507: L1D fill 2 parameters on sherif for DSP patch of overcoming 200K adjacent
 *
 *    Rev 1.26   24 Aug 2002 14:10:46   mtk00240
 *  L1D add code to support AERO RF Module
 * Resolution for 464:  L1D add code to support AERO RF Module
 *
 *    Rev 1.25   24 Aug 2002 12:26:10   mtk00240
 * Change GPIO config for MT6205
 * Resolution for 460: L1D modifed GPRS related code to support MAUI
 *
 *    Rev 1.24   22 Aug 2002 11:06:24   mtk00240
 * Add 2 sherif registers:
 * DP_FB_THRE_IDLE,DP_FB_POW
 * Resolution for 456: L1D write  threshold of FCB stage1 algorithm to Sherif
 *
 *    Rev 1.23   29 Jul 2002 17:48:46   mtk00240
 * L1D remove code about initializing AFC data
 * Resolution for 442: L1D remove code about initializing AFC data
 *
 *    Rev 1.22   18 Jul 2002 22:46:20   mtk00240
 * Prevent the compile warnings in simulation environment
 * Resolution for 437: L1D modified code for MT6205
 *
 *    Rev 1.21   03 Jul 2002 21:43:46   mtk00240
 * L1D extrract RF setting code to let customer setup new RF module more easily
 * Resolution for 418: L1D extrract RF setting code to let customer setup new RF module more easily
 *
 *    Rev 1.20   06 Jun 2002 10:03:24   mtk00240
 * L1D add code to select FB detection algorithm in scan mode and normal mode
 * Resolution for 413: L1D add code to select FB detection algorithm in scan mode and normal mode
 *
 *    Rev 1.19   01 May 2002 22:45:54   mtk00240
 * Extract GSM code from L1D
 * Resolution for 384: Extract GSM code from L1D
 *
 *    Rev 1.18   18 Apr 2002 08:12:04   mtk00240
 * L1D fix the bug of filling wrong TSC address of Sherif in GPRS case
 * Resolution for 372: L1D fix the bug of filling wrong TSC address of Sherif in GPRS case
 *
 *    Rev 1.17   12 Apr 2002 21:31:46   mtk00240
 * L1D add code to fill audio filter coefficients to DSP by IDMA
 * Resolution for 360: L1D add code to fill audio filter coefficients to DSP by IDMA
 *
 *    Rev 1.16   03 Apr 2002 19:30:28   mtk00240
 * Fix some code to support Bright4 properly
 * Resolution for 341: Modify L1D code to support both Bright2 & Bright4 RF board
 *
 *    Rev 1.15   01 Apr 2002 12:24:12   mtk00240
 * L1D modified register's definition for DSP main v10
 * Resolution for 347: L1D modified register's definition for DSP F/W main v10
 *
 *    Rev 1.14   01 Apr 2002 08:14:00   mtk00240
 * Add MPLL and SLEEP_CON registers
 * Resolution for 345: Add some registers to hardware simulation for L1D testing
 *
 *    Rev 1.13   30 Mar 2002 13:04:10   mtk00240
 * 1) Modify L1D code to support both Bright2 & Bright4 RF board
 * 2) L1D add Audio interface to support Voice Memo & Melody
 * 3) Add L1D code to support RAM-based chip
 * Resolution for 341: Modify L1D code to support both Bright2 & Bright4 RF board
 * Resolution for 342: L1D add Audio interface to support Voice Memo & Melody
 * Resolution for 343: Add L1D code to support RAM-based chip
 *
 *    Rev 1.12   13 Mar 2002 11:15:34   mtk00240
 * Add code to set AFE register in DAI test mdoe
 * Resolution for 212: L1D supports DAI test mode
 *
 *    Rev 1.11   11 Mar 2002 13:35:40   mtk00240
 * instead TAB characters of Space characters in L1D code .
 * Resolution for 318: Shine change TAB character to Space charter
 *
 *    Rev 1.10   08 Mar 2002 16:50:38   mtk00240
 * L1D add code to fix the speech delay margin
 * Resolution for 315: L1D add code to fix the speech delay margin
 *
 *    Rev 1.9   22 Feb 2002 16:52:56   mtk00240
 * Modified some code for new Sherif register
 * Resolution for 296: Modified some code for new Sherif register
 *
 *    Rev 1.8   16 Jan 2002 22:59:54   mtk00240
 * Change Audio Front End Register's mapping
 * Resolution for 224: Change Audio Front End Register's mapping
 *
 *    Rev 1.7   08 Jan 2002 17:08:48   mtk00240
 * Chnage DP_TX_TEST_27 from 0x3BB*2 to 0x3BC*2
 * Resolution for 204: Fix the mapping of DP_TX_TEST_27 in Sherif
 *
 *    Rev 1.6   08 Jan 2002 08:19:46   mtk00240
 * Modified DP_TX_TEST_XX registers mapping
 * Resolution for 198: Change the mapping of DP_TX_TEST_XXX registers in DSP Sherif
 *
 *    Rev 1.5   04 Jan 2002 17:24:32   mtk00240
 * Merge B.L1.2001.1225 to Main V1.XX
 *
 *    Rev 1.3.1.1   04 Jan 2002 13:58:56   mtk00240
 * Change Melody registers mapping in Sherif
 *
 *    Rev 1.3.1.0   Dec 25 2001 14:32:50   mtk00210
 * Update for High resolution RSSI, multiband AFC,
 * update L1C/L1D interface for CSD
 *
 *******************************************************************************/

#ifndef _L1D_REG_H_
#define _L1D_REG_H_

#include "l1d_cid.h"

/*=======================================================================================================================*/
/* used for Simulation                                                                                                   */
/*-----------------------------------------------------------------------------------------------------------------------*/

typedef unsigned short  DPRAM_T;                                        /* Dual Port Ram is 16bit access (Thumb)         */
typedef unsigned long   REG_T;                                          /* Registers are 32bit access (SRM APB bus)      */

#define DIS_ALL_IRQ     0x0000                                          /* -----------------> flags in EVENT_ENABLE0     */
#define EN_DTIRQ        0x0001                                          /*                                               */
#define EN_CTIRQ1       0x0002                                          /*                                               */
#define EN_CTIRQ2       0x0004                                          /*                                               */
#define EN_CTIRQ3       0x0008                                          /*                                               */
#if IS_NEW_TDMA_CHIP
#define EN_BDL(n)       (1<<(6+(n)+(((n)/6)*4)))                        /* 0 <= n <=  5, 6, 7                            */
#else
#define EN_BDL(n)       (1<<(6+(n)))                                    /* 0 <= n <=  5                                  */
#endif
#define EN_APC(n)       (1<<(n))                                        /* 0 <= n <=  4 ----> flags in EVENT_ENABLE1     */
#define EN_GSM          0x0000                                          /*                                               */
#if IS_FPGA_TARGET
#define EN_BSI(n)       (1<<(n))                                        /* 0 <= n <= 15 ----> flags in EVENT_ENABLE2     */
#define EN_BPI(n)       (1<<(n))                                        /* 0 <= n <= 15 ----> flags in EVENT_ENABLE3     */
#endif

#if IS_FPGA_TARGET
#define EN_AFC3         0x8000                                          /*                                               */
#define EN_AFC(n)       (1<<(3+(n)))                                    /* 0 <= n <=  2                                  */
#endif

#define EN_AFC3         0x8000                                          /*                                               */
#define EN_AFC(n)       (1<<(12+(n)))                                   /* 0 <= n <=  2                                  */

#if IS_FPGA_TARGET
#define EN_BUL(n)       (1<<(6+(n)))                                    /* 0 <= n <=  3                                  */
#define EN_GPRS         0x0400                                          /*                                               */
#endif

   #if IS_NEW_TDMA_CHIP
#define EN_BUL(n)       (1<<(8+(n)+(((n)/4)*4)))                        /* 0 <= n <=  3, 4, 5                            */
   #else
#define EN_BUL(n)       (1<<(8+(n)))                                    /* 0 <= n <=  3                                  */
   #endif
#define EN_GPRS         0x8000                                          /*                                               */

/*--------------------------------------------*/
/* define enable bit mask                     */
/*--------------------------------------------*/

#if IS_FD216_DSP_CHIP
#define DPRAM(offset)   ((DPRAMADDR)(DPRAM_CPU_base+(offset)*2))
#define DPRAM2(offset)  ((DPRAMADDR)(DPRAM2_CPU_base+(offset)*2))
#endif

/*=======================================================================================================================*/

typedef volatile unsigned short* SRAMADDR;                              /* SRAM addr is 16 bits                          */
typedef volatile unsigned short  SRAMDATA;                              /* SRAM data is 16 bits                          */
typedef volatile unsigned short* APBADDR;                               /* APB addr is 32 bits                           */
typedef volatile unsigned short  APBDATA;                               /* APB data is 16 bits                           */
typedef volatile unsigned long*  APBADDR32;                             /* APB addr is 32 bits                           */
typedef volatile unsigned long   APBDATA32;                             /* APB data is 16 bits                           */
typedef volatile unsigned short* DPRAMADDR;                             /* DPRAM addr is 16 bits                         */
typedef volatile signed   short* DPRAMADDR_S;                           /* DPRAM addr is 16 bits                         */
typedef volatile unsigned short  DPRAMDATA;                             /* DPRAM data is 16 bits                         */

#if IS_NEW_TDMA_CHIP
typedef APBADDR32                APBADDX;                               /*32 bits*/
typedef APBDATA32                APBDATX;                               /*32 bits*/
typedef unsigned long            uintX;                                 /*32 bits*/
#else
typedef APBADDR                  APBADDX;                               /*16 bits*/
typedef APBDATA                  APBDATX;                               /*16 bits*/
typedef unsigned short           uintX;                                 /*16 bits*/
#endif

#if IS_BSI_REG_32_BIT_CHIP
typedef APBADDR32                APBADDS;                               /*32 bits; "S" means BSI*/
typedef APBDATA32                APBDATS;                               /*32 bits; "S" means BSI*/
typedef unsigned long            uintS;                                 /*32 bits; "S" means BSI*/
#else
typedef APBADDR                  APBADDS;                               /*16 bits; "S" means BSI*/
typedef APBDATA                  APBDATS;                               /*16 bits; "S" means BSI*/
typedef unsigned short           uintS;                                 /*16 bits; "S" means BSI*/
#endif

#if IS_BPI_REG_32_BIT_CHIP
typedef APBADDR32                APBADDP;                               /*32 bits; "P" means BPI*/
typedef APBDATA32                APBDATP;                               /*32 bits; "P" means BPI*/
typedef unsigned long            uintP;                                 /*32 bits; "P" means BPI*/
#else
typedef APBADDR                  APBADDP;                               /*16 bits; "P" means BPI*/
typedef APBDATA                  APBDATP;                               /*16 bits; "P" means BPI*/
typedef unsigned short           uintP;                                 /*16 bits; "P" means BPI*/
#endif

#if IS_BPI_DATA_48_BIT_CHIP
#define  BPI_REG_IDX             2  /* BPI_V  (n+1) - BPI_V(n) = 8 */
#define  BPI_REG_HL              1  /* BPI_V_H(n)   - BPI_V(n) = 4 */
#endif

#if IS_BPI_DATA_48_BIT_CHIP
typedef APBADDR32                APBADDRBPI;                            /* a pointer to unsigned 32 bits */
typedef unsigned long long       uintBPI;                               /* unsigned 64 bits */
#elif IS_BPI_DATA_32_BIT_CHIP
typedef APBADDR32                APBADDRBPI;                            /*32 bits*/
typedef long                     intBPI;                                /*32 bits*/
typedef signed long              sintBPI;                               /*32 bits*/
#else
typedef APBADDR                  APBADDRBPI;                            /*16 bits*/
typedef short                    intBPI;                                /*16 bits*/
typedef signed short             sintBPI;                               /*16 bits*/
#endif

#if IS_BSI_CON_32_BIT_CHIP
typedef APBADDR32                APBADDRBSI;                            /*32 bits*/
typedef long                     intBSI;                                /*32 bits*/
typedef signed long              sintBSI;                               /*32 bits*/
typedef unsigned long            uintBSI;                               /*32 bits*/
#else
typedef APBADDR                  APBADDRBSI;                            /*16 bits*/
typedef short                    intBSI;                                /*16 bits*/
typedef signed short             sintBSI;                               /*16 bits*/
typedef unsigned short           uintBSI;                               /*16 bits*/
#endif
/*-----------------------------------------------------------------------------------------------------------------------*/

/*---------------------------------*/
/* Base address of MCU Peripherals */
/*---------------------------------*/
/*--------------------------------------------------------------------------*/
/* L1 only maintain chips' base address which cannot be found in reg_base.h */
/*--------------------------------------------------------------------------*/

/* -------------------------------------------------------*/
/* base address is defined in reg_base.h                  */
/* -------------------------------------------------------*/
#include "reg_base.h"

#if defined(L1_SIM)
  #if ( IS_CHIP_TK6291 || IS_CHIP_MT6755 )
/* Here are new and old regbase nameing remapping since xL1SIM HW simu code still uses old regbase naming. */
#define  BSI_base    L1_BASE_MADDR_MD2G_BSI_BASE
#define  BPI_base    L1_BASE_MADDR_MD2G_BPI_BASE
#define  APC_base    L1_BASE_MADDR_APC
#define  SHARE_base  L1_BASE_MADDR_SHARE_D1
#define  BFE_base    L1_BASE_MADDR_BFE
  #endif
#endif /* defined(L1_SIM) */

/* -----------------------------------------------------------------*/
/* SM_base is the subset of TDMA_base, we define it for convenience */
/* -----------------------------------------------------------------*/
/* For IS_CHIP_MT6290, IS_CHIP_MT6595 and later, SM_base has been declared in l1sm.h */

/*=======================================================================================================================*/

#if IS_DSP_ARCHITECTURE_V4_SUPPORT
#define DSP_DM_TXBUFF_SIZE       (148*4)
#endif
#define IDMA_LONG_ADDR           ((APBADDR32)IDMA_LONG)
#define IDMA_SHORT_ADDR          ((DPRAMADDR)IDMA_SHORT)
#define DSP_CM_ADDR(page,addr)   ((APBADDR32)(IDMA_CM0+((page)<<16)+((addr)<<2)))
#define DSP_PM_ADDR(page,addr)   ((DPRAMADDR)(IDMA_PM0+((page)<<16)+((addr)<<1)))
#define DSP_DM_ADDR(page,addr)   ((DPRAMADDR)(IDMA_DM0+((page)<<16)+((addr)<<1)))

#if IS_DSP_ARCHITECTURE_V4_SUPPORT
#define IDMA2_LONG                IDMA_LONG
#define IDMA2_SHORT               IDMA_SHORT
#define IDMA2_CM0                 IDMA_CM0
#define IDMA2_PM0                 IDMA_PM0
#define IDMA2_DM0                 IDMA_DM0
#define IDMA2_LONG_ADDR           IDMA_LONG_ADDR
#define IDMA2_SHORT_ADDR          IDMA_SHORT_ADDR
#define DSP2_CM_ADDR(page,addr)   DSP_CM_ADDR(page,addr)
#define DSP2_PM_ADDR(page,addr)   DSP_PM_ADDR(page,addr)
#define DSP2_DM_ADDR(page,addr)   DSP_DM_ADDR(page,addr)
#endif

/*=======================================================================================================================*/

#define LO_BYTE( data )          ((unsigned char)((data)&0x00FF))
#define HI_BYTE( data )          ((unsigned char)(((data)>>8)&0x00FF))
#define LO_WORD( data )          ((unsigned short)((data)&0x0000FFFFL))
#define HI_WORD( data )          ((unsigned short)(((data)>>16)&0x0000FFFFL))
#if IS_BSI_CON_32_BIT_CHIP
#define TO_WORD( data )          ((unsigned long)(data))
#else
#define TO_WORD( data )          ((unsigned short)(data))
#endif

/*=======================================================================================================================*/

#if ( IS_CHIP_TK6291 || IS_CHIP_MT6755 )
/* LEN[4:0] which is located at BSI_G_Dx_CON[12:8] is no longer used for RFIC BSI CW setting, since RFIC CW length setting has */
/* been moved to BSI_TOP. That's why we don't refer bit_count in these macro and just set BSI_G_Dx_CON[12:8] as 0x0.           */
#define SCTRL_WORD( dev_sel, bit_count )  ((unsigned long)(((dev_sel)<<15)                          |((BSI_PORT_SELECT&0x3)<<16)))
#define SCTRL_IMOD( dev_sel, bit_count )  ((unsigned long)(((dev_sel)<<15)                   |(0x7F)|((BSI_PORT_SELECT&0x3)<<16)))
#define SCTRL_WORD_PMIC( dev_sel, bit_count )  ((unsigned long)(((dev_sel)<<15)                     |((BSI_PORT_SELECT_PMIC&0x3)<<16)))
#define SCTRL_IMOD_PMIC( dev_sel, bit_count )  ((unsigned long)(((dev_sel)<<15)              |(0x7F)|((BSI_PORT_SELECT_PMIC&0x3)<<16)))
#elif IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2
#define SCTRL_WORD( dev_sel, bit_count )  ((unsigned long)(((dev_sel)<<15)|((bit_count-1)<<8)       |((BSI_PORT_SELECT&0x3)<<16)))
#define SCTRL_IMOD( dev_sel, bit_count )  ((unsigned long)(((dev_sel)<<15)|((bit_count-1)<<8)|(0xFF)|((BSI_PORT_SELECT&0x3)<<16)))
#endif

#if IS_MIPI_SUPPORT
   #if IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_TK6291 || IS_CHIP_MT6755
#define MIPI_SCTRL_WORD( dev_sel, bit_count, port, event_id )  ((unsigned long)(((dev_sel)<<15)|((bit_count-1)<<8)|(event_id&0xFF)|((port&0x3)<<16)))
#define MIPI_SCTRL_IMOD( dev_sel, bit_count, port           )  ((unsigned long)(((dev_sel)<<15)|((bit_count-1)<<8)|(         0xFF)|((port&0x3)<<16)))
   #endif
#endif
/*=======================================================================================================================*/

#define HW_WRITE_TDMA_REGBIAS( tq )       {  HW_WRITE( TDMA_REGBIAS, tq );  }
/*=======================================================================================================================*/

#if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   #if IS_BSI_CON_32_BIT_CHIP
#define BSI_REG_IDX 1
   #else
#define BSI_REG_IDX 2
   #endif

   #if IS_IMM_BSI_SEND_DUMMY_READ_ON
#define  HW_DUMMY_READ_BSI_DATA( addr )                            \
{  unsigned long  dummy_read;                                      \
   dummy_read = HW_READ( (APBADDR32)(addr) );                      \
   (void)dummy_read;                                               \
}
   #else
#define  HW_DUMMY_READ_BSI_DATA( addr )
   #endif

#define  HW_WRITE_BSI_DATA( addr, data )   \
{  HW_WRITE( (APBADDR32)(addr), (data) );  \
}
#if IS_CHIP_MT6755
#define  HW_WRITE_BSI_MIPI_DATA_1( data_idx, ctrl,data )                     \
{  long       _d32;                                                          \
   APBADDRBSI _reg = BSI_MIPI_Dn_CON( data_idx );                            \
   _d32 = ctrl;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;  \
   _d32 = data;  HW_WRITE( (APBADDR32)(_reg), _d32 );                        \
}
#endif
#define  HW_WRITE_BSI_DATA_1( data_idx, ctrl,data )                          \
{  long       _d32;                                                          \
   APBADDRBSI _reg = BSI_Dn_CON( data_idx );                                 \
   _d32 = ctrl;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;  \
   _d32 = data;  HW_WRITE( (APBADDR32)(_reg), _d32 );                        \
}

#define  HW_WRITE_BSI_DATA_2( data_idx, ctrl1,data1, ctrl2,data2 )            \
{  long       _d32, _d_idx=data_idx;                                          \
   APBADDRBSI _reg = BSI_Dn_CON( data_idx );                                  \
   _d32 = ctrl1;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;  \
   _d32 = data1;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;             \
   _reg = BSI_Dn_CON( _d_idx );                                               \
   _d32 = ctrl2;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;  \
   _d32 = data2;  HW_WRITE( (APBADDR32)(_reg), _d32 );                        \
}

#define  HW_WRITE_BSI_DATA_3( data_idx, ctrl1,data1, ctrl2,data2, ctrl3,data3 )  \
{  long       _d32, _d_idx=data_idx;                                             \
   APBADDRBSI _reg = BSI_Dn_CON( data_idx );                                     \
   _d32 = ctrl1;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;     \
   _d32 = data1;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                \
   _reg = BSI_Dn_CON( _d_idx );                                                  \
   _d32 = ctrl2;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;     \
   _d32 = data2;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                \
   _reg = BSI_Dn_CON( _d_idx );                                                  \
   _d32 = ctrl3;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;     \
   _d32 = data3;  HW_WRITE( (APBADDR32)(_reg), _d32 );                           \
}

#define  HW_WRITE_BSI_DATA_4( data_idx, ctrl1,data1, ctrl2,data2, ctrl3,data3, ctrl4,data4 )  \
{  long       _d32, _d_idx=data_idx;                                                          \
   APBADDRBSI _reg = BSI_Dn_CON( data_idx );                                                  \
   _d32 = ctrl1;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                  \
   _d32 = data1;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                             \
   _reg = BSI_Dn_CON( _d_idx );                                                               \
   _d32 = ctrl2;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                  \
   _d32 = data2;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                             \
   _reg = BSI_Dn_CON( _d_idx );                                                               \
   _d32 = ctrl3;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                  \
   _d32 = data3;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                             \
   _reg = BSI_Dn_CON( _d_idx );                                                               \
   _d32 = ctrl4;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                  \
   _d32 = data4;  HW_WRITE( (APBADDR32)(_reg), _d32 );                                        \
}

#define  HW_WRITE_BSI_DATA_5( data_idx, ctrl1,data1, ctrl2,data2, ctrl3,data3, ctrl4,data4, ctrl5,data5 )  \
{  long       _d32, _d_idx=data_idx;                                                                       \
   APBADDRBSI _reg = BSI_Dn_CON( data_idx );                                                               \
   _d32 = ctrl1;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                               \
   _d32 = data1;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                          \
   _reg = BSI_Dn_CON( _d_idx );                                                                            \
   _d32 = ctrl2;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                               \
   _d32 = data2;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                          \
   _reg = BSI_Dn_CON( _d_idx );                                                                            \
   _d32 = ctrl3;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                               \
   _d32 = data3;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                          \
   _reg = BSI_Dn_CON( _d_idx );                                                                            \
   _d32 = ctrl4;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                               \
   _d32 = data4;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                          \
   _reg = BSI_Dn_CON( _d_idx );                                                                            \
   _d32 = ctrl5;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                               \
   _d32 = data5;  HW_WRITE( (APBADDR32)(_reg), _d32 );                                                     \
}

#define  HW_WRITE_BSI_DATA_6( data_idx, ctrl1,data1, ctrl2,data2, ctrl3,data3, ctrl4,data4, ctrl5,data5, ctrl6,data6 )  \
{  long       _d32, _d_idx=data_idx;                                                                                    \
   APBADDRBSI _reg = BSI_Dn_CON( data_idx );                                                                            \
   _d32 = ctrl1;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                            \
   _d32 = data1;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                       \
   _reg = BSI_Dn_CON( _d_idx );                                                                                         \
   _d32 = ctrl2;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                            \
   _d32 = data2;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                       \
   _reg = BSI_Dn_CON( _d_idx );                                                                                         \
   _d32 = ctrl3;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                            \
   _d32 = data3;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                       \
   _reg = BSI_Dn_CON( _d_idx );                                                                                         \
   _d32 = ctrl4;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                            \
   _d32 = data4;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                       \
   _reg = BSI_Dn_CON( _d_idx );                                                                                         \
   _d32 = ctrl5;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                            \
   _d32 = data5;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                       \
   _reg = BSI_Dn_CON( _d_idx );                                                                                         \
   _d32 = ctrl6;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                            \
   _d32 = data6;  HW_WRITE( (APBADDR32)(_reg), _d32 );                                                                  \
}

#define  HW_WRITE_BSI_DATA_7( data_idx, ctrl1,data1, ctrl2,data2, ctrl3,data3, ctrl4,data4, ctrl5,data5, ctrl6,data6, ctrl7,data7 )  \
{  long       _d32, _d_idx=data_idx;                                                                                                 \
   APBADDRBSI _reg = BSI_Dn_CON( data_idx );                                                                                         \
   _d32 = ctrl1;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                         \
   _d32 = data1;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                    \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                      \
   _d32 = ctrl2;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                         \
   _d32 = data2;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                    \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                      \
   _d32 = ctrl3;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                         \
   _d32 = data3;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                    \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                      \
   _d32 = ctrl4;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                         \
   _d32 = data4;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                    \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                      \
   _d32 = ctrl5;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                         \
   _d32 = data5;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                    \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                      \
   _d32 = ctrl6;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                         \
   _d32 = data6;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                    \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                      \
   _d32 = ctrl7;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                         \
   _d32 = data7;  HW_WRITE( (APBADDR32)(_reg), _d32 );                                                                               \
}

#define  HW_WRITE_BSI_DATA_8( data_idx, ctrl1,data1, ctrl2,data2, ctrl3,data3, ctrl4,data4, ctrl5,data5, ctrl6,data6, ctrl7,data7 , ctrl8,data8 )  \
{  long       _d32, _d_idx=data_idx;                                                                                                               \
   APBADDRBSI _reg = BSI_Dn_CON( data_idx );                                                                                                       \
   _d32 = ctrl1;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                       \
   _d32 = data1;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                  \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                    \
   _d32 = ctrl2;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                       \
   _d32 = data2;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                  \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                    \
   _d32 = ctrl3;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                       \
   _d32 = data3;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                  \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                    \
   _d32 = ctrl4;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                       \
   _d32 = data4;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                  \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                    \
   _d32 = ctrl5;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                       \
   _d32 = data5;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                  \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                    \
   _d32 = ctrl6;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                       \
   _d32 = data6;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                  \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                    \
   _d32 = ctrl7;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                       \
   _d32 = data7;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                  \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                    \
   _d32 = ctrl8;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                       \
   _d32 = data8;  HW_WRITE( (APBADDR32)(_reg), _d32 );                                                                                             \
}

#define  HW_WRITE_BSI_DATA_9( data_idx, ctrl1,data1, ctrl2,data2, ctrl3,data3, ctrl4,data4, ctrl5,data5, ctrl6,data6, ctrl7,data7 , ctrl8,data8 , ctrl9,data9 )  \
{  long       _d32, _d_idx=data_idx;                                                                                                                             \
   APBADDRBSI _reg = BSI_Dn_CON( data_idx );                                                                                                                     \
   _d32 = ctrl1;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                     \
   _d32 = data1;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                  \
   _d32 = ctrl2;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                     \
   _d32 = data2;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                  \
   _d32 = ctrl3;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                     \
   _d32 = data3;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                  \
   _d32 = ctrl4;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                     \
   _d32 = data4;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                  \
   _d32 = ctrl5;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                     \
   _d32 = data5;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                  \
   _d32 = ctrl6;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                     \
   _d32 = data6;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                  \
   _d32 = ctrl7;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                     \
   _d32 = data7;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                  \
   _d32 = ctrl8;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                     \
   _d32 = data8;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                  \
   _d32 = ctrl9;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                     \
   _d32 = data9;  HW_WRITE( (APBADDR32)(_reg), _d32 );                                                                                                           \
}

#define  HW_WRITE_BSI_DATA_10( data_idx, ctrl1,data1, ctrl2,data2, ctrl3,data3, ctrl4,data4, ctrl5,data5, ctrl6,data6, ctrl7,data7 , ctrl8,data8 , ctrl9,data9 , ctrl10,data10 )  \
{  long       _d32, _d_idx=data_idx;                                                                                                                                              \
   APBADDRBSI _reg = BSI_Dn_CON( data_idx );                                                                                                                                      \
   _d32 = ctrl1;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                      \
   _d32 = data1;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                   \
   _d32 = ctrl2;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                      \
   _d32 = data2;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                   \
   _d32 = ctrl3;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                      \
   _d32 = data3;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                   \
   _d32 = ctrl4;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                      \
   _d32 = data4;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                   \
   _d32 = ctrl5;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                      \
   _d32 = data5;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                   \
   _d32 = ctrl6;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                      \
   _d32 = data6;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                   \
   _d32 = ctrl7;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                      \
   _d32 = data7;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                   \
   _d32 = ctrl8;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                      \
   _d32 = data8;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                   \
   _d32 = ctrl9;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                      \
   _d32 = data9;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                   \
   _d32 = ctrl10; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                      \
   _d32 = data10; HW_WRITE( (APBADDR32)(_reg), _d32 );                                                                                                                            \
}

#define  HW_WRITE_BSI_DATA_11( data_idx, ctrl1,data1, ctrl2,data2, ctrl3,data3, ctrl4,data4, ctrl5,data5, ctrl6,data6, ctrl7,data7 , ctrl8,data8 , ctrl9,data9 , ctrl10,data10 , ctrl11,data11 )  \
{  long       _d32, _d_idx=data_idx;                                                                                                                                                              \
   APBADDRBSI _reg = BSI_Dn_CON( data_idx );                                                                                                                                                      \
   _d32 = ctrl1;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                      \
   _d32 = data1;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                   \
   _d32 = ctrl2;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                      \
   _d32 = data2;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                   \
   _d32 = ctrl3;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                      \
   _d32 = data3;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                   \
   _d32 = ctrl4;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                      \
   _d32 = data4;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                   \
   _d32 = ctrl5;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                      \
   _d32 = data5;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                   \
   _d32 = ctrl6;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                      \
   _d32 = data6;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                   \
   _d32 = ctrl7;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                      \
   _d32 = data7;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                   \
   _d32 = ctrl8;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                      \
   _d32 = data8;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                   \
   _d32 = ctrl9;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                      \
   _d32 = data9;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                   \
   _d32 = ctrl10; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                      \
   _d32 = data10; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                   \
   _d32 = ctrl11; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                      \
   _d32 = data11; HW_WRITE( (APBADDR32)(_reg), _d32 );                                                                                                                                            \
}

#define  HW_WRITE_BSI_DATA_12( data_idx, ctrl1,data1, ctrl2,data2, ctrl3,data3, ctrl4,data4, ctrl5,data5, ctrl6,data6, ctrl7,data7 , ctrl8,data8 , ctrl9,data9 , ctrl10,data10 , ctrl11,data11 , ctrl12,data12 )  \
{  long       _d32, _d_idx=data_idx;                                                                                                                                                                              \
   APBADDRBSI _reg = BSI_Dn_CON( data_idx );                                                                                                                                                                      \
   _d32 = ctrl1;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                      \
   _d32 = data1;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                   \
   _d32 = ctrl2;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                      \
   _d32 = data2;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                   \
   _d32 = ctrl3;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                      \
   _d32 = data3;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                   \
   _d32 = ctrl4;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                      \
   _d32 = data4;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                   \
   _d32 = ctrl5;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                      \
   _d32 = data5;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                   \
   _d32 = ctrl6;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                      \
   _d32 = data6;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                   \
   _d32 = ctrl7;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                      \
   _d32 = data7;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                   \
   _d32 = ctrl8;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                      \
   _d32 = data8;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                   \
   _d32 = ctrl9;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                      \
   _d32 = data9;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                   \
   _d32 = ctrl10; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                      \
   _d32 = data10; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                   \
   _d32 = ctrl11; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                      \
   _d32 = data11; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                   \
   _d32 = ctrl12; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                      \
   _d32 = data12; HW_WRITE( (APBADDR32)(_reg), _d32 );                                                                                                                                                            \
}

#define  HW_WRITE_BSI_DATA_13( data_idx, ctrl1,data1, ctrl2,data2, ctrl3,data3, ctrl4,data4, ctrl5,data5, ctrl6,data6, ctrl7,data7 , ctrl8,data8 , ctrl9,data9 , ctrl10,data10 , ctrl11,data11 , ctrl12,data12 , ctrl13,data13 )  \
{  long       _d32, _d_idx=data_idx;                                                                                                                                                                                              \
   APBADDRBSI _reg = BSI_Dn_CON( data_idx );                                                                                                                                                                                      \
   _d32 = ctrl1;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                      \
   _d32 = data1;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                   \
   _d32 = ctrl2;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                      \
   _d32 = data2;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                   \
   _d32 = ctrl3;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                      \
   _d32 = data3;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                   \
   _d32 = ctrl4;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                      \
   _d32 = data4;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                   \
   _d32 = ctrl5;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                      \
   _d32 = data5;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                   \
   _d32 = ctrl6;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                      \
   _d32 = data6;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                   \
   _d32 = ctrl7;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                      \
   _d32 = data7;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                   \
   _d32 = ctrl8;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                      \
   _d32 = data8;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                   \
   _d32 = ctrl9;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                      \
   _d32 = data9;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                   \
   _d32 = ctrl10; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                      \
   _d32 = data10; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                   \
   _d32 = ctrl11; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                      \
   _d32 = data11; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                   \
   _d32 = ctrl12; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                      \
   _d32 = data12; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                 \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                   \
   _d32 = ctrl13; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                      \
   _d32 = data13; HW_WRITE( (APBADDR32)(_reg), _d32 );                                                                                                                                                                            \
}

#define  HW_WRITE_BSI_DATA_14( data_idx, ctrl1,data1, ctrl2,data2, ctrl3,data3, ctrl4,data4, ctrl5,data5, ctrl6,data6, ctrl7,data7 , ctrl8,data8 , ctrl9,data9 , ctrl10,data10 , ctrl11,data11 , ctrl12,data12 , ctrl13,data13, ctrl14,data14 )  \
{  long       _d32, _d_idx=data_idx;                                                                                                                                                                                                             \
   APBADDRBSI _reg = BSI_Dn_CON( data_idx );                                                                                                                                                                                                     \
   _d32 = ctrl1;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                     \
   _d32 = data1;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                  \
   _d32 = ctrl2;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                     \
   _d32 = data2;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                  \
   _d32 = ctrl3;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                     \
   _d32 = data3;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                  \
   _d32 = ctrl4;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                     \
   _d32 = data4;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                  \
   _d32 = ctrl5;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                     \
   _d32 = data5;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                  \
   _d32 = ctrl6;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                     \
   _d32 = data6;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                  \
   _d32 = ctrl7;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                     \
   _d32 = data7;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                  \
   _d32 = ctrl8;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                     \
   _d32 = data8;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                  \
   _d32 = ctrl9;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                     \
   _d32 = data9;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                  \
   _d32 = ctrl10; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                     \
   _d32 = data10; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                  \
   _d32 = ctrl11; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                     \
   _d32 = data11; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                  \
   _d32 = ctrl12; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                     \
   _d32 = data12; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                  \
   _d32 = ctrl13; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                     \
   _d32 = data13; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                  \
   _d32 = ctrl14; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                     \
   _d32 = data14; HW_WRITE( (APBADDR32)(_reg), _d32 );                                                                                                                                                                                           \
}

#define  HW_WRITE_BSI_DATA_21( data_idx, ctrl1,data1, ctrl2,data2, ctrl3,data3, ctrl4,data4, ctrl5,data5, ctrl6,data6, ctrl7,data7 , ctrl8,data8 , ctrl9,data9 , ctrl10,data10 , ctrl11,data11 , ctrl12,data12 , ctrl13,data13, ctrl14,data14 , ctrl15,data15 , ctrl16,data16 , ctrl17,data17 , ctrl18,data18 , ctrl19,data19, ctrl20,data20, ctrl21,data21 )  \
{  long       _d32, _d_idx=data_idx;                                                                                                                                                                                                                                                                                                                           \
   APBADDRBSI _reg = BSI_Dn_CON( data_idx );                                                                                                                                                                                                                                                                                                                   \
   _d32 = ctrl1;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data1;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl2;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data2;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl3;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data3;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl4;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data4;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl5;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data5;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl6;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data6;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl7;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data7;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl8;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data8;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl9;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data9;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl10; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data10; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl11; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data11; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl12; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data12; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl13; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data13; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl14; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data14; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl15; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data15; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl16; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data16; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl17; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data17; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl18; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data18; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl19; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data19; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl20; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data20; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                              \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                \
   _d32 = ctrl21; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                   \
   _d32 = data21; HW_WRITE( (APBADDR32)(_reg), _d32 );                                                                                                                                                                                                                                                                                                         \
}

#define  HW_WRITE_BSI_DATA_23( data_idx, ctrl1,data1, ctrl2,data2, ctrl3,data3, ctrl4,data4, ctrl5,data5, ctrl6,data6, ctrl7,data7 , ctrl8,data8 , ctrl9,data9 , ctrl10,data10 , ctrl11,data11 , ctrl12,data12 , ctrl13,data13, ctrl14,data14 , ctrl15,data15 , ctrl16,data16 , ctrl17,data17 , ctrl18,data18 , ctrl19,data19, ctrl20,data20, ctrl21,data21, ctrl22,data22, ctrl23,data23 )  \
{  long       _d32, _d_idx=data_idx;                                                                                                                                                                                                                                                                                                                                                         \
   APBADDRBSI _reg = BSI_Dn_CON( data_idx );                                                                                                                                                                                                                                                                                                                                                 \
   _d32 = ctrl1;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data1;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl2;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data2;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl3;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data3;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl4;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data4;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl5;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data5;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl6;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data6;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl7;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data7;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl8;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data8;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl9;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data9;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl10; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data10; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl11; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data11; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl12; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data12; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl13; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data13; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl14; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data14; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl15; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data15; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl16; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data16; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl17; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data17; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl18; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data18; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl19; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data19; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl20; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data20; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl21; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data21; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl22; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data22; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                            \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl23; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                 \
   _d32 = data23; HW_WRITE( (APBADDR32)(_reg), _d32 );                                                                                                                                                                                                                                                                                                                                       \
}
#define  HW_WRITE_BSI_DATA_27( data_idx, ctrl1,data1, ctrl2,data2, ctrl3,data3, ctrl4,data4, ctrl5,data5, ctrl6,data6, ctrl7,data7 , ctrl8,data8 , ctrl9,data9 , ctrl10,data10 , ctrl11,data11 , ctrl12,data12 , ctrl13,data13, ctrl14,data14 , ctrl15,data15 , ctrl16,data16 , ctrl17,data17 , ctrl18,data18 , ctrl19,data19, ctrl20,data20, ctrl21,data21, ctrl22,data22, ctrl23,data23, ctrl24,data24, ctrl25,data25, ctrl26,data26, ctrl27,data27 )  \
{  long       _d32, _d_idx=data_idx;                                                                                                                                                                                                                                                                                                                                                                                                      \
   APBADDRBSI _reg = BSI_Dn_CON( data_idx );                                                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = ctrl1;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data1;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl2;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data2;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl3;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data3;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl4;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data4;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl5;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data5;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl6;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data6;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl7;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data7;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl8;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data8;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl9;  HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data9;  HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl10; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data10; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl11; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data11; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl12; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data12; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl13; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data13; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl14; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data14; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl15; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                             \
   _d32 = data15; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                        \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl16; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data16; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl17; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data17; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl18; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data18; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl19; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data19; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl20; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data20; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl21; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data21; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl22; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data22; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl23; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data23; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl24; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data24; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl25; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data25; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl26; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data26; HW_WRITE( (APBADDR32)(_reg), _d32 );  _d_idx++;                                                                                                                                                                                                                                                                                                                                                                         \
   _reg = BSI_Dn_CON( _d_idx );                                                                                                                                                                                                                                                                                                                                                                                                           \
   _d32 = ctrl27; HW_WRITE( _reg, TO_WORD(_d32) );      _reg += BSI_REG_IDX;                                                                                                                                                                                                                                                                                                                                                              \
   _d32 = data27; HW_WRITE( (APBADDR32)(_reg), _d32 );                                                                                                                                                                                                                                                                                                                                                                                    \
}
#endif

/*=======================================================================================================================*/

#if IS_DLIF_CHIP || IS_DCR_IN_DLIF_CHIP
   #if IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755
/* ------------------------------------------------------------------------- */
/* TK6291, MT6572, MT6290, MT6595, MT6752_MD1 and MT6752_MD2                 */
/* ------------------------------------------------------------------------- */
typedef  union
{  struct
   {  /*-----RX_CON0-----------*/
      int  lpbk_en           : 1;  // immediately
      int  rx_iq_swp         : 1;  // immediately
      int  write_rx_dm_by_sw : 1;  // immediately
      int  reserved1         : 3;
      int  rx_dc_notch_en    : 1;  // immediately
      int  rx_rst_en         : 1;  // immediately
      int  rx_rpt_en         : 8;  // double buffer by slot
      /*---RX_TIME_CON0--------*/
      int  rx_null_str_nb    : 7;  // immediately
      int  rx_dcoc_str_nb    : 7;  // immediately
      int  reserved2         : 2;
      /*---RX_TIME_CON1--------*/
      int  rx_ircmpn_sw      : 7;  // immediately
      int  reserved3         : 9;
      /*---RX_TIME_CON2--------*/
      int  rx_null_str       : 7;  // immediately
      int  rx_dcoc_str       : 7;  // immediately
      int  reserved4         : 2;
   } field;
   unsigned short  data[4];
} BFERXSET;

typedef  union
{  struct
   {  /*--TX_CON0-----------*/
      int  mdsel         :  6;  // double buffer and by slot
      int  reserved1     :  2;
      int  all_10_gen    :  2;  // double buffer
      int  reserved2     :  1;
      int  bcien         :  1;  // double buffer
      int  reserved3     :  4;
      /*--TX_CON1-----------*/
      int  tx_cnt_tgt    :  8;  // double buffer
      int  reserved4     :  8;
      /*--TX_CON2-----------*/
      int  reserved5     :  8;
      int  tx_cnt_tgt_sw :  8;  // double buffer
      /*--TX_PWR0-----------*/
      int  pwr_sel0      :  9;  // double buffer
      int  reserved6     :  7;
      /*--TX_PWR1-----------*/
      int  pwr_sel1      :  9;  // double buffer
      int  reserved7     :  7;
      /*--TX_PWR2-----------*/
      int  pwr_sel2      :  9;  // double buffer
      int  reserved8     :  7;
      /*--TX_PWR3-----------*/
      int  pwr_sel3      :  9;  // double buffer
      int  reserved9     :  7;
      /*--TX_PWR4-----------*/
      int  pwr_sel4      :  9;  // double buffer
      int  reserved10    :  7;
      /*--TX_PWR5-----------*/
      int  pwr_sel5      :  9;  // double buffer
      int  reserved11    :  7;
      /*--TX_DLY_CON--------*/
      int  pm_dly        :  2;  // double buffer
      int  am_dly        :  2;  // double buffer
      int  reserved12    :  9;
      int  crc_ampmiq    :  1;  // double buffer
      int  crc_txrx      :  1;  // double buffer
      int  crc_on        :  1;  // double buffer
   } field;
   unsigned short  data[10];
} BFETXSET;
   #endif
#endif

/*=======================================================================================================================*/

#include "l1_interface_reg.h"

#if IS_AFC_EVENT_SUPPORT_CHIP
#define AFC_EV0                  TDMA_AFC(0)
#endif
#define BDLON0                   TDMA_BDLON(0)
#define BDLOFF0                  TDMA_BDLOFF(0)
#define BULON0                   TDMA_BULON(0)
#define BULOFF0                  TDMA_BULOFF(0)
#define APC_EV0                  TDMA_APC(0)
#define BSI_EV0                  TDMA_BSI(0)
#define BPI_EV0                  TDMA_BPI(0)
#if defined(L1_SIM)
#define EVENT_ENA0               TDMA_EVTENA(0)
#define EVENT_ENA1               TDMA_EVTENA(1)
#define EVENT_ENA2               TDMA_EVTENA(2)
#define EVENT_ENA3               TDMA_EVTENA(3)
#define EVENT_ENA4               TDMA_EVTENA(4)
#define EVENT_ENA5               TDMA_EVTENA(5)
#define EVENT_ENA6               TDMA_EVTENA(6)
#define EVENT_ENA7               TDMA_EVTENA(7)
#define EVENT_ENA8               TDMA_EVTENA(8)
#define EVENT_ENA9               TDMA_EVTENA(9)
#define EVENT_ENA10              TDMA_EVTENA(10)
#define EVENT_ENA11              TDMA_EVTENA(11)
#endif /* defined(L1_SIM) */
#if IS_CHIP_MT6755
#define BSI_EN                   BSI_ENA
#define BSI_EN1                  BSI_ENA1
#define BSI_EN2                  BSI_ENA2
#else
#define BSI_EN                   BSI_ENA
#define BSI_EN1                  BSI_ENA1
#define BSI_EN2                  BSI_ENA2
#define BSI_EN3                  BSI_ENA3
#endif
#define SHARE_DSPCTL             SHARE_DSPCON
#define SHARE_D2MCTL             SHARE_D2MCON
#define SW_RSTN                  SW_PERIPH_RSTN

/*=======================================================================================================================*/

#if IS_FD216_DSP_CHIP
/*====================*\
|* Patch Fields       *|
\*====================*/
#define PATCH_ENA                ((APBADDR)(PATCH_base+0x100))          /* patch enable register                         */
   #if ( IS_CHIP_TK6291 || IS_CHIP_MT6755 )
   #else
#define PATCH_P(n)               ((APBADDR)(PATCH_base+0x000+(n)*4))    /* the page number of patched instruction n      */
#define PATCH_A(n)               ((APBADDR)(PATCH_base+0x004+(n)*4))    /*     the address of patched instruction n      */
#define PATCH_IL(n)              ((APBADDR)(PATCH_base+0x008+(n)*4))    /*    low  16 bits of patched instruction n      */
#define PATCH_IH(n)              ((APBADDR)(PATCH_base+0x00C+(n)*4))    /*    high  8 bits of patched instruction n      */
   #endif
/* ===================================================================================================================== */
#endif /*IS_FD216_DSP_CHIP*/

/*====================*\
|* Baseband Front End *|
\*====================*/
#if IS_DLIF_CHIP || IS_DCR_IN_DLIF_CHIP
   #if ( IS_CHIP_TK6291 || IS_CHIP_MT6755 )
#define BFE_CON0                 ((APBADDR)(L1_BASE_MADDR_BFE+0x0000))       /* This register is for control of BFE top           */
#define BFE_CON1                 ((APBADDR)(L1_BASE_MADDR_BFE+0x0004))
#define TX_CON0                  ((APBADDR)(L1_BASE_MADDR_BFE+0x0400))       /* This register is for control of uplink path       */
                                                                             /* inclusive of control of TX mixed-signal           */
                                                                             /* module and TX path in Baseband Front End          */
#define TX_CON1                  ((APBADDR)(L1_BASE_MADDR_BFE+0x0404))       /* This register is for control of TX power and mode switching timing*/
#define TX_CON2                  ((APBADDR)(L1_BASE_MADDR_BFE+0x0408))       /*                                                   */
#define TX_PWR0                  ((APBADDR)(L1_BASE_MADDR_BFE+0x0410))       /* This register is for control of uplink path power */
#define TX_PWR1                  ((APBADDR)(L1_BASE_MADDR_BFE+0x0414))       /* This register is for control of uplink path power */
#define TX_PWR2                  ((APBADDR)(L1_BASE_MADDR_BFE+0x0418))       /* This register is for control of uplink path power */
#define TX_PWR3                  ((APBADDR)(L1_BASE_MADDR_BFE+0x041C))       /* This register is for control of uplink path power */
#define TX_PWR4                  ((APBADDR)(L1_BASE_MADDR_BFE+0x0420))       /* This register is for control of uplink path power */
#define TX_PWR5                  ((APBADDR)(L1_BASE_MADDR_BFE+0x0424))       /* This register is for control of uplink path power */
#define TX_CON3                  ((APBADDR)(L1_BASE_MADDR_BFE+0x0428))       /* This register is for TX AM & PM delay             */
/* --------------------------------------------------------------------------------------------------------------------- */
#define TX_PHASE_COMP_CON(n)     ((APBADDR)(L1_BASE_MADDR_BFE+0x0434+(n)*4)) /* TX Phase Compensation Control                     */
#define TX_GAIN_COMP_CON(n)      ((APBADDR)(L1_BASE_MADDR_BFE+0x0440+(n)*4)) /* TX Gain Compensation Control                      */
/* --------------------------------------------------------------------------------------------------------------------- */
/* TX_DC_COMP_I/Q reg definitions can be macros since they are not continuous. */
#define TX_DC_COMP_I_0           ((APBADDR)(L1_BASE_MADDR_BFE+0x044C))       /* TX DC Compensation for Real Part                  */
#define TX_DC_COMP_Q_0           ((APBADDR)(L1_BASE_MADDR_BFE+0x0450))       /* TX DC Compensation for Imaginary Part             */
#define TX_DC_COMP_I_1           ((APBADDR)(L1_BASE_MADDR_BFE+0x0454))       /* TX DC Compensation for Real Part                  */
#define TX_DC_COMP_Q_1           ((APBADDR)(L1_BASE_MADDR_BFE+0x0458))       /* TX DC Compensation for Imaginary Part             */
#define TX_DC_COMP_I_2           ((APBADDR)(L1_BASE_MADDR_BFE+0x045C))       /* TX DC Compensation for Real Part                  */
#define TX_DC_COMP_Q_2           ((APBADDR)(L1_BASE_MADDR_BFE+0x0460))       /* TX DC Compensation for Imaginary Part             */
#define TX_DC_COMP_I_3           ((APBADDR)(L1_BASE_MADDR_BFE+0x0464))       /* TX DC Compensation for Real Part                  */
#define TX_DC_COMP_Q_3           ((APBADDR)(L1_BASE_MADDR_BFE+0x0468))       /* TX DC Compensation for Imaginary Part             */
#define TX_DC_COMP_I_4           ((APBADDR)(L1_BASE_MADDR_BFE+0x046C))       /* TX DC Compensation for Real Part                  */
#define TX_DC_COMP_Q_4           ((APBADDR)(L1_BASE_MADDR_BFE+0x0474))       /* TX DC Compensation for Imaginary Part             */
#define TX_DC_COMP_I_5           ((APBADDR)(L1_BASE_MADDR_BFE+0x0478))       /* TX DC Compensation for Real Part                  */
#define TX_DC_COMP_Q_5           ((APBADDR)(L1_BASE_MADDR_BFE+0x047C))       /* TX DC Compensation for Imaginary Part             */
/* --------------------------------------------------------------------------------------------------------------------- */
#define RX_CON0                  ((APBADDR)(L1_BASE_MADDR_BFE+0x0800))       /* [0]loopback mode enable,                          */
                                                                             /* [1]RX IQ SWAP                                     */
                                                                             /* [7]Reset RX filter as slot change                 */
                                                                             /* [8:15]repeat enable                               */
#define RX_CON1                  ((APBADDR)(L1_BASE_MADDR_BFE+0x0804))       /* inclusive of control of RX mixed-signal module    */
#define RX_CON2                  ((APBADDR)(L1_BASE_MADDR_BFE+0x0808))       /* and RX path in Baseband Front End module          */
#define RX_TYPE_CON0             ((APBADDR)(L1_BASE_MADDR_BFE+0x0810))
#define RX_TYPE_CON1             ((APBADDR)(L1_BASE_MADDR_BFE+0x0814))
#define RX_TIME_CON0             ((APBADDR)(L1_BASE_MADDR_BFE+0x0818))       /* RX DCOC NULL timing setting                       */
#define RX_TIME_CON1             ((APBADDR)(L1_BASE_MADDR_BFE+0x081C))       /* RX image rejection factor switch time             */
#define RX_ITD                   ((APBADDR)(L1_BASE_MADDR_BFE+0x0820))       /* Inter-frame ITD                                   */
      #if IS_BFE_RX_TYPE_NB_EN_SUPPORT
#define RX_TIME_CON2             ((APBADDR)(L1_BASE_MADDR_BFE+0x0824))       /* RX non-NB DCOC NULL timing setting                */
      #endif
#define RX_SWAP_SEL              ((APBADDR)(L1_BASE_MADDR_BFE+0x0828))       /* RX Swap Selection Control Register                */


#define RX_W_RE(n)               ((APBADDR)(L1_BASE_MADDR_BFE+0x08B0+(n)*4))
#define RX_W_IM(n)               ((APBADDR)(L1_BASE_MADDR_BFE+0x08D0+(n)*4))
#define RX_W_IMMDT               ((APBADDR)(L1_BASE_MADDR_BFE+0x08F0))       /* Immediately assign W for IR algorithm             */
#define RX_HW_W_RE(n)            ((APBADDR)(L1_BASE_MADDR_BFE+0x0A00+(n)*4))
#define RX_HW_W_IM(n)            ((APBADDR)(L1_BASE_MADDR_BFE+0x0A20+(n)*4))
#define RX_NBFIR_COEF(n)         ((APBADDR)(L1_BASE_MADDR_BFE+0x0840+(n)*4))
#define RX_FIR_COEF(n)           ((APBADDR)(L1_BASE_MADDR_BFE+0x0870+(n)*4))
/* --------------------------------------------------------------------------------------------------------------------- */
#define HW_READ_BCIEN()          ((HW_READ(TX_CON0)&(0x1<<11)) >>11)
#define HW_WRITE_BCIEN(d)         {HW_WRITE(TX_CON0, (d<<11)|L1D_WIN_TXMOD_TYPE());}
#define HW_WRITE_BFE_RX_RPT_EN(d) {HW_WRITE(RX_CON0, ((HW_READ(RX_CON0)&0xFF)|d));}
      #if IS_WC_IMM_MODE_ENABLE
#define W_IMMDT_REG              RX_W_IMMDT
      #endif
   #endif /* IS_CHIP_TK6291 || IS_CHIP_MT6755 */
/* ===================================================================================================================== */
#endif


/*====================*\
|* TDMA Timer events  *|
\* ===================================================================================================================== */
/* Common for TK6291 and MT6755                                                                                          */
/* --------------------------------------------------------------------------------------------------------------------- */

#if ( IS_CHIP_TK6291 || IS_CHIP_MT6755 )
#define BSI_EV_OFFSET(n)     \
/*  section | offset  */     \
( ((n)> 19 ?    624   : 0) + \
  ((n)> 35 ?     16   : 0) + \
  ((n)> 41 ?   1064   : 0)   \
)

#define NUM_TDMA_BSI_EVEEN_REG         6
#define TDMA_BSI_EVEN_OFF(n)      ( ((n)< 2  ?     2  : 6) )
#define BPI_EV_OFFSET(n)     \
/*  section | offset  */     \
( ((n)> 19 ?     80   : 0) + \
  ((n)> 41 ?   1064   : 0)   \
)

#define TQ_WRAP_IMMEDIATE        ((APBADDR)(L1_BASE_MADDR_TDMA_SLP +0x0008))          /*     direct Qbit counter reset position [13:0] */
#define DTIRQ                    ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0010))          /*                   DSP interrupt        [13:0] */
#define CTIRQ2                   ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0018))          /*                   CPU tdma interrupt 2 [13:0] */
#if IS_CTIRQ3_SUPPORT
#define CTIRQ3                   ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x001C))          /*                   CPU tdma interrupt 3 [13:0] */ 
#endif /* IS_CTIRQ3_SUPPORT */
#if IS_NEW_TDMA_CHIP
#define BDLON(n)                 ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0030+((n)*8)+(((n)/6)*736))) /*         RX window n start [13:0] */
#define BDLOFF(n)                ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0034+((n)*8)+(((n)/6)*736))) /*         RX window n end   [13:0] */
#define BULON(n)                 ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0060+((n)*8)+(((n)/4)*720))) /*         TX window n start [13:0] */
#define BULOFF(n)                ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0064+((n)*8)+(((n)/4)*720))) /*         TX window n end   [13:0] */
#else
#define BDLON(n)                 ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0030+((n)*8)))               /*         RX window n start [13:0] */
#define BDLOFF(n)                ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0034+((n)*8)))               /*         RX window n end   [13:0] */
#define BULON(n)                 ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0060+((n)*8)))               /*         TX window n start [13:0] */
#define BULOFF(n)                ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0064+((n)*8)))               /*         TX window n end   [13:0] */
#endif
#define APC_EV(n)                ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0090+((n)*4)))               /*      Power ramp control n [13:0] */

   #if IS_AFC_EVENT_SUPPORT_CHIP || IS_HWCG_SUPPORT
#define AFC_EV(n)                ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0020+((n)*4)))                           /* AFC control n [13:0] */
   #endif
   #if IS_NEW_TDMA_CHIP
#define BSI_EV(n)                ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x00B0+((n)*4)+BSI_EV_OFFSET(n)))            /* BSI event n [13:0] */
   #else
#define BSI_EV(n)                ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x00B0+((n)*4)))                             /* BSI event n [13:0] */
   #endif
#define BPI_EV(n)                ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0100+((n)*4)+BPI_EV_OFFSET(n)))            /* BPI evntn n [13:0] */

#if !IS_NEW_TDMA_CHIP
#undef  EVENT_ENA               /* The definition of EVENT_ENA (32bits) for new TDMA chip is moved to l1_interface_reg.h */
#define EVENT_ENA(n)             ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0150+((n)*4)))  /* event enable control n                        */
#endif
#if !IS_NEW_TDMA_CHIP
#define TQ_OFFSET_CONT           ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0170))          /* Qbit Timer Control Register                   */
#endif
#define DTX_CONT                 ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0180))          /* disable BUL0/1/2/3                            */
#define RXINT_CONT               ((APBADDX)(L1_BASE_MADDR_TDMA_BASE+0x0184))          /* RXINT mode 1 period count & MODE0/1/2/3/4/5 setting */
#define BDL_CONT                 ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0188))          /* ADC ON to BDL_ON count [15:8] & ADC OFF to BDL_OFF count [7:0] */
#define BUL_CONT1                ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x018C))          /* DAC OFF to BUL_ON count [5:0] & DAC ON  to BUL_OFF count [15:8]*/
#define BUL_CONT2                ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0190))          /* APCEN to BTXEV hysteresis time in Qbit unit   */
#if IS_TDMA_AD_DA_WINDOW_SUPPORT
#define BDL_CONT2                ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0604))          /* AD_EN to BRXEN [15:8], BRXFS to BRXEN [5:0]   */
#define BUL_CONT3                ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0600))          /* DA_EN to BTXEN [15:8], BTXFS to BTXEN [7:0]   */
#endif
#define FB_FLAG                  ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0194))          /* FB indicator                                  */
#define FB_CLRI                  ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0198))          /* FB clear of FB indicator                      */
#define TDMA_FB_FLAG             FB_FLAG
#define TDMA_FB_CLRI             FB_CLRI
#define GSM2WCDMA_TQCNT          ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0300))
#define WCDMA2GSM_SYNC1_TQCNT    ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0304))
#define TDMA_SYNC0               GSM2WCDMA_TQCNT
#define TDMA_SYNC1               TDMA_EVTENA(1)

#if IS_TDMA_TDD_TIMER_SYNC_SUPPORT
#define GSM2TDD_TQCNT            ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0700))
#endif
#if IS_CENTRALIZED_SMM_CHIP
#define GSM2FRC_TQCNT            ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0308))
   #if L1D_AGPS_OLD_REGISTER
   #else
#define GSM2FRC_IMM              ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x030C))          /* MT6276_E1 and MT6573 E1&E2 do NOT have this register */
   #endif
#endif
#define TDMA_SW_EVTVAL           ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x03F0))
#define TDMA_BFE_EVTVAL          ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x03F4))
#if IS_NEW_TDMA_CHIP
#define TDMA_GBL_CON             ((APBADDR32)(L1_BASE_MADDR_TDMA_BASE+0x04F0))
#endif

#define TDMA_TQCNT               TQ_CURRENT_COUNT                       /* read quater bit counter [13:0]                */
#define TDMA_WRAP                TQ_WRAP                                /* latched Qbit counter reset position [13:0]    */
#define TDMA_WRAPIMD             TQ_WRAP_IMMEDIATE                      /*  direct Qbit counter reset position [13:0]    */
#define TDMA_EVTVAL              TQ_EVENT_VALID                         /* event latch position [13:0]                   */
#define TDMA_DTIRQ               DTIRQ                                  /* DSP interrupt        [13:0]                   */
#define TDMA_CTIRQ1              CTIRQ1                                 /* CPU tdma interrupt 1 [13:0]                   */
#define TDMA_CTIRQ2              CTIRQ2                                 /* CPU tdma interrupt 2 [13:0]                   */
#if IS_CTIRQ3_SUPPORT
#define TDMA_CTIRQ3              CTIRQ3                                 /* CPU tdma interrupt 3 [13:0]                   */
#endif /* IS_CTIRQ3_SUPPORT */
#if IS_AFC_EVENT_SUPPORT_CHIP || IS_HWCG_SUPPORT
#define TDMA_AFC(n)              AFC_EV(n)                              /* AFC control n [13:0]                          */
#endif
#define TDMA_BDLON(n)            BDLON(n)                               /* RX window n start [13:0]                      */
#define TDMA_BDLOFF(n)           BDLOFF(n)                              /* RX window n end   [13:0]                      */
#define TDMA_BULON(n)            BULON(n)                               /* TX window n start [13:0]                      */
#define TDMA_BULOFF(n)           BULOFF(n)                              /* TX window n end   [13:0]                      */
#define TDMA_APC(n)              APC_EV(n)                              /* Power ramp control n [13:0]                   */
#define TDMA_BSI(n)              BSI_EV(n)                              /* BSI event n [13:0]                            */
#define TDMA_BPI(n)              BPI_EV(n)                              /* BPI evntn n [13:0]                            */
#define TDMA_EVTENA(n)           EVENT_ENA(n)                           /* event enable control n                        */
#if !IS_NEW_TDMA_CHIP
#define TDMA_WRAPOFS             TQ_OFFSET_CONT                         /* Qbit Timer Control Register                   */
#endif
#define TDMA_REGBIAS             TQ_BIAS_CONT                           /* Qbit Timer Biasing Control Register           */
#define TDMA_DTXCON              DTX_CONT                               /* disable BUL0/1/2/3                            */
#define TDMA_RXCON               RXINT_CONT                             /* RXINT mode 1 period count & MODE0/1/2/3/4/5 setting */
#define TDMA_BDLCON              BDL_CONT                               /* ADC ON to BDL_ON count [15:8] & ADC OFF to BDL_OFF count [7:0] */
#define TDMA_BULCON1             BUL_CONT1                              /* DAC OFF to BUL_ON count [5:0] & DAC ON  to BUL_OFF count [15:8]*/
#define TDMA_BULCON2             BUL_CONT2                              /* APCEN to BTXEV hysteresis time in Qbit unit   */
#if IS_TDMA_AD_DA_WINDOW_SUPPORT
#define TDMA_BDLCON2             BDL_CONT2                              /* AD_EN to BRXEN [15:8], BRXFS to BRXEN [5:0]   */
#define TDMA_BULCON3             BUL_CONT3                              /* DA_EN to BTXEN [15:8], BTXFS to BTXEN [7:0]   */
#endif

/* The definition of TDMA_AUXEVxx is moved to l1_interface_reg.h                                                         */

#define TDMA_FHSTR0              ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0320))
#define TDMA_FHSTR1              ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0324))
#define TDMA_FHSTR2              ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0328))
#define TDMA_FHSTR3              ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x032c))
#define TDMA_FHSTR4              ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0330))
#define TDMA_FHSTR5              ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0334))
#define TDMA_RD_BSI0             ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x03B0))          /* BSI HW Read event                             */

#if IS_TXPC_CL_AUXADC_SUPPORT
#define TDMA_AUX_GSM_TX(n)       ((APBADDR)(L1_BASE_MADDR_TDMA_BASE+0x0408+((n)*4)))  /* Auxiliary ADC power readback event, n = 0~3   */
#define AUX_2GTX_CH              ((APBADDR)(AUXADC_base+0x00A0))        /* [3:0]:   AUXADC input channel number for 2G TX power (Vdet) */
                                                                        /* [15:14]: Both bits are for debugging                        */
#define AUX_2GTX_DAT(n)          ((APBADDR)(AUXADC_base+0x00B0+(4*(n))))/* [11:0]:  2GTX_DAT                                           */
                                                                        /* [12]:    Pending indication bit                             */
#define AUXADC_CON3              ((APBADDR)(AUXADC_base+0x000C))        /* [11]:    PUWAIT_EN, should be set to 0                      */
#endif
/* ===================================================================================================================== */
#endif /* IS_CHIP_TK6291 || IS_CHIP_MT6755 */

/*==================*\
|* BSISPI registers *|
\*==================*/
#if IS_BSISPI_SEPARATE_SUPPORT
   #if IS_MMRF_CONTROL_BSI_TOP_SUPPORT
/* If IS_MMRF_CONTROL_BSI_TOP_SUPPORT is supported, it means that BSISPI and BPI_TOP control are moved to MMRF driver. */   
   #else
#define BSISPI_CODA_VERSION_RFIC1 ((APBADDR32)(BSISPI_base+0x2000))
#define BSISPI_PORT_PARAM_RFIC1   ((APBADDR32)(BSISPI_base+0x2010))
#define BSISPI_SW_MODE_RFIC1      ((APBADDR32)(BSISPI_base+0x2014))
#define BSISPI_CLSNINT_RFIC1      ((APBADDR32)(BSISPI_base+0x2018))
#define BSISPI_IC0_PARAM1_RFIC1   ((APBADDR32)(BSISPI_base+0x2020))
#define BSISPI_IC0_PARAM2_RFIC1   ((APBADDR32)(BSISPI_base+0x2024))
#define BSISPI_IC1_PARAM1_RFIC1   ((APBADDR32)(BSISPI_base+0x2028))
#define BSISPI_IC1_PARAM2_RFIC1   ((APBADDR32)(BSISPI_base+0x202C))
#define BSISPI_LOG_WPTR_RFIC1     ((APBADDR32)(BSISPI_base+0x2030))
#define BSISPI_SRAM_DELSEL_RFIC1  ((APBADDR32)(BSISPI_base+0x2040))
#define BSISPI_CODA_VERSION_RFIC2 ((APBADDR32)(BSISPI_base+0x3000))
#define BSISPI_PORT_PARAM_RFIC2   ((APBADDR32)(BSISPI_base+0x3010))
#define BSISPI_SW_MODE_RFIC2      ((APBADDR32)(BSISPI_base+0x3014))
#define BSISPI_CLSNINT_RFIC2      ((APBADDR32)(BSISPI_base+0x3018))
#define BSISPI_IC0_PARAM1_RFIC2   ((APBADDR32)(BSISPI_base+0x3020))
#define BSISPI_IC0_PARAM2_RFIC2   ((APBADDR32)(BSISPI_base+0x3024))
#define BSISPI_IC1_PARAM1_RFIC2   ((APBADDR32)(BSISPI_base+0x3028))
#define BSISPI_IC1_PARAM2_RFIC2   ((APBADDR32)(BSISPI_base+0x302C))
#define BSISPI_LOG_WPTR_RFIC2     ((APBADDR32)(BSISPI_base+0x3030))
#define BSISPI_SRAM_DELSEL_RFIC2  ((APBADDR32)(BSISPI_base+0x3040))
#define BSISPI_CGEN               ((APBADDR32)(BSISPI_base+0xD204))
      #if IS_MIPI_SUPPORT
#define BSISPI_CODA_VERSION_MIPI0 ((APBADDR32)(BSISPI_base+0x5000))
#define BSISPI_PORT_PARAM_MIPI0   ((APBADDR32)(BSISPI_base+0x5010))
#define BSISPI_SW_MODE_MIPI0      ((APBADDR32)(BSISPI_base+0x5014))
#define BSISPI_CLSNINT_MIPI0      ((APBADDR32)(BSISPI_base+0x5018))
#define BSISPI_IC0_PARAM1_MIPI0   ((APBADDR32)(BSISPI_base+0x5020))
#define BSISPI_IC0_PARAM2_MIPI0   ((APBADDR32)(BSISPI_base+0x5024))
#define BSISPI_IC1_PARAM1_MIPI0   ((APBADDR32)(BSISPI_base+0x5028))
#define BSISPI_IC1_PARAM2_MIPI0   ((APBADDR32)(BSISPI_base+0x502C))
#define BSISPI_LOG_WPTR_MIPI0     ((APBADDR32)(BSISPI_base+0x5030))
#define BSISPI_SRAM_DELSEL_MIPI0  ((APBADDR32)(BSISPI_base+0x5040))
#define BSISPI_CODA_VERSION_MIPI1 ((APBADDR32)(BSISPI_base+0x6000))
#define BSISPI_PORT_PARAM_MIPI1   ((APBADDR32)(BSISPI_base+0x6010))
#define BSISPI_SW_MODE_MIPI1      ((APBADDR32)(BSISPI_base+0x6014))
#define BSISPI_CLSNINT_MIPI1      ((APBADDR32)(BSISPI_base+0x6018))
#define BSISPI_IC0_PARAM1_MIPI1   ((APBADDR32)(BSISPI_base+0x6020))
#define BSISPI_IC0_PARAM2_MIPI1   ((APBADDR32)(BSISPI_base+0x6024))
#define BSISPI_IC1_PARAM1_MIPI1   ((APBADDR32)(BSISPI_base+0x6028))
#define BSISPI_IC1_PARAM2_MIPI1   ((APBADDR32)(BSISPI_base+0x602C))
#define BSISPI_LOG_WPTR_MIPI1     ((APBADDR32)(BSISPI_base+0x6030))
#define BSISPI_SRAM_DELSEL_MIPI1  ((APBADDR32)(BSISPI_base+0x6040))
      #endif
   #endif
#endif

/*================*\
|* BSI  registers *|
\*================*/

#if ( IS_CHIP_TK6291 || IS_CHIP_MT6755 )
   #if IS_BSI_CON_32_BIT_CHIP
   #else
#error "IS_BSI_CON_32_BIT_CHIP should be ON."
   #endif
  
/* ===================================================================================================================== */
/* Common for TK6291 and MT6755 ~                                                                                                           */
/* --------------------------------------------------------------------------------------------------------------------- */
#define BSI_G_CON                   ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x0000)) /* BSI control register                          */
#define BSI_G_EVENT_ENA_3100        ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x0004)) /* BSI event enable register                     */
#define BSI_G_EVENT_ENA_6332        ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x0008)) /* BSI event enable register                     */
#define BSI_G_EVENT_ENA_9564        ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x000C)) /* BSI event enable register                     */
   #if IS_CHIP_TK6291
#define BSI_G_EVENT_ENA_11996       ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x0010)) /* BSI event enable register                     */
   #endif
#define BSI_G_ACTUPT                ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x0014)) /* BSI immediate update the active buffer        */
#define BSI_G_TXDATA_CON            ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x0018)) /* BSI control part of BFE txdata register       */
#define BSI_G_PORT_MODE             ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x001C)) /* BSI port protocol register                    */
/* --------------------------------------------------------------------------------------------------------------------- */
   #if IS_CHIP_TK6291
#define BSI_G_MIPI_CONFIG           ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x0020)) /* BSI MIPI config                               */
/* --------------------------------------------------------------------------------------------------------------------- */
   #endif /* IS_CHIP_TK6291 */
#define BSI_G_SW_RDCON              ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x0034)) /* BSI IMM Trigger Read Back Control             */
#define BSI_G_SW_RDADDR_CON         ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x0038)) /* control part of the read back address         */
#define BSI_G_SW_RDADDR             ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x003C)) /* BSI Read Back ADDR                            */
#define BSI_G_SW_RDDAT_L            ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x0040)) /* BSI Read Back Data                            */
#define BSI_G_SW_RDDAT_H            ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x004C)) /* BSI Read Back Data                            */
/* --------------------------------------------------------------------------------------------------------------------- */
#define BSI_G_HW_RDCON              ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x0050)) /* BSI Timer Trigger Read Back Control           */
#define BSI_G_HW_RDADDR_CON         ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x0054)) /* control part of the read back address         */
#define BSI_G_HW_RDADDR             ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x0058)) /* BSI Read Back ADDR                            */
#define BSI_G_HW_RDDAT_L            ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x005C)) /* BSI Read Back Data                            */
#define BSI_G_HW_RDDAT_H            ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x0060)) /* BSI Read Back Data                            */
/* --------------------------------------------------------------------------------------------------------------------- */
#define BSI_IMM_WD_RDY              ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x0064)) /* BSI IMM Write Status                          */
/* --------------------------------------------------------------------------------------------------------------------- */
#define BSI_G_Dn_CON(n)             ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x1004 + (n)*8))  /* data n control                                */
#define BSI_G_Dn_DATA(n)            ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + 0x1008 + (n)*8))  /* data [31:0]                                   */
/* --------------------------------------------------------------------------------------------------------------------- */

#define BSI_CON                  BSI_G_CON
#define BSI_Dn_CON(n)            BSI_G_Dn_CON(n)
#define BSI_Dn_DAT(n)            BSI_G_Dn_DATA(n)
   #if IS_CHIP_MT6755
#define BSI_ENA                  BSI_G_EVENT_ENA_3100
#define BSI_ENA1                 BSI_G_EVENT_ENA_6332
#define BSI_ENA2                 BSI_G_EVENT_ENA_9564
   #else
#define BSI_ENA                  BSI_G_EVENT_ENA_3100
#define BSI_ENA1                 BSI_G_EVENT_ENA_6332
#define BSI_ENA2                 BSI_G_EVENT_ENA_9564
#define BSI_ENA3                 BSI_G_EVENT_ENA_11996
   #endif
#define GSM_BSI_ACTUPT           BSI_G_ACTUPT
#define GSM_BSI_TXDATA_CON       BSI_G_TXDATA_CON
#define GSM_BSI_PORT_MODE        BSI_G_PORT_MODE
/* --------------------------------------------------------------------------------------------------------------------- */
/* BSI Read Back Immediated Mode                                                                                         */
/* --------------------------------------------------------------------------------------------------------------------- */
#define BSI_RDCON                BSI_G_SW_RDCON
#define BSI_RDADDR_CON           BSI_G_SW_RDADDR_CON
#define BSI_RDADDR               BSI_G_SW_RDADDR
#define BSI_RDDAT                BSI_G_SW_RDDAT_L
#define BSI_RDDAT_H              BSI_G_SW_RDDAT_H
/* --------------------------------------------------------------------------------------------------------------------- */
/* BSI Read Back TDMA Event Trigger Mode                                                                                 */
/* --------------------------------------------------------------------------------------------------------------------- */
#define BSI_TDMA_RDCON           BSI_G_HW_RDCON
#define BSI_TDMA_RDADDR_CON      BSI_G_HW_RDADDR_CON
#define BSI_TDMA_RDADDR          BSI_G_HW_RDADDR
#define BSI_TDMA_RDDAT           BSI_G_HW_RDDAT_L
#define BSI_TDMA_RDDAT_H         BSI_G_HW_RDDAT_H
#define HW_BSI_RDBACK_EN(d)      HW_WRITE(BSI_TDMA_RDCON, (HW_READ(BSI_TDMA_RDCON)& ~0x8000)|((d&0x1)<<15));
/* --------------------------------------------------------------------------------------------------------------------- */
/* BSI MIPI Control                                                                                                      */
/* --------------------------------------------------------------------------------------------------------------------- */
   #if IS_CHIP_TK6291
#define BSI_MIPI_CON             BSI_G_MIPI_CONFIG
   #endif
/* --------------------------------------------------------------------------------------------------------------------- */
#endif /* IS_CHIP_TK6291 || IS_CHIP_MT6755 */

#if IS_CHIP_MT6755
#define MIPI_INST_BASE           0x8000

/* ===================================================================================================================== */
/* for MT6755 only~                                                                                                           */
/* --------------------------------------------------------------------------------------------------------------------- */
#define BSI_G_MIPI_CON                   ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x0000)) /* BSI MIPI control register                          */
#define BSI_G_MIPI_EVENT_ENA_3100        ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x0004)) /* BSI MIPI event enable register                     */
#define BSI_G_MIPI_EVENT_ENA_6332        ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x0008)) /* BSI MIPI event enable register                     */
#define BSI_G_MIPI_EVENT_ENA_9564        ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x000C)) /* BSI MIPI event enable register                     */
#define BSI_G_MIPI_ACTUPT                ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x0014)) /* BSI MIPI immediate update the active buffer        */
/* --------------------------------------------------------------------------------------------------------------------- */
#define BSI_G_MIPI_CONFIG                ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x0020)) /* BSI MIPI config                               */
/* --------------------------------------------------------------------------------------------------------------------- */
#define BSI_G_MIPI_BURST_ENA_3100        ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x0024))
#define BSI_G_MIPI_BURST_ENA_6332        ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x0028))
#define BSI_G_MIPI_BURST_ENA_9564        ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x002C))
#define BSI_G_MIPI_SW_RDCON              ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x0034)) /* BSI MIPI IMM Trigger Read Back Control             */
#define BSI_G_MIPI_SW_RDADDR_CON         ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x0038)) /* MIPI control part of the read back address         */
#define BSI_G_MIPI_SW_RDADDR             ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x003C)) /* BSI MIPI Read Back ADDR                            */
#define BSI_G_MIPI_SW_RDDAT_L            ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x0040)) /* BSI MIPI Read Back Data                            */
#define BSI_G_MIPI_SW_RDDAT_H            ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x004C)) /* BSI MIPI Read Back Data                            */
/* --------------------------------------------------------------------------------------------------------------------- */
#define BSI_G_MIPI_HW_RDCON              ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x0050)) /* BSI MIPI Timer Trigger Read Back Control           */
#define BSI_G_MIPI_HW_RDADDR_CON         ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x0054)) /* MIPI control part of the read back address         */
#define BSI_G_MIPI_HW_RDADDR             ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x0058)) /* MIPI BSI Read Back ADDR                            */
#define BSI_G_MIPI_HW_RDDAT_L            ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x005C)) /* MIPI BSI Read Back Data                            */
#define BSI_G_MIPI_HW_RDDAT_H            ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x0060)) /* MIPI BSI Read Back Data                            */
/* --------------------------------------------------------------------------------------------------------------------- */
#define BSI_MIPI_IMM_WD_RDY              ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x0064)) /* BSI MIPI IMM Write Status                          */
/* --------------------------------------------------------------------------------------------------------------------- */
#define BSI_G_MIPI_Dn_CON(n)             ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x1004 + (n)*8))  /* MIPI data n control                                */
#define BSI_G_MIPI_Dn_DATA(n)            ((APBADDR32)(L1_BASE_MADDR_MD2G_BSI_BASE + MIPI_INST_BASE + 0x1008 + (n)*8))  /* MIPI data [31:0]                                   */
/* --------------------------------------------------------------------------------------------------------------------- */

#define BSI_MIPI_Dn_CON(n)            BSI_G_MIPI_Dn_CON(n)
#define BSI_MIPI_Dn_DAT(n)            BSI_G_MIPI_Dn_DATA(n)
#define BSI_MIPI_ENA                  BSI_G_MIPI_EVENT_ENA_3100
#define BSI_MIPI_ENA1                 BSI_G_MIPI_EVENT_ENA_6332
#define BSI_MIPI_ENA2                 BSI_G_MIPI_EVENT_ENA_9564
#define GSM_BSI_MIPI_ACTUPT           BSI_G_MIPI_ACTUPT

/* --------------------------------------------------------------------------------------------------------------------- */
/* BSI Read Back Immediated Mode                                                                                         */
/* --------------------------------------------------------------------------------------------------------------------- */
#define BSI_MIPI_RDCON                BSI_G_MIPI_SW_RDCON
#define BSI_MIPI_RDADDR_CON           BSI_G_MIPI_SW_RDADDR_CON
#define BSI_MIPI_RDADDR               BSI_G_MIPI_SW_RDADDR
#define BSI_MIPI_RDDAT                BSI_G_MIPI_SW_RDDAT_L
#define BSI_MIPI_RDDAT_H              BSI_G_MIPI_SW_RDDAT_H
/* --------------------------------------------------------------------------------------------------------------------- */
/* BSI Read Back TDMA Event Trigger Mode                                                                                 */
/* --------------------------------------------------------------------------------------------------------------------- */
#define BSI_MIPI_TDMA_RDCON           BSI_G_MIPI_HW_RDCON
#define BSI_MIPI_TDMA_RDADDR_CON      BSI_G_MIPI_HW_RDADDR_CON
#define BSI_MIPI_TDMA_RDADDR          BSI_G_MIPI_HW_RDADDR
#define BSI_MIPI_TDMA_RDDAT           BSI_G_MIPI_HW_RDDAT_L
#define BSI_MIPI_TDMA_RDDAT_H         BSI_G_MIPI_HW_RDDAT_H
#define HW_BSI_MIPI_RDBACK_EN(d)      HW_WRITE(BSI_MIPI_TDMA_RDCON, (HW_READ(BSI_MIPI_TDMA_RDCON)& ~0x8000)|((d&0x1)<<15));
/* --------------------------------------------------------------------------------------------------------------------- */
/* BSI MIPI Control                                                                                                      */
/* --------------------------------------------------------------------------------------------------------------------- */
#define BSI_MIPI_CON             BSI_G_MIPI_CONFIG
/* --------------------------------------------------------------------------------------------------------------------- */
#endif /* IS_CHIP_MT6755 */

/*================*\
|* BPI registers  *|
\*================*/
#if ( IS_CHIP_TK6291 || IS_CHIP_MT6755 )
/* ===================================================================================================================== */
/* Common for TK6291 and MT6755                                                                                          */
/* --------------------------------------------------------------------------------------------------------------------- */
#define BPI_G_BUFn_L(n)          ((APBADDR32)(L1_BASE_MADDR_MD2G_BPI_BASE + 0x0004 + (n)*8)) /* data for event n                            */
#define BPI_G_BUFn_H(n)          ((APBADDR32)(L1_BASE_MADDR_MD2G_BPI_BASE + 0x0008 + (n)*8)) /* data for event n                            */
/* --------------------------------------------------------------------------------------------------------------------- */
#define BPI_G_BUF_IMM_L          ((APBADDR32)(L1_BASE_MADDR_MD2G_BPI_BASE + 0x0154)) /* Force change the value of BPI output       */
#define BPI_G_BUF_IMM_H          ((APBADDR32)(L1_BASE_MADDR_MD2G_BPI_BASE + 0x0158)) /* Force change the value of BPI output       */
/* --------------------------------------------------------------------------------------------------------------------- */
#define BPI_G_EVT_ENA0           ((APBADDR32)(L1_BASE_MADDR_MD2G_BPI_BASE + 0x015C)) /* BPI event enable register                   */
#define BPI_G_EVT_ENA1           ((APBADDR32)(L1_BASE_MADDR_MD2G_BPI_BASE + 0x0160)) /* BPI event enable register                   */
/* --------------------------------------------------------------------------------------------------------------------- */
   #if defined(L1_SIM)
#define BPI_G_ACTUPT             ((APBADDR32)(L1_BASE_MADDR_MD2G_BPI_BASE + 0x0164))
   #endif
/* --------------------------------------------------------------------------------------------------------------------- */
#define BPI_V(n)                 BPI_G_BUFn_L(n) /* data for event n                            */
#define BPI_V_H(n)               BPI_G_BUFn_H(n) /* data for event n                            */
#define BPI_ENA                  BPI_G_EVT_ENA0  /* BPI event enable register                   */
#define BPI_ENA1                 BPI_G_EVT_ENA1  /* BPI event enable register                   */
   #if defined(L1_SIM)
#define BPI_EN                   BPI_G_EVT_ENA0  /* BPI event enable register                   */
#define BPI_EN1                  BPI_G_EVT_ENA1  /* BPI event enable register                   */
#define BPI_DAT_L(n)             BPI_V(n)        /* data for event n                              */
#define BPI_DAT_H(n)             BPI_V_H(n)      /* data for event n                              */
#define GSM_BPI_ACTUPT           BPI_G_ACTUPT
   #endif
#define BPI_G_RAT_CONFLICT_CLR   ((APBADDR32)(L1_BASE_MADDR_MD2G_BPI_BASE + 0x017C)) /* BPI GSM error detect register                   */
/* ===================================================================================================================== */
#endif /* IS_CHIP_TK6291 || IS_CHIP_MT6755 */

#if defined(L1_SIM)
/*================*\
|* AFC  registers *|
\* ===================================================================================================================== */
/* for MT6290                                                                                                            */
/* --------------------------------------------------------------------------------------------------------------------- */
#define AFC_DATA(n)              ((APBADDR)  (AFC_base+0x0004+((n)*4))) /* AFC data n [9:0]                              */
/* --------------------------------------------------------------------------------------------------------------------- */
#endif /* defined(L1_SIM) */

/*====================*\
|* APC data registers *|
\*====================*/
/* ===================================================================================================================== */
/* Common for TK6291, MT6755                                                                                             */
/* --------------------------------------------------------------------------------------------------------------------- */
#if ( IS_CHIP_TK6291 || IS_CHIP_MT6755 )
#define APC_RAMP(n,k)            ((APBADDR32)(L1_BASE_MADDR_APC+0x0000+((n)*32)+((k)*4))) /* Rampup Profile #n                    */
#define APC_SCALL(n)             ((APBADDR)(L1_BASE_MADDR_APC+0x0010+((n)*32)))  /* Rampdown Profile #n                           */
#define APC_SCALR(n)             ((APBADDR)(L1_BASE_MADDR_APC+0x0014+((n)*32)))  /* Rampdown Profile #n                           */
#define APC_OFS(n)               ((APBADDR)(L1_BASE_MADDR_APC+0x0018+((n)*32)))  /* Rampdown Profile #n                           */
#define APC_CTRL                 ((APBADDR)(L1_BASE_MADDR_APC+0x0100))           /* APC control register                          */
#define APC_CON                  APC_CTRL                               /*                                               */
#define APC_OFFSET               APC_OFS(0)                             /* APC offset register                           */
/* --------------------------------------------------------------------------------------------------------------------- */
#endif /* IS_CHIP_TK6291 || IS_CHIP_MT6755 */

/*=========================*\
|* ABB Mixed Sys registers *|
\*=========================*/
#if ( IS_CHIP_TK6291 || IS_CHIP_MT6755 )
/* ===================================================================================================================== */
/* Common for TK6291, MT6755                                                                                             */
/* --------------------------------------------------------------------------------------------------------------------- */
#define DIG_CON4                 ((APBADDR)(L1_BASE_MADDR_ABB_MIXEDSYS+0xC010))  /* Digital Control Register 4 */
/* ===================================================================================================================== */
#endif /* IS_CHIP_TK6291 || IS_CHIP_MT6755 */


#if defined(L1_SIM)
   #if IS_CENTRALIZED_SMM_CHIP
/*====================*\
|*  SM data registers *|
\* ===================================================================================================================== */
/* for MT6290                                                                                                            */
/* --------------------------------------------------------------------------------------------------------------------- */
#define FRC_SYNC_VAL_2G_H        ((APBADDR32)(MCU_TOPSM_base+0x0090))           /* Free Running Counter sync result in us        */
#define FRC_SYNC_VAL_2G_MISC     ((APBADDR32)(MCU_TOPSM_base+0x0094))           /* Free Running Counter sync result in us        */
#define MODEM_RM_TMR_SSTA        ((APBADDR32)(MODEM2G_TOPSM_base+0x0040))       /* Resource Manager Timer Sleep Control State    */
#define MODEM_CCF_CLK_CON        ((APBADDR32)(MODEM2G_TOPSM_base+0x0200))
#define MODEM_RM_PWR_CON(n)      ((APBADDR32)(MODEM2G_TOPSM_base+0x0800+(n)*4)) /* Power Control Register n                      */
#define MODEM_RM_PWR_CON0        MODEM_RM_PWR_CON(0)                            /* MD2GSYS Power Control Register                */
#define FRC_SYNC_1L              FRC_SYNC_VAL_2G_MISC                           /* SYSCLK_CNT_SYNC0[4:0] is the same as SYNC_1L  */
#define FRC_SYNC_1H              FRC_SYNC_VAL_2G_H

#define MCU_TOPSM_base           TOPSM_base
#define GPS_SYNC_TIME            ((APBADDR32)(MCU_TOPSM_base+0x00C4))           /* GPS Sync Time (in unit of us), when free run counter match this value, HW will automatic send out gps_sync pulse longer than 120ns */
#define GPS_SYNC_CTL             ((APBADDR32)(MCU_TOPSM_base+0x00C8))           /* GPS_SYNC1[0], GPS Sync Start, Set by SW, clear by HW                                                                               */
#define GPS_SYNC_CON0            GPS_SYNC_TIME
#define GPS_SYNC_CON1            GPS_SYNC_CTL
   
#define MODEM2G_TOPSM_base       SLP_2G_CTRL_base
#define MODEM_RM_TMR_PWR0        ((APBADDR32)(MODEM2G_TOPSM_base+0x0018))       /* Resource Manager Timer Power Enable Control 0 */
#define MODEM_RM_TMR_PWR1        ((APBADDR32)(MODEM2G_TOPSM_base+0x001C))       /* Resource Manager Timer Power Enable Control 1 */
   
#define SM_base                  (TDMA_base      +0x0500)               /* 2G Sleep Controller                           */
#define SM_CON                   ((APBADDR)  (SM_base+0x0000))          /* 2G Sleep Control register                     */
#define SM_FINAL_PAUSE_DURATION  ((APBADDR32)(SM_base+0x003C))          /* 2G Final Pause Duration                       */
#define SM_PAUSE_TIME            ((APBADDR32)(SM_base+0x0008))          /* 2G Sleep Duration                             */
#define SM_PROT_TIME             ((APBADDR)  (SM_base+0x0004))          /* SW Protection Time after trigger Pause Start  */
#define SM_QBIT_START            ((APBADDR)  (SM_base+0x002C))          /* QBIT Start at Entry of Sleep Mode             */
#define SM_STA                   ((APBADDR)  (SM_base+0x000C))          /* 2G Sleep Controller Status                    */
#define SM_TQ_FRAC               ((APBADDR32)(SM_base+0x001C))          /* Sleep TQ Fraction                             */

/* For IS_CHIP_MT6290, IS_CHIP_MT6595 and later                                                  */
/* SM related register has been declared in l1sm.h, md_topsm_private.h and modem_topsm_private.h */
/* Only define registers which L1D and SM use different name.                                    */
#define MODEM_RM_PWR_CON0   MODEM2G_TOPSM_RM_PWR_CON0
#define MODEM_CCF_CLK_CON   MODEM2G_TOPSM_CCF_CLK_CON
#define MODEM_RM_TMR_SSTA   MODEM2G_TOPSM_RM_TMR_SSTA
/* --------------------------------------------------------------------------------------------------------------------- */
//#define TQINIT_SM                SM_TQINIT
//#define SM_32K_FREE_RUN          RTCCOUNT
/* --------------------------------------------------------------------------------------------------------------------- */
   #endif /* IS_CENTRALIZED_SMM_CHIP */
#endif /* defined(L1_SIM) */

#ifdef __SWDBG_SUPPORT__
/* --------------------------------------------------------------------------------------------------------------------- */
#define SWDBG_STA                ((APBADDR32)(SWDBG_base+0x10))         /* Software Debug Controller Status Register  FOR  L1C USE   */
#define SWDBG_INT                ((APBADDR)  (SWDBG_base+0x14))         /* Software Debug Controller Interrupt Register              */
#define SWDBG_INTACK             ((APBADDR)  (SWDBG_base+0x18))         /* Software Debug Controller Interrupt Acknowledge Register  */
#define SWDBG_CONA               ((APBADDR32)(SWDBG_base+0x1C))         /* Software Debug Controller Control Register A              */
#define SWDBG_CONB               ((APBADDR32)(SWDBG_base+0x20))         /* Software Debug Controller Control Register B              */
#define SWDBG_CONC               ((APBADDR32)(SWDBG_base+0x24))         /* Software Debug Controller Control Register C              */
#define SWDBG_DDCONA             ((APBADDR32)(SWDBG_base+0x30))         /* Software Debug Controller DSP Debug Control Register A    */
#define SWDBG_DDCONB             ((APBADDR32)(SWDBG_base+0x34))         /* Software Debug Controller DSP Debug Control Register B    */
#define SWDBG_MDTXCONA           ((APBADDR32)(SWDBG_base+0x40))         /* Software Debug Controller MCU TX Debug Control Register A */
#define SWDBG_MDTXCONB           ((APBADDR32)(SWDBG_base+0x44))         /* Software Debug Controller MCU TX Debug Control Register B */
#define SWDBG_MDTXA              ((APBADDR)  (SWDBG_base+0x48))         /* Software Debug Controller MCU Debug TX Data Register A    */
#define SWDBG_MDTXB              ((APBADDR)  (SWDBG_base+0x4C))         /* Software Debug Controller MCU Debug TX Data Register B    */
#define SWDBG_MDRXCON            ((APBADDR32)(SWDBG_base+0x50))         /* Software Debug Controller MCU Debug Rx control Register   */
#define SWDBG_MDRXDAT            ((APBADDR)  (SWDBG_base+0x54))         /* Software Debug Controller MCU Debug RX Data Register      */
#define SWDBG_MPCFG              ((APBADDR32)(SWDBG_base+0x60))         /* Software Debug Controller MCU Profiling Control Register  */
#define SWDBG_MPCON              ((APBADDR32)(SWDBG_base+0x64))         /* Software Debug Controller MCU Profiling Control Register  */
#define SWDBG_MPTIMER            ((APBADDR32)(SWDBG_base+0x68))         /* Software Debug Controller MCU Profiling Timer Register    */
/* --------------------------------------------------------------------------------------------------------------------- */
#endif /*__SWDBG_SUPPORT__*/

/*========================*\
|* Power Down Managerment *|
\* ===================================================================================================================== */

// 65 nm MD2G PDN_CON
#if ( IS_CHIP_TK6291 || IS_CHIP_MT6755 )
/*MT6583*/ #define HWCG_BYPASS             ((APBADDR)(L1_BASE_MADDR_MD2G_CONFG+0x058))
/* The other settings are moved to l1_interface_reg.h */
#endif

#if ( IS_CHIP_TK6291 || IS_CHIP_MT6755 )
#define L1D_MODEMSYS_SET_APB_RD_LATENCY()
#define L1D_MODEMSYS_SET_APB_WT_LATENCY()
#define L1D_MODEMSYS_SET_APB_PROTOCOL()
#elif IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2 || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2
#define L1D_MODEMSYS_SET_APB_RD_LATENCY()   HW_WRITE(MPERI_APB_R2T , 0x00000000)
#define L1D_MODEMSYS_SET_APB_WT_LATENCY()   HW_WRITE(MPERI_APB_W2T , 0x00000000)
#define L1D_MODEMSYS_SET_APB_PROTOCOL()     HW_WRITE(MPERI_APB3_SEL, 0x00000080) // BSI needs APB 2.0 protocol
#endif

#if ( IS_CHIP_TK6291 || IS_CHIP_MT6755 )
#define L1D_MODEMSYS_BUS_CG_ENA()
#define L1D_MD2GSYS_BUS_CG_ENA()           {uint16 d16 = HW_READ(MD2GSYS_AHB_CON0);  HW_WRITE(MD2GSYS_AHB_CON0,(d16|(1<<9)));}
#elif IS_CHIP_MT6290
#define L1D_MODEMSYS_BUS_CG_ENA()          {uint32 d32 = HW_READ(MPERI_PWR_AWARE_2G );  HW_WRITE(MPERI_PWR_AWARE_2G, (d32|(1<<2)));}
#define L1D_MD2GSYS_BUS_CG_ENA()           {uint16 d16 = HW_READ(MD2GSYS_AHB_CON0);  HW_WRITE(MD2GSYS_AHB_CON0,(d16|(1<<9)));}
#elif IS_CHIP_MT6250 || IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2 || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2
#define L1D_MODEMSYS_BUS_CG_ENA()          {uint32 d32 = HW_READ(MPERI_PWR_AWARE );  HW_WRITE(MPERI_PWR_AWARE, (d32|(1<<2)));}
#define L1D_MD2GSYS_BUS_CG_ENA()           {uint16 d16 = HW_READ(MD2GSYS_AHB_CON0);  HW_WRITE(MD2GSYS_AHB_CON0,(d16|(1<<9)));}
#endif

#if IS_RTX_BUFFER_POWER_CTRL_SUPPORT
#define L1D_RX_BUF_POWER_ON()              {HW_WRITE(MD2G_PDN_CLR0,0x0100);  WAIT_TIME_QB(1);}
#define L1D_RX_BUF_POWER_OFF()             {HW_WRITE(MD2G_PDN_SET0,0x0100);                  }
#define L1D_TX_BUF_POWER_ON()              {HW_WRITE(MD2G_PDN_CLR0,0x0200);  WAIT_TIME_QB(1);}
#define L1D_TX_BUF_POWER_OFF()             {HW_WRITE(MD2G_PDN_SET0,0x0200);                  }
#else
#define L1D_RX_BUF_POWER_ON()
#define L1D_RX_BUF_POWER_OFF()
#define L1D_TX_BUF_POWER_ON()
#define L1D_TX_BUF_POWER_OFF()
#endif

#if ( IS_CHIP_TK6291 || IS_CHIP_MT6755 )
#define L1D_CSD_BUS_POWER_ON()
#define L1D_CSD_BUS_POWER_OFF()
#endif

#if ( IS_CHIP_TK6291 || IS_CHIP_MT6755 )
#define DSPCLK_CON               ((APBADDR)(L1_BASE_MADDR_MD2G_CONFG+0x0040))      /* DSP Clock Control Register                    */
// Frequency hopping is controled by System Service.
#endif
/* --------------------------------------------------------------------------------------------------------------------- */

/*================================*\
|* DSP interrupt glitch Registers *|
\*================================*/
#define MD2GSYS_AHB_CON0         ((APBADDR)(L1_BASE_MADDR_MD2G_CONFG+0x0214))

#if IS_CACHE_DSP_SUPPORT
#define DSPC_CM_STA              ((APBADDR)(DSP_CACHE_base+0x0004))     /* CM Cache Status */
#define DSPC_PM_STA              ((APBADDR)(DSP_CACHE_base+0x0104))     /* PM Cache Status */
#define DSPC_DM_STA              ((APBADDR)(DSP_CACHE_base+0x0204))     /* DM Cache Status */
#endif
/* --------------------------------------------------------------------------------------------------------------------- */

#if IS_MD2G_MEM_CONFIG_SUPPORT_CHIP
/*================================*\
|* md2g_mem_config                *|
\*================================*/
#define SW_TYPE0                 ((APBADDR32)(L1_BASE_MADDR_MD2G_MEM_CONFG+0x0100))     /* Corresponding mtcmos domain and sram must be active when sw_type is updated */
/* --------------------------------------------------------------------------------------------------------------------- */
#endif

#if IS_CHIP_TK6291 && IS_TK6291_HW_BUG_SW_WORKAROUND_SUPPORT
/*================================*\
|* md2g_mbist_config              *|
\*================================*/
/*
   0x1000+(22)*4 = 0x1058
   0x1000+(23)*4 = 0x105C
   0x1000+(24)*4 = 0x1060
   0x1000+(25)*4 = 0x1064
   0x1000+(26)*4 = 0x1068
   0x1000+(27)*4 = 0x106C
   0x1000+(34)*4 = 0x1088
   0x1000+(35)*4 = 0x108C
*/
#define DELSEL(n)                ((APBADDR32)(L1_BASE_MADDR_MD2G_MBIST_CONFG+0x1000+(n)*4))
/* --------------------------------------------------------------------------------------------------------------------- */
#endif

#endif /* _L1D_REG_H_ */

