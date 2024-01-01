#include <stdio.h>

int main(){

    char str[100];
    int i;

    printf("Enter a value: ");
    scanf("%s %d",str, &i); // reads the input 
    printf("\nYou entered: %s %d\n",str,i); // Writes the output
    return 0;
}