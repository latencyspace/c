#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[10];
	int i;

	for (i = 0; i < 10; i++) {
		printf("%d��° �迭���Ұ��� �Է��Ͻÿ�.", i+1);
		scanf("%d", &arr[i]);
	}

	printf("==�迭 ���� ���==\n");
	for (i = 0; i < 10; i++) {
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	return 0;
}