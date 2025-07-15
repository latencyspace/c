/*
Chapter 08. Example 4
�Ǽ��� �迭�� �հ踦 ���ϴ� �Լ��� �ۼ��Ͻÿ�.
�� �Լ��� �̿��ؼ� ũ�Ⱑ 5�� �Ǽ��� �迭�� �Ǽ��� �Է¹޾� �հ踦 ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ���
�Ǽ� 5���� �Է��ϼ���: 12.34 0.54 1.23 4.01 0.12
�հ�: 18.240000
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double sum_arr(double arr[], int size);

int main(void) {
	double arr[5]; // ũ�Ⱑ 5�� �Ǽ��� �迭�� �����Ѵ�.
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("�Ǽ� 5���� �Է��ϼ���: ");
	for (int i = 0; i < size; i++) {
		/*
		&�� '~�� �ּ�' ��� �ǹ��̴�.
		scanf �Լ��� ���� �����ϱ� ���� ������ ��� �ִ��� �ּҸ� �˾ƾ� �Ѵ�.
		���� arr[i](i��° ����)�� �ּҸ� �˷��ֱ� ���� &�� �ٿ� i��° �ּҰ� ���⿡ �ִٴ� ���� �˷��ش�.
		*/
		scanf("%lf", &arr[i]); // �ݺ������� 5���� �Ǽ��� �Է¹޾� �迭�� �����Ѵ�.
	}

	double total = sum_arr(arr, size); // sum_arr �Լ����� �迭 ������ �հ踦 ��û�ϰ� ����� �޴´�.

	printf("�հ�: %f", total);

	return 0;
}

double sum_arr(double arr[], int size) {
	double sum = 0.0;

	for (int i = 0; i < size; i++) {
		sum += arr[i]; // �迭�� �� ���Ҹ� ���ʴ�� sum�� ���Ѵ�.
	}

	return sum; // ����� ���� ���� �հ踦 sum_arr�� ȣ���� main���� ��ȯ(return)�Ѵ�.
}