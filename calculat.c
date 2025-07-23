#include <stdio.h>

int main(){

	int num1 = 0;
	int num2 = 0;
	char op = '\0';

	printf("Enter the firs num:");
	printf("(q to quit):");

	while(scanf("%d" , &num1)){

		printf("Enter the second one:");
		scanf("%d" , &num2);

		printf("Enter the operation:");
		scanf(" %c" , &op);

		switch (op) {
			case '+':
				printf("%d + %d = %d\n" , num1 , num2 , num1 + num2);
			break;
			case '-':
				printf("%d - %d = %d\n" , num1 , num2 , num1 - num2);
			break;
			case '*':
				printf("%d * %d = %d\n" , num1 , num2 , num1 * num2);
			break;
			case '/':
				printf("%d / %d = %d\n" , num1 , num2 , num1 / num2);
			break;
			default:
				printf("Unknown opertion\n");
}

	printf("Enter the firs num:");
        printf("(q to quit):");
}

	printf("Exiting\n");
return 0;
}
