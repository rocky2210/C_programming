// getchar() & putchar()

#include <stdio.h>
int main(){

    char var[100];
    printf("Enter any word getchar(): ");
    var[100] = getchar(); //reads only single

    printf("Output of getchar & putchar: ");
    putchar(var[100]);
    printf("\n");

    return 0;
}