// Do while loop

/*
    Do while loop:
        The do-while loop in C is a control flow statement that executes a block of code repeatedly until a specified condition becomes false. 
*/

#include <stdio.h>
int main(){

    int a = 10;
    do{
        printf("Hello world %d\n",a);
        a+= 10;
    }while (a < 100);

    return 0;
}

/*
    Output:
        Hello world 10
        Hello world 20
        Hello world 30
        Hello world 40
        Hello world 50
        Hello world 60
        Hello world 70
        Hello world 80
        Hello world 90
*/