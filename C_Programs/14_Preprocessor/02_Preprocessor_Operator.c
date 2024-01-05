//Preprocessor Operator
    
/*
    The Macro Continuation (\) Operator
        A macro is normally confined to a single line.  The macro continuation operator(\) is used
        to continue a macro that is too long for a single line.

        #define message_for(a,b) \
            printf(#a "and" #b ": Hello\n")

    The Stringize (#) Operator
        The stringize or number-sign operator ('#'), when used to within a macro definition, converts
        a macro parameter into a string constant.  This operator may be used only in a macro having a
        spefified argument or parameter list.

*/

#include <stdio.h>

#define message_for(a,b)\
    printf(#a " and "  #b " : Hello\n" );

int main(void){
    message_for(Goku, Vegeta);
    return 0;
}

/*
    Output:
        Goku and Vegeta : Hello
*/