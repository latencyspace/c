#include <stdio.h>
#include <stdlib.h>

int* merge_arr(int arr1[], int size1, int arr2[], int size2, int* merge_size);
void print_arr(const char* title, int arr[], int size);

int main(void) {
	int arr1[] = { 1, 3, 5, 7, 9 };
	int size1 = sizeof(arr1) / sizeof(arr1[0]);

	int arr2[] = { 2, 4, 6, 8, 10, 12 };
	int size2 = sizeof(arr2) / sizeof(arr2[0]);

	int* arr3 = NULL;
	int size3 = 0;

	print_arr("arr1:", arr1, size1);
	print_arr("arr2:", arr2, size2);

	arr3 = merge_arr(arr1, size1, arr2, size2, &size3);

	if (arr3 != NULL) {
		print_arr("arr3:", arr3, size3);

		free(arr3);
	}

	return 0;
}

int* merge_arr(int arr1[], int size1, int arr2[], int size2, int* merge_size) {
	*merge_size = size1 + size2;

	int* new_arr = (int *)malloc(*merge_size * sizeof(int));

	if (new_arr == NULL) {
		return NULL;
	}

	for (int i = 0; i < size1; i++) {
		new_arr[i] = arr1[i];
	}

	for (int i = 0; i < size2; i++) {
		new_arr[size1 + i] = arr2[i];
	}

	return new_arr;
}

void print_arr(const char* title, int arr[], int size) {
	printf("%s ", title);

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
