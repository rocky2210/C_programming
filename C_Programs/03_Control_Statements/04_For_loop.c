// For loop

/*
    For loop:
        The for loop in C is a control flow statement that allows you to execute a block of code repeatedly based on a 
        specific condition. It's commonly used when you know in advance how many times you want to execute the loop.
*/

#include <stdio.h>
int main(){

    int i;
    for(i = 1; i <= 10; i++){
        printf("Hello world : %d\n",i);
    }

    return 0;
}

/*
    Output:
        Hello world : 1
        Hello world : 2
        Hello world : 3
        Hello world : 4
        Hello world : 5
        Hello world : 6
        Hello world : 7
        Hello world : 8
        Hello world : 9
        Hello world : 10
*/