#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char personal_num[15];

	char* birth;
	char* id;

	int year, month, day;
	char gender_num;
	char* gender;

	printf("주민번호 입력 >> ");
	scanf("%s", personal_num);

	birth = strtok(personal_num, "-");
	id = strtok(NULL, "-");

	if (birth != NULL && id != NULL) {
		gender_num = id[0];

		sscanf(birth, "%2d%2d%2d", &year, &month, &day);

		if (gender_num == '1' || gender_num == '2') {
			year += 1900;
		}
		else if (gender_num == '3' || gender_num == '4') {
			year += 2000;
		}

		if (gender_num == '1' || gender_num == '3') {
			gender = "male";
		}
		else if (gender_num == '2' || gender_num == '4') {
			gender = "female";
		}
		else {
			gender = "잘못된 성별 입력입니다.";
		}

		printf("생년월일: %d년 %02d월 %02d일\n", year, month, day);
		printf("성별 : %s\n", gender);
	}
	else {
		printf("잘못된 주민번호 입력입니다.");
	}

	return 0;
}