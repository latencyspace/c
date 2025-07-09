#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14

// 반지름 r도 double로 지정할 것!
// 입력 시 정수로 입력해도 에러가 발생하지 않음

double circle_area(double r);
double circle_perimeter(double r);

int main(void) {
	double r;

	printf("원의 반지름을 입력하세요: ");
	scanf("%lf", &r);

	printf("원의 면적: %lf\n", circle_area(r));
	printf("원의 둘레: %lf\n", circle_perimeter(r));

	return 0;
}

// return 복습
double circle_area(double r) {
	return PI * r * r;
}

double circle_perimeter(double r) {
	return 2 * PI * r;
}