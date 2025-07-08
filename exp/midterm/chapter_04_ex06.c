#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float mass, velocity, result;

	printf("질량(kg)? ");
	scanf("%f", &mass);
	printf("속력(m/s)? ");
	scanf("%f", &velocity);

	result = (1.0 / 2.0) * mass * (velocity * velocity);

	printf("운동에너지: %.2f J", result);

	return 0;
}