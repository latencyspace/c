#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int x, int y);

int main(void) {
	int x, y;
	int result;

	printf("시작 정수 : ");
	scanf("%d", &x);
	printf("종료 정수 : ");
	scanf("%d", &y);
	
	result = sum(x, y);

	printf("Sum of %d to %d = %d\n", x, y, result);

	return 0;
}

int sum(int x, int y) {
	int current_point, total = 0;

	for (current_point = x; current_point <= y; current_point++) {
		total += current_point;
	}

	return total;
}