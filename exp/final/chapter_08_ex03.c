/*
Chapter 08. Example 3
�迭 ���Ҹ� ����Ű�� �����͸� �̿��ؼ� ������ �迭�� ���ҿ� �Է¹��� ������ ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�迭�� ũ��� 10�̰� ������ ���� �ʱ�ȭ�ؼ� ����Ѵ�.

���� ���
12 54 23 43 87 31 67 92 79 7
����? -1
11 53 22 42 86 30 66 91 78 6
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[10] = { 12, 54, 23, 43, 87, 31, 67, 92, 79, 7 };
	int* ptr;
	int input;

	for (ptr = arr; ptr < arr + 10; ptr++) {
		printf("%d ", *ptr);
	}

	printf("\n");
	printf("����? ");
	scanf("%d", &input);

	for (ptr = arr; ptr < arr + 10; ptr++) {
		printf("%d ", *ptr + input);
	}

	return 0;
}