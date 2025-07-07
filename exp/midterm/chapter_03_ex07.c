#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int yard;
	double meter;

	printf("±Ê¿Ã(yd)? ");
	scanf("%d", &yard);

	meter = yard * 0.9144;

	printf("%d yd = %f m", yard, meter);

	return 0;
}