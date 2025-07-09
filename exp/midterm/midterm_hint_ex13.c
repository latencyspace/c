#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, result = 0;

	/*
	do-while 문장 구조 이해할 것
	*/

	do {
		printf("정수입력 : ");
		scanf("%d", &num);
		result += num;
	} while (num > 0 || num < 0);

	printf("합: %d", result);
}