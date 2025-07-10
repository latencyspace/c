#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int score[10] = { 67, 93, 100, 60, 57, 86, 19, 60, 79, 84 };
	int i = 0;
	int size;
	int search;
	int flag = 0;

	size = sizeof(score) / sizeof(score[0]);

	printf("검색할 수를 입력하시오 ");
	scanf("%d", &search);

	for (i = 0; i < size; i++) {
		if (search == score[i]) {
			printf("검색에서 찾은 배열 원소값: score[%d] = %d\n", i, score[i]);
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