/*
Chapter 08. Example 2
크기가 3인 double형 배열의 모든 원소의 주소를 출력하는 프로그램을 작성하시오.
단, 주소 구하기 연산자를 사용하지 마시오.

실행결과
x[0]의 주소: 012FFE14
x[1]의 주소: 012FFE1C
x[2]의 주소: 012FFE24
*/

#include <stdio.h>

int main(void) {
	double arr[3];
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++) {
		printf("x[%d]의 주소: %p\n", i, arr + i);
	}

	return 0;
}