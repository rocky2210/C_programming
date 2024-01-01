#include <stdio.h>
int main(){

    char str[30];
    printf("Enter a fullname: ");
    scanf("%[^\n]",str); //another metheod to get string input
    printf("Your name : %s",str);
    return 0;
}

/* Output:  Enter a fullname: rocky
            Your name : rocky
*/