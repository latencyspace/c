#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int r_integer(double);
double r_float(double);

int main(void) {
	double num;
	
	printf("�Ǽ� �Է�: ");
	scanf("%lf", &num);

	printf("�Է¹��� �Ǽ��� ������: %d\n", r_integer(num));
	printf("�Է¹��� �Ǽ��� �Ҽ���: %.4f\n", r_float(num));

	return 0;
}

// �� ��ȯ ����

int r_integer(double a) {
	return (int)a;
}

double r_float(double b) {
	return b - (int)b;
}