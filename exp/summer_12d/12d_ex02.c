#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char id[20] = "";
	char* p = NULL;
	int year, month, day;

	printf("�ֹι�ȣ �Է� >> ");
	scanf("%s", id);
	p = strtok(id, "-");

	sscanf(p, "%2d%2d%2d", &year, &month, &day);
	printf("������� : 20%d�� %d�� %d��\n", year, month, day);

	p = strtok(NULL, "-");

	if (p[0] == '1' || p[0] == '3') {
		printf("�Է¹��� �ֹι�ȣ�� ���� : male\n");
	}
	else if (p[0] == '2' || p[0] == '4') {
		printf("�Է¹��� �ֹι�ȣ�� ���� : female\n");
	}
	else {
		printf("�߸��� �Է��Դϴ�.");
	}
}