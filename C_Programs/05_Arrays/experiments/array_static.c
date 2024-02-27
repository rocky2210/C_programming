#include<stdio.h>
int main(){

    // Static initialization
    int a[5] = {10,1,2,34,5};
    int i;
    printf("The value are : \n");

    for(i=0;i<5;i++){
        printf("Value[%d] = %d \n",i,a[i]);
    }

    return 0;
}

/*
    Output:
        The value are : 
        Value[0] = 10
        Value[1] = 1
        Value[2] = 2
        Value[3] = 34
        Value[4] = 5
*/