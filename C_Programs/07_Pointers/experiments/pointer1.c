#include <stdio.h>
int main(){

    int a = 10;
    int *ptr;
    ptr = &a;
    printf("Data in ptr is %d\n",*ptr);
    printf("Address of a : %p\n",&a);
    printf("Address of a using ptr : %p\n",ptr);
    *ptr = *ptr + 20;
    printf("The value of a = %d",a);
    return 0;
}

/*
    Output:
        Data in ptr is 10
        Address of a : 0x7ffde0f7927c
        Address of a using ptr : 0x7ffde0f7927c
*/