#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_int_real(double value, int* p_int, double* p_real);

int main(void) {
	double input;

	int int_part;
	double real_part;

	printf("�Ǽ��� �Է��ϼ���: ");
	scanf("%lf", &input);

	get_int_real(input, &int_part, &real_part);

	printf("������=%d\n", int_part);
	printf("�Ҽ��� ����=%lf\n", real_part);
}

void get_int_real(double value, int* p_int, double* p_real) {
	*p_int = (int)value;
	*p_real = value - *p_int;
}
