/*
    The call by value method of passing arguments to a function copies
    the actual value of an argument into the formal parameter of the function.
    In this case, changes made to the parameter inside the function have no effect 
    argument.
*/

#include <stdio.h>

void swap(int x, int y); // function declaration

int main(){

    int a = 100;
    int b = 200;

    printf("Before swap, value of a : %d\n",a);
    printf("Before swap, value of b : %d\n",b);

    swap(a,b);  // Calling the function
    printf("After swap, value of a : %d\n",a);
    printf("After swap, value of b : %d\n",b);

    return 0;
}

void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Value of x = %d\n",x);
    printf("Value of y = %d\n",y);
}

/*
It shows that there are no changes in the values, through they had been 
changed inside the function.
*/

// Output
// Before swap, value of a : 100
// Before swap, value of b : 200
// Value of x = 200
// Value of y = 100
// After swap, value of a : 100
// After swap, value of b : 200