/*
Chapter 08. Example 8
정수형 배열을 1~(N-1) 사이의 임의의 정수로 채우는 함수를 작성하시오.
이 함수를 이용해서 크기가 10인 int 배열에 0~99 사이의 임의의 정수를 채우고 출력하는 프로그램을 작성하시오.

실행 결과
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
