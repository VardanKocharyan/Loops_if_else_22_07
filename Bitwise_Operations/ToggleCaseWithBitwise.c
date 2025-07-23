#include <stdio.h>

int main(){

	char c = '\0';

	printf("Enter the character:");
	scanf(" %c" , &c);

	printf("%c\n" , c ^ 32);
	return 0;
}
