#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int min, distance;

	printf("���� �ܼ� �ҿ� �ð� (��)? ");
	scanf("%d", &min);
	printf("���� �ܼ� ���� �Ÿ� (km)? ");
	scanf("%d", &distance);

	double velocity = distance * (60 / min);

	if (velocity >= 100) {
		printf("��� �ӷ��� %.1lf km/h�Դϴ�. ���� �ܼ� �����Դϴ�.", velocity);
	}
	else {
		printf("��� �ӷ��� %.1lf km/h�Դϴ�. ������ �ƴմϴ�.", velocity);
	}

	return 0;
}