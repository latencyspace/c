#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int width, height, choice;

	printf("���� ? 1:���簢��, 2:���簢�� ");
	scanf("%d", &choice);

	if (choice == 1) {
		int area, length;

		printf("�Ѻ��� ���� ? ");
		scanf("%d", &width);

		area = width * width;
		length = 4 * width;

		printf("�簢���� ���� : %d\n", area);
		printf("�簢���� ���� : %d\n", length);
	}
	else {
		int area, length;

		printf("����, ������ ���� ? ");
		scanf("%d %d", &width, &height);

		area = width * height;
		length = 2 * (width + height);

		printf("�簢���� ���� : %d\n", area);
		printf("�簢���� ���� : %d\n", length);
	}

	return 0;
}