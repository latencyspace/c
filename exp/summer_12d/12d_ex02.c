#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char id[20] = "";
	char* p = NULL;
	int year, month, day;

	printf("주민번호 입력 >> ");
	scanf("%s", id);
	p = strtok(id, "-");

	sscanf(p, "%2d%2d%2d", &year, &month, &day);
	printf("생년월일 : 20%d년 %d월 %d일\n", year, month, day);

	p = strtok(NULL, "-");

	if (p[0] == '1' || p[0] == '3') {
		printf("입력받은 주민번호의 성별 : male\n");
	}
	else if (p[0] == '2' || p[0] == '4') {
		printf("입력받은 주민번호의 성별 : female\n");
	}
	else {
		printf("잘못된 입력입니다.");
	}
}