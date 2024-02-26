// Printf() & Scanf()

/*
printf():
    printf() is a function used for formatted output in C.
    It formats and prints data to the standard output stream (usually the console).
    It takes a format string as its first argument, which can contain format specifiers to specify the type and format of the data to be printed.
    Additional arguments are provided corresponding to the format specifiers in the format string.
*/

/*
scanf()
    scanf() is a function used for formatted input in C.
    It reads data from the standard input stream (usually the keyboard) and stores it into variables.
    It takes a format string as its first argument, which specifies the type and format of the data to be read.
    Additional arguments are provided as pointers to variables where the read data will be stored
*/

#include <stdio.h>

int main(){

    char str[100];
    int i;

    printf("Enter a value: ");
    scanf("%s %d",str, &i); // reads the input 
    printf("\nYou entered: %s %d\n",str,i); // Writes the output
    return 0;
}

/*
    Output:
        Enter a value: Rado 3

        You entered: Rado 3
*/