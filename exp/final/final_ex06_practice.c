#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <string.h>
#include <ctype.h>

int main(void) {
	int file_name[30];
	int extension[10];

	printf("파일 이름을 입력하세요: ");
	scanf("%s", file_name);
	printf("확장자를 입력하세요: ");
	scanf("%s", extension);

	strcat(file_name, ".");
	strcat(file_name, extension);

	printf("파일명: %s", file_name);

	return 0;
}