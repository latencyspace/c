#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, result = 0;

	/*
	do-while ���� ���� ������ ��
	*/

	do {
		printf("�����Է� : ");
		scanf("%d", &num);
		result += num;
	} while (num > 0 || num < 0);

	printf("��: %d", result);
}