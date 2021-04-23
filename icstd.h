/* This file allows you to determine the version of the C programming language at compilation. Create by Kutlahmetov Iskander, 2021 */
#ifndef _ICSTD_H
    #define _ICSTD_H 1

    #ifdef IS_C89
        #undef IS_C89
    #endif
    #ifdef IS_C95
        #undef IS_C95
    #endif
    #ifdef IS_C99
        #undef IS_C99
    #endif
    #ifdef IS_C11
        #undef IS_C11
    #endif
    #ifdef IS_C17
        #undef IS_C17
    #endif
    #ifdef __STDC__
        #define IS_C89 1
    #else
        #define IS_C89 0
    #endif
    #ifdef __STDC_VERSION__
        #if __STDC_VERSION__ >= 199409L
            #define IS_C95 1
        #else
            #define IS_C95 0
        #endif
        #if __STDC_VERSION__ >= 199901L
            #define IS_C99 1
        #else
            #define IS_C99 0
        #endif
        #if __STDC_VERSION__ >= 201112L
            #define IS_C11 1
        #else
            #define IS_C11 0
        #endif
        #if __STDC_VERSION__ >= 201710L
            #define IS_C17 1
        #else
            #define IS_C17 0
        #endif
    #else
        #define IS_C95 0
        #define IS_C99 0
        #define IS_C11 0
        #define IS_C17 0
    #endif
#endif /* _ICSTD_H */
