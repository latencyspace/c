#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int choice, n, i, sum = 0, stop = 1;
	char *s = "";

	while (stop) {
		printf("\n1. 1 부터 N 까지의 합 \n");
		printf("2. 1 부터 N 까지 홀수의 합 \n");
		printf("3. 1 부터 N 까지 짝수의 합 \n");
		printf("4. 프로그램 종료 \n");
		printf("Select ? (1~4) ");
		scanf("%d", &choice);

		if (choice == 4) {
			break;
		}

		if (choice < 1 || choice > 4) {
			continue;
		}

		printf("N 값 입력 ? ");
		scanf("%d", &n);

		switch (choice) {
		case 1:
			s = " ";
			for (i = 1; i <= n; i++) {
				sum += i;
			}
			break;
		case 2:
			s = "홀수";
			for (i = 1; i <= n; i++) {
				if (i % 2 != 0) {
					sum += i;
				}
			}
			break;
		case 3:
			s = "짝수";
			for (i = 1; i <= n; i++) {
				if (i % 2 == 0) {
					sum += i;
				}
			}
			break;
		}
		printf("\n1 부터 %d 까지 %s 합: %d \n", n, s, sum);

		sum = 0; // 합계 초기화
	}
	printf("End. \n");

	return 0;
}