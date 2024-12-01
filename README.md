# Why
If the wrong arguments are passed to printf, UB is invoked. Compilers have
warnings to catch this, but the resulting binary will still invoke UB if the
printf statement is hit. I intend to use this in my own formatted print function,
where warnings won't be able to catch this. It is, in theory, possible to infer
the types needed, resulting in an interface like
`Print("{} has {} cookies.", "Ink", 99ull)`.

# Example
For an example of this in action, run `./example` to compile and run `example.c`.
Since this is only a proof of concept, I have not implemented parsing of the
format string. Arguments are therefore hardcoded to be a string and an unsigned
long long. If you want to change it, change the `correct_args` variable inside
the `Validate_Printf` function located in the `validate.c` file.

# How this works
The general idea is to use _Generic to assign an ID to each type passed to
printf. To do this, some C preprocessor crimes are used to apply this _Generic
to each argument passed to printf. The number of arguments to this macro is
limited by how many macros were hardcoded. To set the limit run
`python generate_foreach.py N` where `N` is the desired limit. The default and
minimum limit is 16.

A validator function could then parse the format string and traverse
the list of type IDs to verify that the correct types are passed. This is what
`Validate_Printf` does. If the types aren't correct, then the printf is not
executed, and instead a helpful error message is printed and the program
continues.
