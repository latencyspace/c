/*
Chapter 08. Example 3
배열 원소를 가리키는 포인터를 이용해서 정수형 배열의 원소에 입력받은 정수를 더한 다음 출력하는 프로그램을 작성하시오.
배열의 크기는 10이고 다음과 같이 초기화해서 사용한다.

실행 결과
12 54 23 43 87 31 67 92 79 7
정수? -1
11 53 22 42 86 30 66 91 78 6
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[10] = { 12, 54, 23, 43, 87, 31, 67, 92, 79, 7 };
	int* ptr;
	int input;

	for (ptr = arr; ptr < arr + 10; ptr++) {
		printf("%d ", *ptr);
	}

	printf("\n");
	printf("정수? ");
	scanf("%d", &input);

	for (ptr = arr; ptr < arr + 10; ptr++) {
		printf("%d ", *ptr + input);
	}

	return 0;
}