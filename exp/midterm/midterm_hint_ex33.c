#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// º¹½À

int main(void) {
	int score[4][5] = { {78, 90, 34, 46, 80}, {98, 74, 84, 76, 72}, {76, 48, 34, 72, 89}, {61, 91, 67, 88, 83} };
	int i, j;
	int sum = 0;
	int row, col;

	row = sizeof(score) / sizeof(score[0]);
	col = sizeof(score[0]) / sizeof(score[0][0]);

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d,\t", score[i][j]);
			sum += score[i][j];
		}
		printf("=> %.2f", (double)sum / col);
		sum = 0;

		printf("\n");
	}

	return 0;
}