#include <stdio.h>

int main(){

	int min = 0;
	int max = 0;
	int sum = 0;
	
	do{
		printf("Enter Minimum of the range:");
		scanf("%d" , &min);
		printf("Enter Maximum of the one:");
		scanf("%d" , &max);
	}while(min > max);
	
	while(max >= min){
		if(min & 1){
			min++;
		}
		else{
			sum += min++;
		}
	}

	printf("Sum Of Evens is %d\n" , sum);
	return 0;
}
