#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char name[100];

	printf("�Է� : ");
	scanf("%s", &name);

	printf("�����̸� >> %s\n", name);

	printf("�̴ϼ� : ");

	for (int i = 0; name[i] != '\0'; i++) {
		if (isupper(name[i])) {
			printf("%c", name[i]);
		}
	}
	printf("\n");

	return 0;
}