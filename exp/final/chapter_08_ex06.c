/*
Chapter 08. Example 6
���簢���� ���̿� �ѷ��� ���ϴ� �Լ��� �ۼ��Ͻÿ�.
�� �Լ��� �̿��ؼ� ���簢���� ����, ������ ���̸� �Է¹޾� ���̿� �ѷ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ���
����? 100
����? 200
����: 20000, �ѷ�: 600
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calc(int width, int height, int* area, int* perimeter);

int main(void) {
	int width, height;
	int area, perimeter;

	printf("����? ");
	scanf("%d", &width);
	printf("����? ");
	scanf("%d", &height);

	printf("\n");

	calc(width, height, &area, &perimeter); // area�� perimeter ������ �ּҸ� �Լ��� �����Ѵ�.

	printf("����: %d, �ѷ�: %d", area, perimeter);

	return 0;
}

int calc(int width, int height, int* area, int* perimeter) {
	*area = width * height; // �����Ͱ� ����Ű�� ���� ���̸� ����Ͽ� �����Ѵ�.
	*perimeter = 2 * (width + height); // �����Ͱ� ����Ű�� ���� �ѷ��� ����Ͽ� �����Ѵ�.
}
