// Time functions

// asctime(): This function converts a struct tm object to a string representing the corresponding time in the format "Day Mon dd hh:mm:ss yyyy".

#include <stdio.h>
#include <time.h>

int main(){

    time_t current_time;
    struct tm *local_time;

    time(&current_time);
    local_time = localtime(&current_time);

    printf("Current time: %s",asctime(local_time));

    return 0;
}

/*
    Output:
        Current time: Wed Mar  6 21:40:44 2024
*/