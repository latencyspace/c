#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float mass, velocity, result;

	printf("����(kg)? ");
	scanf("%f", &mass);
	printf("�ӷ�(m/s)? ");
	scanf("%f", &velocity);

	result = (1.0 / 2.0) * mass * (velocity * velocity);

	printf("�������: %.2f J", result);

	return 0;
}