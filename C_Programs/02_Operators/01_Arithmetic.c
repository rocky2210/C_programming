#include <stdio.h>
int main(){

    int a = 10;
    int b = 4;

    printf("Addition a + b : %d\n",a+b);
    printf("Subtraction a - b : %d\n",a-b);
    printf("Multiplication a * b : %d\n",a*b);
    printf("Division a / b : %d\n",a/b);
    printf("Modulus a %% b : %d\n",a%b);
    printf("----------\n");
    
    //increment and decrement
    int g = 10;
    printf("pre--increment: %d\n",++g); // 11
    printf("pre--decrement: %d\n",--g); // 11-1 =9
    printf("post--increment: %d\n",g++); // print 10 first then 10+1
    printf("post--decrement: %d\n",g--); // print 11 first then 11-1
    printf("value of g : %d\n",g);
    printf("----------\n");
    return 0;
}

/*
    Output:
        Addition a + b : 14
        Subtraction a - b : 6
        Multiplication a * b : 40
        Division a / b : 2
        Modulus a % b : 2
        ----------
        pre--increment: 11
        pre--decrement: 10
        post--increment: 10
        post--decrement: 11
        value of g : 10
        ----------
*/