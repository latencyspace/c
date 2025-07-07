#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calc(char op, int num);
int accumulator = 0;

int main(void) {
	char op;
	int num;

	while (1) {
		printf("�Ű����� �Է� >> ");
		/*
		scanf �Լ��� ���� �����ڿ��� %c �տ� ������ �߰����� ������,
		����ڰ� ����Ű�� ���� �� �߻��ϴ� �ٹٲ� ����(\n)���� ���ڷ� �ν��Ͽ� op ������ �����ϰ� �ȴ�.
		scanf �Լ��� ���� �����ڿ��� %c �տ� ������ �߰��ϸ�, ������ �Էµ� �����̳� �ٹٲ� ���ڸ� �����ϵ��� �� �� �ִ�.
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