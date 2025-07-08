#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float density, mass, volume;

	printf("질량(g)? ");
	scanf("%d", &mass);
	printf("부피(세제곱센티미터)? ");
	scanf("%d", &volume);

	density = mass / volume;

	printf("밀도: %f", density);

	return 0;
}