#include <stdio.h>

int main(void) {
	int num1 = 10;
	int num2 = 20;

	int* p = &num1;
	printf("num1 + num2 = %d\n", num1 + num2);

	// int sum = num1 + num2; // sum = 30
	*p = 20;
	int sum = num1 + num2; // sum = 40

	printf("num1 = %d\n", num1);
	printf("num1 + num2 = %d\n", num1 + num2);
	printf("num1 + num2 = %d\n", sum);

	return 0;
}