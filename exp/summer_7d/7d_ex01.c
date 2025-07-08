#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[10];
	int i;

	printf("배열 원소값을 입력하시오.");
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0) {
			printf("arr[%d]=%d\n", i+1, arr[i]);
		}
	}
	return 0;
}