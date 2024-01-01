#include<stdio.h>
int main(){

    int a[2][3] = {{10,15},{20,25}};
    int r,c;
    printf("The 2D array values : \n");
    for(r = 0;r<2;r++){
        for(c = 0; c <2; c++){
            printf("%d\t",a[r][c]);
            printf("\n");
        }
    }
}

/*
    Output:
        The 2D array values :
        10
        15
        20
        25
*/