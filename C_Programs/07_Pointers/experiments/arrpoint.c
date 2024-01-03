#include <stdio.h>
int i;
void updatearr(int *p){

    // int i;
    printf("Starting address: %p\n",p); // This prints the starting address of the array whose address is passed to the updatearr function.
    for(i=0; i<4; i++){
        *(p+i) = *(p + i) * 10; // Multiplies each element of the array by 10 using pointer arithmetic.
    }
}

int main(){
    int a[] = {1,2,3,4,5};
    printf("Address of a = %p\n",&a[0]);
    updatearr(a);
    for(i=0;i<5;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}