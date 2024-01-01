#include <stdio.h>

// creating a function
void myfunction(){
    printf("hello world\n");
}

// parameter and arguments
void myfun(char name[]){
    printf("Hello %s\n",name);
}

// multiple parameter
void mulfun(char name[],int age){
    printf("Your name is : %s and age is %d",name,age);
}

// passing array as parameters
void arrfun(int mynumbers[5]){
    for(int i = 0; i < 5; i++){
        printf("%d\n",mynumbers[i]);
    }
}

// return values
int ret(int x){
    return 5 + x;
}

int main(){

    // calling the function
    myfunction();

    myfun("Baby");

    mulfun("inu",10);
    printf("\n---------\n");

    // array
    int arr[5] = {10,20,30,40,50};
    arrfun(arr);

    // return 
    int i = 10;
    printf("Return value : %d\n",ret(i));
    return 0;
}