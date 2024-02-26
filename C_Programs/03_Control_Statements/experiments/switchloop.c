#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y;
    int choice;
    while(1){
    printf("\n1 => addition\n 2=>subtraction\n3. Exit");
    printf("Enter your choice(+ or -): ");
    scanf("%d",&choice);
    if(choice<3){
        printf("Enter values for x & y: ");
        scanf("%d%d",&x,&y);
    }
    switch(choice){
        case 1:
            printf("Add  x & y =%d\n",x+y);
            break;
        case 2:
            printf("diff x & y = %d\n",x-y);
            break;
        case 3:
            exit(1);
        default:
            printf("Error: choice can be + or -\n");
            break;
        }
    }
}

/*
    Output:
        1 => addition
        2=>subtraction
        3. ExitEnter your choice(+ or -): 1
        Enter values for x & y: 2
        3
        Add  x & y =5

        1 => addition
        2=>subtraction
        3. ExitEnter your choice(+ or -):
*/