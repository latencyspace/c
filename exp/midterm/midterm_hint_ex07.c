#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// if, else-if, else
/*
int main(void) {
	int number;

	printf("1-10������ ��ȣ�� �Է��Ͻÿ�: ");
	scanf("%d", &number);

	if (number == 3) {
		printf("1��");
	}
	else if (number == 2 || number == 5) {
		printf("2��");
	}
	else if (number == 1 || number == 4 || number == 7) {
		printf("3��");
	}
	else {
		printf("������ ����ϼ���.");
	}

	return 0;
}
*/

// switch
int main(void) {
	int num;

	printf("1-10������ ��ȣ�� �Է��Ͻÿ�: ");
	scanf("%d", &num);

	switch (num) {
		case 3:
			printf("1��");
			break;
		case 2:
		case 5:
			printf("2��");
			break;
		case 1:
		case 4:
		case 7:
			printf("3��");
			break;
		default:
			printf("������ ����ϼ���.");
			break;
	}
	return 0;
}