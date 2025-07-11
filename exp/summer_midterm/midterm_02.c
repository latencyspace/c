#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_ARR 10

int main(void) {
	int input;

	while (1) {
		int i;
		int num_input = 0, max = 0, min = 0;
		double sum = 0.0, avg= 0.0;
		int arr[MAX_ARR];

		printf("정수를 입력하세요 (-1 입력 시 종료): ");
		scanf("%d", &input);

		sum += input;
		avg = sum / num_input;

		for (i = 0; i < num_input; i++) {
			sum += arr[i];
			if (arr[i] > max) {
				max = arr[i];
			}
			if (arr[i] < min) {
				min = arr[i];
			}
		}

		if (num_input == 0 && input == -1) {
			printf("입력된 값이 없습니다.\n");
		}

		if (num_input == MAX_ARR) {
			printf("입력 개수: %d\n", num_input);
			printf("평균: %.1lf\n", avg);
			printf("최대값: %d\n", max);
			printf("최소값: %d\n", min);
			break;
		}

		if (num_input != 0 && input == -1) {
			printf("입력 개수: %d\n", num_input);
			printf("평균: %.1lf\n", avg);
			printf("최대값: %d\n", max);
			printf("최소값: %d\n", min);
			break;
		}
	}
}