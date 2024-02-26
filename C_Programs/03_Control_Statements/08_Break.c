// Break statement

/*
    Break statement:
        The break statement in C is a control flow statement that is used to exit or terminate the current loop or switch statement.
*/

#include <stdio.h>
int main(){

    int a = 10;
    for (a ; a < 100; a++){
        printf("%d\n",a);
        if(a == 20){
            break;
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
*/