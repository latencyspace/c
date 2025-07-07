/* 입력받은 값이 유효한 날짜인지 검사하려면 추가 코드가 필요하다. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int year, month, day;
	int feb_day;

	printf("연? ");
	scanf("%d", &year);
	printf("월? ");
	scanf("%d", &month);
	printf("일? ");
	scanf("%d", &day);

	if (month < 1 || month > 12) {
		printf("유효하지 않은 월을 입력했습니다.\n");
		return 0;
	}
	
	switch (month) {
		case 2:
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
				feb_day = 29;
			}
			else {
				feb_day = 28;
			}
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			feb_day = 31;
			break;
		default:
			feb_day = 30;
			break;
	}

	if (day >= 1 && day <= feb_day) {
		printf("입력한 날짜는 %d년 %d월 %d일 입니다.\n", year, month, day);
	}
	else {
		printf("입력한 날짜 %d년 %d월 %d일은 유효하지 않습니다.\n", year, month, day);
	}
	
	return 0;
}