#ifndef __TCM_CONFIG_H__
#define __TCM_CONFIG_H__

/* Define for ATCM size */
#define ARM_TCM_SIZE_0    (128 * 1024)

/* Define for BTCM size */
#define ARM_TCM_SIZE_1    (256 * 1024)

/* Upper bound of TCM total size. should be power of 2 */
#define ARM_TCM_SIZE_UB   (512 * 1024)

/* Number of SRAM of TCM */
#define ARM_TCM_SRAM_NUM  (64)

/* L1 core L2SRAM size */
#define L2SRAM_SIZE_UB    (512 * 1024)

#endif
