#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float density, mass, volume;

	printf("����(g)? ");
	scanf("%d", &mass);
	printf("����(��������Ƽ����)? ");
	scanf("%d", &volume);

	density = mass / volume;

	printf("�е�: %f", density);

	return 0;
}