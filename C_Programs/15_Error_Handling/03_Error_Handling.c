//using strerror for customized error reporting

#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(){

    FILE *file = fopen("text.txt","r");
    if(file == NULL){
        printf("Error opening file: %s\n",strerror(errno));
        return 1;
    }
    fclose(file);
    return 0;
}