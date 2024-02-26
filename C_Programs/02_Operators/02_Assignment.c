#include <stdio.h>
int main(){

    //simple assignment
    int a = 5;
    printf("addition assignment : %d\n",a+=5);
    printf("subtraction assignment : %d\n",a-=5);
    printf("multiplication assignment : %d\n",a*=5);
    printf("division assignment : %d\n",a/=5);
    printf("modulus assignment : %d\n",a%=5);

    int b = 5;
    printf("Left shift assignment : %d\n",b <<= 3);
    int z = 5;
    printf("Right shift assignment : %d\n",z >>= 3);
    int c = 5;
    c &= 3;
    printf("Bitwise-AND assignment : %d\n",c);
    int d = 5;
    d ^= 3;
    printf("Bitwise-exclusive-XOR assignment : %d\n", d);
    int e = 5;
    e |= 3;
    printf("Bitwise-inclusive-OR assignment : %d\n", e);

    return 0;
}

/*
    Output:
        addition assignment : 10
        subtraction assignment : 5
        multiplication assignment : 25
        division assignment : 5
        modulus assignment : 0
        Left shift assignment : 40
        Right shift assignment : 0
        Bitwise-AND assignment : 1
        Bitwise-exclusive-XOR assignment : 6
        Bitwise-inclusive-OR assignment : 7
*/