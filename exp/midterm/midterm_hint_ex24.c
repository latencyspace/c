#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_bigger(double a, double b);

int main(void) {
	double a, b;

	printf("실수 두 개를 입력하세요: ");
	scanf("%lf %lf", &a, &b);

	printf("%.2lf", get_bigger(a, b));

	return 0;
}

double get_bigger(double a, double b) {
	// 복습
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}