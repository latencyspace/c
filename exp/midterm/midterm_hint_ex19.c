#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char choice;
	int x, y, area;

	printf("�簢���� ���� ���: R\n");
	printf("�ﰢ���� ���� ���: T\n");
	printf("���� ���� ���: C\n");
	printf("�ϳ��� �������ּ���: ");
	scanf("%c", &choice);

	if (choice == 'R') {
		printf("�簢���� ���ο� ������ ���̸� �Է����ּ���: ");
		scanf("%d %d", &x, &y);

		area = x * y;

		printf("����: %d", area);
	}
	if (choice == 'T') {
		printf("�ﰢ���� �غ��� ������ ���̸� �Է����ּ���: ");
		scanf("%d %d", &x, &y);

		area = x * y / 2;

		printf("����: %d", area);
	}
	if (choice == 'C') {
		int r;

		printf("���� �������� ���̸� �Է����ּ���: ");
		scanf("%d", &r);

		area = r * r;

		printf("����: %d", area);
	}

	return 0;
}