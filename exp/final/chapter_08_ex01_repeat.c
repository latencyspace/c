#include <stdio.h>

int main(void) {
	double arr[10] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
	double* ptr;

	for (ptr = arr; ptr < arr + 10; ptr++) {
		printf("%.2lf ", *ptr);
	}

	return 0;
}