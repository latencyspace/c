#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	char str[100];

	printf("���ڿ��� �Է��ϼ���: ");
	fgets(str, sizeof(str), stdin);

	for (int i = 0; str[i] != '\0'; i++) {
		if (islower(str[i])) {
			str[i] = toupper(str[i]);
		}
		else if (isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
	}
	printf("��ȯ�� ���ڿ�: %s", str);

	return 0;
}