#include <stdio.h>

int main(){

	int num = 0;
	int sum = 1;
	
	do{
		printf("Enter the number(>0):");
		scanf("%d" , &num);
	}while(num < 1);

	if(num == 1){
		printf("1 is perfet number:\n");
		return 0;
	}

	for(int i = 2; i < num ; ++i){
		if(num % i == 0){
			sum += i;
		}
	}

	if(num == sum){
		printf("Number is perfect:\n");
	}
	else{
		printf("Number isnt perfect:\n");
	}

	return 0;
}
