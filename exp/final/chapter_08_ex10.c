/*
Chapter 08. Example 10
���������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�.
�迭�� �迭�� ũ��, ������ �Ű������� ���޹޾� ���������� �迭�� ä��� �Լ��� �����Ͻÿ�.
ù ��° ���� ���� �迭�� 0�� ���ҿ� �־ �����Ѵ�.
�� �Լ��� �̿��ؼ� ũ�Ⱑ 10�� �迭�� ���������� ���ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
ù ��° �װ� ������ �Է¹޵��� ó���Ѵ�.

���� ���
ù ��° ��? 3
����? 5
��������: 3 8 13 18 23 28 33 38 43 48
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

int sequence(int arr[], int size, int diff);

int main(void) {
	int sequence_arr[SIZE];
	int size = sizeof(sequence_arr) / sizeof(sequence_arr[0]);
	int common_diff;

	printf("ù ��° ��? ");
	scanf("%d", &sequence_arr[0]); // ù ��° �׿� ���� ������ ���� ������ �ʿ� ���� �迭�� ù ��°�� �����Ѵ�.
	printf("����? ");
	scanf("%d", &common_diff);

	printf("��������: ");

	sequence(sequence_arr, size, common_diff); // ȣ���ϴ� �Լ��� �Ű��������� main �Լ����� ����� ������ ����Ѵ�.

	for (int i = 0; i < size; i++) {
		printf("%d ", sequence_arr[i]);
	}

	return 0;
}

int sequence(int arr[], int size, int diff) {
	for (int i = 1; i < size; i++) {
		arr[i] = arr[i - 1] + diff;
	}
}
