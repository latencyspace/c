#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int playtime;
	int h, m, s;

	printf("재생 시간(초)? ");
	scanf("%d", &playtime);

	h = playtime / (60 * 60);
	m = (playtime % (60 * 60)) / 60;
	s = (playtime % (60 * 60)) % 60;

	printf("재생 시간은 %d시간 %d분 %d초입니다.", h, m, s);

	return 0;
}