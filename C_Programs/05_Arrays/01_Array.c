#include<stdio.h>
int main(){

        //array are used to store multiple values in a single varaible.

    // declaring array
    int arr[] = {10,20,30,40,50};

    // accessing array
    printf("%d\n", arr[0]);

    // changing a value in array
    arr[0] = 35;
    printf("After changing value: %d\n",arr[0]);

    // To print all the value in array use loop
    for(int i = 0; i < 5; i++){
        printf("Arr[%d] value : %d\n",i,arr[i]);
    }
    printf("-------------------------------\n");
    return 0; 
}

/* Output
    10
    After changing value: 35
    Arr[0] value : 35
    Arr[1] value : 20
    Arr[2] value : 30
    Arr[3] value : 40
    Arr[4] value : 50
    -------------------------------
*/