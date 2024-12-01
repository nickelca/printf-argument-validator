#ifndef FOREACH_H
#define FOREACH_H

#define FOR_EACH_CONCAT(a, b) FOR_EACH_CONCAT_1(a, b)
#define FOR_EACH_CONCAT_1(a, b) a##b

#define FOR_EACH_0(macro, x, ...)
#define FOR_EACH_1(macro, x, ...) macro(x) FOR_EACH_0(macro, __VA_ARGS__)
#define FOR_EACH_2(macro, x, ...) macro(x) FOR_EACH_1(macro, __VA_ARGS__)
#define FOR_EACH_3(macro, x, ...) macro(x) FOR_EACH_2(macro, __VA_ARGS__)
#define FOR_EACH_4(macro, x, ...) macro(x) FOR_EACH_3(macro, __VA_ARGS__)
#define FOR_EACH_5(macro, x, ...) macro(x) FOR_EACH_4(macro, __VA_ARGS__)
#define FOR_EACH_6(macro, x, ...) macro(x) FOR_EACH_5(macro, __VA_ARGS__)
#define FOR_EACH_7(macro, x, ...) macro(x) FOR_EACH_6(macro, __VA_ARGS__)
#define FOR_EACH_8(macro, x, ...) macro(x) FOR_EACH_7(macro, __VA_ARGS__)
#define FOR_EACH_9(macro, x, ...) macro(x) FOR_EACH_8(macro, __VA_ARGS__)
#define FOR_EACH_10(macro, x, ...) macro(x) FOR_EACH_9(macro, __VA_ARGS__)
#define FOR_EACH_11(macro, x, ...) macro(x) FOR_EACH_10(macro, __VA_ARGS__)
#define FOR_EACH_12(macro, x, ...) macro(x) FOR_EACH_11(macro, __VA_ARGS__)
#define FOR_EACH_13(macro, x, ...) macro(x) FOR_EACH_12(macro, __VA_ARGS__)
#define FOR_EACH_14(macro, x, ...) macro(x) FOR_EACH_13(macro, __VA_ARGS__)
#define FOR_EACH_15(macro, x, ...) macro(x) FOR_EACH_14(macro, __VA_ARGS__)
#define FOR_EACH_16(macro, x, ...) macro(x) FOR_EACH_15(macro, __VA_ARGS__)

#define FOR_EACH_NARG(...)                                                     \
    FOR_EACH_NARG_(__VA_ARGS__ __VA_OPT__(, ) FOR_EACH_RSEQ_N())
#define FOR_EACH_NARG_(...) FOR_EACH_ARG_N(__VA_ARGS__)
#define FOR_EACH_ARG_N(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, N, ...) N
#define FOR_EACH_RSEQ_N() 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0

#define FOR_EACH_(N, macro, x, ...)                                            \
    FOR_EACH_CONCAT(FOR_EACH_, N)(macro, x, __VA_ARGS__)
#define FOR_EACH(macro, x, ...)                                                \
    FOR_EACH_(                                                                 \
        FOR_EACH_NARG(x __VA_OPT__(, ) __VA_ARGS__), macro, x, __VA_ARGS__     \
    )

#endif
