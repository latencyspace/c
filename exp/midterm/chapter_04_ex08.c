#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int playtime;
	int h, m, s;

	printf("��� �ð�(��)? ");
	scanf("%d", &playtime);

	h = playtime / (60 * 60);
	m = (playtime % (60 * 60)) / 60;
	s = (playtime % (60 * 60)) % 60;

	printf("��� �ð��� %d�ð� %d�� %d���Դϴ�.", h, m, s);

	return 0;
}