/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 * Filename:
 * ---------
 *   simctrl.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Driver header of LTE L1 ESL Simulation Controller
 * 
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 ****************************************************************************/
#ifndef __SIMCTRL_H__
#define __SIMCTRL_H__

#include <reg_base.h>

#define SIMCTRL_STOP_SIMULATION_REG    (BASE_ADDR_SIMCTRL + 0x00)
#define SIMCTRL_STOP_PARAMETER0_REG    (BASE_ADDR_SIMCTRL + 0x04)
#define SIMCTRL_STOP_PARAMETER1_REG    (BASE_ADDR_SIMCTRL + 0x08)
#define SIMCTRL_STOP_PARAMETER2_REG    (BASE_ADDR_SIMCTRL + 0x0C)

#define SIMCTRL_TESTCASENAME_CHAR_REG   (BASE_ADDR_SIMCTRL + 0x10)
#define SIMCTRL_TEST_CASE_START_REG    (BASE_ADDR_SIMCTRL + 0x14)
#define SIMCTRL_AXI_LOGGING_START_REG  (BASE_ADDR_SIMCTRL + 0x18)

#define SIMCTRL_TASKNAME_CHAR_REG       (BASE_ADDR_SIMCTRL + 0x20)
#define SIMCTRL_OUTPUTLOG_REG          (BASE_ADDR_SIMCTRL + 0x24)
#define SIMCTRL_CYCLECOUNT_REG         (BASE_ADDR_SIMCTRL + 0x28)
#define SIMCTRL_INSTRCOUNT_REG         (BASE_ADDR_SIMCTRL + 0x2C)
#define SIMCTRL_ICMISSCOUNT_REG        (BASE_ADDR_SIMCTRL + 0x30)
#define SIMCTRL_DCMISSCOUNT_REG        (BASE_ADDR_SIMCTRL + 0x34)

#define SIMCTRL_SIMULATION_DONE        (0x02 << 28)
#define SIMCTRL_AXI_LOGGING_START      (1) 
#define SIMCTRL_AXI_LOGGING_STOP       (0)
#define SIMCTRL_TESTCASE_START         (1)
#define SIMCTRL_TESTCASE_STOP          (0)

#define M_SIMCTRL_STOP_SIMULATION(cAUSE)  (*((volatile unsigned long int *) (SIMCTRL_STOP_SIMULATION_REG))) = (cAUSE)
#define M_SIMCTRL_SET_CYCLE_COUNT(cOUNT)  (*((volatile unsigned long int *) (SIMCTRL_CYCLECOUNT_REG))) = (cOUNT)
#define M_SIMCTRL_SET_INSTR_COUNT(cOUNT)  (*((volatile unsigned long int *) (SIMCTRL_INSTRCOUNT_REG))) = (cOUNT)
#define M_SIMCTRL_SET_ICMISS_COUNT(cOUNT) (*((volatile unsigned long int *) (SIMCTRL_ICMISSCOUNT_REG))) = (cOUNT)
#define M_SIMCTRL_SET_DCMISS_COUNT(cOUNT) (*((volatile unsigned long int *) (SIMCTRL_DCMISSCOUNT_REG))) = (cOUNT)
#define M_SIMCTRL_OUTPUT_TASK_LOG()       (*((volatile unsigned long int *) (SIMCTRL_OUTPUTLOG_REG))) = (1)
#define M_SIMCTRL_SET_AXI_LOGGING(sTART)  (*((volatile unsigned long int *) (SIMCTRL_AXI_LOGGING_START_REG))) = (sTART)
#define M_SIMCTRL_APPEND_TASKNAME(c)      (*((volatile unsigned long int *) (SIMCTRL_TASKNAME_CHAR_REG))) = (c)
#define M_SIMCTRL_APPEND_TESTCASENAME(c)  (*((volatile unsigned long int *) (SIMCTRL_TESTCASENAME_CHAR_REG))) = (c)
#define M_SIMCTRL_SET_TESTCASE_START(sTART)  (*((volatile unsigned long int *) (SIMCTRL_TEST_CASE_START_REG))) = (sTART)

#endif