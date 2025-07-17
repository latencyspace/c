#include <stdio.h>

void print_arr(const char* arr[], int size);

int main(void) {
	const char* arr[3] = { "Kim", "Lee", "Park" };

	print_arr(arr, 3);

	return 0;
}

void print_arr(const char* arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%s\n", arr[i]);
	}
}
