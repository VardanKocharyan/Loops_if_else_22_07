#include <stdio.h>

int main(){

	int num = 0;
	int prime = 1;

	do{
		printf("Enter the number (>0):");
		scanf("%d" , &num);
	}while(num < 1);

	if(num == 1){
		printf("The 1 is neither prime nor composite:\n");
	}
	else if(num == 2 || num == 3){
		printf("The %d is prime:\n" , num);
	}
	else{
		for(int i = 2 ; i <= num / 2 ; ++i){
			if(num % i == 0){
				prime = 0;
				break;
			}
		}
	
		if(prime){
			printf("The %d is prime\n" , num);
		}
		else{
			printf("The %d is composite\n" , num);
		}
	}
	return 0;
	}
