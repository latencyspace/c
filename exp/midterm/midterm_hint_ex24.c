#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_bigger(double a, double b);

int main(void) {
	double a, b;

	printf("�Ǽ� �� ���� �Է��ϼ���: ");
	scanf("%lf %lf", &a, &b);

	printf("%.2lf", get_bigger(a, b));

	return 0;
}

double get_bigger(double a, double b) {
	// ����
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}