#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct contact {
	char name[20];
	char phone_num[20];
	int ring;
};

int main(void) {
	struct contact s1;

	/*
	strcpy(s1.name, "ȫ�浿");
	strcpy(s1.phone_num, "010-1234-2345");
	s1.ring = 7;

	printf("�̸� : %s\n", s1.name);
	printf("��ȭ��ȣ : %s\n", s1.phone_num);
	printf("���Ҹ� : %d\n", s1.ring);
	*/

	printf("�̸� �Է�: ");
	scanf("%s", s1.name);
	printf("��ȭ��ȣ �Է�: ");
	scanf("%s", s1.phone_num);
	printf("���Ҹ� �Է�: ");
	scanf("%d", &s1.ring);

	printf("\n");

	/*
	printf("�̸� : %s\n", s1.name);
	printf("��ȭ��ȣ : %s\n", s1.phone_num);
	printf("���Ҹ� : %d\n", s1.ring);
	*/
	printf("�̸� : %s\n��ȭ��ȣ : %s\n���Ҹ� : %d\n", s1.name, s1.phone_num, s1.ring);

	return 0;
}