//Union

/*
    Union:
        A union is a user-defined data type that allows you to store different types of data in the same memory location. 
        Unlike structures, where each member has its own memory location, all members of a union share the same memory location.
        Usage:
            Unions are used when you need to store only one value out of several possible types.
            They are useful when memory efficiency is critical or when you need to save space.
*/

#include <stdio.h>
#include <string.h>

// union for a character
union Character{
    char name[50];
    int power_level;
    char special_moves[100];
};

int main(){

    union Character goku;
    strcpy(goku.name,"Goku");
    printf("Name : %s\n",goku.name);

    goku.power_level = 9000;
    printf("Power levelL %d\n",goku.power_level);

    strcpy(goku.special_moves,"Teleportation");
    printf("Special Moves: %s\n",goku.special_moves);

    return 0;
}

/*
    Output:
        Name : Goku
        Power levelL 9000
        Special Moves: Teleportation
*/