/*
Chapter 08. Example 7
ũ�Ⱑ ���� 2���� ������ �迭�� �Ű������� ���޹޾� �� �迭�� ���ҵ��� ���� �¹ٲٴ� �Լ��� �ۼ��Ͻÿ�.
�� �Լ��� �̿��ؼ� ũ�Ⱑ 5�� �� �迭�� ���� �¹ٲٴ� ���α׷��� �ۼ��Ͻÿ�.
�迭�� ������ ���� �ʱ�ȭ�ؼ� ����Ѵ�.

���� ���
a �迭: 1 3 5 7 9
b �迭: 0 2 4 6 8
<< swap_array ȣ�� �� >>
a �迭: 0 2 4 6 8
b �迭: 1 3 5 7 9
*/

#include <stdio.h>

int swap_array(int arr1[], int arr2[], int size);

int main(void) {
	int arr1[5] = { 1, 3, 5, 7, 9 };
	int arr2[5] = { 0, 2, 4, 6, 8 };
	int size = 5;

	printf("a �迭: ");
	for (int i = 0; i < size; i++) {
		printf("%3d", arr1[i]);
	}
	printf("\n");
	printf("b �迭: ");
	for (int i = 0; i < size; i++) {
		printf("%3d", arr2[i]);
	}

	swap_array(arr1, arr2, size);

	printf("\n<< swap_array ȣ�� �� >>\n");

	printf("a �迭: ");
	for (int i = 0; i < size; i++) {
		printf("%3d", arr1[i]);
	}
	printf("\n");
	printf("b �迭: ");
	for (int i = 0; i < size; i++) {
		printf("%3d", arr2[i]);
	}
}

int swap_array(int arr1[], int arr2[], int size) {
	int temp[5]; // �׳� �迭�� ������� �ʰ� temp�� ����ص� ������ �߻����� �ʴ´�.

	for (int i = 0; i < size; i++) {
		temp[i] = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp[i];
	}
}
