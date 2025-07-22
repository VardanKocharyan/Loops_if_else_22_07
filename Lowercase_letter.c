#include <stdio.h>

int main(){

	char sym = '\0';

	do{
		printf("Enter Capital letter (A - Z):");
		scanf(" %c" , &sym);
	}while(sym < 65 || sym > 90);

	printf("Lowercase letter %c is %c\n" , sym , (sym | 32) );

	return 0;
}
