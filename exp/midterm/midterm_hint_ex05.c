#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int sell_num, price;
	int sell_price;
		
	printf("판매수량 ? ");
	scanf("%d", &sell_num);
	printf("단가 ? ");
	scanf("%d", &price);

	sell_price = sell_num * price;

	if (sell_price > 1000000) {
		sell_price -= (sell_price * 5) / 100;
	}
	else {
		// 빈 칸으로 두기
	}

	printf("판매금액 : %d", sell_price);

	return 0;
}