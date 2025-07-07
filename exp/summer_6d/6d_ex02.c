#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int get_integer(void);
void print_peri_area(int, int);

int main(void) {
	printf("밑변의 길이를 ");
	int base = get_integer();
	printf("높이의 길이를 ");
	int height = get_integer();

	print_peri_area(base, height);

	return 0;
}

int get_integer(void) {
	int res;
	printf("정수 입력: ");
	scanf("%d", &res);
	return res;
}

void print_peri_area(int b, int h) {
	double diag;
	diag = sqrt((double)b * b + (double)h * h);

	printf("삼각형의 둘레 %.2f\n", b + h + diag);
	printf("삼각형의 넓이 %.2f\n", b * h * 0.5);
}