#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SEATS 10

int main(void) {
	int seats[SEATS] = { 0 };
	int i;

	while (1) {
		int available = 0;

		// ����
		printf("�����¼� : [");
		for (i = 0; i < SEATS; i++) {
			if (seats[i] == 0) {
				printf(" O");
				available++;
			}
			else {
				printf(" X");
			}
		}
		printf(" ]\n");

		printf("������ �¼���>> ");
		int booking;
		scanf("%d", &booking);

		if (booking > available) {
			printf("���� �¼����� %d�̹Ƿ� %d�¼��� ������ �� �����ϴ�.\n", available, booking);
			continue;
		}

		// ����
		int booked = 0;
		for (i = 0; i < SEATS && booked < booking; i++) {
			if (seats[i] == 0) {
				seats[i] = 1;
				printf("%d ", i + 1);
				booked++;
			}
		}
		printf("�� �¼��� �����߽��ϴ�.\n");

		if (available == 0) {
			printf("��� �¼��� �����Ǿ����ϴ�.\n");
			break;
		}
	}
	return 0;
}