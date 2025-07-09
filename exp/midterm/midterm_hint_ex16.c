#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int start, end;
	int current_num;

	scanf("%d %d", &start, &end);

	// 알고리즘 복습

	current_num = start;

	while (current_num <= end) {
		if (current_num % 10 != 7) {
			printf("%d ", current_num);
		}
		current_num++;
	}

	return 0;
}