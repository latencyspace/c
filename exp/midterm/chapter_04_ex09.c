#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int price, discount_rate, result;

	printf("��ǰ�� ����? ");
	scanf("%d", &price);
	printf("������(%%)? ");
	scanf("%d", &discount_rate);

	// result = price - (price * (discount_rate / 100.0));
	result = price - (price * ((double)discount_rate / 100)); // 12000 - (12000 * (25 / 100))


	printf("���ΰ�: %d�� (%d�� ����)", result, (price - result));

	return 0;
}