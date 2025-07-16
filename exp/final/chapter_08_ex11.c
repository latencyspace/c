/*
Chapter 08. Example 11
7장의 선택 정렬 코드를 이용해서 정수형 배열을 정렬하는 함수를 정의하시오.
이 함수를 이용해서 int 배열을 정렬하고 그 결과를 출력하는 프로그램을 작성하시오.
배열의 크기는 10이고 다음과 같이 초기화해서 사용한다.

실행 결과
정렬 전: 92 34 76 32 15 28 41 55 89 62
정렬 후: 15 28 32 34 41 55 62 76 89 92
*/

#include <stdio.h>

void align(int arr[], int size);
void swap(int* a, int* b);

int main(void) {
	int arr[] = { 92, 34, 76, 32, 15, 28, 41, 55, 89, 62 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("정렬 전: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	align(arr, size);

	printf("정렬 후: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

void align(int arr[], int size) {
	int i, j;
	
	// 알고리즘 복습 필요
	// 가정: 키 순서대로 줄 세우기
	for (i = 0; i < size - 1; i++) { // i는 정렬된 학생 수
		for (j = 0; j < size - 1 - i; j++) { // j는 줄의 맨 앞에서 아직 정렬되지 않은 학생들을 비교하는 선생님
			if (arr[j] > arr[j + 1]) { // 선생님(j)이 바로 앞의 두 학생(j와 j+1)의 키 비교
				swap(&arr[j], &arr[j + 1]); // 두 학생의 자리 변경
			}
		}
	}
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
