// File handling

/*
    File handling:
        File handling in C involves operations to read from and write to files
*/
#include <stdio.h>
#include <stdlib.h>
int main(){

    FILE *fptr;

    // Create a file
    fptr = fopen("filename.txt","w");

    // Write text in a file
    fprintf(fptr,"Hello World :D");

    // Append content to a file
    fptr = fopen("append.txt","a");
    fprintf(fptr,"\nappended :>");

    // Read a file
    fptr = fopen("read.txt","r");
    char myString[100];

    //reading content and stores inside myString
    // fgets(myString,100,fptr);
    // printing
    // printf("%s\n",myString);

    // using while to get every line of the file
    while (fgets(myString,100,fptr)){
        printf("%s\n",myString);
    }

    // Good practice : NULL
    // fptr = fopen("hello.txt","r");
    // if(fptr == NULL){
    //     printf("Not able to open file..!");
    //     exit(1);
    // }

    // close the file
    fclose(fptr);
    return 0;
}