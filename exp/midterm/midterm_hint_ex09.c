#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int min, distance;

	printf("구간 단속 소요 시간 (분)? ");
	scanf("%d", &min);
	printf("구간 단속 주행 거리 (km)? ");
	scanf("%d", &distance);

	double velocity = distance * (60 / min);

	if (velocity >= 100) {
		printf("평균 속력은 %.1lf km/h입니다. 구간 단속 과속입니다.", velocity);
	}
	else {
		printf("평균 속력은 %.1lf km/h입니다. 과속이 아닙니다.", velocity);
	}

	return 0;
}