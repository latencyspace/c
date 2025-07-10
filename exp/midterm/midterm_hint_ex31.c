#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ST_SIZE 5

int main(void) {
	int score[ST_SIZE];
	int i, sum = 0;

	for (i = 0; i < ST_SIZE; i++) {
		printf("정수를 입력하시오 ");
		scanf("%d", &score[i]);
	}

	printf("\n배열원소 출력 : ");
	for (i = 0; i < ST_SIZE; i++) {
		printf("%d ", score[i]);
	}
	printf("\n배열원소 역순 출력 : ");
	for (i = ST_SIZE - 1; i >= 0; i--) {
		printf("%d ", score[i]);
	}

	printf("\n");

	return 0;
}