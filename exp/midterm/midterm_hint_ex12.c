#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, result = 0;

	while (1) {
		printf("정수입력 : ");
		scanf("%d", &num);

		if (num > 0 || num < 0) {
			result += num;
			continue;
		}
		
		if (num == 0) {
			printf("합: %d", result);
			break;
		}
	}

	return 0;
}