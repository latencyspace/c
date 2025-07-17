#include <stdio.h>

int* search(int* A, int size, int x);

int main(void) {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int searching_num = 9;

	int* found_ptr = NULL;
	
	found_ptr = search(arr, size, searching_num);

	if (found_ptr != NULL) {
		printf("찾는 숫자 : %d\n", *found_ptr);
	}
	else {
		printf("찾는 숫자가 없습니다.\n");
	}
}

int* search(int* A, int size, int x) {
	for (int i = 0; i < size; i++) {
		if (A[i] == x) {
			return &A[i];
		}
	}

	return NULL;
}