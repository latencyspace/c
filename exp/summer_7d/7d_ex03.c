#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[10];
	int i;
	int first_term, tolerance; // ù���׿� ���� ���� ��� �� �޸� ����

	/*
	printf("ù°�װ� ������ �Է��Ͻÿ�.");
	scanf(" %d %d", &first_term, &tolerance);

	for (i = 0; i < 10; i++) {
		if (i == 0) {
			arr[i] = first_term;
			printf("arr[%d]=%d\n", i, arr[i]);
		}
		else {
			arr[i] = arr[i-1] + tolerance;
			printf("arr[%d]=%d\n", i, arr[i]);
		}
	}
	*/

	printf("ù°�װ� ������ �Է��Ͻÿ�.");
	scanf(" %d %d", &arr[0], &tolerance);

	for (i = 0; i < 10; i++) {
		if (i == 0) {
			printf("arr[%d]=%d\n", 0, arr[0]);
		}
		else {
			arr[i] = arr[i-1] + tolerance;
			printf("arr[%d]=%d\n", i, arr[i]);
		}
	}

}