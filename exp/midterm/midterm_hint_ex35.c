#include <stdio.h>

#define NUM_SZ 10

int main(void) {
	int Num[NUM_SZ] = { 56, 900, -4, 120, 7, 90, -64, 209, 711, 10 };
	int i;
	int max = Num[0], min = Num[0]; // 복습: 최대치 및 최소치의 초기값을 첫 원소의 값으로 지정
	int max_index, min_index;

	for (i = 0; i < NUM_SZ; i++) {
		if (max < Num[i]) {
			max = Num[i];
			max_index = i;
		}

		if (min > Num[i]) {
			min = Num[i];
			min_index = i;
		}
	}


	printf("==배열 원소== ");
	for (i = 0; i < NUM_SZ; i++) {
		printf("%d ", Num[i]);
	}
	printf("\n");
	printf("배열원소 최대값 : Num[%d] = %d\n", max_index, max);
	printf("배열원소 최소값 : Num[%d] = %d\n", min_index, min);
}