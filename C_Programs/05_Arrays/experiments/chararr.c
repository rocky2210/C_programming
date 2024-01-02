#include<stdio.h>
int main()
{
    char c[10];
    int i;
    
    printf("Enter the 5 chars : \n");
    
    for(i=0;i<5;i++)
        scanf(" %c", &c[i]);
        
    c[i]='\0'; // Null-terminate the string
    
    printf("given input is : %s",c);
}

/*
    Output:
    Enter the 5 chars :
    a b c d e
    given input is : abcde
*/