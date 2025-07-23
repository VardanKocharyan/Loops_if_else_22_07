#include <stdio.h>

int main(){

	int num = 0;
	int n = 0;

	printf("Enter the number:");
	scanf("%d" , &num);

	do{
		printf("Enter the set bit (>0):");
		scanf("%d" , &n);
	}while(n < 0);

	printf("Set n-th bit: %d\n" , num | (1 << n));

	return 0;
}
