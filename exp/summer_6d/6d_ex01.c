#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double power(int x, int y);

double power(int x, int y) {
	int i;
	double result = 1;

	if (y > 0) {
		for (i = 0; i < y; i++) {
			result *= x;
		}
	}
	else if (y < 0) {
		for (i = 0; i < -y; i++) {
			result *= x;
		}
		result = 1.0 / result;
	}
	return result;
}

int main(void) {
	int x, y;

	printf("�ذ� ������ �Է��ϼ���: ");
	scanf("%d %d", &x, &y);

	printf("%d�� %d���� = %f\n", x, y, power(x, y));
	return 0;
}