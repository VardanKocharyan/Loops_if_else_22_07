#include <stdio.h>

int main(){

	int x = 0;
	int y = 0;
	int power = 1;

	do{
		printf("Enter the number:");
		scanf("%d" , &x);
	}while(x <= 0);

	do{
		printf("Enter the power:");
		scanf("%d" , &y);
	}while(y <= 0);
	
	while(y--){
		power *= x;
	}

	printf("Power is %d:\n" , power);

	return 0;
}
