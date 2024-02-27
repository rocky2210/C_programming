#include<stdio.h>
int main()
{
    char c[10];
    int i;
    
    printf("Enter the 5 chars : \n");
    
    for(i=0;i<5;i++)
        scanf(" %c", &c[i]);
        
    c[i]='\0'; // Null-terminate the string
    
    printf("given input is : %s\n",c);
}

/*
    Output:
        Enter the 5 chars : 
        R
        o
        c
        k
        y
        given input is : Rocky
*/