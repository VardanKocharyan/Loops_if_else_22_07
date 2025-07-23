#include <stdio.h>

int main(){

	int num = 0;

	printf("Enter the number:");
	scanf("%d" , &num);

	while(num){
		if(num % 10 == 4 || num % 10 == 7 && num % 10 != 8){}
		else{
			printf("Number isnt lucky number:\n");
			return 0;
		}
		num /= 10;
	}
	printf("The number is lucky number:\n");

	return 0;
}
