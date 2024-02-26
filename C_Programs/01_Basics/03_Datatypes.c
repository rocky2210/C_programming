// primitive datatypes = int, char, float, double

/*
    Data types are classifications that categorize various 
    types of data that a program can manipulate. 
    Data types define the nature of the data and determine 
    what kind of operations can be performed on it.
*/

#include <stdio.h>
int main(){

    // Primitive data types
    int num = 10;
    char let = 'c';
    float flt = 3.14;
    double dou = 10.098234098324;

    printf("Integer : %d\n",num);
    printf("Character : %c\n",let);
    printf("Float : %f\n",flt);
    printf("Double : %lf\n",dou);
    printf("--------------------\n");

    // Different integer data types
    int a;
    short int b;
    unsigned int c;
    long int d;
    long long int e;
    unsigned long int f;
    unsigned long long int g;

    // Floating-point data types
    float h;
    double i;
    long double j;

    // Character data types
    char k;
    signed char l;
    unsigned char m;
    
    printf("\n******* sizeof integer datatypes *******\n\n");
    printf("size of int: %lu bytes\n",sizeof(a));       //format specifier = %d , %i
    printf("size of short int: %lu bytes\n",sizeof(b));       //format specifier = %hd
    printf("size of unsigned int: %lu bytes\n",sizeof(c));       //format specifier = %u
    printf("size of long int: %lu bytes\n",sizeof(d));       //format specifier = %ld , %li
    printf("size of long long int: %lu bytes\n",sizeof(e));       //format specifier = %lld , %lli
    printf("size of unsigned long int: %lu bytes\n",sizeof(f));       //format specifier = %lu
    printf("size of unsigned long long int: %lu bytes\n",sizeof(g));    //format specifer = %llu

    printf("\n******* sizeof float datatype *******\n");
    printf("size of float %lu bytes\n",sizeof(h));      //format specifier = %f

    printf("\n******* sizeof double datatypes *******\n\n");
    printf("size of double %lu bytes\n",sizeof(i)); //format specifier = %lf
    printf("size of long double %lu bytes\n",sizeof(j));    //format specifer = %Lf

    printf("\n******* sizeof char datatypes *******\n\n");
    printf("size of char %lu bytes\n",sizeof(k));           //format specifier  = %c
    printf("size of signed char %lu bytes\n",sizeof(l));    //format specifier  = %c
    printf("size of unsigned char %lu bytes\n",sizeof(m));  //format specifier  = %c

    return 0;
}

// c does not have buildin bool datatype

/*
    Output:
        Integer : 10
        Character : c
        Float : 3.140000
        Double : 10.098234
        --------------------

        ******* sizeof integer datatypes *******

        size of int: 4 bytes
        size of short int: 2 bytes
        size of unsigned int: 4 bytes
        size of long int: 8 bytes
        size of long long int: 8 bytes
        size of unsigned long int: 8 bytes
        size of unsigned long long int: 8 bytes

        ******* sizeof float datatype *******
        size of float 4 bytes

        ******* sizeof double datatypes *******

        size of double 8 bytes
        size of long double 16 bytes

        ******* sizeof char datatypes *******

        size of char 1 bytes
        size of signed char 1 bytes
        size of unsigned char 1 bytes
*/