#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	float input, square, cube;

	// ���� ������ double�� �����ߴٸ�, ���� �����ڷ� %lf�� ����ؾ� �Ѵ�.
	
	printf("�Ǽ�? ");
	scanf(" %f", &input);

	square = input * input;
	cube = square * input;

	printf("����: %e\n", square);
	printf("������: %e\n", cube);

	return 0;
}