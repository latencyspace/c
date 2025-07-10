#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ST_SIZE 5

int main(void) {
	int arr[ST_SIZE];
	int i, sum = 0;

	for (i = 0; i < ST_SIZE; i++) {
		printf("%d, 점수 ? ", i + 1);
		scanf("%d", &arr[i]);

		sum += arr[i];
	}

	printf("\n배열점수 : ");
	for (i = 0; i < ST_SIZE; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n성적평균 : %.2f \n", (float)sum / ST_SIZE);

	return 0;
}