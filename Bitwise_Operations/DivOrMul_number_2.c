#include <stdio.h>

int main(){

	int num = 0;
	char op = '\0';
	int n = 0;

	do{
		printf("Enter the n umber(>=1):");
		scanf("%d" , &num);
	}while(num < 2);
	
	do{
		printf("2 to the power of n:");
		scanf("%d" , &n);
	}while(n < 0);
	
	do{
		printf("Enter the operation:");
		scanf(" %c" , &op);
	}while(op != 42 && op != 47);

	if(op == 42){
		printf("Result is %d\n" , num << n);
	}
	else{
		printf("Result is %d\n" , num >> n);
	}

	return 0;
}
