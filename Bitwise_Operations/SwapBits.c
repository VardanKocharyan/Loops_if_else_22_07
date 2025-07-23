#include <stdio.h>

int main(){

	int num = 0;
	int i = 0;
	int j = 0;
	int n = 0;
	
	printf("Enter the number:");
	scanf("%d" , &num);

	do{
		printf("Enter the i-th bit(>=0):");
		scanf ("%d" , &i);
	}while(i < 0);

	do{
		printf("Enter the j-th bit(>=0):");
		scanf("%d" , &j);
	}while(j < 0);

	int ibit = (num >> i) & 1;
	int jbit = (num >> j) & 1;

	if(ibit != jbit){
		num ^= (1 << i);
		num ^= (1 << j);
	}

	printf("%d\n" , num);

	return 0;
}
