#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���ڿ� ��Ʈ ������ �Ʒ� �� ���� ��� ���� �߰��ص� ��!
#include <ctype.h>
#include <string.h>

int main(void) {
	char file_name[50];
	char extension[10];

	printf("���� �̸��� �Է����ּ���: ");
	scanf("%s", file_name);
	printf("Ȯ���ڸ� �Է����ּ��� : ");
	scanf("%s", extension);

	strcat(file_name, ".");
	strcat(file_name, extension);

	printf("���ϸ�: %s\n", file_name);

	return 0;
}