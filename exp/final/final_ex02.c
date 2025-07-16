#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fill_arr(int arr[], int size, int sequence);

int main(void) {
	int arr[10];
	int size = sizeof(arr) / sizeof(arr[0]);
	int sequence;

	printf("ù ��° ��? ");
	scanf("%d", &arr[0]);
	printf("����? ");
	scanf("%d", &sequence);

	fill_arr(arr, size, sequence);

	printf("��������: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

void fill_arr(int arr[], int size, int sequence) {
	for (int i = 1; i < size; i++) {
		arr[i] = arr[i - 1] + sequence;
	}
}
