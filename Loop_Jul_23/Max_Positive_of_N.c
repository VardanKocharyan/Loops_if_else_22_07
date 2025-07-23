#include <stdio.h>

int main(){

	int num = 0;
	int max = -1;
	
	printf("Enter the Number");
	printf("(-1 to quit):");

	while(1){

		scanf("%d" , &num);

		if(num == -1 && max <= 0){
			printf("Havnt max positive number:\n");
			return 0;
		}
		else if(num == -1){
			printf("Exiting\n");
			printf("Max positive number is %d\n" , max);
			return 0;
		}

		if(max < num){
			max = num;
			num = 0;
		}
		printf("Enter the Number(-1 to quit:)");
	}

	return 0;
}
		
