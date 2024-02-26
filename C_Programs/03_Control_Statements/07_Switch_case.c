// Switch case

/*
    Switch case:
        The switch statement in C is a control flow statement that allows you to select one of many code blocks to be 
        executed based on the value of a variable or expression. It's an alternative to using multiple if-else if statements 
        when you have a series of conditions to evaluate.
*/

#include <stdio.h>
int main(){

    int day = 4;
    switch (day){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tueday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            break;
    }

    return 0;
}

/*
    Output:
        Thursday
*/