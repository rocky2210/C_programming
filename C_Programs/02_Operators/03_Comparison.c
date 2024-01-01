#include <stdio.h>
int main(){

    int a = 5, b = 5, c = 10;

    //Equal to
    printf("%d == %d is %d\n",a,b,a == b);
    printf("%d == %d is %d\n",a,c,a == c);

    //Greater than
    printf("%d > %d is %d\n",a,b,a > b);
    printf("%d > %d is %d\n",a,c,a > b);

    //Less than
    printf("%d < %d is %d\n",a,b,a < b);
    printf("%d < %d is %d\n",a,c,a < c);

    //Not equal to
    printf("%d != %d is %d\n",a,b,a != b);
    printf("%d != %d is %d\n",a,c,a != c);

    //Greater than or equal to
    printf("%d >= %d is %d\n",a,b,a >= b);
    printf("%d >= %d is %d\n",a,c,a >= c);

    //Less than or equal to
    printf("%d <= %d is %d\n",a,b,a <= b);
    printf("%d <= %d is %d\n",a,c,a <= c);

    return 0;
}
/*
5 == 5 is 1
5 == 10 is 0
5 > 5 is 0
5 > 10 is 0
5 < 5 is 0
5 < 10 is 1
5 != 5 is 0
5 != 10 is 1
5 >= 5 is 1
5 >= 10 is 0
5 <= 5 is 1
5 <= 10 is 1
*/