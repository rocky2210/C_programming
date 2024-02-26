// Continue statement

/*
    Continue statement:
        The continue statement in C is a control flow statement that is used to skip the current iteration of a loop and proceed to the next iteration.
*/

#include <stdio.h>
int main(){

    int a = 10;
    for(a; a < 25 ; a++){
    printf("%d\n",a);
    if(a == 10){
        continue;
        }
    }
    return 0;
}

/*
    Output:
        10
        11
        12
        13
        14
        15
        16
        17
        18
        19
        20
        21
        22
        23
        24
*/