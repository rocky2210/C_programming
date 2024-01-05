//Parameterized Macros

/*
    For Example
        int square(int x){
            return x * x;
        }

    we can rewrite above the code using the macro as follows:
    
        #define square(x) ((x) * (x))

    Macros with arguments must be defined using the #define directive before they can be used.  The
    argument list is encolosed in parentheses and must immediately follow the macro name.  Space are 
    not allowed between the macro name and open parenthesis. 
*/

#include <stdio.h>

#define MAX(x,y) ((x) > (y) ? (x) : (y))

int main(void){
    printf("Max Between 20 and 10 is %d\n",MAX(10,20));
    return 0;
}

/*
    Output:
        Max Between 20 and 10 is 20
*/