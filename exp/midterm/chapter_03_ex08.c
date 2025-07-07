#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define INCH_TO_CENTIMETER 2.54

int main(void) {
	int inch;
	double centimeter;

	printf("±Ê¿Ã(in)? ");
	scanf("%d", &inch);

	centimeter = inch * INCH_TO_CENTIMETER;

	printf("%.2f in = %.2f cm", (double)inch, centimeter);

	return 0;
}