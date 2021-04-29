#ifndef _IINT_H
    #define _IINT_H 1

    #include "icstd.h"

    #if IS_C99
        #include <stdbool.h>
        #include <stdint.h>

        typedef uint_least8_t u8;
        typedef uint_least16_t u16;
        typedef uint_least32_t u32;
        typedef uint_least64_t u64;
        typedef int_least8_t i8;
        typedef int_least16_t i16;
        typedef int_least32_t i32;
        typedef int_least64_t i64;
        #define U8_MAX UINT_LEAST8_MAX
        #define U16_MAX UINT_LEAST16_MAX
        #define U32_MAX UINT_LEAST32_MAX
        #define U64_MAX UINT_LEAST64_MAX
        #define I8_MAX INT_LEAST8_MAX
        #define I8_MIN INT_LEAST8_MIN
        #define I16_MAX INT_LEAST16_MAX
        #define I16_MIN INT_LEAST16_MIN
        #define I32_MAX INT_LEAST32_MAX
        #define I32_MIN INT_LEAST32_MIN
        #define I64_MAX INT_LEAST64_MAX
        #define I64_MIN INT_LEAST64_MIN
    #else
        #include <limits.h>

        #if UCHAR_MAX >= 0xFF
            #define U8_MAX UCHAR_MAX
            #define I8_MAX SCHAR_MAX
            #define I8_MIN SCHAR_MIN
            typedef unsigned char u8;
            typedef signed char i8;
        #elif USHRT_MAX >= 0xFF
            #define U8_MAX USHRT_MAX
            #define I8_MAX SHRT_MAX
            #define I8_MIN SHRT_MIN
            typedef unsigned short u8;
            typedef short i8;
        #elif UINT_MAX >= 0xFF
            #define U8_MAX UINT_MAX
            #define I8_MAX INT_MAX
            #define I8_MIN INT_MIN
            typedef unsigned u8;
            typedef int i8;
        #elif ULONG_MAX >= 0xFF
            #define U8_MAX ULONG_MAX
            #define I8_MAX LONG_MAX
            #define I8_MIN LONG_MIN
            typedef unsigned long u8;
            typedef long i8;
        #else
            #ifndef NO_ERRS
                #error No u8 and i8!
            #else
                #warning No u8 and i8!
            #endif
        #endif
        #if UCHAR_MAX >= 0xFFFF
            #define U16_MAX UCHAR_MAX
            #define I16_MAX SCHAR_MAX
            #define I16_MIN SCHAR_MIN
            typedef unsigned char u16;
            typedef signed char i16;
        #elif USHRT_MAX >= 0xFFFF
            #define U16_MAX USHRT_MAX
            #define I16_MAX SHRT_MAX
            #define I16_MIN SHRT_MIN
            typedef unsigned short u16;
            typedef short i16;
        #elif UINT_MAX >= 0xFFFF
            #define U16_MAX UINT_MAX
            #define I16_MAX INT_MAX
            #define I16_MIN INT_MIN
            typedef unsigned u16;
            typedef int i16;
        #elif ULONG_MAX >= 0xFFFF
            #define U16_MAX ULONG_MAX
            #define I16_MAX LONG_MAX
            #define I16_MIN LONG_MIN
            typedef unsigned long u16;
            typedef long i16;
        #else
            #ifndef NO_ERRS
                #error No u16 and i16!
            #else
                #warning No u16 and i16!
            #endif
        #endif
        #if UCHAR_MAX >= 0xFFFFFFFF
            #define U32_MAX UCHAR_MAX
            #define I32_MAX SCHAR_MAX
            #define I32_MIN SCHAR_MIN
            typedef unsigned char u32;
            typedef signed char i32;
        #elif USHRT_MAX >= 0xFFFFFFFF
            #define U32_MAX USHRT_MAX
            #define I32_MAX SHRT_MAX
            #define I32_MIN SHRT_MIN
            typedef unsigned short u32;
            typedef short i32;
        #elif UINT_MAX >= 0xFFFFFFFF
            #define U32_MAX UINT_MAX
            #define I32_MAX INT_MAX
            #define I32_MIN INT_MIN
            typedef unsigned u32;
            typedef int i32;
        #elif ULONG_MAX >= 0xFFFFFFFF
            #define U32_MAX ULONG_MAX
            #define I32_MAX LONG_MAX
            #define I32_MIN LONG_MIN
            typedef unsigned long u32;
            typedef long i32;
        #else
            #ifndef NO_ERRS
                #error No u32 and i32!
            #else
                #warning No u32 and i32!
            #endif
        #endif
        #if UCHAR_MAX >= 0xFFFFFFFFUL
            #define U64_MAX UCHAR_MAX
            #define I64_MAX SCHAR_MAX
            #define I64_MIN SCHAR_MIN
            typedef unsigned char u64;
            typedef signed char i64;
        #elif USHRT_MAX >= 0xFFFFFFFFUL
            #define U64_MAX USHRT_MAX
            #define I64_MAX SHRT_MAX
            #define I64_MIN SHRT_MIN
            typedef unsigned short u64;
            typedef short i64;
        #elif UINT_MAX >= 0xFFFFFFFFUL
            #define U64_MAX UINT_MAX
            #define I64_MAX INT_MAX
            #define I64_MIN INT_MIN
            typedef unsigned u64;
            typedef int i64;
        #elif ULONG_MAX >= 0xFFFFFFFFUL
            #define U64_MAX ULONG_MAX
            #define I64_MAX LONG_MAX
            #define I64_MIN LONG_MIN
            typedef unsigned long u64;
            typedef long i64;
        #else
            #ifndef NO_ERRS
                #error No u64 and i64!
            #else
                #warning No u64 and i64!
            #endif
        #endif
        #ifdef bool
            #undef bool
        #endif
        #ifdef true
            #undef true
        #endif
        #ifdef false
            #undef false
        #endif
        typedef enum e_bool {false, true} bool;
    #endif

    typedef unsigned short ushort;
    typedef unsigned uint;
    typedef unsigned char uchar;
    typedef unsigned long ulong;
    typedef signed char schar;
#endif
