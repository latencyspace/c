/*
정수형 배열의 모든 원소를 특정 값으로 채우는 함수를 작성하시오.
함수 매개변수로는 정수형 배열, 배열 크기, 배열을 채울 값이 필요하다.
크기가 20인 배열을 선언해서 입력받은 값으로 배열 전체를 채우고 출력하는 프로그램을 작성하시오.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE 20

void fill_array(int arr[], int size, int value) {
	int i;

	for (i = 0; i < size; i++) {
		arr[i] = value;
	}
}

int main(void) {
	int array_ex[ARRAY_SIZE];
	int fill_value;
	int i;

	printf("배열을 채울 값을 입력하세요: ");
	scanf("%d", &fill_value);

	fill_array(array_ex, ARRAY_SIZE, fill_value);

	printf("\n배열이 %d로 채워졌습니다.\n", fill_value);
	printf("배열의 내용: ");
	for (i = 0; i < ARRAY_SIZE; i++) {
		printf("%d ", array_ex[i]);
	}
	printf("\n");

	return 0;
}