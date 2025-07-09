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

	printf("ù��° ������ �Է��Ͻÿ�: ");
	scanf("%lf", &x);
	printf("�ι�° ������ �Է��Ͻÿ�: ");
	scanf("%lf", &y);

	printf("��� ����� %lf�Դϴ�.\n", arithmetic(x, y));
	printf("���� ����� %lf�Դϴ�.\n", geometric(x, y));
	printf("��ȭ ����� %lf�Դϴ�.\n", harmonic(x, y));

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