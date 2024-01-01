#include<stdio.h>
int main(){
    int i=2,j=2;
    for(i=0;i<2;i++){
        printf("\n-------------------------\n");
        printf("I am from parent: %d\n",i);
        for(j=0;j<2;j++){
            printf("I am from child: %d\n",j);
        }
        printf("\n----------------------------\n");
    }
    return 0;
}

// Output
/*
-------------------------
I am from parent: 0
I am from child: 0
I am from child: 1
----------------------------
-------------------------
I am from parent: 1
I am from child: 0
I am from child: 1
----------------------------
*/