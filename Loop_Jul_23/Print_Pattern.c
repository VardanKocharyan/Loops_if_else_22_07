#include <stdio.h>

int main(){

	int n = 0;

	do{
		printf("Enter the number(>0):");
		scanf("%d" , &n);
	}while(n < 0);

	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < i + 1 ; ++j){
			printf("%d" , i + 1);
		}
		printf("\n");
	}

	return 0;
}
