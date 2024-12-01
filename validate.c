#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#include "validate.h"

enum E_Printf
Validate_Printf(size_t *index, char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    // hardcoded list for proof of concept
    static enum Printf_Type_ID correct_args[] = {
        T_Char_P, T_ULLong,
    };
    size_t correct_count = sizeof correct_args / sizeof *correct_args;
    enum Printf_Type_ID current = T_Invalid;
    size_t i = 0;
    while ((current = va_arg(args, int)) != T_Sentinel) {
        if (i > correct_count) {
            return E_Printf_Extra_Arg;
        }
        if (current != correct_args[i]) {
            *index = i + 1;
            return E_Printf_Invalid_Arg;
        }
        i += 1;
    }
    if (i < correct_count) {
        return E_Printf_Missing_Arg;
    }
    va_end(args);
    return 0;
}
