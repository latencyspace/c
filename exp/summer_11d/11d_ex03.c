#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_min_max(const int arr[], int size, int* min, int* max);

int main() {
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int min_arr, max_arr;
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("�迭 ����: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	get_min_max(arr, size, &min_arr, &max_arr);

	printf("�迭�� �ּҰ�: %d\n", min_arr);
	printf("�迭�� �ִ밪: %d\n", max_arr);

	return 0;
}

void get_min_max(const int arr[], int size, int* min, int* max) {
	*min = arr[0];
	*max = arr[0];

	/*
	min�� max�� ������ ������ �迭�� 0������ �ʱ�ȭ�߱� ������,
	�Ʒ� for ������ i�� 0���� ������ �ʿ䰡 ����.
	*/

	for (int i = 1; i < size; i++) {
		if (arr[i] < *min) {
			*min = arr[i];
		}
		if (arr[i] > *max) {
			*max = arr[i];
		}
	}
}
