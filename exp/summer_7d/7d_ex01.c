#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[10];
	int i;

	printf("�迭 ���Ұ��� �Է��Ͻÿ�.");
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