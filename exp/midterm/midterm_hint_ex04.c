#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, z, a, b;

	printf("정수를 입력하시오: ");
	scanf("%d", &x);
	printf("정수를 입력하시오: ");
	scanf("%d", &y);
	printf("정수를 입력하시오: ");
	scanf("%d", &z);
	
	a = (x > y) ? x : y;
	b = (a > z) ? a : z;

	printf("가장 큰 수는 %d입니다.\n", b);
	
	return 0;
}