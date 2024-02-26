/*
    Misc Operators
        1.sizeof()
        2.& and * operator
        3.Ternary operator
*/

#include <stdio.h>
int main(){

    int a = 4;
    short b;
    double c;
    int* ptr;

    //sizeof operator
    printf("Size of variable a = %ld\n",sizeof(a));
    printf("Size of variable b = %ld\n",sizeof(b));
    printf("Size of variable c = %ld\n",sizeof(c));

    // & and * operators
    ptr = &a;   //ptr now contains the address of 'a'
    printf("Value of a is %d\n",a);
    printf("*ptr is %d.\n",*ptr);

    //Ternary operator
    a = 10;
    b = (a == 1) ? 20: 30;
    printf("Value of b is %d\n",b);

    b = (a == 10) ? 20: 30;
    printf("Value of b is %d\n",b);

}

/*
    Output:
        Size of variable a = 4
        Size of variable b = 2
        Size of variable c = 8
        Value of a is 4
        *ptr is 4.
        Value of b is 30
        Value of b is 20
*/