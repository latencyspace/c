#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, result = 0;

	while (1) {
		printf("�����Է� : ");
		scanf("%d", &num);

		if (num > 0 || num < 0) {
			result += num;
			continue;
		}
		
		if (num == 0) {
			printf("��: %d", result);
			break;
		}
	}

	return 0;
}