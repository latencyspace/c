#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float solvents, solutes, concentration;

	printf("���(g)? ");
	scanf("%d", &solvents);
	printf("����(g)? ");
	scanf("%d", &solutes);

	concentration = (solutes / (solvents + solutes)) * 100.0;

	printf("��: %.2f %%", concentration);

	return 0;
}