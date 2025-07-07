#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define METER_SQUARE_TO_PYEONG 0.3025

int main(void) {
	int apartment_area;
	double pyeong;

	printf("아파트의 면적(제곱미터)? ");
	scanf("%d", &apartment_area);

	pyeong = apartment_area * METER_SQUARE_TO_PYEONG;

	printf("%.2f 제곱미터 = %.2f 평", (double)apartment_area, pyeong);

	return 0;
}