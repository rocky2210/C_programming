#include <stdio.h>
int main(){

    int a = 0;
    while(a < 10){
        printf("Hello world %d\n",a);
        ++a;
    }

    return 0;
}

// Output
/*
    Hello world 0
    Hello world 1
    Hello world 2
    Hello world 3
    Hello world 4
    Hello world 5
    Hello world 6
    Hello world 7
    Hello world 8
    Hello world 9
*/