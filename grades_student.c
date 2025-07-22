#include <stdio.h>

int main(){

	int g = 0;

	do{
		printf("Enter a grades: ");
		scanf("%d" , &g);
	}while(g < 0 || g > 100);

	if(g > 89 && g <= 100){
		printf("Class A\n");
	}
	else if(g > 79 && g < 90){
		printf("Class B\n");
	}
	else if(g > 69 && g < 80){
		printf("Class C\n");
	}
	else if(g > 59 && g < 70){
		printf("Class D\n");
	}
	else{
		printf("Class E\n");
	}

	return 0;
}
