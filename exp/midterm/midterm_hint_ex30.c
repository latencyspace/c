#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, searching_num;
	int score[10] = { 67, 93, 100, 60, 57, 86, 19, 60, 79, 84 };
	int size = sizeof(score) / sizeof(score[0]); // 복습

	int found = 0;

	printf("검색할 수를 입력하시오 ");
	scanf("%d", &searching_num);

	for (i = 0; i < size; i++) {
		if (searching_num == score[i]) {
			printf("검색에서 찾은 배열 원소값 : score[%d] = %d\n", i, searching_num);
			found = 1;
		}
	}

	if (found == 0) {
		printf("Not Found\n");
	}

	return 0;
}