// Time functions

// mktime(): This function converts a struct tm representing a local time to a time_t object.

#include <stdio.h>
#include <time.h>

int main(){
    struct tm timeinfo = {0};
    timeinfo.tm_year = 2024 - 1900; // year since 1900
    timeinfo.tm_mon = 3;    // March (0-based index)
    timeinfo.tm_mday = 6;
    time_t time = mktime(&timeinfo);

    printf("Time since the epoch: %ld\n",(long)time);
    return 0;
}

/*
    Output:
        Time since the epoch: 1712341800
*/