#ifndef __ISRENTRY_H__
#define __ISRENTRY_H__

#include <base/kal/kal_release.h>

typedef struct 
{
//	kal_uint32 vector;
	void (*lisr_handler) (kal_uint32);
	kal_char *description;
} lisr_entry;


#endif


