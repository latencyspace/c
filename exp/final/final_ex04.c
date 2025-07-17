#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_sum_diff(int A[], int n, int* p_sum, int* p_diff);

int main(void) {
	int arr[2] = { 100, 200 };

	int* sum_result = 0;
	int* diff_result = 0;

	get_sum_diff(arr, 2, &sum_result, &diff_result);

	printf("원소들의 합=%d\n", sum_result);
	printf("원소들의 차=%d\n", diff_result);
}

void get_sum_diff(int A[], int n, int* p_sum, int* p_diff) {
	*p_sum = A[0] + A[1];
	*p_diff = A[0] - A[1];
}