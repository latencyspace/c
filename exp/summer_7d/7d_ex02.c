#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[10];
	int i;

	for (i = 0; i < 10; i++) {
		printf("%d번째 배열원소값을 입력하시오.", i+1);
		scanf("%d", &arr[i]);
	}

	printf("==배열 원소 출력==\n");
	for (i = 0; i < 10; i++) {
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	return 0;
}