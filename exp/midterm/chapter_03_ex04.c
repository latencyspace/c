#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int base, height;

	printf("�غ��� ����? ");
	scanf(" %d %d", &base, &height);

	float area = 0.5 * base * height;

	printf("�����ﰢ���� ����: %.2f", area);

	return 0;
}