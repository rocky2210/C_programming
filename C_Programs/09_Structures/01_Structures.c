//structs contain many different datatypes

#include <stdio.h>
#include <string.h>

struct myStructure{
    // Structure declaration
    int myId;    // Member (int variable)
    char myLetter;  // Member (char variable)
    char myName[30];
};  // End the structure

int main(){
    // creating a structure variable s1
    struct myStructure s1;

    // Assign values to the members of s1
    s1.myId = 22;
    s1.myLetter = 'L';
    strcpy(s1.myName, "Rocky"); // one way yo assign string

    // second way simpler syntax
    struct myStructure s2 = {11,'v',"vaisu"};

    // print values
    printf("My ID is :%d\n",s1.myId);
    printf("My Letter is :%c\n",s1.myLetter);
    printf("My Name is :%s\n",s1.myName);
    
    printf("My ID is :%d\n",s2.myId);
    printf("My Letter is :%c\n",s2.myLetter);
    printf("My Name is :%s\n",s2.myName);

    return 0;
}
