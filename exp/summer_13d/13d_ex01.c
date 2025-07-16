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
	strcpy(s1.name, "홍길동");
	strcpy(s1.phone_num, "010-1234-2345");
	s1.ring = 7;

	printf("이름 : %s\n", s1.name);
	printf("전화번호 : %s\n", s1.phone_num);
	printf("벨소리 : %d\n", s1.ring);
	*/

	printf("이름 입력: ");
	scanf("%s", s1.name);
	printf("전화번호 입력: ");
	scanf("%s", s1.phone_num);
	printf("벨소리 입력: ");
	scanf("%d", &s1.ring);

	printf("\n");

	/*
	printf("이름 : %s\n", s1.name);
	printf("전화번호 : %s\n", s1.phone_num);
	printf("벨소리 : %d\n", s1.ring);
	*/
	printf("이름 : %s\n전화번호 : %s\n벨소리 : %d\n", s1.name, s1.phone_num, s1.ring);

	return 0;
}