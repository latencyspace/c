#include <stdio.h>

int get_min_max(int arr[], int size, int* min, int* max);

int main(void) {
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int min, max;

	printf("배열: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	get_min_max(arr, size, &min, &max);

	printf("최대값: %d\n", max);
	printf("최소값: %d\n", min);

	return 0;
}

int get_min_max(int arr[], int size, int* min, int* max) {
	*min = arr[0];
	*max = arr[0];

	for (int i = 0; i < size; i++) {
		if (arr[i] < *min) {
			*min = arr[i];
		}
		if (arr[i] > *max) {
			*max = arr[i];
		}
	}
}
