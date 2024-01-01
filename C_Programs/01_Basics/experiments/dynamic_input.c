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