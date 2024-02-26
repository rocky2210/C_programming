/*
    The call by reference method of passing arguments to a function copies the address
    of an argument into the formal parameter.  Inside the function, the address is used 
    to access the actual arguments used in the call.  It means the changes made to the paramter
    affect the passed argument.

    To pass a value by reference, argument pointers are passed to the functions just like
    any other value.

    there's no native support for pass-by-reference like in C++. However, you can achieve 
    similar behavior using pointers. When you pass a pointer to a function, you're essentially 
    passing a reference to the original variable, allowing the function to modify the original 
    variable's value. This is commonly referred to as "call by reference" in C.

*/

#include <stdio.h>

void swap(int *x, int *y);  // Function declaration
int main(){

    int a = 100;
    int b = 200;

        printf("Before swap, value of a : %d\n",a);
        printf("Before swap, value of b : %d\n",b);

        // calling a function 
        swap(&a,&b);
        printf("After swap, value of a : %d\n",a);
        printf("After swap, value of b : %d\n",b);
        
    return 0;
}

void swap (int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}

