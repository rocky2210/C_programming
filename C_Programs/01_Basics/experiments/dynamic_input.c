#include <stdio.h>

int main(){
    int x;
    float y;
    char ch;

    printf("Enter char : ");
    scanf("%c",&ch);
    printf("\nEnter int value : ");
    scanf("%d",&x);
    printf("\nEnter a float value : ");
    scanf("%f\n",&y);
    printf("\nGiven int value = %d\n",x);
    printf("\nGiven float value = %f\n",y);
    printf("\nGiven char value = %c \n",ch);

    return 0;
}

/*
    Output:
        Enter char : c

        Enter int value : 10

        Enter a float value : 4.1


        Given int value = 10

        Given float value = 4.100000

        Given char value = c
*/