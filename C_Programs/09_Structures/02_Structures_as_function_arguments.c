//Structures as function arguments

/*
    You can pass a structure as a function argument in the same wat as you pass any other 
    variable or pointer.

*/

#include <stdio.h>

// structure for a dragon ball character
struct DragonBall{
    char name [50];
    int power_level;
    char special_moves[150];
};

// Structure for a naruto character
struct Naruto{
    char name[50];
    int chakra;
    char jutsu[150];
};


// Structure for a My Hero Academia character
struct MyHeroAcademia{
    char name[50];
    char quirk[50];
    int rank;
};

void printDragonBall(struct DragonBall db){
    printf("Name: %s\n",db.name);
    printf("Power level : %d\n",db.power_level);
    printf("Special Moves: %s\n",db.special_moves);
}

void printNaruto(struct Naruto naruto){
    printf("Name: %s\n",naruto.name);
    printf("Chakra: %d\n",naruto.chakra);
    printf("Jutsu: %s\n",naruto.jutsu);
}

void printMyHeroAcademia(struct MyHeroAcademia mha){
    printf("Name: %s\n",mha.name);
    printf("quirk: %s\n",mha.quirk);
    printf("Rank: %d\n",mha.rank);
}

int main(){
    struct DragonBall goku = {"Goku",9000,"Kamehameha,Spirit Bomb,Super saiyan"};
    printDragonBall(goku);

    struct Naruto naruto = {"Naruto",9999,"Rasengan,Shadow Clone Jutsu"};
    printNaruto(naruto);
    
    struct MyHeroAcademia izuku = {"Izuku Midoriya","One For All",3};
    printMyHeroAcademia(izuku);

    return 0;
}