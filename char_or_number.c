#include <stdio.h>

int main(){

	char sym = '\0';

	printf("Enter the character: ");
	scanf(" %c" , &sym );

	if(sym < 48 || sym > 57){
		printf("false\n");
	}
	else{
		printf("true\n");
	}

	return 0;
}
