/*
Chapter 08. Example 10
등차수열은 앞의 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열이다.
배열과 배열의 크기, 공차를 매개변수로 전달받아 등차수열로 배열을 채우는 함수를 정의하시오.
첫 번째 항의 값은 배열의 0번 원소에 넣어서 전달한다.
이 함수를 이용해서 크기가 10인 배열에 등차수열을 구하고 출력하는 프로그램을 작성하시오.
첫 번째 항과 공차는 입력받도록 처리한다.

실행 결과
첫 번째 항? 3
공차? 5
등차수열: 3 8 13 18 23 28 33 38 43 48
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

int sequence(int arr[], int size, int diff);

int main(void) {
	int sequence_arr[SIZE];
	int size = sizeof(sequence_arr) / sizeof(sequence_arr[0]);
	int common_diff;

	printf("첫 번째 항? ");
	scanf("%d", &sequence_arr[0]); // 첫 번째 항에 대한 변수는 따로 지정할 필요 없이 배열의 첫 번째로 지정한다.
	printf("공차? ");
	scanf("%d", &common_diff);

	printf("등차수열: ");

	sequence(sequence_arr, size, common_diff); // 호출하는 함수의 매개변수에는 main 함수에서 사용한 변수를 사용한다.

	for (int i = 0; i < size; i++) {
		printf("%d ", sequence_arr[i]);
	}

	return 0;
}

int sequence(int arr[], int size, int diff) {
	for (int i = 1; i < size; i++) {
		arr[i] = arr[i - 1] + diff;
	}
}
