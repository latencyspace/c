#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define USED_FEE 190

int main(void) {
	int monthly_used, total_fee;

	printf("월 사용량(kWh)? ");
	scanf("%d", &monthly_used);

	total_fee = monthly_used * USED_FEE;

	printf("전기 요금: %d원", total_fee);

	return 0;
}