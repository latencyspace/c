#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double sumOfArr(double arr[], int size);
void print_array(double arr[], int size);

int main(void) {
	double arr[5] = { 0 }; // 2-1. ũ�Ⱑ 5�� �Ǽ��� �迭 ����
	int i;

	printf("�迭���� �Է�: ");

	// 2.2. for������ �迭���� �Է¹ޱ�
	for (i = 0; i < 5; i++) {
		scanf("%lf", &arr[i]);
	}

	print_array(arr, 5);
	printf("\n�迭������ �հ�: %.2f\n", sumOfArr(arr, 5));
}

// 1. �迭���� �� �����ϴ� �Լ� : sumOfArr
// 1-1. �迭�� �迭 ũ�⸦ �Է����� �޾� �Ǽ��� �����ϴ� �Լ� ���� �ۼ�
double sumOfArr(double arr[], int size) {
	// 1-2. �հ� ������ ����(sum), ��������� ����
	double sum = 0.0;
	int i;

	// 1-3. for�� �ۼ�
	for (i = 0;i < size; i++) {
		// 1-3-1. sum�� �迭���� �����Ͽ� �հ� ���ϱ�
		sum += arr[i];
	}
	// 1-4. sum ����
	return sum;
}

void print_array(double arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%.2lf ", arr[i]);
	}
}