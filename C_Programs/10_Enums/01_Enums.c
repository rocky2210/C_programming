// Enumeration

/*
    Enumeration:
        enumerations, are user-defined data types in C used to assign names to integral constants, making the code more readable and maintainable.
            Usage:
                Enums are used to define symbolic names for integral constants, providing more meaningful identifiers for values used in the code.
                You can declare variables of enum type, assign enum constants to them, and compare them.
*/
#include <stdio.h>

enum Level{
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75,
};

enum enumvar{
    ONE = 1,
    TWO,  // now = 2
    THREE,  // now = 3
};  // The next items will update their numbers accordingly

int main(){

    enum Level myVar = MEDIUM;
    printf("%d\n",myVar);

    // enum in a switch statement
    enum enumvar myVar2 = TWO;
    switch (myVar2){
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        default:
            break;
    }
    return 0;
}

/*
    Output:
        50
        Two
*/