#include <stdio.h>

int main(void) {
	double arr[3] = { 1.0, 2.0, 3.0 };
	double* pd = arr; // &arr[0] �� ���� ����ص� �ȴ�.

	for (int i = 0; i < 3; i++) {
		printf("*pd + %d : %f ", i, *pd);
		printf(", pd + %d : %d\n", i, pd++);
	}
}