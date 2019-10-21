#!/usr/bin/perl
#
#  Copyright Statement:
#  --------------------
#  This software is protected by Copyright and the information contained
#  herein is confidential. The software may not be copied and the information
#  contained herein may not be used or disclosed except with the written
#  permission of MediaTek Inc. (C) 2006
#
#  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
#  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
#  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
#  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
#  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
#  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
#  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
#  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
#  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
#  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
#  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
#  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
#
#  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
#  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
#  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
#  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
#  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
#
#  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
#  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
#  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
#  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
#  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
#
#*****************************************************************************
#*
#* Filename:
#* ---------
#*   FileInfoParser.pm
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This module collects the dsp bin base address and return. User: Append2.pl
#*       
#*
#* Author:
#* -------
#*   Carl Kao (mtk08237)
#*
#****************************************************************************/
use strict;
BEGIN { push @INC, './pcore/tools/', './common/tools/MemoryUtility/' }  # add additional library path         
use SymFileParser;
use sysGenUtility;

package Parsing_DSP_array;


return 1;


my $VERNO = " u0.03";
            # u0.03 , 2015/01/19,  Memory Utility Refinement
            # u0.02 , 2014/11/03,  Return 0xCDCDCDAA for pcore only load
            # u0.01 , 2014/10/29,  Initial revision

sub getDSPsymbol{

my $MAIN_SYM_FILE = shift;
my $FLAG_SYM_NAME = shift;
my $SYM_NAME = shift;
my $INFO_MAKE_FILE = shift;


        my %CmplOption;
        my %relOption;

        BuildInfo::Parse_InfoMakeLog($INFO_MAKE_FILE,\%CmplOption,\%relOption);
        if(BuildInfo::exist(BuildOPT::CMPL, "__PCORE_ONLY__"))
        {
            print "it is pcore only load!\n";
            return (0xCDCDCDAA, 0x0);
        }


        SymFileParser::ParseSYM($MAIN_SYM_FILE);


        my  $symbol_ref = SymFileParser::GetSymbol();

        if( defined $symbol_ref->{$FLAG_SYM_NAME} && 
            defined $symbol_ref->{$SYM_NAME} )
        {
            #print   map {$_." "} @{$symbol_ref->{$SYM_NAME}};
            #print "\n";

            my $addr = hex(@{$symbol_ref->{$SYM_NAME}}[Symbol::Addr]);
            my $size = hex(@{$symbol_ref->{$SYM_NAME}}[Symbol::Size]);

            $addr -= (&sysUtil::GetCacheablePrefix()) if ($addr >= &sysUtil::GetCacheablePrefix());

            return ($addr, $size);

        }
        else
        {
            #print "NO~~\n";
            return (0xCDCDCDAA, 0x0);
        }

}
