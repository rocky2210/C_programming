#include <stdio.h>
int main(){

    int arr[5] = {1,2,3,4,5};
    int(*ptr_to_array)[5];
    ptr_to_array = &arr;

    int i;
    for(i = 0; i < 5; i++){
        printf("%d",(*ptr_to_array) [i]);
    }
    printf("\n");
    return 0;
}

/*
    Output:
        12345
*/

/*
    Note that when using a pointer to an array, you use the dereference operator '*'
    to access the array, and the address of operator '&' to get the address of the array.
*/