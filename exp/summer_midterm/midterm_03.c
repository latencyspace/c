#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_delivery_fee(int weight);

int main(void) {
	int weight = 0;

	printf("�ù� ���Ը� �Է��Ͻÿ� (����: kg): ");
	scanf("%d", &weight);

	get_delivery_fee(weight);
}

int get_delivery_fee(int weight) {
	int fee;

	if (weight <= 5 && weight > 0) {
		fee = 3000;
		printf("���: %.2lf ��", (double)fee);
	}

	if (weight > 5) {
		fee = 3000 + (500 * (weight - 5));
		printf("���: %.2lf ��", (double)fee);
	}
	return fee;
}
