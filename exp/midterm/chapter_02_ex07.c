#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float a, b;

	printf("½Ç¼ö 2°³? ");
	scanf("%f %f", &a, &b);

	printf("%f + %f = %f\n", a, b, a + b);
	printf("%f - %f = %f\n", a, b, a - b);

	return 0;
}