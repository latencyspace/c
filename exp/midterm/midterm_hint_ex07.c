#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// if, else-if, else
/*
int main(void) {
	int number;

	printf("1-10까지의 번호를 입력하시오: ");
	scanf("%d", &number);

	if (number == 3) {
		printf("1등");
	}
	else if (number == 2 || number == 5) {
		printf("2등");
	}
	else if (number == 1 || number == 4 || number == 7) {
		printf("3등");
	}
	else {
		printf("다음을 기대하세요.");
	}

	return 0;
}
*/

// switch
int main(void) {
	int num;

	printf("1-10까지의 번호를 입력하시오: ");
	scanf("%d", &num);

	switch (num) {
		case 3:
			printf("1등");
			break;
		case 2:
		case 5:
			printf("2등");
			break;
		case 1:
		case 4:
		case 7:
			printf("3등");
			break;
		default:
			printf("다음을 기대하세요.");
			break;
	}
	return 0;
}