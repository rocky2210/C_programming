// Calloc

/*
    Calloc():
        calloc() function is used to dynamically allocate memory for an array of elements, initializing all the bytes in the allocated memory to zero.
        It is similar to the malloc() function but additionally initializes the memory with zero values.

        Usage:
            The calloc() function allocates memory for an array of numElements elements, each of size elementSize bytes.
            The returned pointer is of type void *, so it is commonly cast to the desired type.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr;
    int n = 5; //Number of integers to allocate memory for

    //Allocate memory for an array of n integers and initialize them to 0
    ptr = (int *)calloc(n,sizeof(int));

    if (ptr == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    //Access and use the allocated memory
    for (int i = 0; i < n; i++){
        ptr[i] = i * 2;
        printf("ptr[%d] = %d\n",i,ptr[i]);
    }

    //Free the allocated memory when done
    free(ptr);

    return 0;
}

/*
    Output:
        ptr[0] = 0
        ptr[1] = 2
        ptr[2] = 4
        ptr[3] = 6
        ptr[4] = 8
*/