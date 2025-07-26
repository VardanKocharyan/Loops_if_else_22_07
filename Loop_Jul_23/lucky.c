#include <stdio.h>

int main(){

	int num = 0;
	int digit = 0;

	printf("Enter the number:");
	scanf("%d" , &num);

	while(num){
		digit = num % 10;
		if(digit == 4 || digit == 7){}
		else{
			printf("Number isnt lucky number:\n");
			return 0;
		}
		num /= 10;
	}
	printf("The number is lucky number:\n");

	return 0;
}
