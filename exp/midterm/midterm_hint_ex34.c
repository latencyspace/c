#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int score[10] = { 67, 93, 100, 60, 57, 86, 19, 60, 79, 84 };
	int i = 0;
	int size;
	int search;
	int flag = 0;

	size = sizeof(score) / sizeof(score[0]);

	printf("�˻��� ���� �Է��Ͻÿ� ");
	scanf("%d", &search);

	for (i = 0; i < size; i++) {
		if (search == score[i]) {
			printf("�˻����� ã�� �迭 ���Ұ�: score[%d] = %d\n", i, score[i]);
			flag = 1;
		}
		else {
			continue;
		}
	}

	if (flag == 0) {
		printf("Not Found\n");
	}
	
	return 0;
}