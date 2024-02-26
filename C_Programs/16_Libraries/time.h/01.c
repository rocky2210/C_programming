// Time functions

// 1. time(): This functions returns the current calendar time (seconds since the Epoch).

#include <stdio.h>
#include <time.h>

int main(){

    time_t current_time;
    time(&current_time);
    printf("Current time (Epoch): %ld\n",current_time);
    return 0;
}