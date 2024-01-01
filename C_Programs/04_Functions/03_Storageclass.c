#include <stdio.h>

int n2 = 11;    // Global variable

int main(){

    int n1 = 10;  // Logical variable
    static int n3 = 12; // static keyword persists untill the end of the program

    printf("Local variable: %d\n",n1);
    printf("Global variable: %d\n",n2);
    printf("Static variable: %d\n",n3);

    return 0;
}

// Output
// Local variable: 10
// Global variable: 11
// Static variable: 12