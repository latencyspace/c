#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a;

	printf("한 변의 길이? ");
	scanf("%d", &a);

	int area = a * a;
	int perimeter = 4 * a;

	printf("정사각형의 넓이: %d\n", area);
	printf("정사각형의 둘레: %d\n", perimeter);

	return 0;
}