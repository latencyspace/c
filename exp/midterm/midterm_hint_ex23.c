#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int odd_sum(int input);
int even_sum(int input);

int main(void) {
	int input, odd_sum_result = 0, even_sum_result = 0;

	printf("���� �Է�: ");
	scanf("%d", &input);

	 odd_sum_result = odd_sum(input);
	 even_sum_result = even_sum(input);

	printf("1���� %d������ Ȧ���� �հ� = %d\n", input, odd_sum_result);
	printf("1���� %d������ ¦���� �հ� = %d\n", input, even_sum_result);

	return 0;
}

int odd_sum(int input) {
	int i;
	int odd_sum_result = 0;

	for (i = 1; i < input + 1; i++) {
		if (i % 2 != 0) {
			odd_sum_result += i;
		}
	}
	return odd_sum_result;
}

int even_sum(int input) {
	int i;
	int even_sum_result = 0;

	for (i = 1; i < input + 1; i++) {
		if (i % 2 == 0) {
			even_sum_result += i;
		}
	}
	return even_sum_result;

}