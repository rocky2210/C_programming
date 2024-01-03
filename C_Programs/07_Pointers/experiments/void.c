#include <stdio.h>
int main(){

    int a = 10;
    void *p;
    
    // Takes the address of the integer variable a using the address-of operator & and assigns it to the void pointer p. 
    //This is a common practice when you want to use a generic pointer to refer to an object of a specific type
    p = (void *)&a; 

    // This expression casts the void pointer p to an int pointer and then dereferences it to obtain the value stored at the memory location pointed to by p.
    printf("In void ptr: %d",*((int *)p));
    return 0;
}

// In void ptr: 10