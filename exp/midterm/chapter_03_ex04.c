#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int base, height;

	printf("밑변과 높이? ");
	scanf(" %d %d", &base, &height);

	float area = 0.5 * base * height;

	printf("직각삼각형의 면적: %.2f", area);

	return 0;
}