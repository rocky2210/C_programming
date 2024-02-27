#include <stdio.h>
struct Point{
    int x,y;
};

int main(){
    struct Point p[3];
    int i;
    for(i=0;i<2;i++){
        printf("Enter x & y values:");
        scanf("%d%d",&p[i].x,&p[i].y);
    }
    p[2].x = p[0].x + p[1].x;
    p[2].y = p[0].y + p[1].y;

    for(i = 0; i < 3; i++){
        printf("P%d (x,y) is : %d,%d\n",i,p[i].x,p[i].y);
    }
}

/*
    Output:
        Enter x & y values:10
        20
        Enter x & y values:30
        40
        P0 (x,y) is : 10,20
        P1 (x,y) is : 30,40
        P2 (x,y) is : 40,60
*/