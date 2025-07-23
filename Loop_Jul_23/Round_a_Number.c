#include <stdio.h>

int main(){

	int num = 0;
	
	printf("Enter the number:");
	scanf("%d" , &num);
	
	int d = num % 10;
	
	if(d >= 5 && num < 0){
		num = 10*(num / 10 - 1);
	}
	else if(d >= 5 && num > 0){
		num  = 10*(num / 10 + 1);
	}
	else{
		num = (num / 10) * 10;
	}

	printf("Round a Number to the Nearest Multiple of 10 is %d\n" , num);

	return 0;
}
		
			
