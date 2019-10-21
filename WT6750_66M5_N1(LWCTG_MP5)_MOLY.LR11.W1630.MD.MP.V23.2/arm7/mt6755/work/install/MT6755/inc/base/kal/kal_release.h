#ifndef __KAL_RELEASE_H__
#define __KAL_RELEASE_H__

#include "base/kal/kal_general_types.h"
#include <base/kal/kal_debug.h>
#include <base/kal/exception.h>

/* standard C header files */
#include <string.h>
#include <stdio.h>


/* put in kal_public_api.h */
#define __ASSERT(expr) do                                              \
{                                                                      \
    kal_printf("Assert: (FILE:LINE) %s:%d, expr = " #expr "\r\n", __FILE__, __LINE__);                                \
    finish_failed();                                                   \
} while (0)

#define ASSERT_CTI(expr) do                                              \
{                                                                          \
    if (!(expr))                                                           \
    {                                                                      \
        arm7_exception(EX_REASON_CTI, (const kal_int8 *)0, -1, -1, 0, 0, 0);                                                  \
        __ASSERT(expr);                                                    \
    }                                                                      \
} while (0)

#define EXT_ASSERT(expr, arg1, arg2, arg3) do                              \
{                                                                          \
    if (!(expr))                                                           \
    {                                                                      \
        arm7_exception(EX_REASON_ASSERT, (const kal_int8 *)__FILE__, (kal_int32)__LINE__, -1, arg1, arg2, arg3);                                                  \
        __ASSERT(expr);                                                    \
    }                                                                      \
} while (0)

#define ASSERT(expr) do                                                    \
{                                                                          \
    if (!(expr))                                                           \
    {                                                                      \
        arm7_exception(EX_REASON_ASSERT, (const kal_int8 *)__FILE__, (kal_int32)__LINE__, -1, 0, 0, 0);                                                  \
        __ASSERT(expr);                                                    \
    }                                                                      \
} while (0)

#define ABORT(lr) do                                                       \
{                                                                          \
    arm7_exception(EX_REASON_ABORT, (const kal_int8 *)0, -1, lr, 0, 0, 0);                                                      \
    kal_printf("Abort: LR:0x%x\r\n", lr);                                  \
    finish_failed();                                                       \
} while (0)

#define DABORT(lr, far) ABORT(lr)
#define PABORT(lr, far) ABORT(lr)
#define UNDEF(lr) ABORT(lr)

#endif  /* end of __KAL_RELEASE_H__ */

