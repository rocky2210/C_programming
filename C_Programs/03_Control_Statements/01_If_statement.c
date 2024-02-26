// If statement

/*
    If statement:
        if statement in C is a conditional statement that allows you to execute a block of code based on whether a condition evaluates to true or false.
        The condition can be any expression that evaluates to a boolean value (true or false), such as a comparison (==, !=, <, <=, >, >=), or a logical operation (&&, ||, !).
*/

#include <stdio.h>
int main(){

    int a = 20;
    if(a < 25){
        printf("%d is less than 25\n",a);
    }
    return 0;
}

/* 
    Output:
        20 is less than 25
*/