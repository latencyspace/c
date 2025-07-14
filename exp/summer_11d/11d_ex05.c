#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char name[100];

	printf("입력 : ");
	scanf("%s", &name);

	printf("영문이름 >> %s\n", name);

	printf("이니셜 : ");

	for (int i = 0; name[i] != '\0'; i++) {
		if (isupper(name[i])) {
			printf("%c", name[i]);
		}
	}
	printf("\n");

	return 0;
}