#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	float input, square, cube;

	// 만약 변수를 double로 지정했다면, 형식 지정자로 %lf를 사용해야 한다.
	
	printf("실수? ");
	scanf(" %f", &input);

	square = input * input;
	cube = square * input;

	printf("제곱: %e\n", square);
	printf("세제곱: %e\n", cube);

	return 0;
}