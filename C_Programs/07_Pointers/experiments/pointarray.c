#include <stdio.h>
int main(){

    int a[] = {10,23,33,43};
    int *pt,i;
    pt = a;
    for(i = 0; i < 4; i++){
        printf("%d data in address %p\n",*pt,pt);
        pt = pt + 1;
    }
    return 0;
}

/*
    Output:
        10 data in address 0x7ffc71904130
        23 data in address 0x7ffc71904134
        33 data in address 0x7ffc71904138
        43 data in address 0x7ffc7190413c
*/