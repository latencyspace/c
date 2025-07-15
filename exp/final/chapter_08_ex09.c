/*
Chapter 08. Example 9
열 크기가 5인 2차원 int 배열의 모든 원소를 특정값으로 채우는 함수를 작성하시오.
이 함수를 이용해서 열 크기가 5, 행 크기가 3인 2차원 배열을 입력받은 값으로 채우고 출력하는 프로그램을 작성하시오.

실행 결과
배열의 원소에 저장할 값? 12
12 12 12 12 12
12 12 12 12 12
12 12 12 12 12
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROWS 3
#define COLS 5

void fill_array(int arr[][COLS], int rows, int value);

int main(void) {
    int my_array[ROWS][COLS];
    int fill_value;

    printf("배열의 원소에 저장할 값? ");
    scanf("%d", &fill_value);

    fill_array(my_array, ROWS, fill_value);

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", my_array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void fill_array(int arr[][COLS], int rows, int value) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = value;
        }
    }
}