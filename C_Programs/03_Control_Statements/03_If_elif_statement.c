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

// Output
// 10 is equal to 10