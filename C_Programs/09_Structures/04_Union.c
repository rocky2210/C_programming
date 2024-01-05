//Union
/*
    Union is a special data type available in c that allows to store different data types in the same memory 
    location.  You can define a union with many members, but only one member can contain a value at any given
    time.  unions provide an efficient way of using the same memory location for multiple-purpose

    defining a union
        union[union tag]{
            member definition;
            member definition;
            ...
            member definition;
        }[one or more union variables];
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