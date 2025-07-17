#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pw_len(char* pw);

int main(void) {
	char* password[50];

	printf("++++++++++++++++++++++++++++++\n");
	printf("패스워드 안정성 테스트\n");
	printf("++++++++++++++++++++++++++++++\n");
	printf("패스워드를 입력하시오>> ");
	scanf("%s", password);

	pw_len(password);

	return 0;
}

void pw_len(char* pw) {
	char* level;

	if (strlen(pw) >= 9) {
		level = "좋음";
	}
	else if (strlen(pw) >= 5 && strlen(pw) < 9) {
		level = "보통";
	}
	else {
		level = "나쁨";
	}

	printf("비밀번호 : %s", level);
}