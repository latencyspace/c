#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float c_temperature, f_temperature;

	printf("È­¾¾¿Âµµ? ");
	scanf("%f", &f_temperature);

	c_temperature = (f_temperature - 32) * (5.0 / 9.0); // [X] (5 / 9)

	printf("%.0f F = %.2f C", f_temperature, c_temperature);

	return 0;
}