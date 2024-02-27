// Type casting

/*
    Typecasting allows us to convert one date type into other. We use cast operator
    for typecasting which is denoted by (type)

    Syntax:
        (type)value;
*/

#include <stdio.h>
int main(){

    int sum = 17, count = 5;
    double mean;

    mean = (double) sum/count;
    printf("Value of mean: %f\n",mean);

    return 0;
}

/*
    Output:
        Value of mean: 3.400000
*/