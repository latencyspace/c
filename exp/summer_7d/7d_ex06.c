#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SEATS 10

int main(void) {
	int seats[SEATS] = { 0 };
	int i;

	while (1) {
		int available = 0;

		// 복습
		printf("현재좌석 : [");
		for (i = 0; i < SEATS; i++) {
			if (seats[i] == 0) {
				printf(" O");
				available++;
			}
			else {
				printf(" X");
			}
		}
		printf(" ]\n");

		printf("예매할 좌석수>> ");
		int booking;
		scanf("%d", &booking);

		if (booking > available) {
			printf("남은 좌석수가 %d이므로 %d좌석을 예매할 수 없습니다.\n", available, booking);
			continue;
		}

		// 복습
		int booked = 0;
		for (i = 0; i < SEATS && booked < booking; i++) {
			if (seats[i] == 0) {
				seats[i] = 1;
				printf("%d ", i + 1);
				booked++;
			}
		}
		printf("번 좌석을 예매했습니다.\n");

		if (available == 0) {
			printf("모든 좌석이 매진되었습니다.\n");
			break;
		}
	}
	return 0;
}