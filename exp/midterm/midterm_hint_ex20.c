#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int choice, n, i, sum = 0, stop = 1;
	char *s = "";

	while (stop) {
		printf("\n1. 1 ���� N ������ �� \n");
		printf("2. 1 ���� N ���� Ȧ���� �� \n");
		printf("3. 1 ���� N ���� ¦���� �� \n");
		printf("4. ���α׷� ���� \n");
		printf("Select ? (1~4) ");
		scanf("%d", &choice);

		if (choice == 4) {
			break;
		}

		if (choice < 1 || choice > 4) {
			continue;
		}

		printf("N �� �Է� ? ");
		scanf("%d", &n);

		switch (choice) {
		case 1:
			s = " ";
			for (i = 1; i <= n; i++) {
				sum += i;
			}
			break;
		case 2:
			s = "Ȧ��";
			for (i = 1; i <= n; i++) {
				if (i % 2 != 0) {
					sum += i;
				}
			}
			break;
		case 3:
			s = "¦��";
			for (i = 1; i <= n; i++) {
				if (i % 2 == 0) {
					sum += i;
				}
			}
			break;
		}
		printf("\n1 ���� %d ���� %s ��: %d \n", n, s, sum);

		sum = 0; // �հ� �ʱ�ȭ
	}
	printf("End. \n");

	return 0;
}