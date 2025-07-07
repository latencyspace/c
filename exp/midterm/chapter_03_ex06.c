#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int won, exchange_rate;

	printf("KRW? ");
	scanf("%d", &won);
	printf("원/달러 환율? ");
	scanf("%d", &exchange_rate);

	/*
	정확한 소수점 결과를 얻으려면, 나누는 두 수 중 하나 이상을 float나 double과 같은 실수 타입으로 만들어주어야 한다.
	이를 형변환(Type Casting)이라고 한다.
	*/
	// float dollar = won / exchange_rate;
	float dollar = (float)won / exchange_rate;

	printf("KRW %d = USD %.2f", won, dollar);

	return 0;
}