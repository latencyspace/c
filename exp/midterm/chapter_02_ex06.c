#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char size;

	printf("옷 사이즈(S,M,L)? ");
	scanf("%c", &size);

	switch (size) {
		case 'S':
		case 's':
			printf("S 사이즈를 선택했습니다.\n");
			break;
		case 'M':
		case 'm':
			printf("M 사이즈를 선택했습니다.\n");
			break;
		case 'L':
		case 'l':
			printf("L 사이즈를 선택했습니다.\n");
			break;
		default:
			printf("잘못된 사이즈를 선택했습니다.\n");
			break;
	}

	return 0;
}