// gets() & puts

/*
gets():
    gets() is a function used for string input operations in C.
    It reads a line of text from the standard input stream (usually the keyboard) and stores it as a null-terminated string.
    It reads characters from the input until a newline character ('\n') or the end-of-file (EOF) is encountered.
    It does not perform bounds checking, which can lead to buffer overflow vulnerabilities.
*/

/*
puts():
    puts() is a function used for string output operations in C.
    It prints a null-terminated string to the standard output stream (usually the console), followed by a newline character ('\n').
    It automatically appends a newline character after printing the string.
*/

#include <stdio.h>
int main(){

    // gets() & puts()
    char name[100];
    printf("Enter any word gets() :");
    gets(name);
    printf("Output of gets & puts :");
    puts(name);

    return 0;
}

/*
    Output:
        Enter any word gets() :hello
        Output of gets & puts :hello
*/

/*
    Note: Though it has been deprecated to use gets() function, Instead of using gets, you want to
    use fgets()
*/