#include <stdio.h>

int main(){

	int num = 0;

	do{
		printf("Enter the number (>12):");
		scanf("%d" , &num);
	}while(num < 12);

	for ( ; num > 0 ; ){
		printf("%d" , num % 10);
		num /= 10;
	}

	printf("\n");

	return 0;
}
