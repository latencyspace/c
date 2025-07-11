#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int age;

	printf("나이를 입력해주세요: ");
	scanf("%d", &age);

	if (age < 20 && age > 0) {
		printf("미성년자입니다");
	}
	else if (age >= 20) {
		printf("성인입니다");
	}
	else {
		printf("잘못 입력하셨습니다. 다시 입력해주세요.");
	}
}