#include <stdio.h>

int main(void) {
	int i, j;

	// 알고리즘 복습

	/*
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i == j) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	*/

	for (i = 0; i < 5; i++) {
		for (j = 4; j >= 0; j--) {
			if (i == j) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}