#include <stdio.h>
#include <string.h>

int main(){

    char string[] = "hello \0";
    printf("String: %s\n",string);

    // Modifying string
    string[0] = 'j';
    printf("modified string: %s\n",string);

    // Another way
    char string2[] = {'h','e','l','l','o','\0'}; // \0 is terminating character
    printf("string2: %s\n",string2);
    printf("---------------------\n");

    printf("------string functions--------\n");
    char str1[20] = "hello";
    char str2[20] = "world";

    // strlen() - Returns length of the string
    printf("str1: %s\n",str1);
    printf("Length of str1 before concatenation: %ld\n",strlen(str1));

    // strcat() - concatenate two strings
    strcat(str1,str2); // concatenating str1 and str2
    printf("Concatination str: %s\n",str1);

    char str3[20] = "Hello world!";
    char str4[20];
    // copy str1 to str2
    strcpy(str4,str3);
    printf("%s\n",str4);

    char str5[] = "Hello";
    char str6[] = "Hello";
    char str7[] = "Hi";
    // Compare str1 and str2, and print the result
    printf("%d\n",strcmp(str5, str6)); // Returns 0 (The strings are equal)
    // Compare str1 and str3, and print the result
    printf("%d\n",strcmp(str5, str7));  // Returns -4 (The strings are not equal)
    return 0;
}