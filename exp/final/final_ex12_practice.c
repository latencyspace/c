#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pw_len(char* pw);

int main(void) {
	char* password[50];

	printf("++++++++++++++++++++++++++++++\n");
	printf("�н����� ������ �׽�Ʈ\n");
	printf("++++++++++++++++++++++++++++++\n");
	printf("�н����带 �Է��Ͻÿ�>> ");
	scanf("%s", password);

	pw_len(password);

	return 0;
}

void pw_len(char* pw) {
	char* level;

	if (strlen(pw) >= 9) {
		level = "����";
	}
	else if (strlen(pw) >= 5 && strlen(pw) < 9) {
		level = "����";
	}
	else {
		level = "����";
	}

	printf("��й�ȣ : %s", level);
}