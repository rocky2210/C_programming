//Pointer to structures
/*
    you can define pointers to structures in the same way as you define pointer to any
    other variable
        struct Books *struct_pointer;

    Now, you can store the address of a structure variable in the above defined pointer
    variable.  To find the address of a structure variable, place the '&'; operator before
    the structure's name as follows
        struct_pointer = &Book;

    To access the members of a structure using a pointer to that structure, you must use the ->
    operator as follow
        struct_pointer->title;
*/

#include <stdio.h>

// Structure for a Dragon Ball character
struct DragonBall{
    char name[50];
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

void printDragonBall(struct DragonBall *db){
    printf("Name : %s\n",db->name);
    printf("Power Level : %d\n",db->power_level);
    printf("Name : %s\n",db->special_moves);
}

void printNaruto(struct Naruto *naruto){
    printf("Name: %s\n",naruto->name);
    printf("Chakra: %d\n",naruto->chakra);
    printf("Jutsu: %s\n",naruto->jutsu);
}

void printMyHeroAcademia(struct MyHeroAcademia *mha){
    printf("Name: %s\n",mha->name);
    printf("quirk: %s\n",mha->quirk);
    printf("Rank: %d\n",mha->rank);
}

int main(){
    struct DragonBall vegeta = {"Vegeta",8500,"Galick Gun,Final Flash,Super saiyan"};
    printDragonBall(&vegeta); 

    struct Naruto sasuke = {"Sasuke",8000,"Chidori,Susanoo"};
    printNaruto(&sasuke);

    struct MyHeroAcademia bakugo = {"Katsuki Bakugo","Explosion",1};
    printMyHeroAcademia(&bakugo);
    
    return 0;
}