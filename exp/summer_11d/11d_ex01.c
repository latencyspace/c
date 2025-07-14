#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_rectInfo(double width, double height, double* area, double* perimeter);

int main() {
	double width, height;
	double rect_area, rect_perimeter;

	printf("���簢���� ����/���� ���̸� �Է��ϼ���: ");
	scanf("%lf %lf", &width, &height);

	get_rectInfo(width, height, &rect_area, &rect_perimeter);

	printf("\n���簢���� ����: %f", rect_area);
	printf("\n���簢���� �ѷ�: %f", rect_perimeter);
	printf("\n");

	return 0;
}

void get_rectInfo(double width, double height, double* area, double* perimeter) {
	*area = width * height;
	*perimeter = 2 * (width + height);
}