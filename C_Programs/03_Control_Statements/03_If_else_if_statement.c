// If else if statement

/*
	If else if statement:
		"if-else if" statement in C allows you to test multiple conditions sequentially. If the first condition is false, it moves to the next condition, and so on.
		Each condition can be any expression that evaluates to a boolean value (true or false), such as a comparison (==, !=, <, <=, >, >=), or a logical operation (&&, ||, !).
*/
#include <stdio.h>
int main(){

	int a = 10;
	if(a < 10){
		printf("%d is greater than 10\n",a);
	}else if (a == 10){
		printf("%d is equal to 10\n",a);
	}else {
		printf("%d is less than 10\n",a);
	}
	return 0;
}

/* 
	Output:
		10 is equal to 10
*/