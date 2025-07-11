#include <stdio.h>

void draw_exercise_bar(int minutes[], int size);

int main(void) {
	int min[7] = { 40, 100, 80, 30, 90, 60, 50 };
	int size = sizeof(min) / sizeof(min[0]);

	draw_exercise_bar(min, size);

	return 0;
}

void draw_exercise_bar(int minutes[], int size) {
	int i, j;

	for (i = 0; i < size; i++) {
		printf("Day %d: (%dºÐ) ", i + 1, minutes[i]);

		int bar = minutes[i] / 10;

		for (j = 0; j < bar; j++) {
			printf("-");
		}

		printf("\n");
	}
}

