#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

int arith_seq(int arr[], int size, int diff);
int print_array(int arr[], int size);

int main(void) {
	int arr[SIZE] = { 0 };
	int diff;

	printf("ù ��° ��? ");
	scanf("%d", &arr[0]);
	printf("����? ");
	scanf("%d", &diff);

	arith_seq(arr, SIZE, diff);

	printf("��������: ");
	print_array(arr, SIZE);
}

int arith_seq(int arr[], int size, int diff) {
	for (int i = 1; i < SIZE; i++) {
		arr[i] = arr[i - 1] + diff;
	}
}

int print_array(int arr[], int size) {
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
}