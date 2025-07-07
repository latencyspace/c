#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int get_integer(void);
void print_peri_area(int, int);

int main(void) {
	printf("�غ��� ���̸� ");
	int base = get_integer();
	printf("������ ���̸� ");
	int height = get_integer();

	print_peri_area(base, height);

	return 0;
}

int get_integer(void) {
	int res;
	printf("���� �Է�: ");
	scanf("%d", &res);
	return res;
}

void print_peri_area(int b, int h) {
	double diag;
	diag = sqrt((double)b * b + (double)h * h);

	printf("�ﰢ���� �ѷ� %.2f\n", b + h + diag);
	printf("�ﰢ���� ���� %.2f\n", b * h * 0.5);
}