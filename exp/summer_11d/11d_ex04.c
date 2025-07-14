#include <stdio.h>

void print_array(const char* title, const int arr[], int size);
void swap_array(int arr1[], int arr2[], int size);

int main() {
	int a[5] = { 1, 3, 5, 7, 9 };
	int b[5] = { 0, 2, 4, 6, 8 };
	int size = 5;

	printf("<실행 전>\n");
	print_array("배열 a: ", a, size);
	print_array("배열 b: ", b, size);
	printf("\n");

	swap_array(a, b, size);

	printf("<실행 후>\n");
	print_array("배열 a: ", a, size);
	print_array("배열 b: ", b, size);
	printf("\n");

	return 0;
}

void print_array(const char* title, const int arr[], int size) {
	printf("%s ", title);

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void swap_array(int arr1[], int arr2[], int size) {
	int temp;

	for (int i = 0; i < size; i++) {
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}
