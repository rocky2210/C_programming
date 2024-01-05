//C preprocessors

/*
    The C Preprocessor is not a part of the compiler, but is a separate step in the compliation process.
    A preprocessor is just a text substitution tool and it instructs the compiler to do required pre-processing
    before the actual compilation.  All preprocessor commands begin with a hash symbol (#).  It must be
    the first nonblank character, and for readability, a preprocessor directive should begin in the first
    column.

    1.  #define     -> Substitutes a preprocessor macro.
    2.  #include    -> Inserts a particular header from another file.
    3.  #undef      -> Undefines a preprocessor macro.
    4.  #ifdef      -> Returns true if this macro is defined.
    5.  #ifndef     -> Returns true if this macro is not defined.
    6.  #if         -> Tests if a compile time condition is true.
    7.  #else       -> The alternatice for #if.
    8.  #elif       -> #else and #if in one statement.
    9.  #endif      -> Ends preprocessor conditional.
    10. #error      -> Prints error message on stderr.
    11. #pragma     -> Issues special commands to the compiler, using a standardized method.

Preprocessors Examples
    Analyze the following examples to understand various directives.
        `#define MAX_ARRAY_LENGTH 20`

    Predefined Macros
    ANSI C defines a number of macros.
    
    1.  _DATE_      -> The current date as a character literal in "MMM DD YYYY" format.
    2.  _TIME_      -> The current time as a character literal in "HH:MM:SS" format.
    3.  _FILE_      -> This contains the current filename as a string literal.
    4.  _LINE_      -> This contains the current line number as a decimal constant.
    5.  _STDC_      -> Defined as 1 when the compiler complies with the ANSI standard.

*/

#include <stdio.h>

int main(){

    printf("File :%s\n", __FILE__);
    printf("Date :%s\n", __DATE__);
    printf("Time :%s\n", __TIME__);
    printf("Line :%d\n", __LINE__);
    printf("ANSI :%d\n", __STDC__);
    
    return 0;
}

/*
    Output:
        File :01_Preprocessor.c
        Date :Jan  5 2024
        Time :14:32:31
        Line :44
        ANSI :1
*/