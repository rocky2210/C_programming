// Time functions

// clock(): This function returns the processor time consumed by the program since the program started, measured in clock ticks.

#include <stdio.h>
#include <time.h>

int main(){

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    // To measure cpu-time consuming task
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("CPU time used: %f seconds\n", cpu_time_used);

    return 0;
}

/*
    Output:
        CPU time used: 0.000023 seconds
*/