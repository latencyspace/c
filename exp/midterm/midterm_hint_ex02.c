#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	/*
	���� ���ڸ� ���� ���� char name; �� ����ص� ������,
	���ڿ��� �Է¹��� ���� char name[50]; �� ���� �迭�� ����ؾ� �Ѵ�.
	*/
	char name[50];
	char address[100];
	int age;

	printf("�̸��� �Է��ϼ���: ");
	/*
	scanf���� ���� ���ڸ� �Է¹��� ���� %c(character)�� ���������,
	���ڿ��� �Է¹��� ���� %s(string)�� ����Ѵ�.
	*/
	scanf("%s", name);
	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &age);
	printf("�ּҸ� �Է��ϼ���: ");
	scanf("%s", address);

	printf("********************\n");
	printf("�̸�: %s\n", name);
	printf("����: %d��\n", age);
	printf("�ּ�: %s\n", address);
	printf("********************\n");

	return 0;
}