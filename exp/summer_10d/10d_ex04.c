#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_array(int* p, int size) {
	printf("배열: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", *(p + i));
	}
	printf("\n");
}

int main(void) {
	int arr[10] = { 12, 54, 34, 54, 87, 42, 67, 92, 79, 7 };
	int size = 10;

	int* p = arr;

	print_array(p, size);

	int add;
	printf("정수 입력: ");
	scanf("%d", &add);

	for (int i = 0; i < size; i++) {
		*(p + i) += add;
	}
	print_array(p, size);

	return 0;
}