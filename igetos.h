/* This file allows you to determine the operating system at compilation. Create by Kutlahmetov Iskander, 2021 */
#ifndef _IGETOS_H
    #define _IGETOS_H 1

    #ifdef IS_WINDOWS
        #undef IS_WINDOWS
    #endif
    #ifdef IS_LINUX
        #undef IS_LINUX
    #endif
    #ifdef IS_MACOS
        #undef IS_MACOS
    #endif
    #ifdef IS_UNIX
        #undef IS_UNIX
    #endif
    #ifdef IS_FREEBSD
        #undef IS_FREEBSD
    #endif
    #ifdef IS_DRAGONFLY
        #undef IS_DRAGONFLY
    #endif
    #ifdef IS_OPENBSD
        #undef IS_OPENBSD
    #endif
    #ifdef IS_NETBSD
        #undef IS_NETBSD
    #endif
    #ifdef IS_SUN
        #undef IS_SUN
    #endif

    #if defined(_MSC_VER) || defined(__WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(WIN32) || defined(__WINNT) || defined(__WINNT__) || defined(_WIN64)
        #define IS_WINDOWS 1
    #else
        #define IS_WINDOWS 0
    #endif
    #if defined(__linux) || defined(linux) || defined(__gnu__linux__)
        #define IS_LINUX 1
    #else
        #define IS_LINUX 0
    #endif
    #ifdef __APPLE__
        #define IS_MACOS 1
    #else
        #define IS_MACOS 0
    #endif
    #ifdef __FreeBSD__
        #define IS_FREEBSD 1
    #else
        #define IS_FREEBSD 0
    #endif
    #ifdef __DragonFly__
        #define IS_DRAGONFLY 1
    #else
        #define IS_DRAGONFLY 0
    #endif
    #ifdef __OpenBSD__
        #define IS_OPENBSD 1
    #else
        #define IS_OPENBSD 0
    #endif
    #ifdef __NetBSD__
        #define IS_NETBSD 1
    #else
        #define IS_NETBSD 0
    #endif
    #ifdef __sun
        #define IS_SUN 1
    #else
        #define IS_SUN 0
    #endif
    #if IS_NETBSD || IS_OPENBSD || IS_FREEBSD || IS_DRAGONFLY
        #define IS_BSD 1
    #else
        #define IS_BSD 0
    #endif
    #if defined(unix) || defined(__unix) || defined(__unix__) || IS_LINUX || IS_MACOS || IS_SUN || IS_BSD
        #define IS_UNIX 1
    #else
        #define IS_UNIX 0
    #endif
#endif /* _IGETOS_H */
