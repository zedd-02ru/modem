#ifndef __KAL_DEBUG_H__
#define __KAL_DEBUG_H__

	extern kal_int32 puts(const kal_char *s);
	extern kal_char *gets(kal_char *s);
	extern kal_int32 getchar_nb(void);
	extern kal_int32 putchar_b(kal_int32 c);
    extern int print(const char *fmt, ...);
	
    #define kal_printf( string_to_be_printed...) print( string_to_be_printed)
#ifdef ENABLE_BACKTRACE
    #define kal_print_backtrack() print_backtrace(0)
#endif

#endif /* end of __KAL_DEBUG_H__ */

