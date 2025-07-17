#include <stdio.h>

void print_arr(const char* arr[], int size);

int main(void) {
	const char* name[3] = { "Kim", "Lee", "Park" };

	print_arr(name, 3);

	return 0;
}

void print_arr(const char* arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%s\n", arr[i]);
	}
}
