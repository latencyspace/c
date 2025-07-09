#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int width, height, choice;

	printf("선택 ? 1:정사각형, 2:직사각형 ");
	scanf("%d", &choice);

	if (choice == 1) {
		int area, length;

		printf("한변의 길이 ? ");
		scanf("%d", &width);

		area = width * width;
		length = 4 * width;

		printf("사각형의 면적 : %d\n", area);
		printf("사각형의 길이 : %d\n", length);
	}
	else {
		int area, length;

		printf("가로, 세로의 길이 ? ");
		scanf("%d %d", &width, &height);

		area = width * height;
		length = 2 * (width + height);

		printf("사각형의 면적 : %d\n", area);
		printf("사각형의 길이 : %d\n", length);
	}

	return 0;
}