//! This is a proof of concept, so I have not implemented parsing of the fmt
//! string. Arguments are therefore hardcoded to be a string and an unsigned
//! long long. If you want to change it, change correct_args inside the
//! Validate_Printf function located in validate.c

#include <stdio.h>
#include "validate.h"

int
main(void)
{
    printf("%s has %llu cookies\n", "Ink", 99ull);
    printf("%s has %llu cookies\n", "Ink", 99u);
    printf("%s has %llu cookies\n", 11, 124ull);
    printf("%s has %llu cookies\n", "apple");
    printf("%s has %llu cookies\n", "apple", 99ull, 8);
    return 0;
}
