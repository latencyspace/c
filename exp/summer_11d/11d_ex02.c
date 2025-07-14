#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sumAvg(const int arr[], int size, int* num, double* avg);

int main() {
	int arr[] = { 10, 20, 30, 40, 50, 60 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	int sum;
	double avg;

	printf("�迭 ����: ");

	for (int i = 0; i < arr_size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	sumAvg(arr, arr_size, &sum, &avg);

	printf("�հ�: %d\n", sum);
	printf("���: %.2f\n", avg);

	return 0;
}

void sumAvg(const int arr[], int arr_size, int* sum, double* avg) {
	*sum = 0; // ������ �ʱ�ȭ������ ������ ������ ������ �����ϱ� ������ ���������� ����� ����ȴ�.
	
	for (int i = 0; i < arr_size; i++) {
		*sum += arr[i];
	}

	if (arr_size > 0) {
		*avg = (double)(*sum) / arr_size;
	}
	else {
		*avg = 0.0;
	}
}