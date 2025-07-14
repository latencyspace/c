#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_min_max(const int arr[], int size, int* min, int* max);

int main() {
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int min_arr, max_arr;
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("배열 원소: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	get_min_max(arr, size, &min_arr, &max_arr);

	printf("배열의 최소값: %d\n", min_arr);
	printf("배열의 최대값: %d\n", max_arr);

	return 0;
}

void get_min_max(const int arr[], int size, int* min, int* max) {
	*min = arr[0];
	*max = arr[0];

	/*
	min과 max의 포인터 변수를 배열의 0번으로 초기화했기 때문에,
	아래 for 문에서 i를 0부터 시작할 필요가 없다.
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
