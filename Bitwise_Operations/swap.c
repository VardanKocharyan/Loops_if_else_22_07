#include <stdio.h>

int main(){

	int x = 0;
	int y = 0;

	printf("x = ");
	scanf("%d" , &x);
	printf("y = ");
	scanf("%d" , &y);

	x ^= y;
	y ^= x;
	x ^= y;

	printf("Swaping\nx = %d\ny = %d\n" , x , y);

	return 0;
}
