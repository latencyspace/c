#include <stdio.h>

#define NUM_SZ 10

int main(void) {
	int Num[NUM_SZ] = { 56, 900, -4, 120, 7, 90, -64, 209, 711, 10 };
	int i;
	int max = Num[0], min = Num[0]; // ����: �ִ�ġ �� �ּ�ġ�� �ʱⰪ�� ù ������ ������ ����
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


	printf("==�迭 ����== ");
	for (i = 0; i < NUM_SZ; i++) {
		printf("%d ", Num[i]);
	}
	printf("\n");
	printf("�迭���� �ִ밪 : Num[%d] = %d\n", max_index, max);
	printf("�迭���� �ּҰ� : Num[%d] = %d\n", min_index, min);
}