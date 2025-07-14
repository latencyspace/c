#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_rectInfo(double width, double height, double* area, double* perimeter);

int main() {
	double width, height;
	double rect_area, rect_perimeter;

	printf("직사각형의 가로/세로 길이를 입력하세요: ");
	scanf("%lf %lf", &width, &height);

	get_rectInfo(width, height, &rect_area, &rect_perimeter);

	printf("\n직사각형의 넓이: %f", rect_area);
	printf("\n직사각형의 둘레: %f", rect_perimeter);
	printf("\n");

	return 0;
}

void get_rectInfo(double width, double height, double* area, double* perimeter) {
	*area = width * height;
	*perimeter = 2 * (width + height);
}