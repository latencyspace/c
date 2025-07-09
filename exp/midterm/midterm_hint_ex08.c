#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int year;

	printf("ø¨µµ? ");
	scanf("%d", &year);

	if (year % 4 == 0) {
		printf("%d≥‚¿∫ ¿±≥‚¿‘¥œ¥Ÿ.", year);
	}
	else if (year % 4 == 0 && year % 100 == 0) {
		printf("%d≥‚¿∫ ¿±≥‚¿Ã æ∆¥’¥œ¥Ÿ.", year);
	}
	else if (year % 100 == 0 && year % 400 == 0) {
		printf("%d≥‚¿∫ ¿±≥‚¿Ã æ∆¥’¥œ¥Ÿ.", year);
	}
	else {
		printf("%d≥‚¿∫ ¿±≥‚¿Ã æ∆¥’¥œ¥Ÿ.", year);
	}
	
	return 0;
}