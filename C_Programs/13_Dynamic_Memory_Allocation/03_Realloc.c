// Realloc()

/*
    Realloc:
        realloc() function is used to resize a previously allocated memory block. 
        It can be used to increase or decrease the size of the memory block
            Usage:
                The realloc() function resizes the memory block pointed to by ptr to the new size specified by newSize.
                If ptr is NULL, realloc() behaves like malloc() and allocates a new memory block.
                If newSize is smaller than the original size, the excess memory at the end of the block is released.
                If newSize is larger than the original size, additional memory may be allocated, and the contents of the original block are copied to the new block.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr;
    int n = 5;  // initial number of integer

    // Allocate memory for integers
    ptr = (int *)malloc (n * sizeof(int));

    if (ptr == NULL){
        printf("Memory allocation failed");
        return 1;
    }

    // Resize the allocated memory to accomodate 10 integers
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    
    //Access and use the resized memory 
    for(int i = n; i < 10; i ++){
        ptr[i] = i * 2;
        printf("ptr[%d] = %d\n",i,ptr[i]);
    }

    //Free the allocated memory when done
    free(ptr);
    return 0;
}
/*
    Output:
            ptr[5] = 10
            ptr[6] = 12
            ptr[7] = 14
            ptr[8] = 16
            ptr[9] = 18
*/