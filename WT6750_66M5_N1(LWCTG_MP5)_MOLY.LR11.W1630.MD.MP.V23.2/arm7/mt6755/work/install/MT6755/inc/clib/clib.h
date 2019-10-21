#ifndef __CLIB_H__
#define __CLIB_H__

#ifdef ENABLE_BACKTRACE
void print_backtrace(int depth);
#endif
int print(const char *fmt, ...);

#endif  /* end of __UT_LIBC_H__ */

