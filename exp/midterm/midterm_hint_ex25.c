#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14

// ������ r�� double�� ������ ��!
// �Է� �� ������ �Է��ص� ������ �߻����� ����

double circle_area(double r);
double circle_perimeter(double r);

int main(void) {
	double r;

	printf("���� �������� �Է��ϼ���: ");
	scanf("%lf", &r);

	printf("���� ����: %lf\n", circle_area(r));
	printf("���� �ѷ�: %lf\n", circle_perimeter(r));

	return 0;
}

// return ����
double circle_area(double r) {
	return PI * r * r;
}

double circle_perimeter(double r) {
	return 2 * PI * r;
}