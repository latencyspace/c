#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calc(char op, int num);
int accumulator = 0;

int main(void) {
	char op;
	int num;

	while (1) {
		printf("매개변수 입력 >> ");
		/*
		scanf 함수의 서식 지정자에서 %c 앞에 공백을 추가하지 않으면,
		사용자가 엔터키를 누를 때 발생하는 줄바꿈 문자(\n)까지 문자로 인식하여 op 변수에 저장하게 된다.
		scanf 함수의 서식 지정자에서 %c 앞에 공백을 추가하면, 이전에 입력된 공백이나 줄바꿈 문자를 무시하도록 할 수 있다.
		*/
		scanf(" %c %d", &op, &num);

		if (op == '0' && num == 0) {
			break;
		}
		calc(op, num);
	}
	return 0;
}

void calc(char op, int num) {
	switch (op) {
	case '+':
		accumulator += num;
		break;

	case '-':
		accumulator -= num;
		break;

	case '*':
		accumulator *= num;
		break;

	case '/':
		accumulator /= num;
		break;
	}
	printf("= %d\n", accumulator);
}