#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double sum_arr(double arr[], int size);

int main(void) {
	double arr[5];
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("�Ǽ� 5���� �Է��ϼ���: ");
	for (int i = 0; i < size; i++) {
		scanf("%lf", &arr[i]);
	}

	double total = sum_arr(arr, size);

	printf("�հ�: %f", total);

	return 0;
}

double sum_arr(double arr[], int size) {
	double sum = 0.0;

	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}

	return sum;
}