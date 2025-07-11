#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_delivery_fee(int weight);

int main(void) {
	int weight = 0;

	printf("택배 무게를 입력하시오 (단위: kg): ");
	scanf("%d", &weight);

	get_delivery_fee(weight);
}

int get_delivery_fee(int weight) {
	int fee;

	if (weight <= 5 && weight > 0) {
		fee = 3000;
		printf("요금: %.2lf 원", (double)fee);
	}

	if (weight > 5) {
		fee = 3000 + (500 * (weight - 5));
		printf("요금: %.2lf 원", (double)fee);
	}
	return fee;
}
