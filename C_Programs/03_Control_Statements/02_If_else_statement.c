// If else statement

/*
    If else statement:
        if-else statement in C is used to execute one block of code if a condition evaluates to true and another block of code if the condition evaluates to false.
        The condition can be any expression that evaluates to a boolean value (true or false), such as a comparison (==, !=, <, <=, >, >=), or a logical operation (&&, ||, !).
*/

#include <stdio.h>
int main(){

    int a = 9;
    if(a > 10){
        printf("a is greater than 10\n");
    }else {
        printf("a is less than 10\n");
    }

    return 0;
}

/* 
    Output:
        a is less than 10
 */