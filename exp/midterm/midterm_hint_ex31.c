#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ST_SIZE 5

int main(void) {
	int score[ST_SIZE];
	int i, sum = 0;

	for (i = 0; i < ST_SIZE; i++) {
		printf("������ �Է��Ͻÿ� ");
		scanf("%d", &score[i]);
	}

	printf("\n�迭���� ��� : ");
	for (i = 0; i < ST_SIZE; i++) {
		printf("%d ", score[i]);
	}
	printf("\n�迭���� ���� ��� : ");
	for (i = ST_SIZE - 1; i >= 0; i--) {
		printf("%d ", score[i]);
	}

	printf("\n");

	return 0;
}