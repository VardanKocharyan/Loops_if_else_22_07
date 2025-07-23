#include <stdio.h>

int main(){

	int num = 0;
	int sum = 0;
	
	printf("Enter the number:");
	scanf("%d" , &num);

	if(num & (num - 1)){
		printf("Number isnt power of 4:");
	}
	else{
		while(num){
			sum += 1;
			num >>= 1;
		}
		if(sum & 1){
			printf("Number is power of 4:");
		}
		else{
			printf("Number isnt power of 4:");
		}
	}
	return 0;
}
