//Bit Fields

/*
    Bit fields in c allow you to store multiple values in a single integer by using a series of bits.
    A bit field is a set of adjacent bits. Bit fields are declared within a structure bt specifying the width
    of the field in bits.

    Bit Field Declaration
        struct{
            type [member_name]: width;
        };

    Note: The size of bit fields can vary between implementations and may not be the same for all
    platforms.  The width of a bit field is not guaranteed to be equal to the number of bits you 
    specify, as it may be rounded up to the nearest storage unit for the target architecture.

*/

#include <stdio.h>

struct {
    unsigned int age : 3;
}Age;

int main(){
    
    Age.age = 4;
    printf("Sizeof (Age): %ld\n",sizeof(Age));
    printf("Age.age: %d\n",Age.age);

    Age.age = 7;
    printf("Age.age : %d\n",Age.age);

    /*
    You're assigning the value 8 to Age.age. However, the bit-field is designed to hold only 3 bits, meaning it 
    can represent values from 0 to 7. When you try to assign 8 (binary 1000), it exceeds the capacity of the bit-field, 
    and the result is that only the rightmost 3 bits are considered. So, 8 becomes 000 in binary, which is 0 in decimal.
    */
    Age.age = 8;
    printf("Age.age : %d\n",Age.age);

    return 0;
}

/*
    Output:
        Sizeof (Age): 4
        Age.age: 4
        Age.age : 7
        Age.age : 0
*/