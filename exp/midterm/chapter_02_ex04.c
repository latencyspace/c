/* ��, ��, �ʸ� 2�ڸ� ������ ����Ϸ��� ���� �����ڷ� %2d�� ����Ѵ�.
�̶� �������� ��ĭ�� 0���� ä����� %02d ó�� ���� �� �տ� 0�� �����Ѵ�. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int hour, min, sec;

	printf("��? ");
	scanf("%d", &hour);
	printf("��? ");
	scanf("%d", &min);
	printf("��? ");
	scanf("%d", &sec);

	printf("�Է��� �ð��� %02d:%02d:%02d�Դϴ�.", hour, min, sec);
}