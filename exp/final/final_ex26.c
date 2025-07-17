#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 3

struct Movie {
	char title[50];
	double rating;
	int viewer;
};

void input_movies(struct Movie* movies[], int size);
int total_viewers(struct Movie* movies[], int size);

int main(void) {
	struct Movie movies[SIZE];
	struct Movie* m_ptrs[SIZE];

	for (int i = 0; i < SIZE; i++) {
		m_ptrs[i] = &movies[i];
	}

	input_movies(m_ptrs, SIZE);

	int total = total_viewers(m_ptrs, SIZE);

	printf("총 관객 수: %d만명\n", total);

	return 0;
}

void input_movies(struct Movie* movies[], int size) {
	for (int i = 0; i < size; i++) {
		printf("제목, 평점, 관객수(만명) 입력 : ");
		scanf("%s %lf %d", movies[i]->title, &movies[i]->rating, &movies[i]->viewer);
	}
}

int total_viewers(struct Movie* movies[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += movies[i]->viewer;
	}
	return sum;
}