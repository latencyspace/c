#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int won, exchange_rate;

	printf("KRW? ");
	scanf("%d", &won);
	printf("��/�޷� ȯ��? ");
	scanf("%d", &exchange_rate);

	/*
	��Ȯ�� �Ҽ��� ����� ��������, ������ �� �� �� �ϳ� �̻��� float�� double�� ���� �Ǽ� Ÿ������ ������־�� �Ѵ�.
	�̸� ����ȯ(Type Casting)�̶�� �Ѵ�.
	*/
	// float dollar = won / exchange_rate;
	float dollar = (float)won / exchange_rate;

	printf("KRW %d = USD %.2f", won, dollar);

	return 0;
}