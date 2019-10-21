#ifndef __DRV_UART_H__
#define __DRV_UART_H__

#include <base/drv/drv_common.h>
#include <mach/basereg.h>
#include <mach/irqid.h>

/* UART Interrupt Vector Definition */

#if defined(MT6291) || defined(MT6755) || defined(MT6797) || defined(MT6757)
#define UART_DUMMY_IRQID		127
#if defined(CORTEXR4)
#define UART_MD_INTR_ID			MD_IRQID_MDUART
#define UART_IDC_INTR_ID			MD_IRQID_IDC2ARM
#define UART_SHARE0_INTR_ID		MD_IRQID_PERIUART0
#define UART_SHARE1_INTR_ID		MD_IRQID_PERIUART1
#define UART_HDMA_INTR_ID			MD_IRQID_MDGDMA2
#define UART_VDMA_INTR_ID			MD_IRQID_MDGDMA3
#define UART_AP_INTR_ID			UART_DUMMY_IRQID
#elif defined(CORTEXA9)||defined(CORTEXA7)
#define UART_AP_INTR_ID			(AP_IRQID_UART_AP + 32)
#define UART_SHARE0_INTR_ID		(AP_IRQID_UART_SH0 + 32)
#define UART_SHARE1_INTR_ID		(AP_IRQID_UART_SH1 + 32)
#define UART_HDMA_INTR_ID			(AP_IRQID_GDMA2 + 32)
#define UART_VDMA_INTR_ID			(AP_IRQID_GDMA3 + 32)
#define UART_MD_INTR_ID			UART_DUMMY_IRQID
#define UART_IDC_INTR_ID			UART_DUMMY_IRQID
#elif defined(ARM7EJS)
#define UART_IDC_INTR_ID			UART_DUMMY_IRQID
#define UART_AP_INTR_ID			UART_DUMMY_IRQID
#define UART_MD_INTR_ID			ARM7_IRQID_UART_MD
#define UART_SHARE0_INTR_ID             ARM7_IRQID_UART_SH0
#define UART_SHARE1_INTR_ID             ARM7_IRQID_UART_SH1
#define UART_HDMA_INTR_ID               ARM7_IRQID_MDGDMA2
#endif
#else   //MT6290 MT6595 MT6752
#if defined(ARM7EJS)
#define UART_MD_INTR_ID			ARM7_IRQID_UART_MD
#else
#define UART_MD_INTR_ID			MD_IRQID_MDUART
#endif
#define UART_AP_INTR_ID			(AP_IRQID_UART_AP + 32)
#define UART_IDC_INTR_ID		MD_IRQID_IDC2ARM

#if defined(CORTEXR4)
#define UART_SHARE0_INTR_ID		MD_IRQID_PERIUART0
#define UART_SHARE1_INTR_ID		MD_IRQID_PERIUART1
#define UART_HDMA_INTR_ID		MD_IRQID_MDGDMA2
#define UART_VDMA_INTR_ID		MD_IRQID_MDGDMA3
#elif defined(CORTEXA9)||defined(CORTEXA7)
#define UART_SHARE0_INTR_ID		(AP_IRQID_UART_SH0 + 32)
#define UART_SHARE1_INTR_ID		(AP_IRQID_UART_SH1 + 32)
#define UART_HDMA_INTR_ID		(MD_IRQID_MDGDMA2 + 32)
#define UART_VDMA_INTR_ID		(MD_IRQID_MDGDMA3 + 32)
#elif defined(ARM7EJS)
#define UART_SHARE0_INTR_ID             ARM7_IRQID_UART_SH0
#define UART_SHARE1_INTR_ID             ARM7_IRQID_UART_SH1
#define UART_HDMA_INTR_ID               ARM7_IRQID_MDGDMA2
#endif
#endif

/* UART FIFO Size*/
#if (CHIPID == 6291) || (CHIPID == 6755) || (CHIPID == 6797) || (CHIPID == 6757)
#define UART_RX_FIFO_SIZE 			(32)
#define UART_TX_FIFO_SIZE 			(32)
#else
#define UART_RX_FIFO_SIZE 			(24)
#define UART_TX_FIFO_SIZE 			(16)
#endif

#define VFIFO_SIZE_DEFAULT			(4096) //(1<<17)

/* UART Standard Output Port Definition */
#ifndef UART_REDIRECT
#define UART_REDIRECT				UART_MD
#endif

#ifndef UART_PRINT_MODE			
#define UART_PRINT_MODE			UART_POLLING
#endif

#define UART_PRINT_PORT 			UART_REDIRECT

/* UART Default Settings */
#define UART_BAUD_DEFN2(x) 		UART_BAUD_##x
#define UART_BAUD_DEFN(x) 			UART_BAUD_DEFN2(x)

#ifndef UART_CLOCK_MHZ
#if (CHIPID == 6291) || (CHIPID == 6755) || (CHIPID == 6797) || (CHIPID == 6757)
#define UART_CLOCK_MHZ				26
#else
#define UART_CLOCK_MHZ				BUS1X_CLOCK_MHZ 
#endif
#endif
#ifndef UART_BAUD
#define UART_BAUD 					115200
#endif

/* Default settings */
#define UART_HIGHSPEED_DEFAULT		UART_HIGHSPEED_X
#define UART_RATEFIX_DEFAULT			UART_RATEFIX_DIS
#define UART_BAUD_DEFAULT				UART_BAUD_DEFN(UART_BAUD)
#define UART_STOP_DEFAULT				UART_STOP_1
#define UART_PARITY_DEFAULT			UART_PARITY_NONE
#define UART_WORD_LENGTH_DEFAULT	UART_WORD_LENGTH_8
#define UART_FIFO_DEFAULT				UART_FIFO_ENABLE
#define UART_RX_FIFO_LVL_DEFAULT		UART_FCR_RFTL_12
#define UART_TX_FIFO_LVL_DEFAULT		UART_FCR_TFTL_0
#define UART_DMA_MODE_DEFAULT		UART_FCR_DMA0
#define UART_FLAGS_DEFAULT			UART_FLOW_NONE
#define UART_RX_TIMEOUT_DEFAULT		(3)

#define VFIFO_TRANSFER_SIZE_DEFAULT		(4096)
#define VFIFO_BURST_SIZE_DEFAULT			(BURST_SIZE_16B)	
#define VFIFO_BUS_WIDTH_DEFAULT			(BUS_WIDTH_4B)
#define VFIFO_FLUSHER_DEFAULT				(VPFF_FLUSHER_DEFAULT)
#define VFIFO_URGENT_COUNT_DEFAULT		(VFIFO_TRANSFER_SIZE_DEFAULT / 2)
#define VFIFO_ALERT_LEN_DEFAULT			(VFIFO_URGENT_COUNT_DEFAULT)
#define VFIFO_PROMOTION_TIMER_DEFAULT	(GDMA_PROMOTION_TIMER_DEFAULT)
#define VPORT_PROMOTION_TIMER_DEFAULT	(GDMA_PROMOTION_TIMER_DEFAULT)

#define HDMA_BURST_SIZE_DEFAULT			(HDMA_BURST_SIZE_16B)
#define HDMA_DEV_BUS_WIDTH_DEFAULT		(HDMA_DEV_BUS_WIDTH_1B)
#define HDMA_MEM_BUS_WIDTH_DEFAULT		(HDMA_MEM_BUS_WIDTH_4B)
#define HDMA_MODE_DEFAULT					(HDMA_BASIC_MODE)
#define HDMA_CKSUM_EN_DEFAULT			(HDMA_CKSUM_ON)
#define HDMA_CKSUM_MODE_DEFAULT			(HDMA_CKSUM_16B)

/* Register Address Definition */
#define UART_BASE_MD	   				BASE_ADDR_MDUART

#if 0   /* UART Test should change to #if 0 */
#if !(CHIPID == 6593)
#define UART_BASE_AP	   				BASE_ADDR_APUART
#define UART_BASE_SHARE1				BASE_ADDR_UART1
#endif
#define UART_BASE_SHARE0   				BASE_ADDR_UART0 //0x800A0000 for MT7118
#else
#if defined(BASE_ADDR_APUART)
#define UART_BASE_AP                    BASE_ADDR_APUART
#endif

#if (CHIPID == 6291) || (CHIPID == 6755) || (CHIPID == 6797) || (CHIPID == 6757)
#if defined(CORTEXR4) || defined(ARM7EJS)
#define UART_BASE_SHARE0   				BASE_ADDR_MDUART1
#define UART_BASE_SHARE1   				BASE_ADDR_MDUART2
#else
#define UART_BASE_SHARE0   				BASE_ADDR_APUART1
#if defined(BASE_ADDR_APUART2)
#define UART_BASE_SHARE1   				BASE_ADDR_APUART2
#endif
#endif
#else
#define UART_BASE_SHARE0   				BASE_ADDR_UART0 //0x800A0000 for MT7118
#if defined(BASE_ADDR_UART1)
#define UART_BASE_SHARE1				BASE_ADDR_UART1
#endif
#endif

#endif

#define	IDC_UART_BASE					BASE_ADDR_IDCUART //0xB6F27000


/* GDMA VFIFO registers */
#if defined(CORTEXR4)||defined(ARM7EJS) 
#define GDMA_BASE_ADDR				BASE_ADDR_MDGDMA
#else
#define GDMA_BASE_ADDR				BASE_ADDR_APGDMA
#endif

#define MDMISC_BASE				BASE_ADDR_MDPERIMISC	
#define APMISC_BASE				BASE_ADDR_APMISC

#define CFGCTL_BASE						BASE_ADDR_MDCFGAPB

#define UART_RBR(_b)				((_b)+0x0)
#define UART_THR(_b)				((_b)+0x0)
#define UART_DLL(_b)					((_b)+0x0)
#define UART_DLH(_b)				((_b)+0x4)
#define UART_IER(_b)					((_b)+0x4)   
#define UART_IIR(_b)					((_b)+0x8)
#define UART_FCR(_b)				((_b)+0x8)   
#define UART_EFR(_b)				((_b)+0x8)  /* Only when LCR = 0xBF */
#define UART_MCR(_b)				((_b)+0x10)
#define UART_MSR(_b)				((_b)+0x18)
#define UART_LCR(_b)					((_b)+0xc)
#define UART_LSR(_b)					((_b)+0x14)
#define UART_RXDMA(_b)		  		((_b)+0x4c)
#define UART_HIGHSPEED(_b)			((_b)+0x24)
#define UART_SAMPLE_COUNT(_b)		((_b)+0x28)
#define UART_SAMPLE_POINT(_b)		((_b)+0x2c)
#define UART_XON1(_b)		   		((_b)+0x10)	/* Only when LCR = 0xBF */
#define UART_XON2(_b)		   		((_b)+0x14)	/* Only when LCR = 0xBF */
#define UART_XOFF1(_b)		  		((_b)+0x18)	/* Only when LCR = 0xBF */
#define UART_XOFF2(_b)		  		((_b)+0x1c)	/* Only when LCR = 0xBF */
#define UART_RATEFIX_AD(_b)	 	((_b)+0x34)
#define UART_GUARD(_b)		 		((_b)+0x3c)
#define UART_ESCAPE_DAT(_b)	 	((_b)+0x40)
#define UART_ESCAPE_EN(_b)	 		((_b)+0x44)
#define UART_SLEEP_EN(_b)	 		((_b)+0x48)
#define UART_DMA_EN(_b)			((_b)+0x4c)
#define UART_RXTRI_AD(_b)	   		((_b)+0x50)
#if (CHIPID != 6291)
#define UART_RDT(_b)				((_b)+0x54)
#define UART_DMA_CTRL(_b)			((_b)+0x58)
#endif
#define UART_DUMMY(_b)				((_b)+0x5c)

#define UART_EFR_ENABLE			(0x10)		/* EFR[4]=1, Enable enhancement features */	
#define UART_EFR_AUTORTSCTS	 	(0x00c0)  	/* EFR[7]=1 AUTO CTS, EFR[6]=1 AUTO RTS */
#define UART_EFR_SWFLOWCTRLX1	(0x001a)
#define UART_EFR_SWFLOWCTRLRX1	(0x0012)
#define UART_EFR_SWFLOWCTRLTX1	(0x0018)
#define UART_EFR_SWFLOWCTRLX2	(0x0015)
#define UART_EFR_SWFLOWCTRLRX2	(0x0011)
#define UART_EFR_SWFLOWCTRLTX2	(0x0014)
#define UART_EFR_SWFLOWCTRLXALL	(0x001f)
#define UART_EFR_ALLOFF		 	(0x0000)

#define UART_IIR_MS				(0x00)
#define UART_IIR_NINT		   	(0x01)
#define UART_IIR_THR_EMPTY	  	(0x02)
#define UART_IIR_RX_RCV		 	(0x04)
#define UART_IIR_LS				(0x06)
#define UART_IIR_RX_TIMEOUT	(0x0c)
#define UART_IIR_SW_FLOW		(0x10)
#define UART_IIR_HW_FLOW		(0x20)

#define UART_RXDMA_ON		   	(0x0001)
#define UART_RXDMA_OFF			(0x0000)

#define UART_DEF_XON1		   	(0x11)
#define UART_DEF_XON2		   	(0x12)
#define UART_DEF_XOFF1		  	(0x13)
#define UART_DEF_XOFF2		  	(0x14)

/* fifo control register bits */
#define UART_FCR_RFTL_1  		(0x00)
#define UART_FCR_RFTL_6  		(0x40)
#define UART_FCR_RFTL_12 		(0x80)
#define UART_FCR_TFTL_0  		(0x00)
#define UART_FCR_TFTL_4  		(0x10)
#define UART_FCR_TFTL_8  		(0x20)
#define UART_FCR_TFTL_14  		(0x30)
#define UART_FCR_DMA0			(0x0)
#define UART_FCR_DMA1			(0x8)		
#define UART_FCR_CLRT			(0x4)
#define UART_FCR_CLRR			(0x2)
#define UART_FCR_FIFOE			(0x1)

/* interrupt enable register bits */
#define UART_IER_ERBFI			(0x01)
#define UART_IER_ETBEI			(0x02)
#define UART_IER_ELSI			(0x04)
#define UART_IER_RTSI			(0x40)
#define UART_IER_CTSI			(0x80)
#define UART_IER_XOFFI			(0x20)

/* line status register bits */
#define UART_LSR_DR	 			(0x01)		// data ready
#define UART_LSR_OE	 			(0x02)		// overrun error
#define UART_LSR_PE	 			(0x04)		// parity error
#define UART_LSR_FE	 			(0x08)		// framing error
#define UART_LSR_BI	 			(0x10)		// break interrupt
#define UART_LSR_THRE   			(0x20)		// transmitter holding register empty
#define UART_LSR_TEMT   			(0x40)		// transmitter register empty
#define UART_LSR_FIFOERR		(0x80)		// any error condition

/* modem status register bits */
#define UART_MSR_DCTS   		(0x01)		// delta clear to send
#define UART_MSR_DDSR   		(0x02)		// delta data set ready
#define UART_MSR_TERI   			(0x04)		// trailing edge ring indicator
#define UART_MSR_DDCD   		(0x08)		// delta data carrier detect
#define UART_MSR_CTS			(0x10)		// clear to send
#define UART_MSR_DSR			(0x20)		// data set ready
#define UART_MSR_RI	 			(0x40)		// ring indicator
#define UART_MSR_DCD			(0x80)		// data carrier detect

/* line control register bits */
#define UART_LCR_WLS0   		(0x01)		// word length select bit 0
#define UART_LCR_WLS1   		(0x02)		// word length select bit 1
#define UART_LCR_STB			(0x04)		// number of stop bits
#define UART_LCR_PEN			(0x08)		// parity enable
#define UART_LCR_EPS			(0x10)		// even parity select
#define UART_LCR_SP	 			(0x20)		// stick parity
#define UART_LCR_SB				(0x40)		// set break
#define UART_LCR_DLAB   			(0x80)		// divisor latch access bit


#if (CHIPID == 6291) || (CHIPID == 6755) || (CHIPID == 6797) || (CHIPID == 6757)
/* new added registers */
#define UART_FRACDIV_L(_b)          ((_b)+0x54)
#define UART_FRACDIV_M(_b)          ((_b)+0x58)
#define UART_FCR_RD(_b)             ((_b)+0x5c)
#define UART_FEATURE_SEL(_b)        ((_b)+0x9c)
#define UART_SLEEP_CTRL(_b)         ((_b)+0xB0)
#define UART_MISC_CTRL(_b)          ((_b)+0xB4)
#define UART_USE_DMA_ACK(_b)        ((_b)+0xB8)    


/* remapped registers */
#define UART_RE_DLL(_b)             ((_b)+0x90)
#define UART_RE_DLH(_b)             ((_b)+0x94)
#define UART_RE_EFR(_b)             ((_b)+0x98)
#define UART_RE_XON1(_b)            ((_b)+0xA0)
#define UART_RE_XON2(_b)            ((_b)+0xA4)
#define UART_RE_XOFF1(_b)           ((_b)+0xA8)
#define UART_RE_XOFF2(_b)           ((_b)+0xAC)


/* register bit fields */
#define UART_DMA_EN_RX_EN           (0x1<<0)
#define UART_DMA_EN_TX_EN           (0x1<<1)

#define UART_FEATURE_SEL_EN         (0x1<<0)

#define UART_SLEEP_CTRL_SLEEP_REQ   (0x1<<0)
#define UART_SLEEP_CTRL_SLEEP_ACK   (0x1<<1)
#define UART_SLEEP_CTRL_TOPSM_SEL   (0x1<<2)

#define UART_MISC_CTRL_CK_CG_DIS    (0x1<<0)
#define UART_MISC_CTRL_CLR_XOFF     (0x1<<1)

#define UART_RX_USE_DMA_ACK         (0x1<<0)
#define UART_TX_USE_DMA_ACK         (0x1<<1)
#endif

/* modem control register bits */
#define UART_MCR_DTR			(0x01)
#define UART_MCR_RTS			(0x02)
#define UART_MCR_LOOP			(0x10)
#define UART_MCR_XOFF			(0x80)

/*uart sleep control register*/
#define UART_SLEEP_REQ			(0x00)
#define UART_SLEEP_ACK			(0x01)
#define UART_TOPSM_SEL			(0x04)

#define VGDMA_START 			(10)
#define VGDMA_END				(13)

#define GDMA_VDCSR0			(GDMA_BASE_ADDR + 0x300)
#define GDMA_VPRGAR0			(GDMA_BASE_ADDR + 0x304)
#define GDMA_VFCTLR0			(GDMA_BASE_ADDR + 0x310)
#define GDMA_VFSR0				(GDMA_BASE_ADDR + 0x314)
#define GDMA_VFWPTR0			(GDMA_BASE_ADDR + 0x318)
#define GDMA_VFRPTR0			(GDMA_BASE_ADDR + 0x31C)

#define GDMA_VDCSR(_n)			(GDMA_VDCSR0 + (_n * 0x20))
#define GDMA_VPRGAR(_n)		(GDMA_VPRGAR0 + (_n * 0x20))
#define GDMA_VFCTLR(_n)			(GDMA_VFCTLR0 + (_n * 0x20))
#define GDMA_VFSR(_n)			(GDMA_VFSR0 + (_n * 0x20))
#define GDMA_VFWPTR(_n)		(GDMA_VFWPTR0 + (_n * 0x20))
#define GDMA_VFRPTR(_n)			(GDMA_VFRPTR0 + (_n * 0x20))


#if defined(CORTEXR4)||defined(ARM7EJS)
#define GDMA_VPORTR0			(0xBFE00000)
#else
#define GDMA_VPORTR0			(0xBEE00000)
#endif

#define GDMA_VPORTR(_n)		(GDMA_VPORTR0 + (_n * 0x1000))

#define GDMA_GPMTR0			(GDMA_BASE_ADDR + 0x410)
#define GDMA_VPMTR_MD			(GDMA_BASE_ADDR + 0x413)
#define GDMA_VPMTR_AP			(GDMA_BASE_ADDR + 0x421)

/* GDMA VFIFO register bits */
#define VDMA_START 				(0x00000001)
#define VDMA_STOP				(0x00000004)
#define VDMA_STAT				(0x00000008)
#define VPFF_EMPTY				(0x00000010)
#define VFF_URG					(0x00000008)
#define VFF_ALT					(0x00000004)
#define VFF_EMPTY				(0x00000002)
#define VFF_FULL					(0x00000001)

#define GDMA_GSWLBTMR 			(GDMA_BASE_ADDR + 0x510)
#define GDMA_SWLB_EN 			(0x1)
#define VDMA_SET_SWLB() 		DRV_WriteReg32(GDMA_GSWLBTMR, DRV_Reg32(GDMA_GSWLBTMR) | GDMA_SWLB_EN)
#define VDMA_CLR_SWLB() 		DRV_WriteReg32(GDMA_GSWLBTMR, DRV_Reg32(GDMA_GSWLBTMR) & ~GDMA_SWLB_EN)

/* HDMA registers */
#define GDMA_HDCSR(_n)			(GDMA_BASE_ADDR + 0x100 + (_n/2 * 0x4))
#define GDMA_HDSR				(GDMA_BASE_ADDR + 0x120)
#define GDMA_HDCPR				(GDMA_BASE_ADDR + 0x124)
#define GDMA_HDCTRR(_n)			(GDMA_BASE_ADDR + 0x140 + (_n * 0x20))
#define GDMA_HDC0R(_n)			(GDMA_BASE_ADDR + 0x144 + (_n * 0x20))
#define GDMA_HDC1R(_n)			(GDMA_BASE_ADDR + 0x148 + (_n * 0x20))
#define GDMA_HPRGA0R(_n)		(GDMA_BASE_ADDR + 0x14C + (_n * 0x20))
#define GDMA_HPRGA1R(_n)		(GDMA_BASE_ADDR + 0x150 + (_n * 0x20))
#define GDMA_HCCR(_n)			(GDMA_BASE_ADDR + 0x154 + (_n * 0x20))
#define GDMA_HDCPRN(_n)		(GDMA_BASE_ADDR + 0x158 + (_n * 0x20))
#if (CHIPID == 6291) || (CHIPID == 6755) || (CHIPID == 6797) || (CHIPID == 6757)
#define GDMA_GISAR_UART		(GDMA_BASE_ADDR + 0x608)					//GDMA_GISAR2
#define GDMA_GIMRK_UART		(GDMA_BASE_ADDR + 0x628)					//GDMA_GIMRK2
#else
#define GDMA_GISAR_UART		(GDMA_BASE_ADDR + 0x60C)					//GDMA_GISAR3
#define GDMA_GIMRK_UART		(GDMA_BASE_ADDR + 0x62C)					//GDMA_GIMRK3
#endif
#define HDMA_START_BIT			(0x1)
#define HDMA_STOP_BIT			(0x4)
#define HDMA_RESUME_BIT		    (0x2)

#define HDMA_STAT				(0x1)
#define HDMA_CONFIG_MASK		(0x3FFFF)
#define HDMA_RX_SEL_MASK        (0xC0000000)
#define HDMA_MODE_MASK(_n)	(0xFFFF << (16 *(_n %2)))

#if (CHIPID == 6291) || (CHIPID == 6755) || (CHIPID == 6797) || (CHIPID == 6757)
#if defined(CORTEXR4)
#define HDMA_INTR_CHL_MASK(_n)	(1<<(_n -2))
#else
#define HDMA_INTR_CHL_MASK(_n)	(1<<(_n -1))
#endif
#else
#define HDMA_INTR_CHL_MASK(_n)	(1<<(_n -4))
#endif

// VDMA register
#define VDMA_GISAR_UART		(GDMA_BASE_ADDR + 0x618)					//GDMA_GISAR6
#define VDMA_GIMRK_UART		(GDMA_BASE_ADDR + 0x638)					//GDMA_GIMRK6

/* MDMISC register */
#define MDMISC_MDGDMACTL		(MDMISC_BASE + 0x10)			

/* APMSIC register */
#define APMISC_APGDMACTL		(APMISC_BASE + 0x58)

/* CFGCTL register */
#define CFGCTL_BM_AP_BF2		(CFGCTL_BASE+0x800C)

typedef enum {
	UART_MD	=0,
	UART_AP,
	UART_SHARE0, 
	UART_SHARE1,
	IDC_UART
}drv_uart_port_t;

typedef enum {
    	UART_BAUD_110 = 1,
    	UART_BAUD_300,
   	UART_BAUD_1200,
    	UART_BAUD_2400,
    	UART_BAUD_4800,
    	UART_BAUD_9600,
   	UART_BAUD_19200,
    	UART_BAUD_38400,
    	UART_BAUD_57600,
    	UART_BAUD_115200,
    	UART_BAUD_230400,
    	UART_BAUD_460800,
    	UART_BAUD_921600,
	UART_BAUD_1500000,
	UART_BAUD_2000000,
	UART_BAUD_3000000,
	UART_BAUD_4000000,
	UART_BAUD_6000000
} drv_uart_baud_rate_t; 

#define UART_BAUD_MIN 	UART_BAUD_110
#define UART_BAUD_MAX 	UART_BAUD_6000000

typedef enum {
    UART_PARITY_NONE = 0,
    UART_PARITY_ODD = 1,
    UART_PARITY_EVEN = 3
} drv_uart_parity_t;

typedef enum {
    UART_STOP_1 = 0,
    UART_STOP_2
} drv_uart_stop_bits_t;

typedef enum {
    UART_WORD_LENGTH_5 = 0,
    UART_WORD_LENGTH_6,
    UART_WORD_LENGTH_7,
    UART_WORD_LENGTH_8
} drv_uart_word_length_t;

typedef enum {
    UART_NO_FIFO = 0,
    UART_FIFO_ENABLE,
    UART_VFIFO_ENABLE,
    UART_HDMA_ENABLE,
} drv_uart_fifo_t;

typedef enum {
	UART_HIGHSPEED_16 = 0,
	UART_HIGHSPEED_8,
	UART_HIGHSPEED_4,
	UART_HIGHSPEED_X,
} drv_uart_highspeed_t;

typedef enum {
	UART_RATEFIX_DIS = 0,
	UART_RATEFIX_EN = 1
} drv_uart_ratefix_t;

typedef enum{
	UART_CLR_RTO_HW = 0,
	UART_CLR_RTO_SW = 1
}drv_uart_clr_rto_t;

#define UART_FLOW_NONE          		(0)
#define UART_FLOW_CTS_TX        		(1<<7)
#define UART_FLOW_RTS_RX        		(1<<6)
#define UART_FLOW_XON1XOFF1_TX  	(1<<3)
#define UART_FLOW_XON2XOFF2_TX  	(1<<2)
#define UART_FLOW_XON1XOFF1_RX  	(1<<1)
#define UART_FLOW_XON2XOFF2_RX  	(1<<0)

#define VPFF_FLUSHER_ALWAYS_FLUSH			(0)
#define VPFF_FLUSHER_ALWAYS_DONT_FLUSH		(255)
#define VPFF_FLUSHER_DEFAULT					(0)
#define GDMA_ALWAYS_DONT_PROMOTE 			(255)
#define GDMA_ALWAYS_PROMOTE 					(0)

typedef struct {
	drv_uart_highspeed_t		highspeed;
	drv_uart_ratefix_t			ratefix;
   	drv_uart_baud_rate_t    	baudrate;            /* baudrate */
   	drv_uart_stop_bits_t   		stop;                   /* stop bits */
    	drv_uart_parity_t       		parity;                 /* parity */
    	drv_uart_word_length_t  	word_length;      /* word length */
    	drv_uart_fifo_t         		fifo_enable;        /* fifo enable */
    	kal_uint32				rx_fifo_lvl;		/* rx fifo trigger level*/
    	kal_uint32				tx_fifo_lvl;		/* tx fifo trigger level*/
    	kal_uint32				dma_mode;		/* dma mode*/
    	unsigned long       			flags;                   /* flow control */
    	kal_uint32				rx_timeout;		/* rx data timeout*/
	kal_uint32				sample_count;
	kal_uint32				sample_point;
	kal_uint32				sw_clr_rto;    /*  0: clear Rxtimeout status by hardwart; 1: clear Rx timeout status by SW.*/
} drv_uart_config_t;

#define UART_CONFIG_INIT(_highspeed,_ratefix,_baud, _stop, _parity, _word_length, _fifo, _rx_lvl, _tx_lvl, _dma, _flags, _timeout,_sw_clr_rto) \
    {_highspeed,_ratefix,_baud, _stop, _parity, _word_length, _fifo, _rx_lvl, _tx_lvl, _dma, _flags, _timeout,_sw_clr_rto}
#define UART_LCR_CONFIG_INIT(_parity,_word_length,_stop) \
	(_parity << 3) | (_stop << 2) | (_word_length)

typedef struct {
    	kal_uint8	   		*data;
    	volatile kal_int32  	put;
    	volatile kal_int32  	get;
    	kal_uint32      		len;
	kal_uint32		blocking;
} cbuf_t;

#define CBUF_INIT(_data, _len) \
    {_data, 1, 0, _len}

typedef enum {
	BURST_SIZE_1B   = 0,
	BURST_SIZE_2B   = 1,
	BURST_SIZE_4B   = 2,
	BURST_SIZE_8B   = 3,
	BURST_SIZE_16B  = 4,
	BURST_SIZE_32B  = 5,
	BURST_SIZE_64B  = 6,
	BURST_SIZE_128B = 7,    /* reserved */
} drv_uart_vfifo_burst_size_t;

typedef enum {
	BUS_WIDTH_1B    = 0,
	BUS_WIDTH_2B    = 1,
	BUS_WIDTH_4B    = 2,
	BUS_WIDTH_RESV  = 3,    /* reserved */
} drv_uart_vfifo_bus_width_t;

#define GDMA_PROMOTION_TIMER_DEFAULT		(255)

typedef struct {	
	kal_uint32					xfer_size;
	drv_uart_vfifo_burst_size_t		bst_size;
	drv_uart_vfifo_bus_width_t 		bus_width;
	
	kal_uint32					prog_addr;
	kal_uint32					flusher;
	kal_uint32					urg_cnt;
	kal_uint32					alert_len;

	kal_uint32					gdma_promotion_timer;
} drv_uart_vfifo_config_t;

#define VFIFO_CONFIG_INIT(_xfer, _bst, _bus, _prog, _f, _u, _a, _p) \
	{_xfer, _bst, _bus, _prog, _f, _u, _a, _p}

typedef enum{
	HDMA_BURST_SIZE_4B = 2,
	HDMA_BURST_SIZE_8B = 3,
	HDMA_BURST_SIZE_16B = 4,
	HDMA_BURST_SIZE_MAX,
}drv_uart_hdma_burst_size_t;

typedef enum{
	HDMA_DEV_BUS_WIDTH_1B = 0,
	HDMA_DEV_BUS_WIDTH_MAX,	
}drv_uart_hdma_dev_bus_width;

typedef enum{
	HDMA_MEM_BUS_WIDTH_1B = 0,
	HDMA_MEM_BUS_WIDTH_2B = 1,
	HDMA_MEM_BUS_WIDTH_4B = 2,
	HDMA_MEM_BUS_WIDTH_MAX,	
}drv_uart_hdma_mem_bus_width;

typedef enum{
	HDMA_LIST_MODE = 0,
	HDMA_BASIC_MODE = 1,
	HDMA_DESCRIPTOR_MODE = 2,	
}drv_uart_hdma_mode;

typedef enum{
	HDMA_CKSUM_OFF	= 0,
	HDMA_CKSUM_ON	= 1,
}drv_uart_hdma_cksum_en;

typedef enum{
	HDMA_CKSUM_12B = 0,
	HDMA_CKSUM_16B = 1,
}drv_uart_hdma_cksum_mode;

typedef struct{
	drv_uart_hdma_burst_size_t			bst_size;
	drv_uart_hdma_dev_bus_width 		dev_bus_width;
	drv_uart_hdma_mem_bus_width 		mem_bus_width;
	drv_uart_hdma_mode				mode;
	drv_uart_hdma_cksum_en			cksum_en;
	drv_uart_hdma_cksum_mode		cksum_mode;
}drv_uart_hdma_config_t;

#define HDMA_CONFIG_INIT(_bst, _devbus, _membus, _mode, _cksum_en,_cksum) \
	{ _bst, _devbus, _membus, _mode, _cksum_en, _cksum}

typedef enum{
	GDMA_MODE_HDMA = 0,
	GDMA_MODE_VDMA = 1,
}drv_uart_gdma_mode;

typedef struct {
    	kal_uint32 oe;
    	kal_uint32 pe;
    	kal_uint32 fe;
    	kal_uint32 bi;
} drv_uart_ls_count_t;

typedef enum {
    	UART_POLLING = 0,
    	UART_INTERRUPTS
} drv_uart_io_mode_t;

typedef enum {
    	E_UART_NOERR = 0,
    	E_UART_INVAL,
	E_UART_NOTSUP
} drv_uart_errno_t;

typedef struct drv_uart_funs drv_uart_funs;

typedef struct drv_uart 
{
	kal_char			port;
    	kal_char			init;
	kal_uint32			base;
   	drv_uart_io_mode_t    		io_mode;
 	drv_uart_config_t   		config;
	drv_uart_funs       			*funs;
    	drv_uart_ls_count_t 		ls;

    	kal_uint32		   		irq;            		/* irq number */
   	cbuf_t          				out_cbuf;
   	cbuf_t          				in_cbuf;

	kal_char            			dma_tx_ch;      /* DMA TX channel */
   	kal_char            			dma_rx_ch;      /* DMA RX channel */
	drv_uart_vfifo_config_t		tx_vfifo_config;
	drv_uart_vfifo_config_t		rx_vfifo_config;
	unsigned long 				vport_promotion_timer;

	//HDMA related 
	kal_bool					hdma_support;
	kal_char					hdma_tx_ch;
	kal_char					hdma_rx_ch;
	drv_uart_hdma_config_t	hdma_tx_config;
	drv_uart_hdma_config_t	hdma_rx_config;
} drv_uart_t;

struct drv_uart_funs
{
    	kal_int32 (*getc)(drv_uart_t *uart, kal_uint8 *c);
    	kal_int32 (*getc_nb)(drv_uart_t *uart, kal_uint8 *c);
    	kal_int32 (*putc)(drv_uart_t *uart, kal_uint8 c);
	drv_uart_errno_t (*set_baud)(drv_uart_t *uart, drv_uart_baud_rate_t baud);
};

#define UART_SET_CONFIG_UART_CONFIG		(0x0000)
#define UART_SET_CONFIG_TX_VFIFO_CONFIG	(0x0001)
#define UART_SET_CONFIG_RX_VFIFO_CONFIG	(0x0002)
#define UART_SET_CONFIG_TX_HDMA_CONFIG	(0x0003)
#define UART_SET_CONFIG_RX_HDMA_CONFIG	(0x0004)

#define UART_GET_CONFIG_UART_CONFIG		(0x1000)
#define UART_GET_CONFIG_TX_VFIFO_CONFIG	(0x1001)
#define UART_GET_CONFIG_RX_VFIFO_CONFIG	(0x1002)
#define UART_GET_CONFIG_TX_HDMA_CONFIG	(0x1003)
#define UART_GET_CONFIG_RX_HDMA_CONFIG	(0x1004)

/* uart ring buffer macro */
#define IS_BUFFER_FULL(_b) \
	((_b->get == 0 && _b->put == (_b->len-1)) || \
	(_b->get > 0 && _b->put == (_b->get-1)))
#define IS_BUFFER_EMPTY(_b) \
	((_b->put == 0 && _b->get == (_b->len-1)) || \
	(_b->put > 0 && _b->get == (_b->put-1)))

/* VFIFO commands */
#define VFIFO_CONFIG(_n,_xfer,_bst,_bus) \
	DRV_WriteReg32(GDMA_VDCSR(_n), ((_xfer << 16) | (_bst << 13) | (_bus << 4) ))
#define VFIFO_START(_n) \
	DRV_WriteReg32(GDMA_VDCSR(_n), DRV_Reg32(GDMA_VDCSR(_n)) | VDMA_START)
#define VFIFO_CONTROL(_n,_u,_f,_a) \
	DRV_WriteReg32(GDMA_VFCTLR(_n), (_u << 16) | (_f << 8) | (_a))
#define VFIFO_ADDRESS(_n,_a) \
	DRV_WriteReg32(GDMA_VPRGAR(_n), _a)
#define VFIFO_IS_ACTIVE(_n) \
	(DRV_Reg32(GDMA_VDCSR(_n)) & VDMA_STAT)
#define VDMA_INT_CLEAR_ALL() \
	(DRV_WriteReg32(VDMA_GISAR_UART, 0xFFFFFFFF))

/* VFIFO status */
#define VFIFO_COUNTER(_n) \
	(DRV_Reg32(GDMA_VFSR(_n)) >> 16)
#define VFIFO_IS_VP_EMPTY(_n) \
	(DRV_Reg32(GDMA_VFSR(_n)) & VPFF_EMPTY)
#define VFIFO_IS_URGENT(_n) \
	(DRV_Reg32(GDMA_VFSR(_n)) & VFF_URG)
#define VFIFO_IS_ALERT(_n) \
	(DRV_Reg32(GDMA_VFSR(_n)) & VFF_ALT)
#define VFIFO_IS_EMPTY(_n) \
	(DRV_Reg32(GDMA_VFSR(_n)) & VFF_EMPTY)
#define VFIFO_IS_FULL(_n) \
	(DRV_Reg32(GDMA_VFSR(_n)) & VFF_FULL)

/* VDMA Interrupt Related Macros*/
#define IS_VFF_URG_INTR(_val, _chl) \
	((_val) & ((1 << 16) << (_chl)))
#define IS_VDMA_RPE_INTR(_val, _chl) \
	((_val) & (1 << (_chl)))
#define VDMA_INTR_MASK_ALL() \
	(DRV_WriteReg32(VDMA_GIMRK_UART, 0xFFFFFFFF))
#define VDMA_INTR_UNMASK_ALL() \
	(DRV_WriteReg32(VDMA_GIMRK_UART, 0x0))
#define VDMA_VFF_URG_INTR_MASK(_chl) \
	DRV_WriteReg32(VDMA_GIMRK_UART, DRV_Reg32(VDMA_GIMRK_UART) | ((1 << 16) << (_chl)))
#define VDMA_VDMA_RPE_INTR_MASK(_chl) \
	DRV_WriteReg32(VDMA_GIMRK_UART, DRV_Reg32(VDMA_GIMRK_UART) | (1 << (_chl)))
#define VDMA_VFF_URG_INTR_UNMASK(_chl) \
	DRV_WriteReg32(VDMA_GIMRK_UART, DRV_Reg32(VDMA_GIMRK_UART) & ~((1 << 16) << (_chl)))
#define VDMA_VDMA_RPE_INTR_UNMASK(_chl) \
	DRV_WriteReg32(VDMA_GIMRK_UART, DRV_Reg32(VDMA_GIMRK_UART) & ~(1 << (_chl)))

/* HDMA commands */
#define HDMA_CONFIG_RX_SEL(_n, _v) \
    DRV_WriteReg32(GDMA_HDCTRR(_n), (DRV_Reg32(GDMA_HDCTRR(_n))& ~HDMA_RX_SEL_MASK)|((_v)&0x3)<<30)
    
#define HDMA_CONFIG(_n, _bst, _devbus, _membus) \
	DRV_WriteReg32(GDMA_HDCTRR(_n), (DRV_Reg32(GDMA_HDCTRR(_n)) & ~HDMA_CONFIG_MASK) | (_bst << 13) |( _devbus << 6) |(_membus << 4))
#define HDMA_MODE_CONFIG(_n, _cksum_en,_mode, _cksum) \
	DRV_WriteReg32(GDMA_HDCSR(_n), (DRV_Reg32(GDMA_HDCSR(_n)) & ~(HDMA_MODE_MASK(_n))) |(_cksum_en << (15 + (16 *(_n %2))))| (_mode << (9 + (16 *(_n %2)))) |(_cksum << (8 + (16 *(_n %2)))))
#define HDMA_BUF0_XFER_SIZE_CONFIG(_n, _xfer) \
	DRV_WriteReg32(GDMA_HDC0R(_n), (_xfer << 16))
#define HDMA_BUF1_XFER_SIZE_CONFIG(_n, _xfer) \
	DRV_WriteReg32(GDMA_HDC1R(_n), (_xfer << 16))
#define HDMA_BUF0_PROG_ADDR_CONFIG(_n, _addr) \
	DRV_WriteReg32(GDMA_HPRGA0R(_n), _addr)
#define HDMA_BUF1_PROG_ADDR_CONFIG(_n, _addr) \
	DRV_WriteReg32(GDMA_HPRGA1R(_n), _addr)
#define HDMA_BUF0_START(_n) \
	DRV_WriteReg32(GDMA_HDC0R(_n), DRV_Reg32(GDMA_HDC0R(_n)) | HDMA_START_BIT)
#define HDMA_BUF1_START(_n) \
	DRV_WriteReg32(GDMA_HDC1R(_n), DRV_Reg32(GDMA_HDC1R(_n)) | HDMA_START_BIT)
#define HDMA_BUF0_STOP(_n) \
	DRV_WriteReg32(GDMA_HDC0R(_n), DRV_Reg32(GDMA_HDC0R(_n)) | HDMA_STOP_BIT)
#define HDMA_BUF1_STOP(_n) \
	DRV_WriteReg32(GDMA_HDC1R(_n), DRV_Reg32(GDMA_HDC1R(_n)) | HDMA_STOP_BIT)	
#define HDMA_BUF0_RESUME(_n) \
	DRV_WriteReg32(GDMA_HDC0R(_n), DRV_Reg32(GDMA_HDC0R(_n)) | HDMA_RESUME_BIT)
#define HDMA_BUF1_RESUME(_n) \
	DRV_WriteReg32(GDMA_HDC1R(_n), DRV_Reg32(GDMA_HDC1R(_n)) | HDMA_RESUME_BIT)
#define HDMA_BUF0_IS_ACTIVE(_n) \
	(DRV_Reg32(GDMA_HDSR) & (HDMA_STAT << (_n)))
#define HDMA_BUF1_IS_ACTIVE(_n) \
	(DRV_Reg32(GDMA_HDSR) & (HDMA_STAT << (_n + 16)))
#define HDMA_CHANNEL_CUR_BUF(_n) \
	( (DRV_Reg32(GDMA_HDCPR) >> (_n)) & 0x1 )
#define HDMA_INT_CLEAR_ALL() \
	(DRV_WriteReg32(GDMA_GISAR_UART, 0xFFFFFFFF))

/* HDMA Interrupt Related Macros*/
#define IS_HDMA_DONE_INTR(_val, _chl) \
	( _val &  HDMA_INTR_CHL_MASK(_chl))
#define IS_HDMA_QE_INTR(_val, _chl) \
	( _val &  (HDMA_INTR_CHL_MASK(_chl) << 8))
#define IS_HDMA_LENERR_INTR(_val, _chl) \
	( _val &  (HDMA_INTR_CHL_MASK(_chl) << 16))
#define IS_HDMA_BD_CSERR_INTR(_val, _chl) \
	( _val &  (HDMA_INTR_CHL_MASK(_chl) << 24))
#define IS_HDMA_GPD_CSERR_INTR(_val, _chl) \
	( _val &  (HDMA_INTR_CHL_MASK(_chl) << 28))
#define HDMA_INTR_MASK_ALL() \
	(DRV_WriteReg32(GDMA_GIMRK_UART, 0xFFFFFFFF))
#define HDMA_INTR_UNMASK_ALL() \
	(DRV_WriteReg32(GDMA_GIMRK_UART, 0x0))
#define HDMA_DONE_INTR_MASK(_chl) \
	DRV_WriteReg32(GDMA_GIMRK_UART, DRV_Reg32(GDMA_GIMRK_UART) | HDMA_INTR_CHL_MASK(_chl))
#define HDMA_DONE_INTR_UNMASK(_chl) \
	DRV_WriteReg32(GDMA_GIMRK_UART, DRV_Reg32(GDMA_GIMRK_UART) & ~(HDMA_INTR_CHL_MASK(_chl)))
#define HDMA_QE_INTR_MASK(_chl) \
	DRV_WriteReg32(GDMA_GIMRK_UART, DRV_Reg32(GDMA_GIMRK_UART) | (HDMA_INTR_CHL_MASK(_chl) << 8))
#define HDMA_QE_INTR_UNMASK(_chl) \
	DRV_WriteReg32(GDMA_GIMRK_UART, DRV_Reg32(GDMA_GIMRK_UART) & ( ~(HDMA_INTR_CHL_MASK(_chl)) << 8))
#define HDMA_LENERR_INTR_MASK(_chl) \
	DRV_WriteReg32(GDMA_GIMRK_UART, DRV_Reg32(GDMA_GIMRK_UART) | (HDMA_INTR_CHL_MASK(_chl) << 16))
#define HDMA_LENERR_INTR_UNMASK(_chl) \
	DRV_WriteReg32(GDMA_GIMRK_UART, DRV_Reg32(GDMA_GIMRK_UART) & ( ~(HDMA_INTR_CHL_MASK(_chl)) << 16))
#define HDMA_BD_CSERR_INTR_MASK(_chl) \
	DRV_WriteReg32(GDMA_GIMRK_UART, DRV_Reg32(GDMA_GIMRK_UART) | (HDMA_INTR_CHL_MASK(_chl) << 24))
#define HDMA_BD_CSERR_INTR_UNMASK(_chl) \
	DRV_WriteReg32(GDMA_GIMRK_UART, DRV_Reg32(GDMA_GIMRK_UART) & ( ~(HDMA_INTR_CHL_MASK(_chl)) << 24))
#define HDMA_GPD_CSERR_INTR_MASK(_chl) \
	DRV_WriteReg32(GDMA_GIMRK_UART, DRV_Reg32(GDMA_GIMRK_UART) | (HDMA_INTR_CHL_MASK(_chl) << 28))
#define HDMA_GPD_CSERR_INTR_UNMASK(_chl) \
	DRV_WriteReg32(GDMA_GIMRK_UART, DRV_Reg32(GDMA_GIMRK_UART) & ( ~(HDMA_INTR_CHL_MASK(_chl)) << 28))
	
//May need to modify after discuss with designer 

typedef enum{
	MD_OWNED = 0,
	AP_OWNED = 1,
}drv_uart_shared_ip_owner_t;

#define MISC_SHARE_UART0_BIT	(0x2)
#define MISC_SHARE_UART1_BIT	(0xC)

/* MISC control commands */
#define MISC_CONFIG_UART_ACCESS(_mode, _bit) \
	DRV_WriteReg32(CFGCTL_BM_AP_BF2, (DRV_Reg32(CFGCTL_BM_AP_BF2) & (0xFFFF & ~( 1 << _bit) )) | ( MD_OWNED<< _bit))


// Macro for setting own bit
#define SET_MD_OWN_BIT(reg_addr, bit_offset, md_own_bit) \
            ((md_own_bit) ? (DRV_Reg32((reg_addr)) |= (1 << (0x10 + (bit_offset)))) : (DRV_Reg32((reg_addr)) &= (~(1 << (0x10 + (bit_offset))))))

#define SET_AP_OWN_BIT(reg_addr, bit_offset, ap_own_bit) \
            ((ap_own_bit) ? (DRV_Reg32((reg_addr)) |= (1 << (0x00 + (bit_offset)))) : (DRV_Reg32((reg_addr)) &= (~(1 << (0x00 + (bit_offset))))))

#define GET_MD_OWN_BIT(reg_addr, bit_offset) \
            ((DRV_Reg32((reg_addr)) >> (0x10 + (bit_offset))) & 1)

#define GET_AP_OWN_BIT(reg_addr, bit_offset) \
            ((DRV_Reg32((reg_addr)) >> (0x00 + (bit_offset))) & 1)


/* Exported global variable*/
extern unsigned long baud_table[];	

/* Exported global function*/
void drv_uart_reset(void);
#if (CHIPID == 6291)||(CHIPID == 6755) || (CHIPID == 6757)
#define UART_MODE_APUART2_TO_MDUART1  1
#define UART_MODE_MDUART1_TO_MDUART1  2
#define UART_MODE_MDUART2_TO_APUART1  3
#define UART_MODE_APUART1_TO_APUART1  4
#define UART_MODE_DEFAULT             0
#define UART_MODE_SEL_ADDR      0x93710100
void drv_uart_swith_gpio_mode(int switch_mode);
#endif

#endif  /* end of __DRV_UART_H__ */

