#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double x, result;

	printf("x ? ");
	scanf("%lf", &x);

	result = (5 * (x * x * x)) + (6 * (x * x)) + (7 * x);

	printf("result : %lf", result);

	return 0;
}