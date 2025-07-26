#include <stdio.h>

int main(){

	int num1 = 0;
	int num2 = 0;
	int i = 2;

	do{
		printf("Enter the firs number(>0):");
		scanf("%d" , &num1);
	}while(num1 < 0);

	do{
		printf("Enter the second one(>0):");
		scanf("%d" , &num2);
	}while(num2 < 0);

	for( ; i > 0 ; ++i){
		if(num1 % i == 0 && num2 % i == 0){
			printf("First Common Divisor is %d\n" , i);
			break;
		}
	}

	return 0;
}
