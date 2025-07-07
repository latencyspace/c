/* �Է¹��� ���� ��ȿ�� ��¥���� �˻��Ϸ��� �߰� �ڵ尡 �ʿ��ϴ�. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int year, month, day;
	int feb_day;

	printf("��? ");
	scanf("%d", &year);
	printf("��? ");
	scanf("%d", &month);
	printf("��? ");
	scanf("%d", &day);

	if (month < 1 || month > 12) {
		printf("��ȿ���� ���� ���� �Է��߽��ϴ�.\n");
		return 0;
	}
	
	switch (month) {
		case 2:
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
				feb_day = 29;
			}
			else {
				feb_day = 28;
			}
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			feb_day = 31;
			break;
		default:
			feb_day = 30;
			break;
	}

	if (day >= 1 && day <= feb_day) {
		printf("�Է��� ��¥�� %d�� %d�� %d�� �Դϴ�.\n", year, month, day);
	}
	else {
		printf("�Է��� ��¥ %d�� %d�� %d���� ��ȿ���� �ʽ��ϴ�.\n", year, month, day);
	}
	
	return 0;
}