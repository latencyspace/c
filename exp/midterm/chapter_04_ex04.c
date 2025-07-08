#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int month;

	printf("몇 월? ");
	scanf("%d", &month);

	printf(1 <= month && month <= 12 ? "올바른 값입니다." : "잘못된 값입니다.");

	return 0;
}