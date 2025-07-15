/*
Chapter 08. Example 7
크기가 같은 2개의 정수형 배열을 매개변수로 전달받아 두 배열의 원소들의 값을 맞바꾸는 함수를 작성하시오.
이 함수를 이용해서 크기가 5인 두 배열의 값을 맞바꾸는 프로그램을 작성하시오.
배열은 다음과 같이 초기화해서 사용한다.

실행 결과
a 배열: 1 3 5 7 9
b 배열: 0 2 4 6 8
<< swap_array 호출 후 >>
a 배열: 0 2 4 6 8
b 배열: 1 3 5 7 9
*/

#include <stdio.h>

int swap_array(int arr1[], int arr2[], int size);

int main(void) {
	int arr1[5] = { 1, 3, 5, 7, 9 };
	int arr2[5] = { 0, 2, 4, 6, 8 };
	int size = 5;

	printf("a 배열: ");
	for (int i = 0; i < size; i++) {
		printf("%3d", arr1[i]);
	}
	printf("\n");
	printf("b 배열: ");
	for (int i = 0; i < size; i++) {
		printf("%3d", arr2[i]);
	}

	swap_array(arr1, arr2, size);

	printf("\n<< swap_array 호출 후 >>\n");

	printf("a 배열: ");
	for (int i = 0; i < size; i++) {
		printf("%3d", arr1[i]);
	}
	printf("\n");
	printf("b 배열: ");
	for (int i = 0; i < size; i++) {
		printf("%3d", arr2[i]);
	}
}

int swap_array(int arr1[], int arr2[], int size) {
	int temp[5]; // 그냥 배열을 사용하지 않고 temp로 사용해도 에러가 발생하지 않는다.

	for (int i = 0; i < size; i++) {
		temp[i] = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp[i];
	}
}
