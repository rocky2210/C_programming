#include <stdio.h>
int main(){
    int x[50],i,max;
    printf("Enter the max no.of value to insert : ");
    scanf("%d",&max);

    for(i=0;i<max;i++){
        scanf("%d",&x[i]);
    }
    printf("The given values are: \n");

    for(i=0;i<max;i++){
        printf("%d\t",x[i]);
    }
    printf("\n");
}

/*
    Output:
        Enter the max no.of value to insert : 4
        22
        15
        01
        08
        The given values are: 
        22      15      1       8
*/