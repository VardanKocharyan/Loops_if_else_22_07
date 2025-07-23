#include <stdio.h>

int main(){

	int num = 0;
	int sum = 0;
	
	printf("Enter the number: ");
	scanf("%d" , &num);

	if(num < 0){
		num *= (-1);
	}

	while(num){
		sum = sum + num%10;
		num /= 10;
	}

	printf("The sum of digits is %d:\n" , sum);

	return 0;
}
