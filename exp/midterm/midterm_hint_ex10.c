#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int pay, working_time, working_day, num;

	printf("�ð��� �޿�? ");
	scanf("%d", &pay);
	printf("���� �ٹ� �ð�? ");
	scanf("%d", &working_time);
	printf("�Ѵ� �ٹ� �ϼ�? ");
	scanf("%d", &working_day);
	printf("���� ���� ���� 0: ������ 1: 4�뺸�����(8.41%%) 2: �ҵ漼����(3.3%%)? ");
	scanf("%d", &num);

	int monthly_pay;

	switch (num) {
		case 0:
			monthly_pay = pay * working_time * working_day;
			break;
		case 1:
			monthly_pay = (pay * working_time * working_day) - ((pay * working_time * working_day * 841) / 10000);
			break;
		case 2:
			monthly_pay = (pay * working_time * working_day) - ((pay * working_time * working_day * 33) / 1000);
	}

	printf("���� ���޿�: %d��", monthly_pay);

	return 0;
}
