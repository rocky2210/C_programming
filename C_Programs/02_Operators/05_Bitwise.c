#include <stdio.h>
int main(){

    int a = 12;     // 0000 1100
    int b = 25;     // 0001 1001

    //bitwise AND Operator
    printf("AND Output = %d\n",a&b);
    //bitwise OR Operator
    printf("OR Output = %d\n",a|b);
    //bitwise XOR Operator
    printf("XOR Output = %d\n",a^b);
    //bitwise Complement Operator
    printf("Complement Output = %d\n",~-12);
    //bitwise Left Shift Operator
    printf("x << 1 = %d\n",a << 1);
    //bitwise Right Shift Operator
    printf("x >> 1 = %d\n",a >> 1);

    int num = 212 , i;
    for (i=0; i<=2;++i){         //Right shift operator
        printf("Right shift by %d: %d\n",i, num >> i ); 
    }

    for (i=0;i<=2;++i){          //Left shift operator
        printf("Left shift by %d : %d\n",i,num << i);
    }
    return 0;
}

/*
AND Output = 8
OR Output = 29
XOR Output = 21
Complement Output = 11
x << 1 = 24
x >> 1 = 6
Right shift by 0: 212
Right shift by 1: 106
Right shift by 2: 53
Left shift by 0 : 212
Left shift by 1 : 424
Left shift by 2 : 848
*/