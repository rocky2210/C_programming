#include <stdio.h>
int main(){

    char buf[10];
    float x;
    printf("Enter a value: ");
    scanf("%f",&x);
    /*
    sprintf is a function in the C programming language 
    that stands for "string print formatted." 
    It is part of the standard C library, 
    and its main purpose is to format a string and 
    store it in a buffer.
    */
    sprintf(buf,"%f",x);
    printf("x value in string: %s\n",buf);

    return 0;
}

/*
    Output:
        Enter a value: 15.5 
        x value in string: 15.500000
*/