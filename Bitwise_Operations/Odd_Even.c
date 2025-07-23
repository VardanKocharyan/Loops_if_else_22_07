#include <stdio.h>

int main(){

	int num = 0;

	printf("Enter the number:");
	scanf("%d" , &num);

	if(num & 1){
		printf("The number is Odd\n");
	}
	else{
		printf("The number is Even\n");
	}

	return 0;
}
