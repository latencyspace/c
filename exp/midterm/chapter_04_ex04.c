#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int month;

	printf("�� ��? ");
	scanf("%d", &month);

	printf(1 <= month && month <= 12 ? "�ùٸ� ���Դϴ�." : "�߸��� ���Դϴ�.");

	return 0;
}