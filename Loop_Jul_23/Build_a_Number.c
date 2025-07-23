#include <stdio.h>

int main(){

	int a = 0;
	int b = 0;
	int c = 0;

	do{
		printf("Enter the firs digit(1 - 9):");
		scanf("%d" , &a);
	}while(a < 0 || a > 9);

	do{
		printf("Enter the second one(1 - 9):");
		scanf("%d" , &b);
	}while(b < 0 || b > 9);

	do{
		printf("Enter the third one(1 - 9):");
		scanf("%d" , &c);
	}while(c < 0 || c > 9);

	printf("%d\n" , a * 100 + 10 * b + c);

	return 0;
}
