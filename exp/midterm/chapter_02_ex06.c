#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char size;

	printf("�� ������(S,M,L)? ");
	scanf("%c", &size);

	switch (size) {
		case 'S':
		case 's':
			printf("S ����� �����߽��ϴ�.\n");
			break;
		case 'M':
		case 'm':
			printf("M ����� �����߽��ϴ�.\n");
			break;
		case 'L':
		case 'l':
			printf("L ����� �����߽��ϴ�.\n");
			break;
		default:
			printf("�߸��� ����� �����߽��ϴ�.\n");
			break;
	}

	return 0;
}