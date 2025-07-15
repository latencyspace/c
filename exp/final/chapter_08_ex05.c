/*
Chapter 08. Example 5
정수형 배열에 대하여 배열의 원소 중 최대값과 최소값을 찾는 get_min_max 함수를 정의하시오.
이 함수를 이용해서 배열의 최대값과 최소값을 출력하는 프로그램을 작성하시오.
배열의 크기는 10이고 다음과 같이 초기화해서 사용한다.

실행 결과
배열: 23 45 62 12 99 83 23 50 72 37
최대값: 99
최소값: 12
*/

#include <stdio.h>

/*
Q. 함수의 괄호 안에 무엇을 넣을지 어떻게 결정하는가?
A. 함수가 일을 하는 데 필요한 재료와 결과물을 담을 통을 넣어준다.

get_min_max() 함수를 '최대/최소값을 찾아주는 전문 심부름꾼'으로 비유하자면,
main 함수(사장님)가 이 심부름꾼에게 일을 시키기 위해 무엇을 알려주고 무엇을 줘야하는가?
- 심부름꾼은 어떤 배열을 뒤져야 최대/최소값을 찾을 수 있는지 알아야 하므로, arr 이라는 배열을 알려준다.
- 해당 배열에 데이터가 몇 개 들어있는지 모르면 언제까지 찾아봐야 할지 알 수 없기 때문에 배열의 크기를 알려준다.
- 이 심부름꾼의 역할은 최대/최소값을 찾는 것이기 때문에 최대값과 최소값, 두 개의 결과를 가져와야 한다.
*/
int get_min_max(int arr[], int size, int* min, int* max);

int main(void) {
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int min, max; // 최소값과 최대값을 저장할 변수를 선언한다.

	printf("배열: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	get_min_max(arr, size, &min, &max); // 함수를 호출하여 최소값과 최대값을 찾고, min과 max의 주소를 함수에 전달한다.

	printf("최대값: %d\n", max);
	printf("최소값: %d\n", min);

	return 0;
}

/*
*a = b : a 주소에 b를 입주시킨다.
a = &b : b의 주소를 a에 기록한다.
*/
int get_min_max(int arr[], int size, int* min, int* max) {
	*min = arr[0];
	*max = arr[0];

	for (int i = 0; i < size; i++) {
		if (arr[i] < *min) {
			*min = arr[i];
		}
		if (arr[i] > *max) {
			*max = arr[i];
		}
	}
}
