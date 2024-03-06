// Time functions

// difftime(): This function calculates the difference in seconds between two time_t objects.

#include <stdio.h>
#include <time.h>

int main(){

    time_t start_time,end_time;
    double elapsed_seconds;

    time(&start_time);
    // measure time-consuming task
    time(&end_time);

    elapsed_seconds = difftime(end_time,start_time);
    printf("Time taken: %f seconds\n", elapsed_seconds);

    return 0;
}

/*
    Output:
        Time taken: 0.000000 seconds
*/