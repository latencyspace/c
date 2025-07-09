#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_tax(int income);

int main(void) {
	int income;

	printf("�ҵ��� �Է��Ͻÿ� (����: ����): ");
	scanf("%d", &income);

	printf("�ҵ漼: %.2lf ����", get_tax(income));

	return 0;
}

double get_tax(int income) {
	double tax;

	if (income <= 1000 && income > 0) {
		tax = (income * 8) / 100;
	}
	else {
		tax = ((1000 * 8) / 100) + (((income - 1000) * 10) / 100);
	}

	return tax;
}