#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int age;

	printf("���̸� �Է����ּ���: ");
	scanf("%d", &age);

	if (age < 20 && age > 0) {
		printf("�̼������Դϴ�");
	}
	else if (age >= 20) {
		printf("�����Դϴ�");
	}
	else {
		printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.");
	}
}