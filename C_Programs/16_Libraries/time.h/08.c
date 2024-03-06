// Time functions

// gmtime(): This function converts a time_t value to a struct tm representing the corresponding UTC time.

#include <stdio.h>
#include <time.h>

int main(){
    
    time_t current_time;
    struct tm *utc_time;

    time(&current_time);
    utc_time = gmtime(&current_time);

    printf("UTC time: %s",asctime(utc_time));

    return 0;
}

/*
    Output:
        UTC time: Wed Mar  6 16:13:17 2024
*/