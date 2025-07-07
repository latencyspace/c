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
			printf("서로 다른 두 실근 %.2f, %.2f\n", root1, root2);
		}
		else {
			printf("중근 &.2f\n", root1);
		}
	}
	else {
		printf("판별식의 값이 %.2f로, 실근이 존재하지 않습니다.\n", discriminant);
	}
}

int main(void) {
	double a, b, c;

	printf("2차 방정식 ax^2 + bx + c = 0 의 계수를 입력하세요.\n");
	printf("계수 a: ");
	scanf("%lf", &a);
	printf("계수 b: ");
	scanf("%lf", &b);
	printf("계수 c: ");
	scanf("%lf", &c);

	if (a == 0) {
		printf("a의 값이 0이 될 수 없습니다.\n");
		return 1;
	}

	calc(a, b, c);

	return 0;
}