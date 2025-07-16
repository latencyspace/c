/*
Chapter 08. Example 11
7���� ���� ���� �ڵ带 �̿��ؼ� ������ �迭�� �����ϴ� �Լ��� �����Ͻÿ�.
�� �Լ��� �̿��ؼ� int �迭�� �����ϰ� �� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�迭�� ũ��� 10�̰� ������ ���� �ʱ�ȭ�ؼ� ����Ѵ�.

���� ���
���� ��: 92 34 76 32 15 28 41 55 89 62
���� ��: 15 28 32 34 41 55 62 76 89 92
*/

#include <stdio.h>

void align(int arr[], int size);
void swap(int* a, int* b);

int main(void) {
	int arr[] = { 92, 34, 76, 32, 15, 28, 41, 55, 89, 62 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("���� ��: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	align(arr, size);

	printf("���� ��: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

void align(int arr[], int size) {
	int i, j;
	
	// �˰��� ���� �ʿ�
	// ����: Ű ������� �� �����
	for (i = 0; i < size - 1; i++) { // i�� ���ĵ� �л� ��
		for (j = 0; j < size - 1 - i; j++) { // j�� ���� �� �տ��� ���� ���ĵ��� ���� �л����� ���ϴ� ������
			if (arr[j] > arr[j + 1]) { // ������(j)�� �ٷ� ���� �� �л�(j�� j+1)�� Ű ��
				swap(&arr[j], &arr[j + 1]); // �� �л��� �ڸ� ����
			}
		}
	}
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
