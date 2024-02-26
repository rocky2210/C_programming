#include <stdio.h>
int main(){

    int a = 10;
    printf("Logical AND : %d\n",(a <= 10 && a >= 10));
    printf("Logical OR : %d\n",(a <= 10 || a >= 10));
    printf("Logical NOT : %d\n",!(a <= 10 && a >= 10));

    return 0;
}

/*
    Output:
        Logical AND : 1
        Logical OR : 1
        Logical NOT : 0
*/