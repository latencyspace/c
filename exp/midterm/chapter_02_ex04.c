/* 시, 분, 초를 2자리 정수로 출력하려면 서식 지정자로 %2d를 사용한다.
이때 문자폭의 빈칸을 0으로 채우려면 %02d 처럼 문자 폭 앞에 0을 지정한다. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int hour, min, sec;

	printf("시? ");
	scanf("%d", &hour);
	printf("분? ");
	scanf("%d", &min);
	printf("초? ");
	scanf("%d", &sec);

	printf("입력한 시간은 %02d:%02d:%02d입니다.", hour, min, sec);
}