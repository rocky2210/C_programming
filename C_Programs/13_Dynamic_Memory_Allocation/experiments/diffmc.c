#include<stdio.h>
#include<stdlib.h>

int main() {
    int *p, *p1;
    int i;

    // Allocate memory for 8 integers
    p = (int *)malloc(8 * sizeof(int));

    // Initialize values in *p
    for (i = 0; i < 8; i++)
        p[i] = i + 1;  // Initializing with values 1, 2, ..., 8

    // Print values in *p
    printf("\nValues in *p\n");
    for (i = 0; i < 8; i++)
        printf("%d\t", p[i]);

    // Reallocate memory for 10 integers
    p = (int *)realloc(p, 10 * sizeof(int));

    // Initialize values after reallocation
    for (i = 8; i < 10; i++)
        p[i] = i + 1;  // Initializing with values 9, 10

    // Print values after reallocation
    printf("\nAfter reallocation \n");
    for (i = 0; i < 10; i++)
        printf("%d\t", p[i]);

    // Free the allocated memory
    free(p);
    return 0;
}

/*
    Output:
        Values in *p
        1       2       3       4       5       6       7       8
        After reallocation 
        1       2       3       4       5       6       7       8  10   
*/
