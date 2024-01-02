#include <stdio.h>
int size;   // Global var

void fun(int arr[]){
    int i;
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
        // printf("\n");
    }
    printf("\n");
}

int main(){
        int a[30],i;
        printf("Enter the no of elements to process: ");
        scanf("%d",&size);
        printf("Enter the values: ");
        for(i=0;i<size;i++){
            scanf("%d",&a[i]);
        }
        fun(a);
}


/*
    Output:
    Enter the no of elements to process: 4
    Enter the values: 55
    34
    32
    44
    55      34      32      44
*/