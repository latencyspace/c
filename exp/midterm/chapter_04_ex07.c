#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float solvents, solutes, concentration;

	printf("용매(g)? ");
	scanf("%d", &solvents);
	printf("용질(g)? ");
	scanf("%d", &solutes);

	concentration = (solutes / (solvents + solutes)) * 100.0;

	printf("농도: %.2f %%", concentration);

	return 0;
}