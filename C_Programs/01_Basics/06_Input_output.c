// getchar() & putchar()

/*
getchar():
    getchar() is a function used for input operations in C.
    It reads a single character from the standard input stream (usually the keyboard) and returns it as an integer.
    It waits for the user to input a character and press Enter before proceeding.
*/

/*
putchar():
    putchar() is a function used for output operations in C.
    It prints a single character to the standard output stream (usually the console).
    It takes a single argument, which is the character to be printed, and returns the character as an integer.
*/

#include <stdio.h>
int main(){

    char var[100];
    printf("Enter any word getchar(): ");
    var[100] = getchar(); //reads only single

    printf("Output of getchar & putchar: ");
    putchar(var[100]);
    printf("\n");

    return 0;
}

/*
    Output:
        Enter any word getchar(): hello
        Output of getchar & putchar: h
*/
