#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float dollar;
	int won;

	printf("달러? ");
	scanf("%f", &dollar);

	won = dollar * 1000;

	printf("$%.2f는 %d원입니다.\n", dollar, won);
}