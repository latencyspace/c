#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 5

int main(void) {
	int matrix[ARR_SIZE][ARR_SIZE];
	int diag[ARR_SIZE];

	int i, j;
	int count = 1;

	for (i = 0; i < ARR_SIZE; i++) {
		for (j = 0; j < ARR_SIZE; j++) {
			matrix[i][j] = count;
			count++;
		}
	}

	printf(" ARR_SIZE�� ��� \n");
	for (i = 0; i < ARR_SIZE; i++) {
		for (j = 0; j < ARR_SIZE; j++) {
			printf("%3d", matrix[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < ARR_SIZE; i++) {
		diag[i] = matrix[i][i];
	}

	printf("�밢����: ");
	for (i = 0; i < ARR_SIZE; i++) {
		printf("%d ", diag[i]);
	}
	printf("\n");
	
	return 0;
}