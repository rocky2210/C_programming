//enum is a special type that represents a group of constants

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