#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fill_arr(int arr[], int size, int sequence);

int main(void) {
	int arr[10];
	int size = sizeof(arr) / sizeof(arr[0]);
	int sequence;

	printf("첫 번째 항? ");
	scanf("%d", &arr[0]);
	printf("공차? ");
	scanf("%d", &sequence);

	fill_arr(arr, size, sequence);

	printf("등차수열: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

void fill_arr(int arr[], int size, int sequence) {
	for (int i = 1; i < size; i++) {
		arr[i] = arr[i - 1] + sequence;
	}
}
