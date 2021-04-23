/* This file allows you to define the compiler at compilation. Create by Kutlahmetov Iskander, 2021 */
#ifndef _ICOMP_H
    #define _ICOMP_H 1

    /* Microsoft C Compiler */
    #ifdef IS_MCC
        #undef IS_MCC
    #endif
    #ifdef _MSC_VER
        #define IS_MCC 1
    #else
        #define IS_MCC 0
    #endif

    /* GCC (GNU C Comppiler) */
    #ifdef IS_GCC
        #undef IS_GCC
    #endif
    #ifdef __GNUC__
        #define IS_GCC 1
    #else
        #define IS_GCC 0
    #endif

    /* PCC (Portable C Complier) */
    #ifdef IS_PCC
        #undef IS_PCC
    #endif

    /* TCC (Tiny C Compiler) */
    #ifdef IS_TCC
        #undef IS_TCC
    #endif
    #ifdef __TINYC__
        #define IS_TCC 1
    #else
        #define IS_TCC 0
    #endif

    /* ARM C Compiler */
    #ifdef IS_ACC
        #undef IS_ACC
    #endif
    #ifdef __CC_ARM
        #define IS_ACC 1
    #else
        #define IS_ACC 0
    #endif

    /* Aztec C */
    #ifdef IS_AzCC
        #undef IS_AzCC
    #endif
    #if defined(AZTEC_C) || defined(__AZTEC_C__)
        #define IS_AzCC 1
    #else
        #define IS_AzCC 0
    #endif

    /* Borland (or Turbo) C Compiler */
    #ifdef IS_BCC
        `#undef IS_BCC
    #endif
    #if defined(__BORLANDC__) || defined(__CODEGEARC__)
        #define IS_BCC 1
    #else
        #define IS_BCC 0
    #endif

    /* CC65 */
    #ifdef IS_CC65
        #undef IS_CC65
    #endif
    #ifdef __CC65__
        #define IS_CC65 1
    #else
        #define IS_CC65 0
    #endif

    /* Clang */
    #ifdef IS_CLANG
        #undef IS_CLANG
    #endif
    #ifdef __clang__
        #define IS_CLANG 1
    #else
        #define IS_CLANG 0
    #endif

    /* Comeau C */
    #ifdef IS_ComeC
        #undef IS_ComeC
    #endif
    #ifdef __COMO__
        #define IS_ComeC 1
    #else
        #define IS_ComeC 0
    #endif

    /* Compaq C */
    #ifdef IS_CompC
        #undef IS_CompC
    #endif
    #ifdef __DECC
        #define IS_CompC 1
    #else
        #define IS_CompC 0
    #endif

    /* Convex C */
    #ifdef IS_ConvC
        #undef IS_ConvC
    #endif
    #ifdef __convexc__
        #define IS_ConvC 1
    #else
        #define IS_ConvC 0
    #endif

    /* Cray C */
    #ifdef IS_CrC
        #undef IS_CrC
    #endif
    #ifdef _CRAYC
        #define IS_CrC 1
    #else
        #define IS_CrC 0
    #endif

    /* DICE C */
    #ifdef IS_DICEC
        #undef IS_DICEC
    #endif
    #ifdef _DICE
        #define IS_DICEC 1
    #else
        #define IS_DICEC 0
    #endif

    /* DMC (Digital Mars C Compiler) */
    #ifdef IS_DMC
        #undef IS_DMC
    #endif
    #ifdef __DMC__
        #define IS_DMC 1
    #else
        #define IS_DMC 0
    #endif

    /* DJGPP (DJ's GNU Programming Platform) */
    #ifdef IS_DJGPP
        #undef IS_DJGPP
    #endif
    #if defined(__DJGPP__) || defined(__GO32__)
        #define IS_DJGPP 1
    #else
        #define IS_DJGPP 0
    #endif

    /* Green Hill C */
    #ifdef IS_GHC
        #undef IS_GHC
    #endif
    #ifdef __ghs__
        #define IS_GHC 1
    #else
        #define IS_GHC 0
    #endif

    /* HP ANSI C */
    #ifdef IS_HAC
        #undef IS_HAC
    #endif
    #ifdef __HP_cc
        #define IS_HAC 1
    #else
        #define IS_HAC 0
    #endif

    #ifdef IS_MINGW
        #undef IS_MINGW
    #endif
    #ifdef __MINGW32__
        #define IS_MINGW 1
    #else
        #define IS_MINGW 0
    #endif

    #ifdef IS_PCC
        #undef IS_PCC
    #endif
    #ifdef __PCC__
        #define IS_PCC 1
    #else
        #define IS_PCC 0
    #endif
#endif /* _ICOMP_H */
