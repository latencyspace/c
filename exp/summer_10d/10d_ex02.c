#include <stdio.h>

void increase(int* n) {
	(*n)++;
	// *n++;�� ���� ��ȣ�� ������� ������ �������� �ּ��� ���� ������Ű�� �ȴ�.
}

int main(void) {
	int num = 10;

	printf("increase �Լ� ȣ�� ��: %d\n", num);

	increase(&num);
	printf("increase �Լ� ȣ�� ��: %d\n", num);

	return 0;
}