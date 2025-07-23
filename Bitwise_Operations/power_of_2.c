#include <stdio.h>

int main(){

	int num = 0;
	
	do{
		printf("Enter the number(>0):");
		scanf("%d" , &num);
	}while(num < 1);

	if(num & (num - 1)){
		printf("numbers isn't power of 2\n");
	}
	else{
		printf("number is power of 2\n");
	}


return 0;
}
