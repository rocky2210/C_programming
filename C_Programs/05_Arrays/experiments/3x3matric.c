#include <stdio.h>
int main(){
    int a[3][3];
    int i,j;
    printf("Enter values for 3 x 3 matric: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Input matrix is: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[j][i]);
            printf("\n");
        }
    }
}

/*
    Output:
        Enter values for 3 x 3 matric: 1
        2
        3
        4
        5
        6
        7
        8
        9
        Input matrix is:
        1
        4
        7
        2
        5
        8
        3
        6
        9
*/