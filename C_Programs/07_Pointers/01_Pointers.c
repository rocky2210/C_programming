// Pointer

/*
    Pointers:
        A pointer is a variable that stores the memory address of another variable. Pointers are used to manipulate data indirectly by accessing 
        the memory location where the data is stored. 
        They provide a powerful and flexible way to work with 
        memory and data structures in C.
*/

#include <stdio.h>
int main(){
    int a = 10;
    
    //  '*' dereference operator
    /* The * operator is also used to access the value stored at 
    the memory address held by a pointer
    */
    int *p = &a; // '&' reference operator

    printf("Value of a: %d\n",a);
    printf("Address of a: %p\n",p);
    printf("Value of *p: %d\n",*p);

    return 0;
}

/*  Output: 
        Value of a: 10
        Address of a: 0x7ffdd81c949c
        Value of *p: 10
*/