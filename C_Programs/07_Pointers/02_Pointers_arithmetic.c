/*
// Increment a pointer in c
#include <stdio.h>
const int MAX = 3;
int main() {
    int var[] = {10, 100, 200};
    int i, *ptr;

    // Let us have array address in pointer
    ptr = var;

    for (i = 0; i < MAX; i++) {
        printf("Address of var[%d] = %p\n", i,ptr);
        printf("Value of var[%d] = %d\n", i, *ptr);

        // Move to the next location
        ptr++;
    }
    return 0;
}

*/

/*
// Decrementing a pointer
#include <stdio.h>
const int MAX = 3;
int main(){

    int var[] = {10,100,200};
    int i,*ptr;
    //let us have array address in pointer
    ptr = &var[MAX-1];

    for(i = MAX; i > 0; i--){
        printf("Address of var[%d]= %p\n",i-1,ptr);
        printf("Address of var[%d]= %d\n",i-1,*ptr);
        //move to the previous location
        ptr--;
    }

    return 0;
}
*/


// Pointer comparisons
// Pointers may be compared by using relational operators, such as ==, <, and >.

#include <stdio.h>
const int MAX = 3;
int main(){

    int var[] = {10,100,200};
    int i, *ptr;

    //Let us have address of the first element in pointer
    ptr = var;
    i = 0;

    while(ptr <= &var[MAX -1]){
        printf("Address of var[%d] = %p\n",i,ptr);
        printf("Address of var[%d] = %d\n",i,*ptr);
        //point to the next location
        ptr++;
        i++;
    }

    return 0;
}