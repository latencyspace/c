#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y;

	printf("������ ����? ");
	scanf("%d", &x);
	printf("������ ����? ");
	scanf("%d", &y);

	int area = x * y;
	int perimeter = 2 * (x + y);

	printf("���簢���� ����: %d\n", area);
	printf("���簢���� �ѷ�: %d\n", perimeter);

	return 0;
}