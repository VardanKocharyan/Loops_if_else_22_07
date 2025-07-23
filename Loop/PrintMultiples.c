#include <stdio.h>

int main(){

	int num = 0;
	
	do{
		printf("Enter the number (>0):");
		scanf("%d" , &num);
	}while(num < 1);

	for(int i = 1 ; i < 11 ; ++i){
		printf("%d * %d = %d\n" , num , i , num * i);
	}

	return 0;
}
