// Variables are the containers for storing the data values
// A variable is a symbolic name or identifier that is used to store and represent a value in memory
#include <stdio.h>
#include <stdlib.h>
int main(){

    // Declaring and assigning value to variable
    int a = 10;

    // sizeof operator 
    printf("size of operator: %ld\n",sizeof(a));
    
    // Printing value of variable using printf function
    printf("Value of a is %d\n",a); // Allows to print multiple values or string together

    puts("Hello world"); // only accepts one arguments used to print string

    // constant = readonly variable
    const float PI = 3.14;
    printf("Value of pi is %f\n",PI);
    // float PI = 10;

    return 0;
    
}

// single line comment

/*
    Multi
    line
    comment
*/