#include <stdio.h>

int main(){

	int num = 0;
	
	do{
		printf("Enter the number(>0):");
		scanf("%d" , &num);
	}while(num < 1);

	printf("All Divisors: ");
	for(int i = 1 ; i <= num ; ++i){
		if(num % i == 0){
			printf("%d " , i);
		}
	}
	printf("\n");
	return 0;
}
	
