#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int temperature;

	printf("���� �µ���? ");
	scanf("%d", &temperature);

	printf("���� �µ��� %d �� �Դϴ�.\n", temperature);
	printf("%s", (temperature <= 20) ? "����ϴ�." : "�����մϴ�.");

	return 0;
}