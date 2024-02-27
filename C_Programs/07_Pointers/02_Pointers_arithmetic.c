#include <stdio.h>

const int MAX = 3;

int main(){
    
    // Incrementing a pointer
    {
    int var[] = {10,100,200};
    int i, *ptr;
    // Let us have array address in pointer
    ptr = var;
    printf("Incrementing a pointer:\n");
        for(i = 0; i < MAX; i++){
            printf("Address of var[%d] = %p\n", i, ptr);
            printf("Value of var[%d] = %d\n", i, *ptr);
            // Move to the next location
            ptr++;
        }
    }
    printf("\n");

        // Decrementing a pointer
        {
        int var[] = {10,100,200};
        int i,*ptr;
        //let us have array address in pointer
        ptr = &var[MAX-1];
        printf("Decrementing a pointer:\n");
        for(i = MAX; i > 0; i--){
            printf("Address of var[%d] = %p\n", i-1, ptr);
            printf("Value of var[%d] = %d\n", i-1, *ptr);
            //move to the previous location
            ptr--;
        }
        printf("\n");
    }

    // Pointer comparisons
    {
        int var[] = {10,100,200};
        int i, *ptr;
        //Let us have address of the first element in pointer
        ptr = var;
        i = 0;
        printf("Pointer comparisons:\n");
        while(ptr <= &var[MAX -1]){
            printf("Address of var[%d] = %p\n", i, ptr);
            printf("Value of var[%d] = %d\n", i, *ptr);
            //point to the next location
            ptr++;
            i++;
        }
    }
}

/*
    Output:
        Incrementing a pointer:
        Address of var[0] = 0x7ffcf442afcc
        Value of var[0] = 10
        Address of var[1] = 0x7ffcf442afd0
        Value of var[1] = 100
        Address of var[2] = 0x7ffcf442afd4
        Value of var[2] = 200

        Decrementing a pointer:
        Address of var[2] = 0x7ffcf442afd4
        Value of var[2] = 200
        Address of var[1] = 0x7ffcf442afd0
        Value of var[1] = 100
        Address of var[0] = 0x7ffcf442afcc
        Value of var[0] = 10

        Pointer comparisons:
        Address of var[0] = 0x7ffcf442afcc
        Value of var[0] = 10
        Address of var[1] = 0x7ffcf442afd0
        Value of var[1] = 100
        Address of var[2] = 0x7ffcf442afd4
        Value of var[2] = 200
*/