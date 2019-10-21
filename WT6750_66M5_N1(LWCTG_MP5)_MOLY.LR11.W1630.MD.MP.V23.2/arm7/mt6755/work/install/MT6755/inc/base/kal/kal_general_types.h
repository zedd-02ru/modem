#ifndef __KAL_GENERAL_TYPES__
#define __KAL_GENERAL_TYPES__

/*****************************************************************************
   * Type Definitions
 *****************************************************************************/
 
/* portable character for multichar character set */
typedef char                    kal_char;
/* portable wide character for unicode character set */
typedef unsigned short          kal_wchar;

/* portable 8-bit unsigned integer */
typedef unsigned char           kal_uint8;
/* portable 8-bit signed integer */
typedef signed char             kal_int8;
/* portable 16-bit unsigned integer */
typedef unsigned short int      kal_uint16;
/* portable 16-bit signed integer */
typedef signed short int        kal_int16;
/* portable 32-bit unsigned integer */
typedef unsigned int            kal_uint32;
/* portable 32-bit signed integer */
typedef signed int              kal_int32;

/* portable 64-bit unsigned integer */
typedef unsigned long long   kal_uint64;
/* portable 64-bit signed integer */
typedef signed long long     kal_int64;

/* boolean representation */
typedef enum 
{
    /* FALSE value */
    KAL_FALSE,
    /* TRUE value */
    KAL_TRUE
} kal_bool;

#ifndef NULL
#define NULL               0
#endif


#endif  /* end of __KAL_GENERAL_TYPES__ */

