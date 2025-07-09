#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_array(double arr[], int size);

int main(void) {
	int freeze[] = { 15, 0, -20, -30, 50, -5, -120, -5, 10, -12 };
	int size = sizeof(freeze) / sizeof(freeze[0]);
	int i, max_index = 0;

	printf("어는 점 목록 : ");
	print_array(freeze, size);

	for (i = 1; i < size; i++) {
		if (freeze[max_index] < freeze[i]) {
			max_index = i;
		}
	}
	printf("\n가장 높은 어는 점 : freeze[%d] = %d\n", max_index, freeze[max_index]);
}

void print_array(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}