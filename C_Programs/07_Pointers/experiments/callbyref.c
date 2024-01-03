#include <stdio.h>
void modify(int *x){
    *x = *x * 10;
    printf("address in x: %p\n",x);
}

int main(){
    int a = 10;
    modify(&a);
    printf("\n address of a: %p\n",&a);
    printf("a = %d\n",a);
}