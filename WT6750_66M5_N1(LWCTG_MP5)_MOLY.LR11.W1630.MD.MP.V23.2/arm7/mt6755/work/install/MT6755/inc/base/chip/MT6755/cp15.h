#ifndef __CP_15_H__
#define __CP_15_H__

#include <base/kal/kal_release.h>

#define CPU_CORTEX_R4_ID		(0xC14)
#define CPU_CORTEX_A9_ID		(0xC09)
#define CPU_CORTEX_A7_ID		(0xC07)

/************************************
  * General (I/D-Cache) cache related. 
  ***********************************/
extern kal_uint32 cp15_read_cache_type(void);
extern void cp15_invalidate_idcache_single(kal_uint32 mva);
extern void cp15_invalidate_idcache_region(kal_uint32 addr, kal_uint32 nr_cache);
extern void		cp15_set_idcache_replacement_policy(void);

/************************************
  * D-Cache related. 
  ***********************************/
extern void cp15_enable_dcache(void);
extern void cp15_disable_dcache(void);
extern void cp15_invalidate_dcache(void);
extern void cp15_invalidate_dcache_single(kal_uint32 mva);
extern void cp15_clean_dcache_single(kal_uint32 mva);
extern void cp15_drain_write_buffer(void);
extern void cp15_data_memory_barrier(void);
extern void cp15_invalidate_dcache_region(kal_uint32 addr, kal_uint32 nr_cache);
extern void cp15_clean_dcache_region(kal_uint32 addr, kal_uint32 nr_cache);
extern void cp15_clean_and_invalidate_dcache_region(kal_uint32 addr, kal_uint32 nr_cache); /* copy */
extern void	cp15_clean_dcache(void);
extern kal_uint32 cp15_is_dcache_enabled(void);
extern void cp15_lockdown_dcache(kal_uint32 L);


/************************************
  * I-Cache related. 
  ***********************************/
extern void cp15_enable_icache(void);
extern void cp15_disable_icache(void);
extern void cp15_invalidate_icache(void);
extern void cp15_invalidate_icache_single(kal_uint32 mva);
extern void cp15_invalidate_icache_region(kal_uint32 addr, kal_uint32 nr_cache); /* copy */
extern kal_uint32 cp15_is_icache_enabled(void);
extern void cp15_lockdown_icache(kal_uint32 L);
extern void cp15_prefetch_icache_line(kal_uint32 mva);

/************************************
  * CPU ID
  ***********************************/
extern kal_uint32 cp15_get_cpu_id(void);
extern void cp15_enable_lil(void);
extern void cp15_disable_lil(void);
extern void cp15_enter_low_pwr_state(void);

/*************************************
 *  CR4 MPU Related
 *************************************/
extern void cp15_mpu_set_rgn_index(kal_uint32);
extern void cp15_mpu_set_rgn_addr(kal_uint32);
extern void cp15_mpu_set_rgn_accctrl(kal_uint32);
extern void cp15_mpu_set_rgn_size(kal_uint32);
extern void cp15_mpu_set_rgn_enable(kal_uint32);
extern void cp15_mpu_set_subregion_disable(kal_uint32);
extern void cp15_mpu_set_bg_region_enable(void);
extern void cp15_mpu_set_bg_region_disable(void);


/*************************************
 * ARM PMU Related
 *************************************/
extern void cp15_write_context_id(kal_uint32);
extern kal_uint32 cp15_read_context_id(void);
extern kal_uint32 cp15_PMU_read_control_register(void);
extern void cp15_PMU_write_control_register(kal_uint32);
extern void cp15_PMU_write_counter_enable_set(kal_uint32);
extern kal_uint32 cp15_PMU_read_counter_enable_set(void);
extern void cp15_PMU_write_counter_enable_clear(kal_uint32);
extern kal_uint32 cp15_PMU_read_counter_overflow_status(void);
extern void cp15_PMU_write_event_selection(kal_uint32, kal_uint32);
extern kal_uint32 cp15_PMU_read_cycle_counter(void);
extern void cp15_PMU_write_cycle_counter(kal_uint32);
extern kal_uint32 cp15_PMU_read_event_counter(kal_uint32);
extern void cp15_PMU_write_event_counter(kal_uint32, kal_uint32);


/*************************************
 * ARM TCM Related
 *************************************/
extern kal_uint32 cp15_get_atcm_base_addr(void);
extern kal_uint32 cp15_get_btcm_base_addr(void);
extern void cp15_disable_atcm(void);
extern void cp15_disable_btcm(void);
extern void cp15_enable_atcm(void);
extern void cp15_enable_btcm(void);
extern kal_uint32 cp15_get_atcm_ctrl_reg_value(void);
extern kal_uint32 cp15_get_btcm_ctrl_reg_value(void);
extern void cp15_config_atcm_ctrl_reg_value(kal_uint32);
extern void cp15_config_btcm_ctrl_reg_value(kal_uint32);
extern kal_uint32 cp15_MPU_RBAR(kal_uint32);
extern kal_uint32 cp15_MPU_RSER(kal_uint32);
extern kal_uint32 cp15_MPU_RACR(kal_uint32);
extern void cp15_MPU_force_config(kal_uint32, kal_uint32, kal_uint32, kal_uint32);


#endif /* end of __CP_15_H__ */
