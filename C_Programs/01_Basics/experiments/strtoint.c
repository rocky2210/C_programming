#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char inp[] ="234";
    int x;
    /*
    The C library function int atoi(const char *str) 
    converts the string argument str to an integer (type int).
    */
    x = atoi(inp);
    x = x * 10;
    printf("Converted data: %d\n",x);
}

/*
    Output:
        Converted data: 2340
*/