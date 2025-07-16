/*
Chapter 08. Example 12
������ �迭�� Ű ���� �Ű������� ���޹޾� Ű ���� ���� ���Ҹ� ��� ã�� ����,
ã�� ������ �ε����� �迭�� �����ؼ� �����ϴ� �Լ��� �ۼ��Ͻÿ�.
�� �Լ��� ã�� ������ ������ �����Ѵ�.
���� ��� �迭���� Ű ���� 2�� ã������ 2�� �����ϰ� ã�� ������ �ε����� �ε��� �迭�� �����Ѵ�.
Ű ���� ã�� �� ������ 0�� �����Ѵ�.

���� ���
12 45 62 12 99 83 23 12 72 37
ã�� ��? 12
ã�� �׸��� ��� 3���Դϴ�.
ã�� �׸��� �ε���: 0 3 7
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

int search_all(int arr[], int size, int key, int indices[]);

int main(void) {
	int arr[] = { 12, 45, 62, 12, 99, 83, 23, 12, 72, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int search_value;     // ����ڰ� ã�� ��
	int indices[SIZE];    // ã�� �ε����� ������ �迭
	int found_count;      // �Լ��� ��ȯ�� 'ã�� ����'�� ������ ����

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("ã�� ��? ");
	scanf("%d", &search_value);

	// search_all �Լ��� ��ȯ���� found_count�� ����
	found_count = search_all(arr, size, search_value, indices);

	printf("ã�� �׸��� ��� %d���Դϴ�.\n", found_count);
	printf("ã�� �׸��� �ε���: ");

	for (int i = 0; i < size; i++) {
		if (arr[i] == search_value) {
			printf("%d ", i);
		}
	}

	/*
	// �Լ� ȣ�� ����� �������� ���
	if (found_count > 0) {
		printf("ã�� �׸��� ��� %d���Դϴ�.\n", found_count);
		printf("ã�� �׸��� �ε���: ");
		// ã�� ����(found_count)��ŭ�� �ݺ��Ͽ� �ε��� �迭�� ���
		for (int i = 0; i < found_count; i++) {
			printf("%d ", indices[i]);
		}
		printf("\n");
	}
	else {
		printf("ã�� ���� �迭�� �����ϴ�.\n");
	}
	*/

	return 0;
}

/**
 * @brief �迭���� key�� ��ġ�ϴ� ��� ������ �ε����� ã�� indices �迭�� �����ϰ�, ã�� ������ ��ȯ
 * @param arr       �˻��� ���� ������ �迭
 * @param size      �迭�� ũ��
 * @param key       �˻��� ��
 * @param indices   ã�� �ε����� ������ �迭 (��� �Ű�����)
 * @return ã�� ������ ����
 */
int search_all(int arr[], int size, int key, int indices[]) {
	int count = 0; // ã�� ������ ������ �� ����

	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			// Ű ���� ã����, indices �迭�� �ش� �ε���(i)�� ����
			indices[count] = i;
			// ã�� ������ 1 ����
			count++;
		}
	}
	// ������ ���� �� ���������� ã�� ������ ��ȯ
	return count;
}