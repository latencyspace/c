#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a;

	printf("�� ���� ����? ");
	scanf("%d", &a);

	int area = a * a;
	int perimeter = 4 * a;

	printf("���簢���� ����: %d\n", area);
	printf("���簢���� �ѷ�: %d\n", perimeter);

	return 0;
}