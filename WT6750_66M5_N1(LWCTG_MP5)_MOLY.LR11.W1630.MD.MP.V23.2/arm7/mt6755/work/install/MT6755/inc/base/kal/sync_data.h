#ifndef __SYNC_DATA_H__
#define __SYNC_DATA_H__

#if defined(ARM7EJS)

#define Data_Sync_Barrier()
#define Data_Mem_Barrier()

#else  /* CORTEXR4, CORTEXA9, or CORTEXA7 */

#include <mach/cp15.h>
#define Data_Sync_Barrier() cp15_drain_write_buffer()
#define Data_Mem_Barrier() cp15_data_memory_barrier()

#endif /* end of defined(ARM7EJS) */
#endif /* __SYNC_DATA_H__ */

