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

		printf("������ �Է��ϼ��� (-1 �Է� �� ����): ");
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
			printf("�Էµ� ���� �����ϴ�.\n");
		}

		if (num_input == MAX_ARR) {
			printf("�Է� ����: %d\n", num_input);
			printf("���: %.1lf\n", avg);
			printf("�ִ밪: %d\n", max);
			printf("�ּҰ�: %d\n", min);
			break;
		}

		if (num_input != 0 && input == -1) {
			printf("�Է� ����: %d\n", num_input);
			printf("���: %.1lf\n", avg);
			printf("�ִ밪: %d\n", max);
			printf("�ּҰ�: %d\n", min);
			break;
		}
	}
}