#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define USED_FEE 190

int main(void) {
	int based_fee, monthly_used, total_fee;

	printf("�⺻ ���? ");
	scanf("%d", &based_fee);
	printf("�� ��뷮(kWh)? ");
	scanf("%d", &monthly_used);

	total_fee = based_fee + monthly_used * USED_FEE;

	printf("���� ���: %d��", total_fee);

	return 0;
}