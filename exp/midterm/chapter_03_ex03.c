#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int volumn, height;

	printf("����(kg)? ");
	scanf("%d", &volumn);
	printf("����(m)? ");
	scanf("%d", &height);

	float position_energy = 9.8 * volumn * height;

	printf("��ġ������: %.2f J", position_energy);
}