/*
    C Programming doees not provide direct support for error handling but being a system programming
    language, it provides you access at lower level in the form of return values.  Most of the 
    C or even unix function calls return -1 or NULL in case if any error and set an error code errno.
    It is set as a global variable and indicates an error occured during any function call.  You can
    find various error codes devind in <error.h> header file.

    It is good practice, to set errno to 0 at the time of initializing a program.  A value of 0 
    indicates that there is no error in the program.

    errno, perror(). and strerror()
        The c programming language provides perror() and strerror() functions which can be used to
        display the text message associated with errno.

            >The perror() function display the string you pass to it, followed by a colon, a space,
            and then the textual representation of the current errno value.

            >The strerror() function, which returns a pointer to the textual representation of the
            current errno value.
*/

#include <stdio.h>
#include <errno.h>

int main(){

    FILE *file = fopen("text.txt","r");
    if(file == NULL){
        if(errno == ENOENT){
            printf("File not found\n");
        }else{
            printf("Error opening file\n");
        }
        return 1;
    }
    fclose(file);
    return 0;
}

/*
    Output:
        File not found
*/