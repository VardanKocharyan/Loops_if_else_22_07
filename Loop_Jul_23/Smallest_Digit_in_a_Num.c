#include <stdio.h>

int main(){

	int num = 0;

	printf("Enter the number:");
	scanf("%d" , &num);

	int min = num % 10;
	num /= 10;

	while(num){
		if(min > num % 10){
			min = num % 10;
		}
		num /= 10;
	}

	printf("The minimum digit in a number is %d\n" , min);
	return 0;
}
