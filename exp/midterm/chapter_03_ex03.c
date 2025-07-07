#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int volumn, height;

	printf("질량(kg)? ");
	scanf("%d", &volumn);
	printf("높이(m)? ");
	scanf("%d", &height);

	float position_energy = 9.8 * volumn * height;

	printf("위치에너지: %.2f J", position_energy);
}