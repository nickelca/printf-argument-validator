#ifndef PRINTF_VALIDATE_H
#define PRINTF_VALIDATE_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

#include "foreach.h"

enum Printf_Type_ID : int {
    T_Char,
    T_UChar,
    T_SChar,
    T_Short,
    T_Int,
    T_Long,
    T_LLong,
    T_UShort,
    T_UInt,
    T_ULong,
    T_ULLong,
    T_Void_P,
    T_Char_P,
    T_Invalid,
    T_Sentinel
};

#define PRINTF_TYPE_ID_(obj)                                                   \
    _Generic(                                                                  \
        (typeof_unqual(obj)){},                                                \
        char: T_Char,                                                          \
        unsigned char: T_UChar,                                                \
        signed char: T_SChar,                                                  \
        short: T_Short,                                                        \
        int: T_Int,                                                            \
        long: T_Long,                                                          \
        long long: T_LLong,                                                    \
        unsigned short: T_UShort,                                              \
        unsigned int: T_UInt,                                                  \
        unsigned long: T_ULong,                                                \
        unsigned long long: T_ULLong,                                          \
        void *: T_Void_P,                                                      \
        const void *: T_Void_P,                                                \
        char *: T_Char_P,                                                      \
        const char *: T_Char_P,                                                \
        default: T_Invalid                                                     \
    )
#define PRINTF_TYPE_ID(obj) PRINTF_TYPE_ID_(obj),

enum E_Printf {
    E_Printf_Ok,
    E_Printf_Missing_Arg,
    E_Printf_Extra_Arg,
    E_Printf_Invalid_Arg,
};

enum E_Printf Validate_Printf(size_t *index, char *fmt, ...);

#define printf(fmt, ...)                                                       \
    do {                                                                       \
        size_t i = 1;                                                          \
        int ret = Validate_Printf(                                             \
            &i, fmt, FOR_EACH(PRINTF_TYPE_ID, __VA_ARGS__) T_Sentinel          \
        );                                                                     \
        switch (ret) {                                                         \
        case E_Printf_Missing_Arg:                                             \
            fprintf(                                                           \
                stderr,                                                        \
                "%s:%i printf argument is missing.\n",                         \
                __FILE__,                                                      \
                __LINE__                                                       \
            );                                                                 \
            break;                                                             \
        case E_Printf_Extra_Arg:                                               \
            fprintf(                                                           \
                stderr,                                                        \
                "%s:%i printf argument %zu is extra.\n",                       \
                __FILE__,                                                      \
                __LINE__,                                                      \
                i                                                              \
            );                                                                 \
            break;                                                             \
        case E_Printf_Invalid_Arg:                                             \
            fprintf(                                                           \
                stderr,                                                        \
                "%s:%i printf argument %zu is invalid.\n",                     \
                __FILE__,                                                      \
                __LINE__,                                                      \
                i                                                              \
            );                                                                 \
            break;                                                             \
        case E_Printf_Ok:                                                      \
            printf(fmt __VA_OPT__(, ) __VA_ARGS__);                            \
            break;                                                             \
        default:                                                               \
            unreachable();                                                     \
        }                                                                      \
    } while (0)

#endif
