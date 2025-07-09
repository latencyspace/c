#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_tax(int income);

int main(void) {
	int income;

	printf("소득을 입력하시오 (단위: 만원): ");
	scanf("%d", &income);

	printf("소득세: %.2lf 만원", get_tax(income));

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