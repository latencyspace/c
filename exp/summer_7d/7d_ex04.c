#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ST_SIZE 5

int main(void) {
	int score[ST_SIZE];
	int i, sum = 0;
	double average;

	printf("%d���� ���� �Է�\n", ST_SIZE);

	for (i = 0; i < ST_SIZE; i++) {
		printf("%d��° ����: ", i + 1);
		scanf("%d", &score[i]);

		sum += score[i];
	}

	average = (double)sum / ST_SIZE;
	
	printf("\n== ��� ==\n");
	printf("�Էµ� ����: ");
	for (i = 0; i < ST_SIZE; i++) {
		printf(" %d", score[i]);
	}

	printf("\n��� ����: %.f\n", average);

	return 0;
}