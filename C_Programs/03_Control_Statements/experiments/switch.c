#include <stdio.h>
int main(){
    int x,y;
    char choice;
    printf("+ => addition\n- =>subtraction\n");
    printf("Enter your choice(+ or -): ");
    scanf("%c",&choice);
    printf("Enter values for x & y: ");
    scanf("%d %d",&x,&y);
    switch(choice){
        case '+':
            printf("Add  x & y =%d",x+y);
            break;
        case '-':
            printf("diff x & y = %d",x-y);
            break;
        default:
            printf("Error: choice can be + or -");
            break;
    }
}

// Output
/*
    + => addition
    - =>subtraction
    Enter your choice(+ or -): +
    Enter values for x & y: 1
    2
    Add  x & y =3
*/