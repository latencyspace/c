/*
Chapter 08. Example 2
ũ�Ⱑ 3�� double�� �迭�� ��� ������ �ּҸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
��, �ּ� ���ϱ� �����ڸ� ������� ���ÿ�.

������
x[0]�� �ּ�: 012FFE14
x[1]�� �ּ�: 012FFE1C
x[2]�� �ּ�: 012FFE24
*/

#include <stdio.h>

int main(void) {
	double arr[3];
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++) {
		printf("x[%d]�� �ּ�: %p\n", i, arr + i);
	}

	return 0;
}