//Using perror for quick error reporting

#include <stdio.h>
#include <errno.h>

int main(){

    FILE *file = fopen("text.txt","r");
    if(file == NULL){
        perror("Error opening file\n");
        return 1;
    }
    fclose(file);
    return 0;
}