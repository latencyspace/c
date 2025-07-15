/*
Chapter 08. Example 4
실수형 배열의 합계를 구하는 함수를 작성하시오.
이 함수를 이용해서 크기가 5인 실수형 배열에 실수를 입력받아 합계를 구하는 프로그램을 작성하시오.

실행 결과
실수 5개를 입력하세요: 12.34 0.54 1.23 4.01 0.12
합계: 18.240000
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double sum_arr(double arr[], int size);

int main(void) {
	double arr[5]; // 크기가 5인 실수형 배열을 생성한다.
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("실수 5개를 입력하세요: ");
	for (int i = 0; i < size; i++) {
		/*
		&는 '~의 주소' 라는 의미이다.
		scanf 함수는 값을 저장하기 위해 변수가 어디에 있는지 주소를 알아야 한다.
		따라서 arr[i](i번째 서랍)의 주소를 알려주기 위해 &를 붙여 i번째 주소가 여기에 있다는 것을 알려준다.
		*/
		scanf("%lf", &arr[i]); // 반복문으로 5개의 실수를 입력받아 배열에 저장한다.
	}

	double total = sum_arr(arr, size); // sum_arr 함수에게 배열 원소의 합계를 요청하고 결과를 받는다.

	printf("합계: %f", total);

	return 0;
}

double sum_arr(double arr[], int size) {
	double sum = 0.0;

	for (int i = 0; i < size; i++) {
		sum += arr[i]; // 배열의 각 원소를 차례대로 sum에 더한다.
	}

	return sum; // 계산이 끝난 최종 합계를 sum_arr을 호출한 main으로 반환(return)한다.
}