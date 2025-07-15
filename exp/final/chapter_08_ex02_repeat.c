#include <stdio.h>

int main(void) {
	double arr[3];
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++) {
		printf("x[%d]ÀÇ ÁÖ¼Ò: %p\n", i, arr + i);
	}
}