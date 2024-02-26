#include <stdio.h>
int main(){

    int x;
    char c;
    float f;
    printf("Enter the values : ");
    scanf("%d%c%f",&x,&c,&f);
    // buggy
    printf("Inter = %d ch = %c fl = %f",x,c,f);
    return 0;
}

// Bug code 

/*
    Output:
        Enter the values : 1
        d
        Inter = 1 ch =
        fl = 0.000000
*/