#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char choice;
	int x, y, area;

	printf("사각형의 면적 계산: R\n");
	printf("삼각형의 면적 계산: T\n");
	printf("원의 면적 계산: C\n");
	printf("하나를 선택해주세요: ");
	scanf("%c", &choice);

	if (choice == 'R') {
		printf("사각형의 가로와 세로의 길이를 입력해주세요: ");
		scanf("%d %d", &x, &y);

		area = x * y;

		printf("면적: %d", area);
	}
	if (choice == 'T') {
		printf("삼각형의 밑변과 높이의 길이를 입력해주세요: ");
		scanf("%d %d", &x, &y);

		area = x * y / 2;

		printf("면적: %d", area);
	}
	if (choice == 'C') {
		int r;

		printf("원의 반지름의 길이를 입력해주세요: ");
		scanf("%d", &r);

		area = r * r;

		printf("면적: %d", area);
	}

	return 0;
}