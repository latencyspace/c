#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float a, b;

	printf("�Ǽ� 2��? ");
	scanf("%f %f", &a, &b);

	printf("%f + %f = %f\n", a, b, a + b);
	printf("%f - %f = %f\n", a, b, a - b);

	return 0;
}