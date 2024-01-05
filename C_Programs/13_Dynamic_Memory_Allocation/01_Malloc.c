#include <stdio.h>
#include <stdlib.h>

// using malloc to allocate memory
int main(){

    int *ptr;
    int n = 5;  // Number of integers to allocate memory for

    // Allocate memory for n integers
    ptr = (int *)malloc(n *sizeof(int));

    if (ptr == NULL){
        printf("Memory allocation is failed");
        return 1;
    }

    // Initialize and use the allocated memory
    for (int i = 0; i < n; i++){
        ptr[i] = i * 2;
        printf("ptr[%d] = %d\n",i,ptr[i]);
    }

    // free the allocated memory when done
    free(ptr);
}

/*
    Output:
        ptr[0] = 0
        ptr[1] = 2
        ptr[2] = 4
        ptr[3] = 6
        ptr[4] = 8
*/