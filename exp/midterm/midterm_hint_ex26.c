#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int r_integer(double);
double r_float(double);

int main(void) {
	double num;
	
	printf("실수 입력: ");
	scanf("%lf", &num);

	printf("입력받은 실수의 정수부: %d\n", r_integer(num));
	printf("입력받은 실수의 소수부: %.4f\n", r_float(num));

	return 0;
}

// 형 변환 복습

int r_integer(double a) {
	return (int)a;
}

double r_float(double b) {
	return b - (int)b;
}