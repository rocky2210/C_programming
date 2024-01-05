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