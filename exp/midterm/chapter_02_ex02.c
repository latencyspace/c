#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a;
	printf("10진수 정수? ");
	scanf("%d", &a);

	printf("10진수 %d은 16진수 %x에 해당합니다.", a, a);

	return 0;
}