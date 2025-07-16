// fill_arr �Լ� �������� fill_arr �Լ��� �Ű������� �̿��ؼ� �Լ��� �ϼ����Ѿ� �ϰ�,
// main �Լ� ������ fill_arr �Լ��� ����� ��,
// main �Լ����� ������ ������ fill_arr �Լ��� �Ű������� ����ؾ� �Ѵ�.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROWS 3
#define COLS 5

void fill_arr(int arr[][COLS], int rows, int input);

int main(void) {
	int arr[ROWS][COLS];
	int input;

	printf("�迭�� ���ҿ� ������ ��? ");
	scanf("%d", &input);

	fill_arr(arr, ROWS, input);

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

void fill_arr(int arr[][COLS], int rows, int input) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = input;
		}
	}
}