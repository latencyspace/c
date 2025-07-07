#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int dollar, exchange_rate;

	printf("USD? ");
	scanf("%d", &dollar);
	printf("원/달러 환율? ");
	scanf("%d", &exchange_rate);

	float won = dollar * exchange_rate;

	printf("USD %d = KRW %.2f", dollar, won);
}