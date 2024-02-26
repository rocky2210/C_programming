#include <stdio.h>
int main(){
    int x = 10;
    float X = 2.5;
    char c = 'a';
    char name[12] = "Rocky Inu";

    printf("x = %d",x);
    printf("\nX = %0.3f",X);
    printf("\nc = %c",c);
    printf("\nname = %s\n",name);

    return 0;
}

/*
    Output:
        x = 10
        X = 2.500
        c = a
        name = Rocky Inu
*/