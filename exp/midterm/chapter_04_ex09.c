#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int price, discount_rate, result;

	printf("제품의 가격? ");
	scanf("%d", &price);
	printf("할인율(%%)? ");
	scanf("%d", &discount_rate);

	// result = price - (price * (discount_rate / 100.0));
	result = price - (price * ((double)discount_rate / 100)); // 12000 - (12000 * (25 / 100))


	printf("할인가: %d원 (%d원 할인)", result, (price - result));

	return 0;
}