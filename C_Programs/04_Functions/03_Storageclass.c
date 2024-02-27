// Storage class

/*
    Storage class:
        auto:
            The auto keyword is the default storage class specifier for local variables.
            Variables declared with auto are automatically allocated memory each time the block in which they are defined is entered, and they are automatically deallocated when the block is exited.
            It's rarely used explicitly because local variables are automatically considered auto by default.
        
        register:
            The register keyword is used to declare local variables that should be stored in CPU registers for faster access.
            It's a hint to the compiler, suggesting that the variable should be stored in a register for faster access.
            The compiler may ignore this hint, particularly if there are not enough available registers or if it determines that the variable's usage doesn't benefit from register storage.

        static:
            The static keyword is used to declare variables and functions with static storage duration.
            For local variables, static preserves the variable's value between function calls. It's initialized only once, and its value persists across multiple invocations of the function.
            For global variables and functions, static limits their visibility to the file in which they are declared. They cannot be accessed from other files.

        extern:
            The extern keyword is used to declare variables and functions that are defined in other source files.
            It's typically used to provide access to global variables and functions declared in one file from another file.
            When used with variables, extern declares a variable without allocating memory for it. The memory allocation is done elsewhere.
*/

#include <stdio.h>
#include "storageclass.h"

int n2 = 11;    // Global variable

int main(){

    auto int n1 = 10;  // Logical variable
    static int n3 = 12; // static keyword persists untill the end of the program
    extern int n4;
    register int n5 = 13;
    printf("Local variable: %d\n",n1);
    printf("Global variable: %d\n",n2);
    printf("Static variable: %d\n",n3);
    printf("External variable: %d\n",n4);
    printf("Register variable: %d\n",n5);

    return 0;
}

/* 
    Output:
        Local variable: 10
        Global variable: 11
        Static variable: 12
        External variable: 14
        Register variable: 13
*/

// Note: register is included here for completeness, its usage is generally discouraged in modern C programming