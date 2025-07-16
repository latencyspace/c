// fill_arr 함수 내에서는 fill_arr 함수의 매개변수를 이용해서 함수를 완성시켜야 하고,
// main 함수 내에서 fill_arr 함수를 사용할 땐,
// main 함수에서 선언한 변수를 fill_arr 함수의 매개변수로 사용해야 한다.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROWS 3
#define COLS 5

void fill_arr(int arr[][COLS], int rows, int input);

int main(void) {
	int arr[ROWS][COLS];
	int input;

	printf("배열의 원소에 저장할 값? ");
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