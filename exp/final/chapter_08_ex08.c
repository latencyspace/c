/*
Chapter 08. Example 8
������ �迭�� 1~(N-1) ������ ������ ������ ä��� �Լ��� �ۼ��Ͻÿ�.
�� �Լ��� �̿��ؼ� ũ�Ⱑ 10�� int �迭�� 0~99 ������ ������ ������ ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ���
63 42 42  2 79 90 47 33 15 72
*/

#include <stdio.h>
#include <stdlib.h> // rand(), srand()
#include <time.h> // time()

#define SIZE 10
#define MAX_NUM 100

void fill_array_random(int arr[], int size, int max_num);

int main(void) {
	int arr[SIZE];

	srand((unsigned int)time(NULL));

	fill_array_random(arr, SIZE, MAX_NUM);

	for (int i = 0; i < SIZE; i++) {
		printf("%3d ", arr[i]);
	}

	printf("\n");

	return 0;
}

void fill_array_random(int arr[], int size, int max_num) {
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % MAX_NUM;
	}
}
