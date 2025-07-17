#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 문자열 파트 문제는 아래 두 개의 헤더 파일 추가해둘 것!
#include <ctype.h>
#include <string.h>

int main(void) {
	char file_name[50];
	char extension[10];

	printf("파일 이름을 입력해주세요: ");
	scanf("%s", file_name);
	printf("확장자를 입력해주세요 : ");
	scanf("%s", extension);

	strcat(file_name, ".");
	strcat(file_name, extension);

	printf("파일명: %s\n", file_name);

	return 0;
}