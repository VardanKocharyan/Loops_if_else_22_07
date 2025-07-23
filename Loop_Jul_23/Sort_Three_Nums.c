#include <stdio.h>

int main(){

	int n1 = 0;
	int n2 = 0;
	int n3 = 0;

printf("Enter the first number");
scanf("%d" , &n1);

printf("Enter the first number");
scanf("%d" , &n2);

printf("Enter the first number");
scanf("%d" , &n3);

	if(n1 > n2){
		n1 ^= n2;
		n2 ^= n1;
		n1 ^= n1;
	}
	
	if(n3 < n1){
		printf("%d %d %d\n" , n3 , n1 , n2); 
	}
	else if(n3 > n2){
		printf("%d %d %d\n" , n1 , n2 , n3);
	}
	else{
		printf("%d %d %d\n" ,n1 , n3 , n2 );
	}

	return 0;
}
