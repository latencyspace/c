#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input;

	printf("���� �Է� ? ");
	scanf("%d", &input);

	int odd_sum = 0, even_sum = 0;
	int i;

	for (i = 1; i <= input; i++) {
		if (i % 2 != 0) {
			odd_sum += i;
		}
		else {
			even_sum += i;
		}
	}

	printf("1 ���� %d ���� Ȧ���� ��: %d\n", input, odd_sum);
	printf("1 ���� %d ���� ¦���� ��: %d\n", input, even_sum);

	return 0;
}