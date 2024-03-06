// Time functions

// 2. ctime() Converts a time_t value to a string representing the local time.

#include <stdio.h>
#include <time.h>

int main(){
    time_t current_time;
    time(&current_time);
    printf("Current time: %s",ctime(&current_time));
    return 0;
}

/*
    Output:
        Current time: Wed Mar  6 20:58:25 2024
*/