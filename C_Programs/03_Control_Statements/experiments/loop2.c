#include <stdio.h>
int main(){

    int a = 1;
    int range;
    printf("Enter number of time to exe: ");
    scanf("%d",&range);
    while(a <= range){
        printf("Value: %d\n",a*10);
        a++;
    }
    // printf("A = %d",a);
    printf("I am from for loop\n");
    for(a=1;a<=range;a=a+1){
        printf("value = %d\n",a*5);
    }
    return 0;
}


/*
    Output:
        Enter number of time to exe: 5
        Value: 10
        Value: 20
        Value: 30
        Value: 40
        Value: 50
        I am from for loop
        value = 5
        value = 10
        value = 15
        value = 20
        value = 25
*/