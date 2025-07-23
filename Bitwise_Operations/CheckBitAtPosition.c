#include <stdio.h>

int main(){

	int num = 0;
	int n = 0;

	printf("Enter the number:");
	scanf("%d" , &num);

	do{
		printf("Enter check bit(>0):");
		scanf("%d" , &n);
	}while(n < 0);

	if(num & (1 << n)){
		printf("The check bit is 1:\n");
	}
	else{
		printf("the check bit is 0:\n");
	}
	return 0;
}
