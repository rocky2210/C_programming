// Time functions

// localtime(): This function converts a time_t value to a struct tm representing the corresponding local time.

#include <stdio.h>
#include <time.h>

int main(){

    time_t current_time;
    struct tm *local_time;

    time(&current_time);
    local_time = localtime(&current_time);

    printf("Current local time: %s",asctime(local_time));
    return 0;
}

/*
    Output:
        Current local time: Wed Mar  6 21:09:01 2024
*/