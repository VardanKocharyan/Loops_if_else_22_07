#include <stdio.h>

int main(){

	int num = 0;
	int reverse = 0;
	int normal = 0;
	
	printf("Enter the number:");
	scanf("%d" , &num);

	normal = num;

	while(num){
		reverse = (reverse * 10) + (num % 10);
		num /= 10;
	}
	if(reverse - normal){
		printf("Number isn't polindrome\n");
	}
	else{
		printf("Number is polindrome\n");
	}

	return 0;
}
