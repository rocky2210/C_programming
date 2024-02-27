// Multi dimentional array

/*
    Multi dimentional array:
        a multi-dimensional array is an array with more than one dimension, allowing you to store data in a table or matrix format. Each element in a multi-dimensional array is identified by a set of indices that correspond to its position within each dimension
*/

#include <stdio.h>
int main(){

    // to create multidimentional array
    // 2d array
    int matrix[2][3] = {{1,2,3},{3,6,8}};

    printf("array[0][2] : %d\n",matrix[0][2]);

    // Changing the element in 2d array
    matrix[0][2] = 8;
    printf("array[0][2] : %d\n",matrix[0][2]);
    printf("---------\n");

    // loop through access a 2d array
    int i,j;
    for (i = 0; i <2; i++){
        for(j = 0; j < 3; j++){
            printf("array [%d]\n",matrix[i][j]);
        }
    }
    return 0;
}

/* 
    Output:
        array[0][2] : 3
        array[0][2] : 8
        ---------
        array [1]
        array [2]
        array [8]
        array [3]
        array [6]
        array [8]
*/