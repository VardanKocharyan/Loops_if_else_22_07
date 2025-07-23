#include <stdio.h>

int main(){

	int x = 0;
	int y = 0;
	int z = 0;

	printf("Enter the firs number:");
	scanf("%d" , &x);

	printf("Enter the second one:");
	scanf("%d" , &y);

	printf("Enter the third one:");
	scanf("%d" , &z);

	if(x < y){
		x = y;
	}
	if(x < z){
		x = z;
	}

	printf("\nThe mux number is %d:\n" , x);

	return 0;
}
