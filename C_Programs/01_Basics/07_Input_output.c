#include <stdio.h>
int main(){

    // gets() & puts()
    char name[100];
    printf("Enter any word gets() :");
    gets(name);
    printf("Output of gets & puts :");
    puts(name);

    return 0;
}
/*
    Note: Though it has been deprecated to use gets() function, Instead of using gets, you want to
    use fgets()
*/