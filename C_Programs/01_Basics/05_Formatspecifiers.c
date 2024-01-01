// Formatspecifiers

/*
    Format specifiers are placeholders used in formatting strings to 
    control the display of variables within those strings. 
*/
#include <stdio.h>
int main(){

    int a = 20;     //%d
    int b = 20;     //%u
    int c = 0100;   //%o
    int d = 0xA;    //%x and %X
    float e = 3.4;  //%f
    float f = 3;    //%e and %E
    float g = 3.8;  //%g
    int h = 5;      //%p
    char i = 'c';   //%c
    char j[] = "Hello"; //%s
    double k = 3.14; //%lf

    printf("-----------------------------\n");
    printf("Value of a : %d\n",a);  //integer
    printf("Value of b : %u\n",b);  //unsigned integer
    printf("Value of c : %o\n",c);  //octal
    printf("Value of d : %x\n",d);  //hexadecimal unsigned integer
    printf("Value of d : %X\n",d);  //hexadecimal unsigned integer with alphabetical characters in uppercase
    printf("Value of e : %f\n",e);  //decimal floating point
    printf("Value of f : %e\n",f);  //scientific notation
    printf("Value of f : %E\n",f);  //scientific notation
    printf("Value of g : %g\n",g);  //decimal floating-point
    printf("Value of h : %p\n",&h);  //address in hexadecimal form
    printf("Value of i : %c\n",i);  //character 
    printf("Value of j : %s\n",j);  //string
    printf("Value of k : %lf\n",k);  //double
    printf("-----------------------------\n");

    printf("-----------------------------\n");
    //minimum field width specifier
    printf("%8d\n",a); //displays the value after 8 spaces
    printf("%-8d\n",a);// -%8d specifier will make a value left-aligned.
    printf("%08d\n",a);// %08d empty space filled with zeros
    printf("-----------------------------\n");

    printf("-----------------------------\n");
    //specify precision
    printf("%.2f\n",e);

    return 0;
}