#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void calc(double a, double b, double c) {
	double discriminant;
	double root1, root2;

	discriminant = b * b - 4 * a * c;

	if (discriminant >= 0) {
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);

		if (discriminant > 0) {
			printf("���� �ٸ� �� �Ǳ� %.2f, %.2f\n", root1, root2);
		}
		else {
			printf("�߱� &.2f\n", root1);
		}
	}
	else {
		printf("�Ǻ����� ���� %.2f��, �Ǳ��� �������� �ʽ��ϴ�.\n", discriminant);
	}
}

int main(void) {
	double a, b, c;

	printf("2�� ������ ax^2 + bx + c = 0 �� ����� �Է��ϼ���.\n");
	printf("��� a: ");
	scanf("%lf", &a);
	printf("��� b: ");
	scanf("%lf", &b);
	printf("��� c: ");
	scanf("%lf", &c);

	if (a == 0) {
		printf("a�� ���� 0�� �� �� �����ϴ�.\n");
		return 1;
	}

	calc(a, b, c);

	return 0;
}