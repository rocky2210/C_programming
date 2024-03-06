// Time functions

// strftime(): This function formats the time represented by a struct tm object into a specified format and stores the result as a string.

#include <stdio.h>
#include <time.h>

int main() {
    time_t current_time;
    struct tm *local_time;
    char formatted_time[100];

    time(&current_time);
    local_time = localtime(&current_time);

    strftime(formatted_time, 100, "%Y-%m-%d %H:%M:%S", local_time);
    printf("Formatted time: %s\n", formatted_time);

    return 0;
}

/*
    Output:
        Formatted time: 2024-03-06 21:28:28
*/