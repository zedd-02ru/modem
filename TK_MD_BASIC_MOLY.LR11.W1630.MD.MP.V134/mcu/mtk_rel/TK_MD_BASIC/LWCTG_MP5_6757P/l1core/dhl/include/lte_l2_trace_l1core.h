#ifndef L1TRC_L2_LTE_COPRO_DRV_L1CORE_DEF_H
#define L1TRC_L2_LTE_COPRO_DRV_L1CORE_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_DRV_WARN(v1) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x0045 | ((short)(v1) << 16));\
	} while(0)
#else
	#define L2_DRV_WARN(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_DRV_INFO(v1, v2, v3, v4) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_4_word(0x0145 | ((short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define L2_DRV_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_DRV_INFO_2(v1, v2) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x0245 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define L2_DRV_INFO_2(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_DRV_INFO_3(v1, v2, v3) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_3_word(0x0345 | ((short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define L2_DRV_INFO_3(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_DRV_ERR_3(v1, v2, v3) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_3_word(0x0445 | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define L2_DRV_ERR_3(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_DRV_ERR_4(v1, v2, v3, v4) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_4_word(0x0545 | ((short)(v1) << 16), (long)(v2), (long)(v3), (long)(v4));\
	} while(0)
#else
	#define L2_DRV_ERR_4(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_SHOW_ERR_REG(v1, v2, v3) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_3_word(0x0645 | ((short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define L2_SHOW_ERR_REG(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_EVT_NOT_SUPPORT(v1, v2) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x0745 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define L2_EVT_NOT_SUPPORT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_LMAC_INIT_FAIL(v1) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x0845 | ((short)(v1) << 16));\
	} while(0)
#else
	#define L2_LMAC_INIT_FAIL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_LMAC_RAR_CB_FAIL(v1) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x0945 | ((short)(v1) << 16));\
	} while(0)
#else
	#define L2_LMAC_RAR_CB_FAIL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_LMAC_EAR_CB_FAIL(v1) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x0A45 | ((short)(v1) << 16));\
	} while(0)
#else
	#define L2_LMAC_EAR_CB_FAIL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_LMAC_UL_EVT_CB_FAIL(v1, v2) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x0B45 | ((short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define L2_LMAC_UL_EVT_CB_FAIL(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_LMAC_DL_EVT_CB_FAIL(v1, v2) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x0C45 | ((short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define L2_LMAC_DL_EVT_CB_FAIL(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_LMAC_UL_ERR_CB_FAIL(v1, v2) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x0D45 | ((short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define L2_LMAC_UL_ERR_CB_FAIL(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_LMAC_DL_ERR_CB_FAIL(v1, v2, v3, v4) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_4_word(0x0E45 | ((short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define L2_LMAC_DL_ERR_CB_FAIL(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_LMAC_UL_ERR(v1, v2) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x0F45 | ((short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define L2_LMAC_UL_ERR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_LMAC_DL_ERR(v1, v2, v3, v4) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_4_word(0x1045 | ((short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define L2_LMAC_DL_ERR(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_LMAC_DL_ERR3_DUMP(v1, v2) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x1145 | ((short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define L2_LMAC_DL_ERR3_DUMP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_LMAC_GENERAL_ERR(v1) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x1245 | ((short)(v1) << 16));\
	} while(0)
#else
	#define L2_LMAC_GENERAL_ERR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_LMAC_UL_UNDERRUN_WARN(v1) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x1345 | ((short)(v1) << 16));\
	} while(0)
#else
	#define L2_LMAC_UL_UNDERRUN_WARN(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_DRV_KT_SET(v1, v2, v3, v4) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_4_word(0x1445 | ((short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define L2_DRV_KT_SET(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_DRV_KT_READ(v1, v2, v3, v4) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_4_word(0x1545 | ((short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define L2_DRV_KT_READ(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_DRV_INIT(v1, v2) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x1645 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define L2_DRV_INIT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_LMAC_UL_TRG(v1) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x1745 | ((short)(v1) << 16));\
	} while(0)
#else
	#define L2_LMAC_UL_TRG(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_COPRO_POW_DOWN(v1, v2) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x1845 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define L2_COPRO_POW_DOWN(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L2_COPRO_POW_ON(v1, v2) do {\
		if(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1 && (L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x1945 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define L2_COPRO_POW_ON(v1, v2)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_L2_DRV_WARN(short v1);
void L1TRC_Send_L2_DRV_INFO(short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_L2_DRV_INFO_2(short v1, long v2);
void L1TRC_Send_L2_DRV_INFO_3(short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_L2_DRV_ERR_3(short v1, long v2, long v3);
void L1TRC_Send_L2_DRV_ERR_4(short v1, long v2, long v3, long v4);
void L1TRC_Send_L2_SHOW_ERR_REG(short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_L2_EVT_NOT_SUPPORT(short v1, long v2);
void L1TRC_Send_L2_LMAC_INIT_FAIL(short v1);
void L1TRC_Send_L2_LMAC_RAR_CB_FAIL(short v1);
void L1TRC_Send_L2_LMAC_EAR_CB_FAIL(short v1);
void L1TRC_Send_L2_LMAC_UL_EVT_CB_FAIL(short v1, unsigned long v2);
void L1TRC_Send_L2_LMAC_DL_EVT_CB_FAIL(short v1, unsigned long v2);
void L1TRC_Send_L2_LMAC_UL_ERR_CB_FAIL(short v1, unsigned long v2);
void L1TRC_Send_L2_LMAC_DL_ERR_CB_FAIL(short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_L2_LMAC_UL_ERR(short v1, unsigned long v2);
void L1TRC_Send_L2_LMAC_DL_ERR(short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_L2_LMAC_DL_ERR3_DUMP(short v1, unsigned long v2);
void L1TRC_Send_L2_LMAC_GENERAL_ERR(short v1);
void L1TRC_Send_L2_LMAC_UL_UNDERRUN_WARN(short v1);
void L1TRC_Send_L2_DRV_KT_SET(short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_L2_DRV_KT_READ(short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_L2_DRV_INIT(short v1, long v2);
void L1TRC_Send_L2_LMAC_UL_TRG(short v1);
void L1TRC_Send_L2_COPRO_POW_DOWN(short v1, long v2);
void L1TRC_Send_L2_COPRO_POW_ON(short v1, long v2);

void Set_L2_LTE_COPRO_DRV_L1CORE_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L2_LTE_COPRO_DRV_L1CORE()	(L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[0]==1)
#define ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()	(ChkL1ModFltr_L2_LTE_COPRO_DRV_L1CORE()&&((L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_Others()	(ChkL1ModFltr_L2_LTE_COPRO_DRV_L1CORE()&&((L2_LTE_COPRO_DRV_L1CORE_Trace_Filter[1]&0x02)!=0))
#define ChkL1MsgFltr_L2_DRV_WARN()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_DRV_INFO()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_DRV_INFO_2()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_DRV_INFO_3()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_DRV_ERR_3()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_DRV_ERR_4()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_SHOW_ERR_REG()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_EVT_NOT_SUPPORT()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_LMAC_INIT_FAIL()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_LMAC_RAR_CB_FAIL()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_LMAC_EAR_CB_FAIL()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_LMAC_UL_EVT_CB_FAIL()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_LMAC_DL_EVT_CB_FAIL()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_LMAC_UL_ERR_CB_FAIL()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_LMAC_DL_ERR_CB_FAIL()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_LMAC_UL_ERR()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_LMAC_DL_ERR()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_LMAC_DL_ERR3_DUMP()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_LMAC_GENERAL_ERR()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_LMAC_UL_UNDERRUN_WARN()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_DRV_KT_SET()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_DRV_KT_READ()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_DRV_INIT()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_LMAC_UL_TRG()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_COPRO_POW_DOWN()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()
#define ChkL1MsgFltr_L2_COPRO_POW_ON()	ChkL1ClsFltr_L2_LTE_COPRO_DRV_L1CORE_L2_LOG()


#endif