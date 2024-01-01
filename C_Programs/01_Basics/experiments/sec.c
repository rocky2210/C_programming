#include <stdio.h>
int main(){

    int x;
    char c;
    float f;
    printf("Enter the values : ");
    scanf("%d%c%f",&x,&c,&f);
    // buggy
    printf("Inter = %d ch = %c fl = %f",x,c,f);
    return 0;
}