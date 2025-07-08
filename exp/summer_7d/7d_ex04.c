#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ST_SIZE 5

int main(void) {
	int score[ST_SIZE];
	int i, sum = 0;
	double average;

	printf("%d명의 점수 입력\n", ST_SIZE);

	for (i = 0; i < ST_SIZE; i++) {
		printf("%d번째 점수: ", i + 1);
		scanf("%d", &score[i]);

		sum += score[i];
	}

	average = (double)sum / ST_SIZE;
	
	printf("\n== 결과 ==\n");
	printf("입력된 점수: ");
	for (i = 0; i < ST_SIZE; i++) {
		printf(" %d", score[i]);
	}

	printf("\n평균 점수: %.f\n", average);

	return 0;
}