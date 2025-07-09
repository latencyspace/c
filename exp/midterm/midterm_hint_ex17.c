#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int start = 1, end = 103;
	int current_num;

	current_num = start;

	while (current_num <= end) {
		if (current_num % 10 == 3) {
			printf("%d ", current_num);
		}
		current_num++;
	}
	return 0;
}