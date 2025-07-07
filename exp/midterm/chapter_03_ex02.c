#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y;

	printf("가로의 길이? ");
	scanf("%d", &x);
	printf("세로의 길이? ");
	scanf("%d", &y);

	int area = x * y;
	int perimeter = 2 * (x + y);

	printf("직사각형의 넓이: %d\n", area);
	printf("직사각형의 둘레: %d\n", perimeter);

	return 0;
}