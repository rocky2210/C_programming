#include <stdio.h>
int main(){

    char c[] = {'r','o','c','k','y'};
    char *ptr;
    int i;
    ptr = c;
    for(i=0; i<5; i++){
        printf("%c char in %p \n",*ptr,ptr);
        ptr = ptr + 1;
    }

    return 0;
}

/*
    Output:
        r char in 0x7fff27098463 
        o char in 0x7fff27098464
        c char in 0x7fff27098465
        k char in 0x7fff27098466
        y char in 0x7fff27098467
*/