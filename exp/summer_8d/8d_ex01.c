/*
������ �迭�� ��� ���Ҹ� Ư�� ������ ä��� �Լ��� �ۼ��Ͻÿ�.
�Լ� �Ű������δ� ������ �迭, �迭 ũ��, �迭�� ä�� ���� �ʿ��ϴ�.
ũ�Ⱑ 20�� �迭�� �����ؼ� �Է¹��� ������ �迭 ��ü�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE 20

void fill_array(int arr[], int size, int value) {
	int i;

	for (i = 0; i < size; i++) {
		arr[i] = value;
	}
}

int main(void) {
	int array_ex[ARRAY_SIZE];
	int fill_value;
	int i;

	printf("�迭�� ä�� ���� �Է��ϼ���: ");
	scanf("%d", &fill_value);

	fill_array(array_ex, ARRAY_SIZE, fill_value);

	printf("\n�迭�� %d�� ä�������ϴ�.\n", fill_value);
	printf("�迭�� ����: ");
	for (i = 0; i < ARRAY_SIZE; i++) {
		printf("%d ", array_ex[i]);
	}
	printf("\n");

	return 0;
}