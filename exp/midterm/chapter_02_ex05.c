#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float dollar;
	int won;

	printf("�޷�? ");
	scanf("%f", &dollar);

	won = dollar * 1000;

	printf("$%.2f�� %d���Դϴ�.\n", dollar, won);
}