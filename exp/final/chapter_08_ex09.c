/*
Chapter 08. Example 9
�� ũ�Ⱑ 5�� 2���� int �迭�� ��� ���Ҹ� Ư�������� ä��� �Լ��� �ۼ��Ͻÿ�.
�� �Լ��� �̿��ؼ� �� ũ�Ⱑ 5, �� ũ�Ⱑ 3�� 2���� �迭�� �Է¹��� ������ ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ���
�迭�� ���ҿ� ������ ��? 12
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

    printf("�迭�� ���ҿ� ������ ��? ");
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