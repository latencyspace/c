#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	/*
	단일 문자를 받을 때는 char name; 을 사용해도 되지만,
	문자열을 입력받을 때는 char name[50]; 과 같이 배열을 사용해야 한다.
	*/
	char name[50];
	char address[100];
	int age;

	printf("이름을 입력하세요: ");
	/*
	scanf에서 단일 문자를 입력받을 때는 %c(character)를 사용하지만,
	문자열을 입력받을 때는 %s(string)를 사용한다.
	*/
	scanf("%s", name);
	printf("나이를 입력하세요: ");
	scanf("%d", &age);
	printf("주소를 입력하세요: ");
	scanf("%s", address);

	printf("********************\n");
	printf("이름: %s\n", name);
	printf("나이: %d살\n", age);
	printf("주소: %s\n", address);
	printf("********************\n");

	return 0;
}