#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double sumOfArr(double arr[], int size);
void print_array(double arr[], int size);

int main(void) {
	double arr[5] = { 0 }; // 2-1. 크기가 5인 실수형 배열 선언
	int i;

	printf("배열원소 입력: ");

	// 2.2. for문으로 배열원소 입력받기
	for (i = 0; i < 5; i++) {
		scanf("%lf", &arr[i]);
	}

	print_array(arr, 5);
	printf("\n배열원소의 합계: %.2f\n", sumOfArr(arr, 5));
}

// 1. 배열원소 합 리턴하는 함수 : sumOfArr
// 1-1. 배열과 배열 크기를 입력으로 받아 실수를 리턴하는 함수 원형 작성
double sumOfArr(double arr[], int size) {
	// 1-2. 합계 저장할 변수(sum), 루프제어변수 선언
	double sum = 0.0;
	int i;

	// 1-3. for문 작성
	for (i = 0;i < size; i++) {
		// 1-3-1. sum에 배열원소 누적하여 합계 구하기
		sum += arr[i];
	}
	// 1-4. sum 리턴
	return sum;
}

void print_array(double arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%.2lf ", arr[i]);
	}
}