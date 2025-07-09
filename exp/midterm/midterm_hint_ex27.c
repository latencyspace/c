#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// Arithmetic Mean, Geometric Mean, Harmonic Mean
// double arithmetic(double, double);
// double geometric(double, double);
// double harmonic(double, double);
double arithmetic(double x, double y);
double geometric(double x, double y);
double harmonic(double x, double y);

int main(void) {
	double x, y;

	printf("첫번째 정수를 입력하시오: ");
	scanf("%lf", &x);
	printf("두번째 정수를 입력하시오: ");
	scanf("%lf", &y);

	printf("산술 평균은 %lf입니다.\n", arithmetic(x, y));
	printf("기하 평균은 %lf입니다.\n", geometric(x, y));
	printf("조화 평균은 %lf입니다.\n", harmonic(x, y));

	return 0;
}

double arithmetic(double x, double y) {
	return ((x + y) / 2);
}

double geometric(double x, double y) {
	return sqrt(x * y);
}

double harmonic(double x, double y) {
	return ((2 * x * y) / (x + y));
}