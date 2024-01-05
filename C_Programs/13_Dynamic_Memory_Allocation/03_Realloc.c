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