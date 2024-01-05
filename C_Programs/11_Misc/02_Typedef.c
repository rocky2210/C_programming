// typedef

/*
    typedef is a keyword in c that allows you to create a new data type using an existing data type. 
    With typedef you can give a new name to a type and use it instead of the original type name. 
*/

#include <stdio.h>

typedef unsigned int unit;

int main(){

    unit age = 20;
    printf("Age : %u\n",age);
    return 0;
}