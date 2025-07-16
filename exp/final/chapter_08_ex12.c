/*
Chapter 08. Example 12
정수형 배열과 키 값을 매개변수로 전달받아 키 값과 같은 원소를 모두 찾은 다음,
찾은 원소의 인덱스를 배열에 저장해서 리턴하는 함수를 작성하시오.
이 함수는 찾은 원소의 개수를 리턴한다.
예를 들어 배열에서 키 값을 2개 찾았으면 2를 리턴하고 찾은 원소의 인덱스는 인덱스 배열에 저장한다.
키 값을 찾을 수 없으면 0을 리턴한다.

실행 결과
12 45 62 12 99 83 23 12 72 37
찾을 값? 12
찾은 항목은 모두 3개입니다.
찾은 항목의 인덱스: 0 3 7
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

int search_all(int arr[], int size, int key, int indices[]);

int main(void) {
	int arr[] = { 12, 45, 62, 12, 99, 83, 23, 12, 72, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int search_value;     // 사용자가 찾을 값
	int indices[SIZE];    // 찾은 인덱스를 저장할 배열
	int found_count;      // 함수가 반환할 '찾은 개수'를 저장할 변수

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("찾을 값? ");
	scanf("%d", &search_value);

	// search_all 함수의 반환값을 found_count에 저장
	found_count = search_all(arr, size, search_value, indices);

	printf("찾은 항목은 모두 %d개입니다.\n", found_count);
	printf("찾은 항목의 인덱스: ");

	for (int i = 0; i < size; i++) {
		if (arr[i] == search_value) {
			printf("%d ", i);
		}
	}

	/*
	// 함수 호출 결과를 바탕으로 출력
	if (found_count > 0) {
		printf("찾은 항목은 모두 %d개입니다.\n", found_count);
		printf("찾은 항목의 인덱스: ");
		// 찾은 개수(found_count)만큼만 반복하여 인덱스 배열을 출력
		for (int i = 0; i < found_count; i++) {
			printf("%d ", indices[i]);
		}
		printf("\n");
	}
	else {
		printf("찾는 값이 배열에 없습니다.\n");
	}
	*/

	return 0;
}

/**
 * @brief 배열에서 key와 일치하는 모든 원소의 인덱스를 찾아 indices 배열에 저장하고, 찾은 개수를 반환
 * @param arr       검색할 원본 데이터 배열
 * @param size      배열의 크기
 * @param key       검색할 값
 * @param indices   찾은 인덱스를 저장할 배열 (출력 매개변수)
 * @return 찾은 원소의 개수
 */
int search_all(int arr[], int size, int key, int indices[]) {
	int count = 0; // 찾은 원소의 개수를 셀 변수

	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			// 키 값을 찾으면, indices 배열에 해당 인덱스(i)를 저장
			indices[count] = i;
			// 찾은 개수를 1 증가
			count++;
		}
	}
	// 루프가 끝난 후 최종적으로 찾은 개수를 반환
	return count;
}