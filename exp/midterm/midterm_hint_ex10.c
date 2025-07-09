#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int pay, working_time, working_day, num;

	printf("시간당 급여? ");
	scanf("%d", &pay);
	printf("일일 근무 시간? ");
	scanf("%d", &working_time);
	printf("한달 근무 일수? ");
	scanf("%d", &working_day);
	printf("세금 적용 여부 0: 미적용 1: 4대보험공제(8.41%%) 2: 소득세공제(3.3%%)? ");
	scanf("%d", &num);

	int monthly_pay;

	switch (num) {
		case 0:
			monthly_pay = pay * working_time * working_day;
			break;
		case 1:
			monthly_pay = (pay * working_time * working_day) - ((pay * working_time * working_day * 841) / 10000);
			break;
		case 2:
			monthly_pay = (pay * working_time * working_day) - ((pay * working_time * working_day * 33) / 1000);
	}

	printf("예상 월급여: %d원", monthly_pay);

	return 0;
}
