#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int sell_num, price;
	int sell_price;
		
	printf("�Ǹż��� ? ");
	scanf("%d", &sell_num);
	printf("�ܰ� ? ");
	scanf("%d", &price);

	sell_price = sell_num * price;

	if (sell_price > 1000000) {
		sell_price -= (sell_price * 5) / 100;
	}
	else {
		// �� ĭ���� �α�
	}

	printf("�Ǹűݾ� : %d", sell_price);

	return 0;
}