#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <string.h>
#include <ctype.h>

int main(void) {
	int file_name[30];
	int extension[10];

	printf("���� �̸��� �Է��ϼ���: ");
	scanf("%s", file_name);
	printf("Ȯ���ڸ� �Է��ϼ���: ");
	scanf("%s", extension);

	strcat(file_name, ".");
	strcat(file_name, extension);

	printf("���ϸ�: %s", file_name);

	return 0;
}