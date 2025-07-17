#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROWS 3
#define COLS 5

int fill_2d_array(int arr[][COLS], int rows, int value);
int print_2d_array(int arr[][COLS], int rows);

int main(void) {
	int data[3][5];
	int value;

	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &value);

	fill_2d_array(data, 3, value);

	print_2d_array(data, 3);
}

int fill_2d_array(int arr[][COLS], int rows, int value) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = value;
		}
	}
}

int print_2d_array(int arr[][COLS], int rows) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}